// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name="";
//     string stream="";
//     int marks;

    

// };

// int main(){
//     student mybox[3];
   
    
//     for(int i=0;i<3;i++){
        
//     cout<<"enter name of the student:"<<endl;
//     cin>>mybox[i].name;
//     cout<<"enter stream of the student:";  
//     cin>>mybox[i].stream;
//     cout<<"enter marks of the student:";
//     cin>>mybox[i].marks;
     
//     }


//     //   cout<< "The name of student :"<<mybox[i].name<<endl;
//     int totalmarks=0;
     
//      for(int i=0;i<3;i++){
        
//        totalmarks= totalmarks+mybox[i].marks;
        
//      cout<< "The name of student :"<<mybox[i].name<<endl;
//      cout<< "The stream of student :"<<mybox[i].stream<<endl;
//     cout<< "The marks of student :"<<mybox[i].marks<<endl;
//     if (mybox[i].marks < 32) {
//             cout << "Result: Fail" << endl;
//         } 
//         // Pass conditions with proper && (AND) logic
//         else if (mybox[i].marks >= 32 && mybox[i].marks <= 45) {
//             cout << "Result: Pass | Grade: D" << endl;
//         } 
//         else if (mybox[i].marks > 45 && mybox[i].marks <= 75) {
//             cout << "Result: Pass | Grade: B" << endl;
//         } 
//         else if (mybox[i].marks > 75 && mybox[i].marks <= 100) {
//             cout << "Result: Pass | Grade: A" << endl;
//         } 
//         else {
//             cout << "Invalid marks entered!" << endl; // Catches numbers outside 0-100
//         }
//         cout << "----------------------" << endl;
//     }
    
//         cout<<"the total marks of the class is:"<<totalmarks<<endl;
//     // if(mybox[i].marks>=32){
//     //    cout<<" pass"<<endl;
//     // }
//     // else if( 32<mybox[i].marks<=45) {
//     // cout<<"grade:D"<<endl;
//     // }
//     //  else if ( 45<mybox[i].marks<=75){
//     // cout<<"grade:B"<<endl;
//     // }
//     // else ( mybox[i].marks>75||mybox[i].marks<=100){
//     //     cout<<"grade:A"<<endl;
//     // }
    
   
   

    
//     //  }

    
// return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n[10]={2,1,2,6,1,1,3,7,9,2};
    int size=sizeof(n)/sizeof(n[1]);
    int num[10];
    
     for(int i=0;i<size;i++){
        int j;
        for( j=0;j<size;j++){
            if(n[i]==n[j])
            {
                    break;
                }
           
        }
        if (i == j) {
            cout << n[i] << " ";
        }
     } cout<<endl;
    
return 0;
}