#Qn: You will be given a word and u have to find the count of each individual letters
#Testcase : Malayalam

word = input()
dict={}
for l in word:
    dict[l]=0

for l in word:
    dict[l]=dict[l]+1
print(dict)