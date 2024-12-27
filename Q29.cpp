#include<iostream>
using namespace std;

void matrix()
{
    int rows,cols;
    cout<<"Enter the no. of rows and columns ";
    cin>>rows>>cols;

    int matrix1[10][10],matrix2[10][10],result[10][10];

    cout << "\nEnter values for a "<<rows<<"x"<<cols<<" for matrix 1:" << endl;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <=cols; j++) 
        {
            cout << "Enter value for element (" << i << "," << j  << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter values for a "<<rows<<"x"<<cols<<" for matrix 2:" << endl;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <=cols; j++) 
        {
            cout << "Enter value for element (" << i << "," << j  << "): ";
            cin >> matrix2[i][j];
        }
    }

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            result[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }
    cout<<"\nResultant matrix after addition:"<<endl;
    
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix();
    return 0;
}