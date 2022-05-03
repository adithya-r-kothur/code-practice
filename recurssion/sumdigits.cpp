<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;
/* 
 example 1234
 returns 1+2+3+4

 */

int sum_digits(int n)
{
    if(n==0)
    return 0; 
   int last_digit = n%10;
   int remaining = n/10;
   cout<<remaining<<" "<<last_digit<<"\n";
   return  sum_digits(remaining)+last_digit;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum_digits(n);
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;
/* 
 example 1234
 returns 1+2+3+4

 */

int sum_digits(int n)
{
    if(n==0)
    return 0; 
   int last_digit = n%10;
   int remaining = n/10;
   cout<<remaining<<" "<<last_digit<<"\n";
   return  sum_digits(remaining)+last_digit;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum_digits(n);
    return 0;
>>>>>>> 2b29ab911d6bae95ad593c794cf2496ea405ebe1
}