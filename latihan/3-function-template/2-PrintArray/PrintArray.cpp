/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 27 Februari 2023
    Topik   : Latihan Function Template - PrintArray
*/

#include <iostream>
using namespace std;

/* FUNGSI PRINT ARRAY */
template <class T>
void PrintArray(T arr[], int N)
{
    if (N == 0)
    {
        cout << "Array kosong" << endl;
    }
    else
    {
        cout << '[' << arr[0];
        
        for (int i = 1; i < N; i++)
        {
            cout << ", " << arr[i];
        }

        cout << ']' << endl;
    }
}

/* MAIN PROGRAM */
int main()
{
    int intArr[3];
    float floatArr[3];
    double doubleArr[3];
    char charArr[3];

    for (int i = 0; i < 3; i++)
    {
        intArr[i] = i + 2;
        floatArr[i] = ((float) i + 4) / 3;
        doubleArr[i] = ((double) i + 5) / 4 * 7;
        charArr[i] = i + 100;
    }
    
    cout << "Integer: ";
    PrintArray(intArr, 3);
    cout << "Float: ";
    PrintArray(floatArr, 3);
    cout << "Double: ";
    PrintArray(doubleArr, 3);
    cout << "Char: ";
    PrintArray(charArr, 3);

    return 0;
}

/* Bagaimana kalau yang ingin dicetak adalah Point?

Jawaban: Bisa, jika method-method yang dibutuhkan (contohnya operator <<) 
pada fungsi PrintArray tersedia pada kelas Point */