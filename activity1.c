#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<conio.h>

int main(){
	int choice;
	
	while(choice != 9){
		printf("Choose the following selection below:\n");
		printf("[1] Temperature Converter\n");
		printf("[2] Min and Max\n");
		printf("[3] Number Sorting\n");
		printf("[4] Letter Grade Equivalent\n");
		printf("[5] Finding the Mean of N numbers\n");
		printf("[6] The nth Power\n");
		printf("[7] Pattern Printing\n");
		printf("[8] Decimal to Binary, Octal and Hexadecimal\n");
		printf("[9] Exit\n");
		printf("Your choice: ");
		scanf("%d", &choice);
		printf("\n\n");
		
		switch(choice){
			case 1: 
				temperature();
				break;
			case 2:
				minmax();
				break;
			case 3:
				sorting();
				break;
			case 4:
				grade();
				break;
			case 5:
				mean();
				break;
			case 6:
				power();
				break;
			case 7:
				pattern();
				break;
			case 8:
				convert();
				break;
			case 9:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
}

int temperature(){
	int convert, temperature, ans;
	
	while(convert != 3){
		printf("Choose which to convert:\n");
		printf("[1] Celsius to Fahrenheit\n");
		printf("[2] Fahrenheit to Celsius\n");
		printf("[3] Main Menu\n");
		printf("Your Choice: ");
		scanf("%d", &convert);	
		
		if (convert == 3){
			printf("\n\n\n");
			break;
		}
		
		printf("Enter temperature: ");
		scanf("%d", &temperature);
	
		switch(convert){
			case 1:
				ans = (temperature * 1.8) + 32;
				printf("%d Celsius is %d Fahrenheit", temperature , ans);
				break;
			case 2:
				ans = (temperature - 32) * .5556;
				printf("%d Fahrenheit is %d Celsius", temperature , ans);
				break;
			default:
				break;
		}
		printf("\n\n\n");
	}
	
	return main();
}

int minmax(){
	int array[30], size, i, min, max;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	printf("Enter elements in array: ");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}
	
	min = max = array[0];
    for(i = 1; i < size; i++)
    {
        if(min > array[i])
			min = array[i];   
		if(max < array[i])
		    max = array[i];       
    }
    printf("Minimum of array is : %d \n", min);
    printf("Maximum of array is : %d\n", max);
    printf("\n");
    
    return main();
}

int sorting(){
	int array[30], size, i, j, x, sortchoice;
	
	while(sortchoice != 3) {
		printf("Choose a sorting you want:\n");
		printf("[1] Ascending\n");
		printf("[2] Descending\n");
		printf("[3] Main Menu\n");
		scanf("%d", &sortchoice);
		
		if (sortchoice == 3){
			printf("\n\n\n");
			break;
		}
		
		printf("Enter size of the array: ");
		scanf("%d", &size);
		
		printf("Enter elements in array: ");
		for(i = 0; i < size; ++i){
			scanf("%d", &array[i]);
		}
		
		for(i = 0; i < size; ++i){
			for(j = i + 1; j < size; ++j){
				if(array[i] > array[j]){
					x = array[i];
					array[i] = array[j];
					array[j] = x;
				}
			}
		}
		
		switch(sortchoice){
			case 1:
				printf("Ascending Order Result:\n");
				for(i = 0; i < size; ++i){
					printf("%d\n", array[i]);
				}
				break;
			case 2:
				printf("Descending Order Result:\n");
				for(i = size-1; i >= 0; --i){
					printf("%d\n", array[i]);
				}
				break;
			default:
				break;
		}
		printf("\n\n\n");
	} 
	return main();
}

int grade(){
	int gradechoice;
	float grade;
	char letter;
	
	while (gradechoice != 3){
		printf("Choose a grading system you want:\n");
		printf("[1] Percent Grade\n");
		printf("[2] 5.0 Scale\n");
		printf("[3] Main Menu\n");
		printf("Your choice: ");
		scanf("%d", &gradechoice);
		
		if (gradechoice == 3){
			printf("\n\n\n");
			break;
		}
		
		printf("Enter grade: ");
		scanf("%f", &grade);
		
		switch(gradechoice){
			case 1:				
				if(grade >= 90)
					letter = 'A';
				else if(grade >= 80 && grade <= 89)
					letter = 'B';
				else if(grade >= 70 && grade <= 79)
					letter = 'C';
				else if(grade >= 65 && grade <= 69)
					letter = 'D';
				else
					letter = 'E';
				printf("The equivalent letter of %.0f is %c", grade, letter);
				break;
			case 2:
				if(grade > 4.0 && grade <= 5.0)
					letter = 'E';
				else if(grade >= 3.7 && grade <= 4.0)
					letter = 'D';
				else if(grade >= 2.6 && grade <= 3.6)
					letter = 'C';
				else if(grade >= 1.8 && grade <= 2.5)
					letter = 'B';
				else if (grade >= 1.0 && grade <= 1.7)
					letter = 'A';
				printf("The equivalent letter of %.1f is %c", grade, letter);
				break;
			default:
				break;
		}
		printf("\n\n\n");
	}
	return main();
}

int mean(){
	int array[30], size, i, sum=0, mod;
	float avg;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	printf("Enter elements in array: ");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
		sum += array[i];
	}
	
	avg = sum / (float)size;
	mod = sum % size;
	
	if (mod != 0) {
		printf("Mean is: %.2f", avg);
	} else {
		printf("Mean is: %.0f", avg);
	}
	printf("\n\n\n");
	
	return main();
}

