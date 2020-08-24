# cook your dish here
cases = int(input())
for i in range(cases):
    n=int(input())
    fact = 1
    z=0
    for j in range(1,n+1):
        fact = (fact*j)
    ten=10
    for i in range(len(str(fact))):
        if fact%ten == 0:
            z+=1
            ten*=10
    print(z)
