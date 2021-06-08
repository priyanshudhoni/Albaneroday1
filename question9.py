
a=int(input())
l=list()
for a1 in range(a):
    l.append(int(input()))
f=0
r=0	
p=0
for aa in range(a):
    if(f==0 and aa!=a-1):
        if(l[aa]<l[aa+1]):
            r=l[aa]
            f=1 
    elif(aa==a-1 or l[aa]>l[aa+1]):
        f=0
        p=p+l[aa]-r
print(p)
