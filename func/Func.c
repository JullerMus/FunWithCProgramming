#include<stdio.h>
#include<stdbool.h>

void swap(int, int);
void evenOdd(int); 
int largestInArray(int[], int);

int main(int argc, char const *argv[])
{
	int arr[6] = {1,3,5,1,8,7}; 
	int alength = sizeof(arr)/sizeof(arr[0]);
	
	int a = largestInArray(&arr[0], alength);
	//printf("%d\n", a);
	//printf("%d", sizeof(arr)/sizeof(arr[0]));

	return 0;
}

void swap(int a, int b){
	int c = a;
	a = b;
	b = c;
	printf("%d\n", a);
	printf("%d\n", b);
}

void evenOdd(int a){
	if(a % 2 == 0){
		printf("%s%d", "Even: ", a);
	}
	else{
		printf("%s%d", "Odd: ", a);
	}
}

int largestInArray(int* arr, int alength){
	int largest = 0;
	int i = 0;
	int len = *(&arr + 1) - arr;
	printf("%d", len);
	while(i < alength){
		if(largest < arr[i]){
			printf("%s%d\n", "New largest found:", arr[i]);
			largest = arr[i];
			
		}
		i++;
	}
	return largest;
}

