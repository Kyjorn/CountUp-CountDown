#include <iostream>
#include <thread>
using namespace std;

//counts from 1 - 20
void countUp() {
    cout << "Counting Up..." << endl;
    for (int i = 1; i <= 20; i++){
        cout << i << endl;
    }
}

//counts from 20 - 1
void countDown() {
    cout << "Counting Down..." << endl;
    for(int i = 20; i >= 1; i--){
        cout << i << endl;
    }
}

int main() {
    //thread for counting up
    thread count1(countUp);
    count1.join(); //tells thread to wait until completion

    //thread for counting down
    thread count2(countDown);
    count2.join();

    return 0;
}