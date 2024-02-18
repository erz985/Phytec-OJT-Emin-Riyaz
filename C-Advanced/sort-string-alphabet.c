#include<stdio.h>
#include<string.h>
int main()
{
        char s[100],temp;
        int i,j;
        printf("Enter a string to rewrite it in alphabetical order : \n");
        scanf("%[^\n]%*c",s);
        
        for(i=0;i<(strlen(s)-1);i++)
        {
                for(j=i+1;j<strlen(s);j++)
                {
                        if(s[i]>s[j])
                        {
                                temp=s[i];
                                s[i]=s[j];
                                s[j]=temp;
                        }
                }
        }
        printf("Sorted string is %s\n",s);
        return 0;
}
