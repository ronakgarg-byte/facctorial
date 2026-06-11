// #include<iostream>
// using namespace std;

// int main(){
//     string name[]={"dheeraj","akshat","jatin","ronak"};
// swap(name[0],name[3]);
// swap(name[1],name[2]);
// cout<<" "<<name[0];
// cout<<" "<<name[1];
// cout<<" "<<name[2];
// cout<<" "<<name[3];
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     string name[] = {"dheeraj", "akshat", "jatin", "ronak"};
//     int size = sizeof(name) / sizeof(name[0]);

//     for (int i = size - 1; i >= 0; i--)
//     {
//         // cout<<" "<<name[i];
//         for (int j = name[i].length() - 1; j >= 0; j--)
//         {
//             cout << name[i][j];
//             // Accesses the j-th character of the i-th string.
//         }
//     }
//     return 0;
// }
//////                    array fucnctions
// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//    vector <string> name ={"dheeraj","ronak","akshat"};
// name.push_back("akshat");
// cout << name.back() << endl;
// for (int i = 0; i < name.size(); i++) {
//         cout << name[i] << " ";
//     }
//     cout << endl;
// return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// int main(){
// string num={'9','6','8','3'};
    
//     sort(num.begin(), num.end());
    
   
//     cout << "Ascending order: ";
//     for (int i=0;i<=num.length();i++) {
//         cout << num[i]<< " ";
//     }
//     cout << endl;
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int arr[N];
// for(int i=0;i<=N;i++){
//     cout<<"enter number"<<endl;
//     cin>>arr[i];
    
//     i++;
// }
//     cout<<arr[0]*arr[3];

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter how many numners to input  ";
// 	cin>> n;
// 	int arr[n];
// 	    int sum=0;
// 	for(int i=0;i<=n;i++)
// 	{
// cout<<"enter numner"<<i<<endl;
// cin>>arr[i];
// sum=sum+arr[i];
//  }
// cout<<sum;
// return 0;
    
// }
#include<iostream>
using namespace std;
int main(){
int n;
 cout<<"enter how many numners to input  ";
	cin>> n;
	int arr[n];
	    int sum=0;
	    int multiplication=1;
	for(int i=0;i<=n;i++)
	{cout<<"enter numner"<<i<<endl;

cin>>arr[i];
sum=sum+arr[i];
multiplication=multiplication*arr[i];
 }
cout<<sum;
cout<<multiplication;
return 0;
}