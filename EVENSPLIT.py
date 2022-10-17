# cook your dish here
T=int(input())
for i in range(T):
    n=int(input())
    s=input()
    c0=0
    c1=0
    if (s=="10"):
        print(s)
    else:
        for k in s:
            if (k=='0'):
                c0+=1
            else:
                c1+=1
        print('0'*c0+'1'*c1)
        