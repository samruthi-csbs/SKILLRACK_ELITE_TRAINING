/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,fmax,smax=-1,curr;
    scanf("%d %d",&N,&fmax);
    for(int ctr=2;ctr<=N;ctr++){
        scanf("%d",&curr);
        if(curr>fmax){
            smax=fmax;
            fmax=curr;
        }else if(curr>smax){
            smax=curr;
        }
    }
    printf("%d %d",fmax,smax);
    return 0;
}