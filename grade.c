include<stdio.h>
int main(){
	int m;
	printf("Enter the marks (0-100 range):");
	scanf("%d",&m);
	if (m<0 || m>100){
		printf("Invalid Mark");
	}
	else if (m>=85 && m<=100){
		printf("Grade A");
	}
	else if (m>=70) {
		printf("Grade B");
	}
	else if (m>=55){
		printf("Grade C");
	}
	else if (m>=40){
		printf("Grade D");
	}
	else{
		printf("Grade F");
	}
	return 0;
}
