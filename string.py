#Qn: binary string sort
#Test case For input 100011 - output 111000

string = input()
l=[]
for w in string:
    l.append(int(w))
l.sort(reverse=True)
print(l)