#include<stdio.h>
#include<math.h>
int main(){
	//0100- 0*2^0+
	int n;
	scanf("%d",&n);
	int i;
	int a=0;
	int sum=0;
	for(;n!=0;n/=10){
		i=n%10;
		i=i*pow(2,a);
		sum+=i;
		a++;
	}
	printf("%d",sum);
}
