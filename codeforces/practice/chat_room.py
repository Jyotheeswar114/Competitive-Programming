s=input()
h=s.find('h')
if(h==-1):
    print("NO")
else:
    e=s.find('e',h+1,)
    if(e==-1):
        print("NO")
    else:
        l1=s.find('l',e+1,)
        if(l1==-1):
            print("NO")
        else:
            l2=s.find('l',l1+1,)
            if(l2==-1):
                print("NO")
            else:
                o=s.find('o',l2+1,)
                if(o==-1):
                    print("NO")
                else:
                    print("YES")

