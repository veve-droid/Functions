#include<stdio.h>

int isPerfNum(int x);
int power(int x, int y);
int factorial(int n);
int fibonacci(int n);
int summation(int n,int i);
int base10to8(int n,int i,int j);

int main() {
	int alive=1,option=0,invalid=1,input1,input2;
	while(alive){
		printf("===============MENU===============\n== (1) Perfect Number or Not\t==\n== (2) X Raised to Y\t\t==\n== (3) Factorial\t\t==\n== (4) Fibonacci\t\t==\n== (5) Summation\t\t==\n== (6) Decimal to Octal\t\t==\n== (7) Exit\t\t\t==\n===============MENU===============");
		printf("\nChoose an option: ");
		scanf("%d",&option);
		switch(option){
			case 1:
				while(invalid){
					printf("\n(1) Perfect Number or Not\nEnter a positive number:");
					scanf("%d",&input1);
					if(input1>0){
						if(isPerfNum(input1)){printf("%i is a Perfect Number",input1);}else printf("%i is not a Perfect Number", input1);
						break;
					}
					printf("\nNot a valid input!\n");
				} 
				break;
			case 2:
				printf("\n(2) X Raised to Y\nEnter two integers, x and y: ");
				scanf("%i %i",&input1,&input2);
				if(input2<0){printf("\n%i raised to %i is equal to 1/%i\n",input1,input2,power(input1,input2));}else printf("\n%i raised to %i is equal to %i\n",input1,input2,power(input1,input2));
				break;
			case 3:
				while(invalid){
					printf("(3) Factorial\nEnter a non-negative number: ");
					scanf("%i",&input1);
					if(input1>=0){
						printf("\n%i! is equal to %i",input1,factorial(input1));
						break;
					}
					printf("\nNot a valid input!\n");
				}
				break;
			case 4:
				while(invalid){
					printf("(4) Fibonacci\nEnter a positive number: ");
					scanf("%d",&input1);
					if(input1>0){
						printf("\nThe %i",input1);
						if(input1%10==1){printf("st");}else if(input1%10==2){printf("nd");}else if(input1%10==3){printf("rd");}else printf("th");; 
						printf(" element in the Fibonnaci Sequence is %i",fibonacci(input1));
						break;
					}
					printf("\nNot a valid input!\n");
				}
				break;
			case 5:
				while(invalid){
					printf("(5) Summation\nEnter a positive number: ");
					scanf("%d",&input1);
					if(input1>0){
						printf("\nThe sum of all numbers from 1 to %d is %d",input1,summation(input1,0));
						break;
					}
					printf("\nNot a valid input!\n");
				}
				break;
			case 6:
				while(invalid){
					printf("(6) Decimal to Octal\nEnter a positive number: ");
					scanf("%d",&input1);
					if(input1>0){
						printf("\n\n%d",base10to8(input1,0,0));
						break;
					}
					printf("\nNot a valid input!\n");
				}
				break;
			case 7:
				printf("\n\nTERMINATED PROGRAM");
				return 0;
			default:
				printf("\nOption does not exist!");
		}
		printf("\n\nEnter \"1\" to continue, all other inputs Exit: ");
		scanf("%d",&option);
		if(!(option==1)){printf("\n\nTERMINATED PROGRAM");return 0;}
		printf("\n\n\n");
		option = 0;
		
	}

	return 0;
}

int isPerfNum(int x){int n=0,i;for(i=1;i<=x/2;i++)if(x%i==0)n+=i;if(n==x){ return 1;}else return 0;}
int power(int x,int y){int n=x,i;if(y!=0){if(y<0)y*=-1;for(i=1;i<y;i++)n*=x;}else n=1;return n;}
int factorial(int n){int x=1,i;for(i=n;i>1;i--)x*=i;return x;}
int fibonacci(int n){int x=0,y=1,i;for(i=1;i<n;i++){x+=y;y=x-y;}return x;}
int summation(int n,int i){if(n>0){return summation(n-1,i+n);}else return i;}
int base10to8(int n,int i,int j){i +=((n%8)*power(10,j));if(n>8){i=base10to8((n/8),i,++j);}return i;}

