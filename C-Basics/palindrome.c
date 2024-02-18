#include<stdio.h>
int main()
{
        int rem,rev,n,n1;
        printf("Enter the number to check : \n");
        scanf("%d",&n);
        n1=n;
        while(n!=0)
        {
                rem=n%10;
                rev=rev*10 + rem;
                n/=10;
        }
        
        if(rev==n1)
        printf("Palindrome\n");
        else
        printf("Not\n");
        
        return 0;
}

/*#include<stdio.h>
int main()
{
	int n=0,rem=0,rev=0;
	printf("Enter number to check for palindrome :\n");
	scanf("%d",&n);
	int temp=n; 
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}	
	printf("The reversed number is %d\n",rev);
	if (temp==rev)
	{
		printf("The given number is a palindrome\n");
	}	
	else
	{
		printf("The given number is not a palindrome\n");
	}		
	return 0;
}
*/		
