#Program for  insertion sort

l=[42,29,74,11,65,58]
print("Unsorted List : ",l)

for i in range(1,len(l)):
    temp=l[i]
    j=i

    while j>=1  and l[j-1]>temp:
        l[j]=l[j-1]    #for right shifting
        j=j-1

    #insertion of the element at the right position
    l[j]=temp
    print("List in current pass : ",l)

print("Sorted List : ",l)
