

def strlastsample(str, sample):
    size_str = len(str)
    size_sample = len(sample)
    j = size_sample - 1
    for i in range(size_str - 1, 0, -1):
        if str[i] == sample[j]:
            if j == 0:
                return i
            j -= 1
        else:
            j = size_sample - 1
    return -1


print "result: ", strlastsample("1111 0000 1011 1110 0000 1010 1011 1110", "1011")