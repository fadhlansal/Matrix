#include <iostream>

using namespace std;

void matrix (int mat[10][10], int baris, int kolom)
{
    for (int a=0; a<baris; a++)
    {
        for (int b=0; b<kolom; b++)
        {
            cout << "mat [" << a << "] [" << b << "] : ";
            cin >> mat[a][b];
        }
    }
}

void tampilkan (int mat[10][10], int baris, int kolom)
{
    for (int a=0; a<baris; a++)
    {
        for (int b=0; b<kolom; b++)
        {
            cout << mat[a][b] << " ";
        }
          cout << endl;
    }
}
int main()
{
    int matriks[10][10];
    int nbaris, nkolom;
    cout << "jumlah baris : ";
    cin >> nbaris;
    cout << "jumlah kolom : ";
    cin >> nkolom;

    matrix(matriks, nbaris, nkolom);

    //menampipilkan

    tampilkan(matriks, nbaris, nkolom);

    return 0;
}
