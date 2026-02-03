#include <chrono>
#include <iostream>
using namespace std;

//Exercise 2: add a global variable here and initialize it to 0
//See the lab slides

//Exercise 1 Part 2: define a recursive function here
//See the lab slides

int main() {

    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();

    //Exercise 1 Part 1: experiment wiht different values for the iterative variable i (orders of 2)
    //e.g., 1024, 2048, 4096, 8192, 16384
    for (int i=0; i<1024; i++) cout << "*";
    cout << endl;

    //Exercise 1 Part 2: experiment with different arguments (orders of 10), comment out Ex 1 Pt 1
    //e.g., 10, 20, 30, 40, 50
    //Your code here

    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

    cout << "Time elapsed: " << elapsed.count() << " seconds" << endl;

    //Exercise 2: print the global variable showing how many times the recusive function is called
    //Your code here

    return 0;
}