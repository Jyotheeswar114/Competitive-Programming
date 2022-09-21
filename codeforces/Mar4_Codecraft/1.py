
for _ in range(int(input())):
	n=int(input())
	m=int(input())
	l=list(map(int,input().split()))
	temp=sum(l[1:])-l[0]
	if(temp<=m):
		print(temp)
	else:
		print(m)
