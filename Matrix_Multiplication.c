#include<stdio.h>
#include<stdlib.h>
int main(){
    //matrix-1
    int row1,col1;
    printf("enter row and column for matrix-1: ");
    scanf("%d %d",&row1,&col1);
    int mat1[row1][col1];
    int row2,col2;

    //matrix-2
    printf("enter row and column for matrix-2: ");
    scanf("%d %d",&row2,&col2);
    int mat2[row2][col2];

    if(col1!=row2){
        printf("Matrix multiplication is not possible....");
        return 0;
    }

    printf("enter the elements of matrix-1: ");
    int i,j,k;
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("enter the elements of matrix-2: ");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }


    //matrix multiplication algorithm
    int c[row1][col2];
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            c[i][j]=0;
            for(k=0;k<row2;k++){
                c[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}