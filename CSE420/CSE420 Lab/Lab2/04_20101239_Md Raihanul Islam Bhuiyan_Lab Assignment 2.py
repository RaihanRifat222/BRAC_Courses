#Name: Md Raihanul Islam Bhuiyan
#ID: 20101239
#Lab Section: 04

def email_check(s):
    state=0
    for i in range(len(s)):
        if state==0 and ((s[i]>='0' and s[i]<='9') or s[i]=='.'):
            state='t'
            break

        elif state==0 and ((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9') or s[i]=='.'):
            state=1

        elif state == 1 and s[i]=='@':
            state=2

        elif i==len(s)-1 and (s[i]<'a' or s[i]>'z') and  (s[i]<'A' or s[i]>'Z'):
            state='t'
            break

        elif (state==2 or state==3) and ((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or s[i]=='.'):

            state=3
        elif state==3 and s[i]>='0' and s[i]<='9':
            state='t'
            break



    if state=='t':
        return False
    elif state==3:
        return True

def web_check(s):
    state=0
    for i in range( len(s)):
        if state==0 and s[i]=='w':
            state+=1
        elif state==1 and s[i]=='w':
            state+=1
        elif state==2 and s[i]=='w':
            state+=1
        elif state==3 and s[i]=='.':
            state+=1
        elif state ==4 and ((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9')):
            pass
        elif state==4 and s[i]=='.':
            state+=1
        elif state==5 and s[i]=='c':
            state+=1
        elif state==6 and s[i]=='o':
            state+=1
        elif state==7 and s[i]=='m':
            state+=1

    if state==8:
        return True


a=input('Please enter an integer: ')
a=int(a)
email=0
web=0
count=0
for i in range (a):
    count+=1
    s=input('Please enter a string')
    a=email_check(s)

    if a==True:
        print('Email, '+ str(count))

    elif a!=True:
        b=web_check(s)
        if b==True:
            print('Web, '+ str(count))
        else:
            print('Inavlid, '+ str(count))



