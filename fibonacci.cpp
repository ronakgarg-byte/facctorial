// #include <iostream>
// using namespace std;

// int main() {
//     int terms = 10;
    
//     int t1 = 0; 
//     int t2 = 1; 
//     int nextTerm = 0;

//     cout << "Fibonacci Series up to " << terms << " terms: " << endl;

//     for (int i = 1; i <= terms; ++i) {
       
//         cout << t1 << " ";

       
//         nextTerm = t1 + t2;

       
//         t1 = t2;       
//         t2 = nextTerm; 
//     }

//     std::cout << std::endl;
//     return 0;
// }
// without recursion
#include <iostream>
using namespace std;


int fibonacci(int n) {
    
    if (n == 0 || n == 1) {
        return n;
    }
    
   
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms = 10; 

    cout << "Fibonacci Series using Recursion: " << endl;
    
    for (int i = 0; i < terms; ++i) {
        cout << fibonacci(i) << " ";
    }
    
    cout << endl;
    return 0;
}