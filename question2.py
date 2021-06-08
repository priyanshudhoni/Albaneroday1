a=input()
from queue import LifoQueue
s=LifoQueue()
max11=0
for b in a:
    if(b=='('):
        s.put(b)
        max11=max(max11,s.qsize())
    elif(b==')'):	
        s.get()	
print(max11)
