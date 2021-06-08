a=int(input())
l=list()
for i in range(a):
    l.append(int(input()))
ll=list()
for j in range(a):
    if(l[j]%2==0):
         ll.append(l[j])
print(ll)
        
