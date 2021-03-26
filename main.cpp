#include<iostream>
#include<string>

using namespace std;

int N = 0;
int **A;
int sizeLinear;
int *B;
int **C;

void print();
int LinearIndx(int i,int j);
// void InverseIndx();
void InverseIndx(int m, int &p,int &q);
void populateMatrix();

int ** createArray();
int main ()
{
    int number[3] = {8,32,128};
    
    for (int i = 0; i < 3; i++){
        N = number[i];
        cout << "The "<< N << endl;
        A = createArray();

        cout << "I am here " <<A[1][2]<<endl;
        // sizeLinear = (int*)malloc(sizeof(int));
        sizeLinear = (N*(N+1))/2;
        cout << "I am here " <<sizeLinear<<endl;
        B = (int*) malloc(N*sizeof(int));

        populateMatrix();
        cout << "I am here " <<A[7][7]<<endl;
        C = createArray();
        for (int i = 0 ; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;        
            cout << C[i][j] << endl;
        }
    }

        cout << "I am here " <<C[7][7]<<endl;

        for (int i = 0; i < N; i++){
            for (int j = 0; j<=i; j++){
                B[LinearIndx(i,j)] = A[i][j];
                
            }
            
        }
        int p,q;
        for (int i = 0; i<sizeLinear;i++)
        {
            InverseIndx(i,p,q);
            cout << C[p][q]<<endl;
        }
        // print();
     
    }
    return 0;
}
void print()
{
    for (int i = 0 ; i < N; i++)
    {
        // cout << B[i] << endl;
        for (int j = 0; j <= i; j++)
        {
            // A[i][j] = 10;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}


void populateMatrix()
{
    srand(time(NULL));
    for (int i = 0 ; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = rand()%1000;        
        }
    }
}
int LinearIndx(int i,int j)
{
    int index = 0;
   
    for (int m = 0; m <N; m++)
    {
        for ( int n = 0; n <= m; n++)
        {
            if(n == j && m == i){
                return index;
            }
            index++;    
        }
    }
    return 0;
}
void InverseIndx(int m, int &p,int &q)
{
    int index = 0;
    // int i,j;
    
    for ( p = 0; p < N; p++){
        for ( q = 0; q<=p; q++){
            if(++index == m)
                break;
        }
        if(index == m)
                break;
    }

}

int ** createArray()
{
    int **a =(int**) malloc(N*sizeof(int*));
    for (int i = 0; i < N; i++)
        a[i] = (int*) malloc(N*sizeof(int));
    return a;

}
