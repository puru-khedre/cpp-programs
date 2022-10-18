// Given an array of size N, we need to append the values from 1 to N in the array such that the odd values gets filled from starting and even values thereafter

// Ex: the numbers from 1 to 6 will get stored in the array in this fashion - 1,3,5,6,4,2

#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    
    int lft=0;
    int rt=n-1;
    int counter=1;
    
    while(lft<=rt){
        if(counter%2==1){
            arr[lft]=counter;
            counter++;
            lft++;
        }
        else {
            arr[rt]=counter;
            counter++;
            rt--;
        }
    }
}

int main()
{
	int t;
    cout<<"Enter the number of test cases to run : ";
	cin >> t;
	while (t--)
	{
		int n;
        cout<<"Enter the size of the array : ";
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
        cout<<"Enter the elements : ";
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}