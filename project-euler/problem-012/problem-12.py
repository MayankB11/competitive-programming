n = 1
N = 0
while True:
    N += n
    D = 1
    #print(n)
    for i in range(1, int(N**0.5)+1):
        if(N % i == 0):
            D+=2
    if(D > 500):
        print(n,N)
        break
    n+=1
