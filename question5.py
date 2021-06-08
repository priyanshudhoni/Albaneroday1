a=int(input())
from array import*
s=array('i',[])
l,p=0,0	
q=0
q1=0
for q in range(a):
    s.append(int(input()))
    
for r in s:
    if(r%2==0):
        l+=1 
        q=r  
    else:
        p+=1 
        q1=r  
if(l==1):
    print(q)
else:
    print(q1)
