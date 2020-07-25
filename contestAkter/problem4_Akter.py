print("Contestant: Fatema Akter")

a = int(input(" Enter an integer number: "))

count = 0
while(a>0):
    dig=a%10
    count= count+dig
    a=a//10
print("The total sum of digits is:",count)
