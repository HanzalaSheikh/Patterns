#include <iostream>
using namespace std;

int main(){
    
    // Patterns 1 2 3 4

    // // 1)
    // int count;
    // cout<< "Enter last row number: ";
    // cin >> count;
    // for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= count; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    // Pattern 3 2 1

    // 2)
    // int count;
    // cout<< "Enter last row number: ";
    // cin >> count;
    // for (int i = 1; i <= count; i++)
    // {
    //     for (int j = count; j!= 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // 3) 1 2 3 4 5 6 7 8 9
    int count;
    cout<< "Enter number of rows : ";
    cin >> count;
    // int n = 1;
    // for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= count; j++)
    //     {
    //         cout << n;
    //         n++;
            
    //     }
        
    //     cout<< endl;
    // }

    // triangular 1234
    // for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    // triangle
    //     for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // triangular 1 22 333
    //     for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // TRAIANGLE 1 23 456
//     int n = 1;
//         for (int i = 1; i <= count; i++)
//     {
//         for (int j = 1; j <= i ; j++)
//         {
//             cout << n;
//             n++;
//         }
//         cout << endl;
//     }

//     // TRAINAGLE 1 23 345 4567
// for (int i = 1; i <= count; i++)
// {
//     for (int j = 0; j < i ; j++)
//     {
//         cout << i+j;
//     }
//     cout << endl;
// }

    // Triangle 1 21 321

// for (int i = 1; i <= count; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << i-j+1;
//     }
//     cout << endl;
// }

    // AAA BBB CCC
// char a = 65;
// for (int i = 1; i <= count; i++)
// {
//     for (int j = 1; j <= count; j++)
//     {
//         cout << a;
//     }
//     a++;
//     cout << endl;
// }

    // ABC ABC ABC
// for (int i = 1; i <= count; i++)
// {
//     char a = 65;
//     for (int j = 1; j <= count; j++)
//     {
//         cout << a;
//         a++;

//     }
//     cout << endl;
// }

// ABCD
// EFGH
// MNOP

// char a = 65;
// for (int i = 1; i <= count; i++)
// {
//     for (int j = 1; j <= count; j++)
//     {
//         cout << a;
//         a++;

//     }
//     cout << endl;
// }

// A
// AB
// ABC
// ABCD

// for (int i = 1; i <= count; i++)
// {
//     char a = 65;
//     for (int j = 1; j <= i; j++)
//     {
        
//         cout << a;
//         a++;
//     }
    
//     cout << endl;
// }

// A  
// BB 
// CCC
// DDDD

// char a = 65;
// for (int i = 1; i <= count; i++)
// {
    
//     for (int j = 1; j <= i; j++)
//     {    
//         cout << a;  
//     }
//     a++;
//     cout << endl;
// }

// A
// BC
// DEF
// GHIJ

// char a = 65;
// for (int i = 1; i <= count; i++)
// {
    
//     for (int j = 1; j <= i; j++)
//     {    
//         cout << a; 
//         a++; 
//     }
    
//     cout << endl;
// }

// A
// BC
// CDE
// DEFG

//  int i,j;
//   char c;
//   int n=5;
 
//   c='A';
//   for(i=0;i<n;i++)
//    {
//    for(j=0;j<=i;j++)
//    {
//       if(c=='Z')
//       break;
 
//       cout<<c;
//       c++;
//    }
 
//     cout<<endl;
//     }

// E
// DE
// CDE
// BCDE
// ABCDE
 
// int i,j;
// int n=5;

// for(i=n;i>=1;i--)
// {
//     for(j=i;j<=n;j++)
//     {
//         cout<<((char)(j+64));
//     }

//     cout<<endl;
// }

//  A
// BA
// CBA
// DCBA
// EDCBA

//   int i,j;
//   int n=5;
 
//     for(i=1;i<=n;i++)
//      {
//          for(j=i;j>=1;j--)
//          {
//              cout<<((char)(j+64));
//          }
 
//          cout<<endl;
//      }





    return 0;
}