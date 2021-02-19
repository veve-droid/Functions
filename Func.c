#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int logBase10Estimate(int n);
int floorr(float x);
int ceiling(float x);
int isAlNum(char ch);
int isAlpha(char ch);
int isUpper(char ch);
int isLower(char ch);
char toUpper(char ch);
char toLower(char ch);
int isPunctuation(char ch);
int toInteger(char st[]);
float toFloat(char st[]);
int abs(int x);
void stringCopy(char src[], char dest[]);
bool substring(char s1[], char s2[]);
int stringCompare(char s1[], char s2[]);
void camelCase(char st[]);
void reverse(char st[]);
bool humbleNumber(int x);
int reversee(int x);

int main(){

////*** log ***////
int x, log;
	
	//printf("\nEnter a positive integer: ");
	//scanf("%i", &x);
		
	//printf("log of %i base 10 is %i.", x, logBase10Estimate(x));
		
////*** floor ***////*** ceiling ***////	
float n; 
		
	//printf("\nEnter a number: ");
	//scanf("%f", &n);

	//printf("floor(%.2f) is equal to %i.", n, floorr(n));
	//printf("ceiling(%.2f) is equal to %i.", n, ceiling(n));
		
		
////*** AlNum ***////*** Alpha ***////*** Upper***////*** Lower ***////
////*** toUpper***////*** toLower ***//// Punctuation ***////
char ch;
	//printf("\nEnter a character: ");
	//scanf("%c", &ch);

	//printf("%d", isAlNum(ch));
	//printf("%d", isAlpha(ch));
	//printf("%d", isUpper(ch));
	//printf("%d", isLower(ch));
	//printf("%c", toUpper(ch));
	//printf("%c", toLower(ch));
	//printf("%d", isPunctuation(ch));	
		
char str[50];
int i, valid, dot = 0;
	
	//do{ 
	
		//printf("Enter a valid numerical string: ");
		//scanf("%s", str);
		
		//checks if valid numericcal string
		
		//valid=1;
		//for(i=0; str[i] != '\0'; i++){
			//if(!(str[i] >= '0' && str[i] <= '9')){
			//	valid = 0;
			//	break;	
			//}
		//}
	
	//}while(valid==0);
	//printf("%d", toInteger(str));
	
	//do{ 
	
		//printf("Enter a valid string representation of float: ");
		//scanf("%s", str);
		
		//checks if valid float representation
		
		//valid=1;
		//dot=0;
		//for(i=0; str[i] != '\0'; i++){
			//if(!(str[i] == '.' || (str[i] >= '0' && str[i] <= '9'))){
			//	valid = 0;
			//	break;	
			//}
			
			//if(str[i] == '.'){
			//dot++;
			
				//if(str[0] == '.' || dot>1){
				//valid = 0;
				//break;
				//}
			//}
		//}
	
	//}while(valid == 0);
	
	
	//printf("%f", toFloat(str));
	
	//absolute value
	//printf("\nEnter an integer: ");
	//scanf("%i", &x);
		
	//printf("|%i| = %i.", x, abs(x));
		
	//src to dest
	
char str1[50], str2[50];

	//printf("Enter a string: ");
	//scanf("%s", str1);
	//printf("Enter another string: ");
	//scanf("%s", str2);
	
	//stringCopy(str1,str2);
    //printf("%s\n%s\n", str1, str2);


   // do{ //verifies if all inputs only contained letters
    
	//	printf("Enter a string: ");
	//	scanf("%s", str1);
		
	//	valid = 1;
	//	for(i=0; str1[i] != '\0'; i++)
			//if(isAlpha(str1[i]) == 0){
			//valid = 0;
			//break;} 
		
	//}while(!valid);
	
	//do{
    
	//	printf("Enter another string: ");
		//scanf("%s", str2);
		
	//	valid = 1;
	//	for(i=0; str2[i] != '\0'; i++)
		//	if(isAlpha(str2[i]) == 0){
		//	valid = 0;
		//	break;} 
		
	//}while(!valid);
	
    //printf("%d", substring(str2,str1));
	//printf("%d", stringCompare(str1,str2));
	
	//do{ //verifies if all inputs only contained letters
    
		//printf("Enter a string: ");
		//scanf("%s", str1);
		
		//valid = 1;
		//for(i=0; str1[i] != '\0'; i++)
			//if(isAlpha(str1[i]) == 0){
			//valid = 0;
			//break;} 
		
	//}while(!valid);
	
	//camelCase(str1);
	//printf("%s", str1);
	
	//printf("Enter a string: ");
	//scanf("%s", str1);
	
	//reverse(str1);
	//printf("%s", str1);
	
	//do{
	
	//	printf("Enter a positive number: ");
	//	scanf("%i",&x);
		
	//}while(x<1);
	
	//printf("%d", humbleNumber(x));
	//printf("%i", reversee(x));	
		
	printf("\n\n");	
	return 0;
}
	
	
	
	
	/////// ------------ ///////
	int logBase10Estimate(int n){
		int i, base = 10;
		
		for(i=0; base <= n; i++){
			base = base * 10;
			}

		return i;
	}
	
	
	/////// ------------ ///////
	int floorr(float x){

		return (int) x;
	}


	/////// ------------ ///////
	int ceiling(float x){
		
		if(x != floorr(x))
		return ((int) x) + 1;
		
		else
		return (int) x;
	}
	
	/////// ------------ ///////
	int isAlNum(char ch){
		
		if((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return 1;
		
		else return 0;
	
	}
	
	/////// ------------ ///////
	int isAlpha(char ch){
		
		if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return 1;
		
		else return 0;
	
	}
	
	/////// ------------ ///////
	int isUpper(char ch){
	
		if(ch >= 65 && ch <= 90)
		return 1;
		
		else return 0;
	
	}
	
	/////// ------------ ///////
	int isLower(char ch){
		
		if(ch >= 97 && ch <= 122)
		return 1;
		
		else return 0;
		
	}
	
	/////// ------------ ///////
	char toUpper(char ch){
	
		if(ch >= 97 && ch <= 122)
		return ch - 32;
		
		else return ch;
	
	}
	
	/////// ------------ ///////
	char toLower(char ch){
	
		if(ch >= 65 && ch <= 90)
		return ch + 32;
		
		else return ch;
	
	}
	
	/////// ------------ ///////
	int isPunctuation(char ch){
	
		if(ch == '.' || ch == ',' || ch == ';' || ch == ':' || ch == '?' || ch == '?' || ch == '!')
		return 1;
		
		else return 0;
	
	}
	
	/////// ------------ ///////
	int toInteger(char st[]){
		int i, convert;
		
		for(i=0, convert=0; st[i] != '\0'; i++){
		convert += st[i] - 48; //convert to digit 

			if(st[i+1] != '\0'){
				convert = convert * 10;
			}
			
		}
		
		return convert;
	} 
	
	/////// ------------ ///////
	float toFloat(char st[]){
	
		int i, len, convert;
		float con;
		
		for(i=0, convert=0; st[i] != '\0'; i++){
			if(st[i] == '.')
				continue;
		
			convert += st[i] - 48; //convert to digit 
			if(st[i+1] != '\0'){
				convert = convert * 10;
			}
			
		}
		
		
		con = convert;
		for(len = strlen(st) - 1; st[len] != '.'; len--){
		con = con/10;
		}
		

	return con;
	}
	
	/////// ------------ ///////
	int abs(int x){
	
	if(x<0)
	return x * -1;
	
	else
	return x;
	
	}
	
	/////// ------------ ///////
	void stringCopy(char src[], char dest[]){
	int i;
	for(i=0; src[i] != '\0'; i++){
	
		dest[i] = src[i];
		
		}
		
	dest[i] = '\0';
	return;
	}
	
	/////// ------------ ///////
	bool substring(char s1[], char s2[]){
    int i, j, bump=0;
    int len1 = strlen(s1), len2 = strlen(s2);

    //loops until str1 fits in str2
    for (i=0; i<=len2-len1; i++){
        // printf("str2 %c \n", str2[i]);
        
        if (s1[0]==s2[i]){ // checks if first char of str1 is in str2
            // printf("same");
            for (j=0; s1[j]!='\0'; j++){ // loops entirety of str1 to check if all char is in str2
                // printf("comparing %c and %c\n", str1[j], str2[j+i]);
                if (s1[j]!= s2[i+j])  //if a char is not same, no match
                    bump=0;
                else bump=1; //else, str1 is subset of str2
            }
        }
    }
    
    return bump;
}
	
	/////// ------------ ///////
	int stringCompare(char s1[], char s2[]){
	char tmp1[50], tmp2[50];
	int i, status = 0;
	int len, len1 = strlen(s1), len2 = strlen(s2);

	//store in a temporary string	
	stringCopy(s1, tmp1);
	stringCopy(s2, tmp2);
	
	//makes sure in lowercase
	for(i=0; tmp1[i] != '\0'; i++){
		
		if(isLower(tmp1[i] == 0))
		toLower(tmp1[i]);}
		
	for(i=0; tmp2[i] != '\0'; i++){
		
		if(isLower(tmp2[i] == 0))
		toLower(tmp2[i]);}
		
	len = len1;
	if(len1 < len2)
		len = len2;
		
	
	for(i=0; i<len; i++){
		if(tmp1[i] < tmp2[i]){
			status = -1;
			break;
		}
		else
		if(tmp1[i] > tmp2[i]){
			status = 1;
			break;
		}
	}	
	
	//same string
	if(status == 0){ //means that string was nevver updated
		// this means st1 and st2 are the same string
		// but if they are of different lengths
		// the shorter has the same exact characters as
		// the longer string up to index (len - 1).
		if(len1 < len2)
			status = -1;
		else
		if(len1 > len2)
			status = 1;
	}
	
	if(status == 0)	
	return 0;
	if(status < 0)	
	return -1;
	if(status > 0)	
	return 1;
		
	}
	
	/////// ------------ ///////
	void camelCase(char st[]){
	int i; 
	
	
	for(i=0; st[i] != '\0'; i++){
		if(i % 2 == 1)
			st[i] = toLower(st[i]);
		else if(i % 2 == 0)
			st[i] = toUpper(st[i]);
		}
			
	return;	
	}
	
	/////// ------------ ///////
	void reverse(char st[]){
	int i, len;
	char temp;
	
	len = strlen(st) - 1;	
		for(i=0; i<(len+1)/2; i++){	
			temp = st[i];
			st[i] = st[len-i];
			st[len-i] = temp;
		}
		
	return;
	}
	
	/////// ------------ ///////
	bool humbleNumber(int x){
		
		if(x == 1 || x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0)
		return true;
		
		else return false;
		
	}
	
	/////// ------------ ///////
	int reversee(int x){
	int i, rem, rev, sum = 0;
	
	while (x != 0){
		rem = x % 10;
		sum = (sum + rem) * 10;
		
		x = x/10;
	}
	
	return sum/10;
	
	}
