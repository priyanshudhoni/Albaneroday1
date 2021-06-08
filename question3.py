from array import*
a=int(input())
s=array('i',[])
maz,q=0,0
for q in range(a):
    s.append(int(input()))
    maz=maz+s[q]
    q=q+1 	
if maz %2==0:
    print("even",maz)
else:
    print("odd",maz)
    