int power(){
	int base, exp, i;
	long result = 1;
	
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exp);
	
	//result = pow(base, exp);
	for(i = 1; i <= exp; i++){
		result *= base;
	}
	
	printf("%d raise to the power of %d is equal to %ld", base, exp, result);
	printf("\n\n\n");
	
	return main();
}

int pattern(){
	int x, y, row;
	
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	
	for (x = 1; x <= row; x++){
		for (y = 1; y <= x; y++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n\n");
	
	return main();
}

int convert(){
	int i, num, convertchoice, x, arrayconv[50], octalnum=0, temp=1;
	
	while (convertchoice != 4){
		printf("Choose which to convert:\n");
		printf("[1] Decimal to Binary\n");
		printf("[2] Decimal to Octal\n");
		printf("[3] Decimal to Hexadecimal\n");
		printf("[4] Main Menu\n");
		printf("Your Choice: ");
		scanf("%d", &convertchoice);
		
		if (convertchoice == 4){
			printf("\n\n\n");
			break;
		}
		
		printf("Enter number to convert: ");
		scanf("%d", &num);
		
		switch(convertchoice){
			case 1:
				printf("Binary of %d is ", num);
				for(x = 0; num > 0; x++){
					arrayconv[x] = num % 2;
					num = num / 2;
				}
				
				for (x = x - 1; x >= 0; x--){
					printf("%d", arrayconv[x]);
				}
				break;
			case 2:
				printf("Octal of %d is ", num);
				while (num != 0)
			    {
			    	octalnum = octalnum + (num % 8) * temp;
			    	num = num / 8;
			        temp = temp * 10;
			    }
			    printf("%d", octalnum);
				break;
			case 3:
				printf("Hexadecimal of %d is ", num);
				while(num!=0)
			    {
			        temp = num % 16;
			        if (temp < 10)
			            temp = temp + 48;
			        else
			            temp = temp + 55;
			        arrayconv[i] = temp;
			        i++;
			        num = num / 16;
			    }
			    for (i = i - 1; i >= 0; i--){
			    	printf("%c", arrayconv[i]);
				}
				break;
			case 4:
				main();
				break;
			default:
				break;
		}
		printf("\n\n\n");
	}
	return main();
}
