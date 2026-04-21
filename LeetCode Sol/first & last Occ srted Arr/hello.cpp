// class Solution {
// public:
//     int right_Occ(vector <int> v,int x){
//         int index=-1;
//         int n=v.size();
//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(v[mid]==x){
//                 index=mid;
//                 s=mid+1;
//             }
//             else if(v[mid]<x){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         return index;
//     }
// public:
//     int left_Occ(vector <int> v,int x){
//         int index=-1;
//         int n=v.size();
//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(v[mid]==x){
//                 index=mid;
//                 e=mid-1;;
//             }
//             else if(v[mid]<x){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         return index;
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         return {left_Occ(nums,target),right_Occ(nums,target)};
//     }
// };

// use two function to calcuate left and right occurences

// left occ function 
// pehle binary search se normally element search karo , jab element mil jaye toh uska index store krwa lo ek variable me , aur  left me dekho ki element hai ki nahi by doing e=mid-1;
// agar element left hua toh uska index store hojayega aur phir again left me dekhega 
// agar left me aur koi same element nahi mila , toh jo index recent index stored hai woh return ho jayega
// index ki value starting me -1 rakhne se fayda ye hai ki agar ek bhi element nahi mila toh index ki -1 value hi return ho jayegi, kyuki hamara function index return krega(left most present elemnt ka)


//right function , same logic , if found store the index ,and search if right me bhi hai kya by doing s=mid+1; if not found then return the recent index stored value
// similarly set index as -1 initially , agar ek bhi nahi mila toh -1 return hojayega,kyuki hamara function index return krega(right most present element ka)


//for total no. of occurences of an element in sorted  array
// last occcurence - first occurnce +1;

//-----------------------------------------------------------------------------------------------------------------------------------------------

// for ith occurence in sorted array (approch) best optimal , TC-O(logn), space Complexity -O(1)

#include<iostream>
#include<vector>
using namespace std;

int firs_Occ(vector <int>& nums,  int target){
    int index=-1;
    int n=nums.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(nums[mid]==target){
            index=mid;
            e=mid-1;
        }
        else if (nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return index;
}

int last_Occ(vector <int>& nums,  int target){
    int index=-1;
    int n=nums.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid =s+(e-s)/2;
        if(nums[mid]==target){
            index=mid;
            s=mid+1;
        }
        else if (nums[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return index;
}

int ith_occ(vector<int>& nums , int target,int occ){
    int x=firs_Occ(nums,target);
    int y=last_Occ(nums,target);
    if(x==-1){
        return -1;
    }

    int z=x+occ-1;
    if(z<=y){
        return z;
    }
    else{
        return -1;
    }
}
int main(){
    vector <int> v={1,2,3,3,3,3,5,6};
    auto b=ith_occ(v,3,3);
    cout<<b;
    return 0;
}

