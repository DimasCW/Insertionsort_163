// Insertion_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20], n;

void input() {
    while (true) {
        cout << "Masukkan Jumlah Data pada Array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray yang ada anda masukkan maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "================================" << endl;
    cout << "Masukkan Element Array" << endl;
    cout << "================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data-ke- " << (i + 1) << ": ";
        cin >> arr[i];
    }

}

void insertionsort() {
    int temp, j;

    for (int i = 1; 1 < n; i++) {       //1. Membuat dengan i dimulai dari 1 hingga n-1

        temp = arr[1];                  //2. simpen nilai arr[i] ke variable sementara temp

        j = i - 1;                      //3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp) {       //4. Looping while dimana nilali j lebih besar sama dengan 0 dan arr[j] lebih besar sama dengan temp

        }
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
