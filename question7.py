a=int(input())
K=int(input())
l=list()
l1=list()
for s in range(a):
    l.append(int(input()))
for s in range(a):
    if(l[s]==0):
        l1.append(s)
	
f,q=0,0
maxx1=0

d=0
s=0
while(s<a):
    if(l[s]==0):
        f=f+1 
        if(f>K):
            
            maxx=q+K
            maxx1=max(maxx,maxx1)
            
            f=K-1
            s=s-1
            
            i=l1[d]
            while(i>=0):
                if(l[i]==1):
                    q-=1
                i=i-1
            
            d=d+1
            
    else:
        q=q+1
    s=s+1
if(len(l1)==0 or len(l1)<K):
    maxx1=a
elif(f<=K):
    maxx1=max(maxx1,q+K)
    
print(maxx1)  
