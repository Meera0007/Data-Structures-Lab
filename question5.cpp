#include <iostream>
using namespace std;
void diagonal()
{
    int n;
    cout << "Enter size of matrix: " << endl;
    cin >> n;

    int arr[n][n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i][i];
    }
    cout << "diagonal elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i];
    }
}
void tridiagonal(){
    
}
int main()
{
    diagonal();
    tridiagonal();
    return 0;
}
