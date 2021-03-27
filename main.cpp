track++;
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
