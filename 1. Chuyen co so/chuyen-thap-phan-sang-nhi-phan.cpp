#include<stdio.h>
#include<math.h>
int tinh(int n){
	int i;
	int a=0;
	int b=0;
	for(;n!=0;n/=2){
		i=n%2*pow(10,b);
		b++;
		a+=i;	
	}
	return a;
	
}
int main(){
	int i;
	int n;
	int b=0;
	scanf("%d",&n);
	printf("%d",tinh(n));
	
}
