// Q no: 01
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    int arr1[n][m];
    cout << "Enter first 2D Array Elements:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr1[i][j];
        }
    }
    
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    int arr2[n][m];
    cout << "Enter Second 2DArrays elements:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr2[i][j];
        }
    }
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    int add[n][m];
    cout << "Addition of two 2DArrays:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
            cout << add[i][j] << " ";
        }
        cout << endl;     
    }       
    return 0;
}