

#include <iostream>

using namespace std;



int binarySearch(int array[], int size, int searchValue){

    int low = 0;

    int high = size - 1;

    int mid;

    while (low <= high){



        mid = (low + high) / 2;

 

        if(searchValue == array[mid]){

            return mid;

        }

        else if (searchValue > array[mid]){

            low = mid + 1;

        }

        else{

            high = mid - 1;

        }

    }

    return -1;

}

int main(){

    int a[] = {1,5,7,12,22,34,47,55,67,82,98,102,115,125,150};

    int valuefromuser;

    cout << "Enter an integer: " << endl;

    cin >> valuefromuser;

    int result = binarySearch(a, 15, valuefromuser);

    if(result >= 0){

        cout << "The number " << a[result] << " was found at the"

                " element with index " << result << endl;

    }

    else{

        cout << "The number " << valuefromuser << " was not found. " << endl;

    }

}
