def linearsearch(A,val):
    pos=-1
    for i in range(len(A)):
        if A[i]==val:
           pos=i
           return pos
    return pos
x=int(input())
list=[]
for i in range(x):
    a=int(input())
    list.append(a)
val=int(input())
print("Original List: ",list)
a=linearsearch(list,val)
if a==-1:
    print("Value not Found")
else:
    print("Value Found at Index ",a+1)   
   
    # For computer indexing system print("Value Found at Index ",a)