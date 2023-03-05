from math import inf

count = input("How many numbers do you want to enter?")
count = int(count)
numList = []
sortedList = []

for place in range(count):
	number = input("Enter number " + str(place+1) + ": ")
	numList.append(int(number))

def selectionSort():
	for count in range(len(numList)):
		#find min
		minNum = inf
		minNumPlace = -1
		for place in range(len(numList)):
			if numList[place] < minNum:
				minNum = numList[place]
				minNumPlace = place
		# move min
		sortedList.append(minNum)
		del numList[minNumPlace]

selectionSort()
print(sortedList)

# print("Mode " + str(mode))
# print("Median " + str(median))
