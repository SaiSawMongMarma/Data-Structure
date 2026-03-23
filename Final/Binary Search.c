#include<stdio.h>
int main()
{
    int Data[50],BEG,END,MID,LB=0,UB,n,i,j,Item,LOC;
    printf("Enter the array length:\n ");
    scanf("%d",&n);
    printf("Enter the array elements:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Data[i]);
    }
    printf("Enter an item to search:\n");
    scanf("%d",&Item);
    BEG=LB;
    END=n-1;
    MID=(BEG+END)/2;
    while(BEG<=END && Data[MID]!=Item)
    {
        if(Item<Data[MID])
        END=MID-1;
        else
       {
            BEG=MID+1;
       }
       MID=(BEG+END)/2;
    }

        if(Item==Data[MID])
        {
            LOC=MID;
            printf("%d found at location %d.\n",Item,LOC);

        }
        else
        {
             printf("Not found! %d isn't present in the list.\n", Item);
        }

    }





