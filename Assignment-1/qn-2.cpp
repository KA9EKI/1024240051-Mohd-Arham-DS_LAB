#include <iostream>
#include <set>
using namespace std;

// void unique_element(int arr[],int n){
//   int i,j;
//   for (i =0;i<n;i++){
//     for(j=i+1;j<n;j++){
//       if(arr[i]==arr[j]){
//         for(int k=j;k<n;k++){
//           arr[k]=arr[k+1];
//         }
//         n--;
//         j--;
//       }
//     }
//   }
  
//   for(i=0;i<n;i++){
//     cout<<arr[i] << " ";
//   }
  
// }

void u_Element(int arr[],int n){
  set<int> uEle;
  for(int i = 0;i<n;i++){
    uEle.insert(arr[i]);
  }

  for(int val:uEle){
    cout<<val<<" ";
  }
}

int main(){
  
  int arr[]= {1,2,4,5,2,4,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  // unique_element(arr,n);
  u_Element(arr,n);
  
  

  return 0;
}

