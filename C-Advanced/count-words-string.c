#include<stdio.h>
#include<string.h>
int main()
{
        int count=0,i;
        char s[100];
        printf("Enter the string to count the number of words : \n");
        scanf("%[^\n]%*c",s);
        
        for(i=0;i<=strlen(s);i++)
        {
                if(s[i]==32)
                count++;
        }
        printf("Entered string has %d words\n",count+1);
}
