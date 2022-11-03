#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void split(char  s[],char w[][31], int *n);
void join(char w[][31],int n, char out[]);
void split(char  s[],char w[][31], int *n){
	char s1[10001];
	int i,k=0;
	strcpy(s1,s); //khi tach khong anh huong den s
	i=0;
	while(s[i]==32) i++;
	strcpy(&s1[0],&s1[i]);
	i= strlen(s1) -1;
	while(s1[i]==32) i--;
	s1[i+1]=0;
	for(i=0;i<strlen(s1);i++){
		if(s1[i]==32){
			strcpy(w[k],s1);
			w[k++][i]=0;
			while(s1[i]==32) i++;
			strcpy(&s1[0],&s1[i]);
			i=-1;
		}
	}
	strcpy(w[k],s1);
	*n=k+1;
}
void join(char w[][31],int n, char out[]){
	int i;
	strcpy(out,w[0]);
	for(i=1;i<n;i++){
		strcat(out, " ");
		strcat(out,w[i]);
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,n,k;
	char w[1000][31];
	char s1[1000],s2[1000],s3[1000];
	gets(s1);
	gets(s2);	
	gets(s3);
	n=strlen(s1);
	split(s1,w,&n);
	for(i=0;i<n;i++){
		if(strcmp(w[i],s2)==0){
			k=i;
			break;
		}
	}
	strcpy(w[k],s3);
	join(w,strlen(s1),s1);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s",s1);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
