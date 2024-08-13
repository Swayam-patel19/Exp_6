// NAME - SWAYAM PATEL
// PRN - 23070123165
// EXPERIMENT - 6(E) 

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        int j = 1;
        while (j <= 5) {
            cout << "* ";
            ++j;
        }
        cout << endl;
        ++i;
    }

    return 0;
}

// PS C:\Users\dell\Downloads>  cd "C:\Users\dell\AppData\Local\Temp\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// PS C:\Users\dell\AppData\Local\Temp> 
