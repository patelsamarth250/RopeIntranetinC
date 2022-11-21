#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int n, wires;
    printf("Enter no. of cases: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int count=0;
        printf("\nEnter no of wires for Case#%d: ",i+1);
        scanf("%d",&wires);

        int A[wires], B[wires]; 
        float angle[wires];
        
        printf("\nEnter the window positions: \n");
        for(int j=0; j<wires; j++)
        {
            scanf("%d%d",&A[j],&B[j]);
        }

        for(int a=0; a<wires; a++) //to find and store angles of each wires in angle array
        {
            angle[a]=B[a]/A[a];
            //printf("Angle %d is %f between windows %d and %d.\n",a,angle[a],A[a],B[a]);
        }    

        for(int p=0; p<wires; p++)
        {
            for(int q=0; q<wires; q++)
            {
                if(angle[p]>angle[q])
                {
                    if(A[p]<A[q])
                    {
                        if(B[p]>B[q])
                        {
                            count++;
                        }
                    }
                }
            }
        }

        printf("No of intersection in Case#%d: %d\n",i+1,count);
    }
}
