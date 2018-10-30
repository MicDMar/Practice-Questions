#Find pairs in an integer array whose sum is equal to 10.

def linearTens(lst):
  #Assume list is not sorted.
  lst.sort()
  answers = []
  x = 0
  y = len(lst)-1
  
  while (x != y):
    if (lst[x] + lst[y] == 10):
      answers.append((lst[x],lst[y]))
      y -= 1
    else:
      if (lst[x] + lst[y] > 10):
        y -= 1
      else:
        x += 1
  return answers

#Test
def main():
  test = linearTens([-2,12,4,3,10,7,9,1])
  for i in range(0, len(test)):
    print(test[i])

if (__name__ == '__main__'):
  main()
