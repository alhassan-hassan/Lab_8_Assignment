#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int sizeL;
int **A;
int sizeLinear;
int *B;
int** multi;
int reverseIndx(int I);
int linearIndx(int i, int j);
int createArray(int size);

int main ()
{
    // caliing function
    createArray(5);
    createArray(32,0,0,5);
   createArray(128,4,3,5);
   linearIndx(1,2);
   reverseIndx(3);

  }

int createArray(int size) {
    sizeL = size;

    int A[size][size];

    //size of unit array
    int uniArraySize = round((size*size)/2) + 2;
    int counter = 0;
    // creating multidimensial array
    int B[uniArraySize];
    int C[size][size];

    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            if (i >= j) {
                A[i][j] = 1 + rand() %1000;
                cout<<A[i][j]<<" ";
                B[counter] = A[i][j];
                counter++;
            }
        }
        cout<<endl;
    }

    //print first 20 elements of multidimensional array
    int track = 0;
    for (int i = 0; i < 20; i ++) {
        for (int j = 0; j <= i; j ++) {
        if (track == 20){break;}
            cout<<A[i][j]<< "   index ("<<i<<","<<j<<")"<<endl;
            track++;
        }
    }

    cout<<endl;

    cout<<"THe first 20 elements of the unidimensional array is:"<<endl;
    for (int i = 0; i < 20; i ++) {
        cout<<B[i]<<" index:  "<<i<<endl;
    }
    cout<<endl<<endl;
}


int linearIndx(int i, int j){

    int indexInUniDimen = ((i +1) * i)/2 +j;
    cout<< "The index of ("<<i<<","<<j<<") is "<<indexInUniDimen<<" in the unidimensional array"<<endl<<endl;
    return 0;
}

int reverseIndx(int I) {
    ///THE CODE BELOW DOES THE WORK OF THE INVERSE FUNCTION

    cout<<sizeof(B);
    int indexMultiDimenI = (I % sizeL);
    int indexMultiDimenJ = ceil(I/sizeL);
    //cout<< "The index of at the "<<I<<"th position in the unidimena=sional array is ("<<indexMultiDimenI<<","<<indexMultiDimenJ<<") in the multidimensional array"<<endl;
    return 0;
}






