// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

int peakElement(int nums[], int n)
{
   // Your code here
        if(n==1) return 0;
        int l=0;
        int h=n-1;
        int mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if(mid>0 && mid<n-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return  mid;
                }
                else if(nums[mid]< nums[mid-1]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid==0){
                if(nums[0]>nums[1])return mid;
                else return 1;
            }
            else if(mid==n-1){
                if(nums[n-1]>nums[n-2])return n-1;
                else return n-2;
            }
        }
        return 0;
}

// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
    		if(n==1 && A==0)
    		    f=1;
    		else if(A==0 && a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 && a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		printf("%d\n", f);
		}
		
	}

	return 0;
}  // } Driver Code Ends