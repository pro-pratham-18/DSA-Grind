
//type 1 
// to calculate the inversion count only (standard method) 

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums,int s , int mid,int e,int& count){
    vector<int>temp;
    int i=s;
    int j=mid+1;
    while(i<=mid && j<=e){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
            count+=mid-i+1;
        }
    }

    while(i<=mid){
        temp.push_back(nums[i]); 
        i++;
    }
    while(j<=e){
        temp.push_back(nums[j]);
        j++;
    }
    
    for(int idx=0;idx<temp.size();idx++){
        nums[s+idx]=temp[idx];
    }
}

void mergeSort(vector<int>& nums,int s,int e, int& count){
    if(s<e){
        int mid=s+(e-s)/2;
        mergeSort(nums,s,mid,count);
        mergeSort(nums,mid+1,e,count);
        merge(nums,s,mid,e,count);
    }
}

int main(){
    vector<int>nums={3,5,6,2,1,4};
    int n=nums.size();
    int count =0;
    mergeSort(nums,0,n-1,count);
    cout<<count;  // count can be returned as well
    return 0;
}




//type 2
//program to store all inversion count pairs ,(we can store the indexes as well)


// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>& nums,int s , int mid,int e,vector<pair<int,int>>& ans){
//     vector<int>temp;
//     int i=s;
//     int j=mid+1;
//     while(i<=mid && j<=e){
//         if(nums[i]<=nums[j]){
//             temp.push_back(nums[i]);
//             i++;
//         }
//         else{
//             temp.push_back(nums[j]);
//             for(int k=i;k<=mid;k++){
//                 ans.push_back({nums[k],nums[j]});
//             }
//             j++;
//         }
//     }

//     while(i<=mid){
//         temp.push_back(nums[i]); 
//         i++;
//     }
//     while(j<=e){
//         temp.push_back(nums[j]);
//         j++;
//     }

//     for(int idx=0;idx<temp.size();idx++){
//         nums[s+idx]=temp[idx];
//     }
// }

// void mergeSort(vector<int>& nums,int s,int e,vector<pair<int,int>>& ans){
//     if(s<e){
//         int mid=s+(e-s)/2;
//         mergeSort(nums,s,mid,ans);
//         mergeSort(nums,mid+1,e,ans);
//         merge(nums,s,mid,e,ans);
//     }
// }

// int main(){
//     vector<int>nums={3,5,6,2,1,4};
//     int n=nums.size();
//     vector<pair<int,int>>ans;
//     mergeSort(nums,0,n-1,ans);
//     for(auto p:ans){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

// ans.size() will give you all invCount


