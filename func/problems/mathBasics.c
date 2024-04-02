#include <stdio.h>
#include <stdlib.h>

//Problems based on: https://www.codeabbey.com/index/task_list


int sum(int, int);
int sumInLoop(int[], int);
void sumArraysPairwise(int[], int[], int, int);
void minOfTwo(int[], int[], int, int);
void maxOfArray();

int main(int argc, char const *argv[])
{
	int arr[8] = {10, 20, 30, 40, 5, 6, 7, 8};
	int arr2[3] = {100, 15, 1945};
	int arr3[3] = {8, 245, 54};
	int arrlength = sizeof(arr)/sizeof(arr[0]);


	maxOfArray();
	return 0;
}

int sum(int a, int b){
	return a+b;
}

int sumInLoop(int* arr, int arrlength){
	int sum = 0;
	for(int i = 0; i <= arrlength-1; i++){
		sum = sum + arr[i];
	}
	return sum;
}

void sumArraysPairwise(int* arr1, int* arr2, int arr1length, int arr2length){
	int arr3[arr1length];
	if(arr1length != arr2length){
		printf("%s", "Invalid input: Arrays not of equal length.");
	}
	else{
		for(int i = 0; i <= arr1length-1; i++){
			arr3[i] = arr1[i] + arr2[i];
		}
	}
	for(int i = 0; i <= arr1length-1; i++){
		printf("%d\n", arr3[i]);
	}
}

void minOfTwo(int* arr1, int*arr2, int arr1length, int arr2length){
	if(arr1length != arr2length){
		printf("%s", "Invalid input: Arrays not of equal length.");
	}
	else{
		for(int i = 0; i <= arr1length-1; i++){
			if(arr1[i]<arr2[i]){
				printf("%d\n", arr1[i]);
			}
			else{
				printf("%d\n", arr2[i]);
			}
		}
	}
}

void maxOfArray(){
	FILE *numbers;
	numbers = fopen("numbers2.txt", "r"); //(<File>, <mode>). See https://www.tutorialspoint.com/c_standard_library/c_function_fopen.htm for modes

	int numberarray[300];

	if(numbers == NULL){
		printf("%s", "Invalid input");
		exit(0);
	}
	else{
		for(int i = 0; i <= 300; i++){
			fscanf(numbers, "%d", &numbers[i]);
		}

		for(int i = 0; i < 10; i++){
			printf("%d\n", numbers[i]);
		}
		fclose(numbers);
	}
}