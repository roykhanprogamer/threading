#include <iostream>
#include <thread>
// #include <windows.h>
using namespace std;

/* hilangkan komentar dengan simbol '//' untuk menjalankan program */

void odd(int num) {
    // Sleep(1000); /* jika tidak jalan, pindah baris ini di bawahnya cout */
    cout << "odd:" << num << endl;
}

void even(int num) {
    // Sleep(1000); /* jika tidak jalan, pindah baris ini di bawahnya cout */
    cout << "even:" << num << endl;
}

int main()
{
    for(int i=1; i<=10; i++) {
        if(i%2==1) {
            thread printOdd(odd, i);
            printOdd.join();
        }
        
        if(i%2==0) {
            thread printEven(even, i);
            printEven.join();
        }
    }

    return 0;
}
