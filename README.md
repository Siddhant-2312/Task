# Task code of alpahbet pattern 
import string

alpha = string.ascii_lowercase

num = int(input())

def srange(N):
    return list(range(N))+list(range(N-2,-1,-1))

for i in srange(num):
    print('-'.join([alpha[num-j-1] for j in srange(i+1)]).center(4*(num-1)+1,'-'))
    
    
#task code of fibonacci number
 
MAX = 1000

 fibonacci code:
f = [0] * MAX

def fib(n) : 
	# Base cases 
	if (n == 0) : 
		return 0
	if (n == 1 or n == 2) : 
		f[n] = 1
		return (f[n]) 

	if (f[n]) : 
		return f[n] 

	if( n & 1) : 
		k = (n + 1) // 2
	else : 
		k = n // 2 
	if((n & 1) ) : 
		f[n] = (fib(k) * fib(k) + fib(k-1) * fib(k-1)) 
	else : 
		f[n] = (2*fib(k-1) + fib(k))*fib(k) 

	return f[n] 
 
n = int(input())
print(fib(n)) 



#task number pattern
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
    
