

// class Solution {
// public:
//     Node* copyRandomList(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     unordered_map<Node*,Node*>mp;
//     Node*newHead=new Node(head->val);
//     Node*oldTemp=head->next;
//     Node*newTemp=newHead;

//     mp[head]=newHead;                //add the head and newHead pointers to the hashmap
    
//     while(oldTemp!=NULL){
//         Node*copyNode=new Node(oldTemp->val);
//         mp[oldTemp]=copyNode;         //inserting the node pointer of the oldList and the newList
//         newTemp->next=copyNode;
//         oldTemp=oldTemp->next;
//         newTemp=newTemp->next;
//     }

//     newTemp=newHead;
//     oldTemp=head;
//     while(oldTemp!=NULL){
//         newTemp->random=mp[oldTemp->random];           // imp way to update
//         newTemp=newTemp->next;
//         oldTemp=oldTemp->next;
//     }
//     return newHead;
//     }
// };
