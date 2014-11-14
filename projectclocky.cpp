#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// Code haye Algorithme Linear Search:
// Big O = n

bool linearsearch (int A[], int element_number, int key)
{
    for (int i = 0; i < element_number;i++)
        {
            if (A[i] == key)
                return true;
        }
    return false;
}
// End of Linear Search


// Code haye Algorithme Bubble Sort:
// Big O = n^2
// Start
void bubbleSort(int A[] , int element_number)
{
    int temp;
    for (int i = 0; i < element_number; i++)
    {
        for(int j = 0; j<element_number - i - 1; j++)
            {
                if ( A[j] > A [j+1])
                {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }

            }
    }
}
// End of bubble sort


// Codhaye Hanoi
// Big O = 2^n
// Start
void hanoi(int diskNumber , int start, int temp, int finish)
{
    if(diskNumber == 1)
    {
        cout<< " Move Disk " << diskNumber<<" from " << start <<" to "<< finish<<endl;
    }
    else
    {
        hanoi(diskNumber-1,start,temp,finish);
        cout<<"Move Disk from " << start <<" to "<<finish<<endl;
        hanoi(diskNumber - 1,temp,start,finish);
    }
}

// End of Hanoi

// Code haye Algorithme Quick Sort:
// Big O = nlogn
// Start
int part(int A[] , int left , int right){
	int middle ;

	int x = A[left] ;
	int l = left ;
	int r = right ;
	while(l < r){
		while((A[l] <= x) && (l < right)) l++ ;
		while((A[r] > x) && (r >= left)) r-- ;
		if(l < r){
			int temp = A[l];
			A[l] = A[r];
			A[r] = temp ;
		}
	}
	middle = r ;
		int temp = A[left];
		A[left] = A[middle] ;
		A[middle] = temp;
	return middle ;
}
void quicksort(int A[] , int left , int right){
	if (left < right){
		int middle = part(A , left , right) ;
		quicksort(A , left , middle-1) ;
		quicksort(A , middle+1 , right);
	}
}
// End of Binary Saerch

// Code Haye Binary Search
// Big O = logn
// Start

bool binarySearch(int A[], int element_number, int key)
{

    int low, mid, high;
    /*
    Technically a binary search should be done only if the array
    is sorted. But since we don't want to calculate the time that
    sorting cosumes, we ignore this part and will do it once we're
    in the main() function.
    */
    //bubbleSort(A,element_number);
    low = 0;
    high = element_number;
    do
    {
        mid = (low + high) / 2;
        if(key<A[mid])
            high = mid - 1;
        else if (key > A[high])
            low = mid + 1;
    }
    while (key != A [mid] && low <=high);
    if(key == A[mid])
        return true;
    return false;

}

// End of Binary Search


int main()
{
/*
    //Start of quick sort:
    int n = 25000;
    int A[n];
    for(int i = 0; i < n ; i++)
    {
        A[i] = rand() % 100 + 1;
    }
    clock_t quicksorttimer;
    quicksorttimer = clock();

    quicksort( A,0,n);

    cout << clock() - ((float)quicksorttimer)<<endl;
    //End of quick sort
    clock_t linearsearchtimer;
    linearsearchtimer=clock();

    linearsearch(A, n ,5);
    cout<< clock() - ((float)linearsearchtimer)<<endl;
    //Start of linear search
*/
    cout<<"Works Perfectly so far";
    return 0;
}
