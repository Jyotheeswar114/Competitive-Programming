def binarySearch (arr, l, r, x): 
  
    # Check base case 
    if r >= l: 
  
        mid = l + (r - l) // 2
  
        # If element is present at the middle itself 
        if arr[mid] == x: 
            return mid 
          
        # If element is smaller than mid, then it  
        # can only be present in left subarray 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
  
        # Else the element can only be present  
        # in right subarray 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
  
    else: 
        # Element is not present in the array 
        return -1
for _ in range(int(input())):
    a=list(map(int,input().split()))
    l=list(map(int,input().split()))
    l.sort()
    left=a[1]
    right=a[1]
    while(left>0 and right<a[0]+1):
        c1=binarySearch(l,0,a[2]-1,left)
        c2=binarySearch(l,0,a[2]-1,right)
        ans=-1
       # print(left,right,c1,c2)
        if(c1!=-1 and c2!=-1):
            left-=1
            right+=1
        elif(c1==-1 and c2==-1):
            ans=left;
            break;
        elif(c1!=-1):
            ans=right
            break
        elif(c2!=-1):
            ans=left
            break
    if(ans==-1 and right==a[0]+1):
        while(left>0):
            binarySearch=fun(l,0,a[2]-1,left)
            if(c1!=-1):
                left-=1
            else:
                ans=left
                break
    if(ans==-1 and left==0):
        while(right<a[0]+1):
            c2=binarySearch(l,0,a[2]-1,right)
            if(c2!=-1):
                right+=1
            else:
                ans=right
                break
    print(ans-a[1]);
        
