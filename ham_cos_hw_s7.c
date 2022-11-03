//#include <stdio.h> 
//int main(){
//	int n, i;
//	double x, s= 1, t=1;
//	printf ("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	for (i=1; i<=n; i++){
//		t *= -1*x*x/((2*i-1)*(2*i));
//		s += t;
//	}
//	printf("\nS= %lf", s);
//}

//---------------REFERENCE CODE 1-----------
//#include <stdio.h> 
//int main(){
//	int i,n;
//	double x,t,f;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf("Input x= ");
//	scanf("%lf", &x);
//	t= 1;
//	f= 1;
//	for (i= 1; i<=n; i++){
//		t *= -x/(2*i)*x/(2*i-1);
//		f +=t;
//	}
//	printf("\n %lf", f);
//	
//}


//---------------REFERENCE CODE 2-----------
//#include <stdio.h> 
//int main(){
//	int i,n;
//	double x,t;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf("Input x= ");
//	scanf("%lf", &x);
//	//start 
//	t= 1;
//	for (i= n; i>=1; i--){
//		t = 1-t*x*x/((2*i-1)*(2*i));
//	}
//	printf("\n%lf", t);
//	
//}
//------------UNOPTIMIZED--------- 
//#include <stdio.h> 
//int main(){
//	int n, i, fac= 1, t0;
//	double x, s= 1, numerator= 1;
//	printf("Enter n and x: ");
//	scanf("%d%lf", &n, &x);
//	for (i= 1; i<=n; i++){
//		numerator *= -1*x*x;
//		fac *= 2*i*(2*i-1);
//		s += numerator/fac;
//	}
//	printf("\nS= %lf", s);
//}
