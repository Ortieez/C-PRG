
n = int(input())
for i in range(n):
    word = input()
    wlen = int(len(word))
    if wlen > 10:
        print(word[0] + str(wlen - 2) + word[int((wlen - 1))])
    else:
        print(word)
