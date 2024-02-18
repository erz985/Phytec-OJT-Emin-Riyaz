#include<stdio.h>
int main()
{
        int n,one_hun,tou,hunds;
        printf("Enter the amount you want to withdraw : \n");
        scanf("%d",&n);
        printf("\nDenominations available : \n");
        printf("\n1000,  500,  100 \n");
        hunds=n%1000;         
        tou=n/1000;
        if(n>160000)
        printf("\nInsufficient Funds\n");
        else
        {
                if(hunds!=0)
                {
                        one_hun=hunds-500;
                        one_hun/=100;
                        printf("\nNotes to dispense: \n");
                        printf("\n%d x 1000 notes\n",tou);
                        printf("\n1 x 500 notes \n");
                        printf("\n%d x 100 notes \n",one_hun);
                        
                }       
                else
                {
                        one_hun/=100;
                        printf("\nNotes to dispense: \n");
                        printf("\n%d x 1000 notes\n",tou);
                        printf("\n0 x 500 notes \n");
                        printf("\n%d x 100 notes \n",one_hun);
                }
        }
        return 0;                
}
