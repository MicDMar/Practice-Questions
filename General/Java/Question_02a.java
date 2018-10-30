//Find pairs in an integer array whose sum is equal to 10

/*This solution uses nested for loops which can be costly.
  Is there a better solution to this? */

import java.util.*
import java.io.*
import java.awt.Point

public Arraylist<Point> Tens(int[] a){
  Arraylist<Point> answers = new Arraylist<Point>();
  for(int x = 0; x < (a.length - 1); x++){
    for(int y = 0; y <(a.length; y++){
        if(a[x] + a[y] == 10){
          answers.add(Point(a[x], a[y]));
        }
    }
  }
  return answers;
}

//Test
public static void main(String[] args){
  
  int[] lst = [1,2,3,3,4,5];
  Arraylist<Points> test = Tens(lst);
  
  for (Point p : test){
    System.out.println(p.x + " + " + p.y);
  }
} 
