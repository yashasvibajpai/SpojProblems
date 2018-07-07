t=int(input())
while t:
    n1,n2=input().split(" ")
    n1=int(n1[::-1])
    n2=int(n2[::-1])
    sm=str(n1+n2)
    smr=sm[::-1]
    l=len(smr)
    for i in range(l):
        if(smr[i]!=0):
            break
    print(int(smr[i:]))     # int automatically strips zeroes
    t=t-1
