

a=int(input())
d=int(input())
n=int(input())
s=0	
p=""
for x in range(n):
    if(x==0):
       s=s+a
    else:
        s=s+d
    p=p+str(s)
    if(x!=n-1):
        p=p+','
print(p)
