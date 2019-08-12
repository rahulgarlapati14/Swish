a=input().split()
x=int(a[0])
p=int(a[1])
total=0
b=x
if(b<=1):
    total=1
else:
    while(b>=1):
        total+=b
        x=int(x-((x*p)/100))
        b=x


print(total)
print("\n")
