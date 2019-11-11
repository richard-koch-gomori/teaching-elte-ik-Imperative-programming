

def unpack_short(source):
    i = 0
    size = len(source)
    tmp = list()
    while i < size:
        if source[i] == "[":
            for ch in xrange(ord(source[i + 1]), ord(source[i + 3]) + 1):
                tmp.append(chr(ch))
                ch += 1
            i += 4
        else:
            tmp.append(source[i])
        i += 1
    return "".join(tmp)


print "result: ", unpack_short("This is [f-o] to demo [a-z] my [a-b] [b-b] program [b-d]")


