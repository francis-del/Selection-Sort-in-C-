// Selection sort in C++

#include<iostream>
using namespace std;

void Selection_Sort(int arr[])
{
    for (int i=0;i<5;i++)
    {
        int min = i;     // Creating minimum value pointing to i

        for (int j=i+1;j<5;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;    // Assinging j to the minimum value
            }
            
        }
        if (min!=i)   // Checking if min is not equal to i
        {
            int swap=arr[min];  // Declaring an integer swap
            arr[min] = arr[i];
            arr[i] = swap; 
        }
        
        
    }
    
}


int main()
{

    int mySort[6]; // number of elements
    cout<<"Enter 5 integers in random order: "<<endl; // Inputing intergers in random order
    for(int i=0;i<6;i++)
    {
        cin>>mySort[i];  //  This will take in our inputs 
    }
    cout<<"unsorted array: "<<endl;   // This will print out our unsorted array
    for (int i=0;i <6;i++)
    {
        cout<<mySort[i]<<"  ";
    }
    cout<<endl;


    Selection_Sort(mySort);   //  Sorting processing 


    cout<<"sorted array:  "<<endl;

    for (int i=0;i<6;i++)
    {
        cout<<mySort[i]<<"  ";
    }
    return 0;
}
