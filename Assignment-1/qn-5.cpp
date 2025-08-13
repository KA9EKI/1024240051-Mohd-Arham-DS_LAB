#include <bits/stdc++.h>
using namespace std;



int main(){
  int A[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };

  for(int i=0;i<3;i++){
    int sum = 0;
    for(int j=0;j<3;j++){
      sum+=A[i][j];
    }
    cout<<i+1<<" row sum ="<<sum<<endl;
  }

  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
      sum+=A[j][i];
    }
    cout<<i+1<<" column sum ="<<sum<<endl;
  }
}

