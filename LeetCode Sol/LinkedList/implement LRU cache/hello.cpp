// class LRUCache {
// public:
//     class Node {
//     public:
//         int key, val;
//         Node* prev;
//         Node* next;

//         Node(int k, int v) {
//             key = k;
//             val = v;
//             prev = next = nullptr;
//         }
//     };

//     int cap;
//     unordered_map<int, Node*> mp;
//     Node* head;
//     Node* tail;

//     LRUCache(int capacity) {
//         limit = capacity;

//         head = new Node(-1, -1);
//         tail = new Node(-1, -1);

//         head->next = tail;
//         tail->prev = head;
//     }

//     void deleteNode(Node* node) {
//         Node* prevNode = node->prev;
//         Node* nextNode = node->next;

//         prevNode->next = nextNode;
//         nextNode->prev = prevNode;
//     }

//     void insertAfterHead(Node* node) {
//         node->next = head->next;
//         node->prev = head;

//         head->next->prev = node;
//         head->next = node;
//     }

//     int get(int key) {
//         if (mp.find(key) == mp.end())
//             return -1;

//         Node* node = mp[key];

//         deleteNode(node);
//         insertAfterHead(node);

//         return node->val;
//     }

//     void put(int key, int value) {
//         if (mp.find(key) != mp.end()) {
//             Node* node = mp[key];
//             node->val = value;

//             deleteNode(node);
//             insertAfterHead(node);
//             return;
//         }

//         if (mp.size() == limit) {
//             Node* lru = tail->prev;

//             deleteNode(lru);
//             mp.erase(lru->key);
//             delete lru;
//         }

//         Node* newNode = new Node(key, value);
//         insertAfterHead(newNode);
//         mp[key] = newNode;
//     }
// };