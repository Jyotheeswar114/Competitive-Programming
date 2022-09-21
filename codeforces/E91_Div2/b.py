for _ in range(int(input())):
    st = input()
    p = st.count("P")
    s = st.count("S")
    r = st.count("R")
    if(p == max(p,s,r)):
        print(len(st)*"S")
    elif(s == max(p,s,r)):
        print("R"*len(st))
    else:
        print("P"*len(st))
