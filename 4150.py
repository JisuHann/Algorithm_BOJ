fibo = [1,1]
N = int(input())
i=2
while i<N:
    fibo[0], fibo[1] = fibo[1],fibo[0]
    fibo[1] += fibo[0]
    i+=1
print(fibo[1])
