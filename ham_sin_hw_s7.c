//------------------OPTIMIZED 2-----------------
#include <stdio.h> 
int main(){
	int   n, i;
	double x, t;
	printf("Enter n and x: ");
	scanf("%d%lf", &n, &x);
	printf("n= %d, x= %lf\n", n, x);
	t= x;
	for (i=n; i>=1; i--) {
		t = x -t*x*x/(2*i+1)/(2*i);
	}
	printf("\nF= %lf", t);
}
//------------------OPTIMIZED 1-----------------
//#include <stdio.h> 
//int main(){
//	int n, i;
//	double x, t, s;
//	printf("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	t= x;
//	s= x;
//	for (i=1; i<=n; i++) {
//		t *= -x*x/(2*i+1)/(2*i);
//		s += t;
//	}
//	printf("\nS= %lf", s);
//}
//---------------UNOPTIMIZED--------------------
//#include <stdio.h> 
//int main(){
//	int n, i, fac= 1;
//	double x, numerator, s;
//	printf("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	numerator= x;
//	s= x;
//	for (i=1; i<=n; i++) {
//		numerator *= -x*x;
//		fac *= (2*i+1) * 2*i;
//		s += numerator/fac;
//	}
//	printf("\nS= %lf", s);
//}
