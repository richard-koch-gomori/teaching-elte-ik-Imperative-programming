

def binsearch(item, orderedlist):
    low = 0
    high = len(orderedlist) - 1
    while low <= high:
        middle = (low + high) / 2
        if item < orderedlist[middle]:
            high = middle - 1
        elif item > orderedlist[middle]:
            low = middle + 1
        else:
            return middle
    return -1


mylist = [-2, 0, 5, 7, 11, 15, 23]
print "result: ", binsearch(15, mylist)
print "result: ", binsearch(16, mylist)