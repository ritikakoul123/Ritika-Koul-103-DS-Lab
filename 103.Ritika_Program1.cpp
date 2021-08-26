//Author:Ritika Koul
//Creation date:17/6/2021
//Implement a List using Array and develop functions to perform insertion, deletion and linear search operations.

#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n);
int insertion(int arr[], int size, int element, int key, int index);
int deletion(int arr[], int size, int index);
int linearSearch(int arr[], int size, int element);
int main()
{
	int arr[30], option;
	int restart, element, index, search, size;
	printf("Enter the number of elements for array: ");
	scanf("%d", &size);
	printf("Enter %d elements:\n", size);
	for(int i=0; i<size; i++)
		scanf("%d", &arr[i]);
	printf("Current elements: ");
	display(arr, size);
OPERATION: //Goto function label
	printf("Enter an option from the menu:\n1 for Insertion\n2 for Deletion\n3 for Linear Search\n4 for Exit\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1: //For insertion
		printf("Enter the index at which the element is to be inserted: ");
		scanf("%d", &index);
		printf("Enter an element to be inserted: ");
		scanf("%d", &element);
		insertion(arr, size, element, 30, index);
		size += 1;
		printf("Updated elements: ");
		display(arr, size);
		break;
	case 2: //For deletion
		printf("Enter the index of the element you wish to delete: ");
		scanf("%d", &index);
		deletion(arr, size, index);
		size -= 1;
		printf("Updated elements: ");
		display(arr, size);
		break;
	case 3: //For linear search
		printf("Enter the element to be searched: ");
		scanf("%d", &element);
		int search = linearSearch(arr, size, element);
		if (search == -1)
			printf("Element not found!\n");
		else
			printf("The element %d was found at Index[%d]!\n", element, search);
		break;
	case 4: //For exit
		printf("Thanks");
		exit(0);
	default:
		printf("Incorrect option!\n");
		break;
	}
	printf("Press '1' to return to the menu!\nPress '2' to exit!\n");
	scanf("%d", &restart);
	if (restart == 1)
		goto OPERATION;
	else{
		printf("Thanks");
		exit(0);
	}
	return 0;
}
void display(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int insertion(int arr[], int size, int element, int key, int index)
{
	if (size >= key)
	{
		return -1;
	}
	for (int i = size - 1; i >= index; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[index] = element;
	index += 1;
	return 1;
}
int deletion(int arr[], int size, int index)
{
	for (int i = index; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
}
int linearSearch(int arr[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}
