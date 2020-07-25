print("Contestant : Fatema Akter")
n = int(input('enter number of cents: '))
q_reminder = n%25
q = int((n-q_reminder)/25)
print("Quaters = ", q)

d_reminder = q_reminder%10
d =int((q_reminder - d_reminder)/10)
print(" Dimes = ", d)


nic_reminder = d_reminder%5
nic = int((d_reminder - nic_reminder)/5)
print("nickels = ", nic)

print("pennies")
