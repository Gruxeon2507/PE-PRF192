//-----------OPTIMIZED 1--------------
//#include <stdio.h> 
//int main(){
//	int n, i;
//	double x, t, s;
//	printf ("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	t= 1;
//	s= 1;
//	for (i=1; i<=n; i++){
//		t*= x/i;
//		s += t;
//	}
//	printf("\nF= %lf", s);
//}
//-----------OPTIMIZED 2--------------
//#include <stdio.h> 
//int main(){
//	int n, i;
//	double x, t;
//	printf ("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	t= 1;
//	for (i=n; i>=1; i--){
//		t= 1+ x/i*t;
//	}
//	printf("\nF= %lf", t);
//}
//-------------UNOPTIMIZED------------- 
//#include <stdio.h> 
//int main(){
//	int n, i, j, fac= 1;
//	double x, s= 1, numerator= 1;
//	printf ("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	for (i=1; i<=n; i++){
//		fac *= i;
//		numerator *= x;
//		s += numerator/fac;
//	}
//	printf("\nS= %lf", s);
//}
