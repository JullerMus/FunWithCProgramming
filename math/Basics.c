#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int add(int, int);
bool thirty(int, int);
void printArray(int[]);
void reverseArray(int[]);
void sumArray(int[]);
void duplicatesInArray(int[]);

int main(int argc, char const *argv[])
{

	int arr[10] = {1,1,3,1,5,6,3,1,1,10};
	int arr2[3] = {2,4,7};
	//printf("%d", add(5,7));
	//printf("%d", thirty(6,15));
	//printArray(&arr[0]); //Stores value	
	//reverseArray(&arr2[0]);
	// sumArray(&arr2[0]);
	duplicatesInArray(&arr[2]);

	return 0;

}

int add(int a, int b){
	return a+b;
}

bool thirty(int a, int b){
	if (a == 30 || b == 30 || a+b == 30)
	{
		return true;
	}
	return false;
}

void printArray(int* arr){ //points to value in memory
	int i;
	for(i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}
}

void reverseArray(int* arr){
	int i;
	for(i = 3; i >=0; i--){
		printf("%d", arr[i]);

	}
}

void sumArray(int* arr){
	int sum = 0;
	int len = sizeof(arr)/sizeof(arr[0]); //Gives us the length of the array.
	int i;
	for(i = 0; i <= len; i++){
		sum = sum + arr[i];
	}
	printf("%d", sum);
}

void duplicatesInArray(int* arr){
	int duplicate = 0;
	for(int i = 0; i < (sizeof(arr)/sizeof(arr[0]));i++){
		for(int j = 0; j < (sizeof(arr)/sizeof(arr[0])); j++){
				if(j == arr[i]){
					duplicate++;
					printf("%d\n", j);
				}
			}
		}
	printf("%d", duplicate);

	}
