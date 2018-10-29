#Find the most frequent integer in an array.

def most_frequent(lst):
  return max(set(lst), key=lst.count)

#Test
def main():
  print(most_frequent([1,2,3,3,4,5,6,6,6,7]))

if __name__ == '__main__':
	main()
