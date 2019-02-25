#Qn: binary string sort
#Test case For input 100011 - output 111000

a = input()
ip =str(a)
zero=0
one=0
for w in ip:
    if int(w) == 0:
        zero = zero + 1
    if int(w) == 1:
        one = one + 1

for i in range(one):
    print('1',end='')

for i in range(zero):
    print('0',end='')

    