a=int(input())
k=int(input())
u=0	
s=list()
for b in range(a):
    s.append(int(input()))
	
s.sort()
#print(s)
for b in range(a):
    if(s[b]<0 and u<k):	
        s[b]=s[b]*-1
        u+=1 
p=min(s)
#print(s)
k1=p
while(u<k):
    p=p*-1
    u+=1
l=0
for x in s:
    l=l+x 
print(l-k1+p)
