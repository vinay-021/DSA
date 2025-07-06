#include<iostream>
using namespace std;

int main(){
    
   // int n,i=1;
  //  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  //  cin>>n;

  /*
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<< "*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

  */

  /*
   // int n,i=1;
    //cin>>n;

    while (i<=n)
    {
        int j=i;
        while(j<=n){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    } 
  */     

  /*
   int n;
   cout<<"Enter the no. of times you want your desired pattern code to be run : ";
   cin>> n;

   int i=1;
   while (i<=n)
   {
    int j=1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
  */

  /*
   int n;
   cout<<"Enter the no. of times you want your desired pattern code to be run : ";
   cin>> n;

   int i=1;
   while (i<=n)
   {
    int j=1;
    while(j<=n){
        cout<<n-j+1<<"\t";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
  */
 
 
  /*
   int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
   int i=1, count =1;

   while (i<=n)
   {
    int j=1;
    while(j<=n){
      cout<<count<<" ";
      count= count+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
   */
    
  /*
  
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  int row=1;
  while (row<=n)
  {
    int column =1;
    while (column<=row)
    {
      cout<<" * ";
      column=column+1;
    }
    cout<<endl;
    row=row+1;
  }
  */


  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  int row=1;
  while (row<=n)
  {
    int column =1;
    while (column<=row)
    {
      cout<<row<<" ";
      column=column+1;
    }
    cout<<endl;
    row=row+1;
  }
  */

  /*
  
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  int i=1, count =1;
  while (i<=n)
  {
    int j = 1;
    while (j<=i)
    {
      cout<<count<< " ";
      count=count+1;
      j++;
    }
    cout<<endl;
    i++;
  }
  */


  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  int i=1;
  while (i<=n)
  {
    int j=1, value=i;
    while (j<=i)
    {
      cout<<value<<" ";
      value++;
      j++;
    }
    cout<<endl;
    i++;    
  }*/

  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while (j<=i)
    {
      cout<<i-j+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
    
  }*/
 

  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  int i=1;

  while (i<=n)
  {
    int j=1;
    while (j<=n)
    {
      char ch='A'+i-1;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  */


  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  int i=1;

  while (i<=n)
  {
    int j=1;
    while (j<=n)
    {
      char ch='A'+j-1;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  */


  /*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  int i=1;
  char ch='A';
  while (i<=n)
  {
    int j=1;
    
    while (j<=n)
    {
      
      cout<<ch<<" ";
      ch++;
      j++;
    }
    cout<<endl;
    i++;
  }
  */

/*
  
  int i=1,n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  
  while (i<=n)
  {
    int j=1;
    while (j<=n)
    {
      char ch = 'A'+i+j-2;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;    
  }*/
//   5
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I
  
  

  /*
  int n,i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  char ch='A';

  while (i<=n)
  {    
    int j=1;
    while (j<=i)
    {
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    ch++;
    i++;
    
  }*/
//   5
// A
// B B
// C C C
// D D D D
// E E E E E




  /*
  int n,i=1;
  cin>>n;
  
  while (i<=n)
  {    
    int j=1;
    while (j<=i)
    {
      char ch='A'+i-1;
      cout<<ch<<" ";
      j++;
      ch++;
    }
    cout<<endl;
    i++;
  }
//   5
// A
// B B
// C C C
// D D D D
// E E E E E
  */


  /*
  int n;
  int i=1;
  cin>>n;

  while (i<=n)
  {
    int j=1;
    while (j<=i)
    {
      char ch='A'+i+j-2;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;    
  }
//   5
// A
// B C
// C D E
// D E F G
// E F G H I
  */


/*
  int n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  int i=1;

  while (i<=n)
  {
    int j=1;
    char ch = 'A'+n-i;
    while (j<=i)
    {      
      cout<<ch<<" ";
      ch++;
      j++;
    }
    cout<<endl;
    i++;
  }
//   4
// D
// C D
// B C D
// A B C D

  */
  /*
  int n,i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int space=n-i;
    while(space){
      cout<<" ";
      space--;
    }
    int j=1;
    while (j<=i)
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
// 5
//     *
//    **
//   ***
//  ****
// *****
  */


  /*
 int n,i=1;
 cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int start=n-i;
    int j=1;
    while (j<=start)
    {
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  } 
// 5
// * * * *
// * * *
// * *
// *  
  */
  
  
  /*
  int n,i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int space=i-1;
    while(space){
      cout<<" ";
      space--;
    }
    int j=1;
    while (j<=(n-i+1))
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
// 5
// *****
//  ****
//   ***
//    **
//     *  
  */
  
  
  /*
  int i=1,n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  while (i<=n)
  {
    int space = i-1;
    while (space)
    {
      cout<<" ";
      space--;
    }
    int j=1;
    while (j<=(n-i+1))
    {
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }

// 5
// 11111
//  2222
//   333
//    44
//     5  
    */
  
  
  /*
  int i=1,n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int space=n-i;
    while (space)
    {
      cout<<" ";
      space--;
    }
    int j=1;
    while (j<=i)
    {
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
   }
// 5
//     1
//    22
//   333
//  4444
// 55555  
  */
  
  
  /*
  int i=1,n;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int space=i-1;
    while (space)
    {
      cout<<" ";
      space--;
    }
    int j=1;
    int count=i;
    while (j<=n-i+1)
    {
      
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
    
  }
  
// 5
// 12345
//  2345
//   345
//    45
//     5
  */


  /*
  int n;
  int i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;
  int count=1;
  while (i<=n)
  {
    int space=n-i;
    while (space)
    {
      cout<<" ";
      space--;
    }
    int j=1;
    while (j<=i)
    {
      
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
// 3
//   1
//  23
// 456
  */  


  /*
  int n,i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    int space=n-i;
    while(space){
      cout<<" ";
      space--; 
    }
    int j=1;
    while (j<=i)
    {
      cout<<j;
      j++;  
    }
    int start =i-1;
    while (start)
    {
      cout<<start;
      start--;
    }
    
    cout<<endl;
    i++;
    
   }
// 5
//     1
//    121
//   12321
//  1234321
// 123454321  
    */


  /*
  int n,i=1;
  cout<<"Enter the no. of times you want your desired pattern code to be run : ";
  cin>>n;

  while (i<=n)
  {
    // 1st triangle
    int start1=1;
    while (start1<=n-i+1)
    {
      cout<<start1;
      start1++;
    }
    // 2nd triangle 
    int start2=1;
    while(start2<=(i-1)){
      cout<<"*";
      start2++;
    }
    // 3rd triangle
    int start3=i-1;
    while (start3)
    {
      cout<<"*";
      start3--;
    }
    // 4th triangle
    int start4=n-i+1;
    while (start4)
    {
      cout<<start4;
      start4--;
    }
    cout<<endl;
    i++;
  }
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1    
  */  






  
  return 0;
}