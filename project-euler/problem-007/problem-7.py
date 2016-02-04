# generate the 10001st prime using the sieve of erathonese
n = 1000000
cnt = 0
v = [True for x in range(0, n)]
v[0] = False
v[1] = False
for i in range(2, n):
    if(v[i]):
        cnt += 1
        for j in range(i*i, n, i):
           v[j] = False
        if(cnt == 10001):
            print(i)
            break
    
