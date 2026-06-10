// #include<iostream>
// using namespace std;

// int main(){
//     string s1="comomo";
//     char a= 'a';
//     char c='b';
//     char m= 'n';
//     s1[0]=c;
//     s1[1]=s1[3]=s1[5]=a;
//     s1[2]=s1[4]=m;
//     cout<<s1<<endl;


// return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     string s="Harry Potter & the Half Blood Prince";
//     char find='o';
//     void occurence(string s,char find){
//         for(int i=0;i<=s.length();i++){
//             int count=0;
//             if(find==s[i]){
//                 count++;
//             }
//             else
//             cout<<count;

//         }
//     } 

// return 0;
// }



// #include <iostream>
// using namespace std;

// void occurrence(string s, char find) {
//     int count = 0;

//     for (int i = 0; i < s.length(); i++) {
//         if (find == s[i])   {
//             count++;
//         }
//     }

//     cout << "Occurrences of '" << find << "' = " << count << endl;
// }

// int main() {
//     string s = "Harry Potter & the Half Blood Prince";
//     char find = 'o';

//     occurrence(s, find);

//     return 0;
// }





#include<iostream>
using namespace std;


int main(){
string sub="abcddcbaa";
int maxCount=0;
char maxWord;//bahr kyuki iski value change nhi krni baar baar 

    for(int i=0;i<=sub.length();i++){
        int count =0;//inside the for loop because it will reset count to 0 for new character 
          char word=sub[i];
         for(int j =0;j<sub.length();j++)
         //pehle andar vala loop kaam krega poora  fir bahar vale loop pe jaayega
         
         {
            if(word==sub[j]){
                count++;
            }

            

    }
    if(count>maxCount){
                maxCount=count;
                maxWord=word;
            }
} 
cout<<maxCount<<endl;
cout<<maxWord;
return 0;

}