//Find the most frequent integer in an array.

/*This solution uses nested for loops which can be costly.
  Is there a better solution to this? */

#include<iostream>
#include<array>
#include<bits/stdc++.h>

using namespace std;
/*
int most_frequent(int *frequency){
  int temp, tempCount;
  int count = 0;
  int popular = frequency[0];
  
  for(int x = 0; x < (sizeof(frequency)-1); x++){
    temp = frequency[x];
    tempCount = 0;
    
    for(int y = 1; y < (sizeof(frequency)); y++){
      if(frequency[y] == temp){
        tempCount++;
      }
    }
    
    if(tempCount > count){
      count = tempCount;
      popular = temp;
    }
  }

  return temp;
}
*/

int most_frequent(int *a, int size){
 
  if (size == 0){
    return -1;
  }

  //Assuming the Array is sorted

  int tempCount = 1;
  int curr = 1;
  int count = 0;
  int prev = 0;
  int popular = a[0];
  
  while (curr <= size){

    if (curr == size){ 
      if (a[prev] == a[curr]){
        tempCount++;
        if(tempCount > count){
          count = tempCount;
        }
      }
    }

    if(a[prev] == a[curr]){
      tempCount++;
    }

    if(a[prev] != a[curr]){
      tempCount++;
      if(tempCount > count){
        count = tempCount;
        tempCount = 1;
        popular = a[prev];
      } else {
        tempCount = 1;
      }
    }
    prev++;
    curr++;
  }
  return popular;
}

//Test
int main(){
  int frequency[20] = {0,1,1,1,1,2,3,4,5,5,5,5,5,5,5,5,7,8,8,9};
  cout<<most_frequent(frequency, 20)<<endl;
  return 0;
}
