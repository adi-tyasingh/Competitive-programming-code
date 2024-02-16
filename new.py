t = int(input())
while(t>0):
    ma = -1
    ans = -1
    st = input()
    for i in range(10):
        count= st.count(str(i))
        if(count>ma):
            ans=i
            ma=count
    print(ans)
    t=t-1   