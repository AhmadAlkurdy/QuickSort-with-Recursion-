//Ahmad Alkurdy
//date: 9/14/2016
// quick sort using recursion 


#include<iostream>

using namespace std;
//declaring the function
void quicksort(int *numarray,int leftNum,int rightNum);

int main()
{
  int size = 0;
  
  //prompt the user to input the numbers of the array to create the dynamic array
  cout << "Enter size of the array: " << endl;
  cin >> size;
  int *numarray = new int[size];
 
  //prompt the user to input the numbers to fill the array
  for(int i=0;  i<  size; i++)
  {
	  cout << "Enter element " << i + 1 << " : " << endl;
    cin >> numarray[i];
  }
  quicksort(numarray , 0 , size-1); // call the function to get the array sorted

  cout << "Sorted elements: " << endl; // displya the sorted array
  for(int i = 0; i < size; i++)
  {
    cout << numarray[i] << endl;
  }

  system("pause");
  return 0;
}

void quicksort(int *numarray,int leftNum,int rightNum)
{
	//quick sort function that would use the recusive feature to sort the array
    int pivot= 0;
	int first = 0;
	int temporary = 0;
	int last = 0;

     if(leftNum < rightNum)
	 {
         pivot = leftNum;
         first = leftNum;
         last = rightNum;

         while(first < last)// 
		 {
             while(numarray [first] <= numarray[pivot] && leftNum < rightNum)
			 {
                 first++;
			 }
             while(numarray[last] > numarray[pivot])
			 {
                 last--;
			 }
             if(first < last)
			 {
                 swap(numarray[first],numarray [last]);
             }
         }

               swap(numarray[pivot], numarray[last]);

              quicksort(numarray , leftNum ,last-1);
              quicksort(numarray , last+1 , last);
   
    }
}