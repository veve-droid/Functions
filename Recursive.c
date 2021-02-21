
#include <stdio.h>

int perfectNumber(int);
double expo(int x, int y);
long long int factorial(int);
long int fibonacci(int n);
int sum(int);
void decToOctal(int);


int main(){
int x, y, valid = 1, a, b , temp = b;
int num; 
	
	do{
	
		printf("\n========= MENU =========\n\n");
		printf("1.Perfect Number or Not\n");
		printf("2.X raised to Y\n");
		printf("3.Factorial\n");
		printf("4.Fibonacci\n");
		printf("5.Summation\n");
		printf("6.Decimal to Octal\n");
		printf("7.Exit\n\n");
		printf("Choose from the menu: ");
		scanf("%d", &num);
			
	}while(num<1);
	
	
	if(num > 6)
		return 0; ///* exit *///
		
	
	if(num == 1 || num == 4 || num == 5 || num == 6)
	 	y = 1; //* positive number *//
	if(num == 3)
		y = 0; //* non-negative integer *//
		
	
	
	
	
	if(num == 2){
	
		do{
		
			printf("Enter two integers: ");
			scanf("%i%i", &a, &b);
			
			temp = b;
			valid = 1;
			
			if(a == 0 && b == 0){
				printf("Undefined! Try other values\n\n");
				valid = 0;
			}
			
			if(b < 0)
				b = b * -1;
			
		}while(!valid);
		
		
		if(temp<0)
			printf("%d raised to -%d is %.5lf", a, b, 1/expo(a,-1 * b));
		else 
			printf("%d raised to %d is %.0lf", a, b, expo(a,b));
	}
	
		
	else {
	
		do{
		
			printf("Enter a positive number: ");
			scanf("%i", &x);
			
		}while(x<y);
	
	if(num == 1){
		if(perfectNumber(x))
			printf("%i is a perfect number.\n", x);
		else 
			printf("%i is not a perfect number.\n", x);
	}
	
	
	
	if(num == 3)
		printf("%i! = %lld\n", x, factorial(x));
	else if(num == 4)
		printf("%i element in the fibonacci sequence is %ld.\n", x, fibonacci(x));	
	else if(num == 5)
		printf("The summation from 1 to %i is %i\n", x, sum(x));
	else if(num == 6)
		decToOctal(x);
	
	
	}
	
	
	
		
	printf("\n\n");		
	return 0;
	
}




///////////////// functions /////////////////



	int perfectNumber(int n){

		int i, sum=0;
				
			for(i=2; i * i < n; i++){
			
				if(n % i == 0)
					sum = sum+i+(n/i);
					
			}
			
			if(n != 1 && sum + 1 == n)
				return 1;
			else 
				return 0;

	}



	double expo(int x, int y){
		
		if(y == 0)
			return 1;
		
		if(y == 1 || y == -1)
			return x;
					
		else{
			if(y % 2 == 0)
				return expo(x * x, y/2);
			else
				return x * expo(x * x, y/2);
		}
		
	}
	
	

	long long int factorial(int n){
		
		if(n == 0 || n == 1)
			return 1;
		else
			return n * factorial(n-1);

	}



	long int fibonacci(int n){

		if(n == 1 || n == 2)
			return 1;
		else
			return fibonacci(n-2) + fibonacci(n-1);

	}



	int sum(int n){
		
		if(n==1)
			return 1;
		else
			return n + sum(n-1);

	}



	void decToOctal(int n){

		if(n>0){
		
			decToOctal(n/8);
			printf("%i", n % 8);
			
		}
		
	} 
	
