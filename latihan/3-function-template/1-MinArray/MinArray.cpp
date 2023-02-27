/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 27 Februari 2023
    Topik   : Latihan Function Template - MinArray
*/

#include <iostream>
using namespace std;

/* FUNGSI MIN ARRAY */
template <class T>
T MinArray(T arr[], int N)
{
    // PREKONDISI: minimal array arr terdiri atas 1 elemen
    T minVal = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

/* MAIN PROGRAM */
int main()
{
    int intArr[3];
    float floatArr[3];
    double doubleArr[3];

    for (int i = 0; i < 3; i++)
    {
        intArr[i] = i + 2;
        floatArr[i] = ((float) i + 4) / 3;
        doubleArr[i] = ((double) i + 5) / 4 * 7;
    }
    
    cout << "Integer: " << MinArray(intArr, 3) << endl;
    cout << "Float: " << MinArray(floatArr, 3) << endl;
    cout << "Double: " << MinArray(doubleArr, 3) << endl;

    return 0;
}

/* Didefinisikan kelas Jam HH:MM:SS.
Apakah mungkin MinArray digunakan untuk data bertype Jam?

Jawaban: Mungkin, jika method-method yang dibutuhkan (contohnya operator <, =) 
pada fungsi MinArray tersedia pada kelas Jam */