#include<stdio.h>
int main(){
    int s,p,y,j,a;
    while(scanf("%d%d%d%d",&s,&p,&y,&j)!=EOF){
        int ages,agep,agey,d=12;
        agey = ((d+j)-(p+y))/3;
        a = (d+j)-(p+y)-3*agey;
        if(a==0){
            printf("%d %d %d\n",agey+y,agey+p,agey);
        }
        if(a==1){
            if(s+p !=y){
                printf("%d %d %d\n",agey+y,agey+p+1,agey);
            }else{
                printf("%d %d %d\n",agey+y+1,agey+p,agey);
            }
        }
        if(a==2){
            printf("%d %d %d\n",agey+y+1,agey+p+1,agey);
        }
    }
    return  0;
}
