//Find the most frequent integer in an array.

/*This solution uses nested for loops which can be costly.
  Is there a better solution to this? */

import java.util.*
import java.io.*

public int getFrequentInt(int[] a){
  int count = 1;
  int tempCount;
  int popular = a[0];
  int temp = 0;
  
  for (int x = 0; x < (a.length - 1); x++){
    temp = a[x];
    tempCount = 0;
    
    for (int y = 1; y < a.length; y++){
      if (a[y] == temp){
        tempCount++;
      }
    }

    if (tempCount > count){
      count = tempCount;
      popular = temp;
    }
  }

  return popular
}

//Test
public static void main(String[] args){
  int[] lst = [1,2,3,3,4,5];
  System.out.println(getFrequentInt(lst));
}
