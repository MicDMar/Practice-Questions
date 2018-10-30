//Find pairs in an integer array whose sum is equal to ten

/*This solution uses nested for loops which can be costly.
  Is there a better solution to this? */

#include<iostream>
#include<array>
#include<tuple>
#include<vector>

using namespace std;

vector<tuple <int, int> > tens(int *lst){

  vector<tuple <int, int> > answers;

  for(int x = 0; x < (sizeof(lst)-1); x++){
    for(int y = x+1; y < sizeof(lst); y++){
      if((lst[x] + lst[y]) == 10){
        answers.push_back(make_tuple(lst[x], lst[y]));
      }
    }
  }
  return answers;
}

//Test
int main(){
  
  int lst[12] = {2,3,4,7,8,9,1,10,12,18};
  vector<tuple <int, int> > test = tens(lst);
  
  for(auto i = test.begin(); i != test.end(); i++){
    cout << get<0>(*i) << "+" << get<1>(*i) << endl;
  }

  return 0;
}
