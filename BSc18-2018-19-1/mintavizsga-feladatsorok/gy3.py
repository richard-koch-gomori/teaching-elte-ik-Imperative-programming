

def strany(str, sample):
    i = 0
    j = 0
    size_str = len(str)
    size_sample = len(sample)
    while i < size_str:
        while j < size_sample:
            if str[i] == sample[j]:
                return i
            j += 1
        i += 1
        j = 0
    return -1


print "result: ", strany("This is my first string", "first")