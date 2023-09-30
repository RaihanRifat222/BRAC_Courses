import re
n=int(input('Enter the number of expressions.'))
exp=[]
s=[]
for i in range(0,n):
    e=input('Enter expression.')
    exp.append(e)

n=int(input('Enter the number of strings.'))

for i in range(0,n):
    s.append(input('Enter string values.'))

for st in s:

    for e in range (0,len(exp)):

        matched=re.compile(exp[e])

        if matched.match(st):

            print('Yes, '+ str(e+1))
            break
        elif  e==len(exp)-1:
            print('No, 0')