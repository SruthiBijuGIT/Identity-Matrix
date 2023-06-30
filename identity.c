#include<stdio.h>
int main()
{
    int m,n;
   
    printf("Enter the row size Of the matrix:");
    scanf("%d",&m);
    printf("Enter the columns size Of the matrix:");
    scanf("%d",&n);

    int matrix[m][n];


    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
int point=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           
        if(i==j && matrix[i][j]!=1)
        {
            point=1;
            break;
        }
     
        else if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        printf("Given Matrix is not an identity matrix.");
    else
        printf("Given Matrix is an identity matrix.");
        return 0;
}
