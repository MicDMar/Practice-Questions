#Find pairs in an integer array whose sum is equal to 10.

#This solution uses nested for loops which can be costly.
#Is there a better solution to this?

def Tens(lst):
  answers = []
  for x in range(0, (len(lst)-1)):
    for y in range((x+1), len(lst)):
      if (lst[x] + lst[y] == 10):
        answers.append((lst[x],lst[y]))
  return answers

#Test
def main():
  test = Tens([1,2,6,8,9,4,10,0,11,-1])
  for i in range(0,len(test)):
    print(test[i])

if __name__ == '__main__':
  main()

          
