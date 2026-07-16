/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
    }
    int rd[]={-1,-1,-1,0,0,1,1,1};
    int cd[]={-1,0,1,-1,1,-1,0,1};
    for (int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            int sum=0;
            for(int i=0;i<8;i++){
                int ar=row+rd[i],ac=col+cd[i];
                if(ar>=0&&ar<r&&ac>=0&&ac<c){
                    sum+=arr[i][j];
                }
            }
            printf("%d",sum);
        }
    }
    }
    
    }
    return 0;
}