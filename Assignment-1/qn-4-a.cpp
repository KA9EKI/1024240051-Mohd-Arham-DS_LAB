#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
  int i = 0,j=n-1;
  while(i<j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
    // swap(arr[i],arr[j]);
    i++;
    j--;
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={2,3,5,1,6,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  reverseArray(arr,n);



}
