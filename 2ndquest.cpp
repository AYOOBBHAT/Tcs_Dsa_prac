// Particulate matters are the biggest contributors to Delhi pollution. The main reason behind the increase in the concentration of PMs include vehicle emission by applying Odd Even concept for all types of vehicles. The vehicles with the odd last digit in the registration number will be allowed on roads on odd dates and those with even last digit will on even dates.

// Given an integer array a[], contains the last digit of the registration number of N vehicles traveling on date D(a positive integer). The task is to calculate the total fine collected by the traffic police department from the vehicles violating the rules.

// Note : For violating the rule, vehicles would be fined as X Rs.

// Example 1:

// Input :

// 4 -> Value of N

// {5,2,3,7} -> a[], Elements a[0] to a[N-1], during input each element is separated by a new line

// 12 -> Value of D, i.e. date 

// 200 -> Value of x i.e. fine

// Output :

// 600  -> total fine collectd 



#include <bits/stdc++.h>
using namespace std ;
int main(){
  cout<<"enter size of array"<<endl;
  int n;
  cin>>n;
  vector<int>nums(n,0);
  cout<<"enter date"<<endl;
  int date;
  cin>>date;
  for(int i=0;i<n;i++){
    cin>>nums[i];

  }


  int fine=0;
  int countEven=0;
  int countOdd=0;

  for(int i=0;i<n;i++){

    if(nums[i]%2==0){
      countEven++;
    }
    else{
      countOdd++;
    }


  }

  if(date%2==0){
    fine=countOdd*200;
    cout<<"fine is "<<fine<<endl;
  }

  if(date%2 !=0){
     fine=countOdd*200;
     cout<<"fine is "<<fine<<endl;
  }


return 0;

}