//Find the most frequent integer in an array.

/*This solution uses nested for loops which can be costly.
  Is there a better solution to this? */

#include<iostream>
#include<array>

using namespace std;

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

//Test
int main(){
  int frequency[12] = {1,2,3,4,5,5,5,6,7,8,9,0};
  cout<<most_frequent(frequeny)<<endl;
  return 0;
}
