

#include <stdio.h>

void main() {
    int i,j,sum=0,n,k=0,s=17,q,r,x;
   
    n=10;
    scanf("%d",&x);
     q=2*x;
    if(x==4){
        s=17;
for (i=1;i<=x;i++){
    for (j=1;j<=x;j++){
    if(j>=i){
    sum=sum+n;
    printf("%d",sum);}
    else if(i>j){
    printf("**");}
    else{
     printf(" ");}
    }
    for (r=x+1;r<=q;r++){
       
               if(q==(r)){
                   printf("%d",(s+(r-(x)))-1);
               }
               
               else{
           printf("%d0",(s+(r-(x)))-1);}
       
           
       
    }
k++;
s=s-((q-x)-1);
q=q-1;
   printf("\n");
  }
    }
    else
    {
        s=26;
       for (i=1;i<=x;i++){
    for (j=1;j<=x;j++){
    if(j>=i){
    sum=sum+n;
    printf("%d",sum);}
    else if(i>j){
    printf("**");}
    else{
     printf(" ");}
    }
    for (r=x+1;r<=q;r++){
       
               if(q==(r)){
                   printf("%d",(s+(r-(x)))-1);
               }
               
               else{
           printf("%d0",(s+(r-(x)))-1);}
       
           
       
    }
k++;
s=s-((q-x)-1);
q=q-1;
   printf("\n");
  }
    } 
}
    