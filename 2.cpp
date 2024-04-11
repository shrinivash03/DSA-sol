#include <bits/stdc++.h>
using namespace std;
 int main()
{
    vector<int>str(1,2);
    str.push_back(5);
    str.push_back(4);
    str.push_back(3);
    str.push_back(1);
   cout<< str.size()<<endl;
   //vector<int>::iterator it =str.begin();
   auto for(it=str.begin();it<str.end();it++)
   {
   cout<<*(it)<<" "; 
   }
   cout<<endl;
   cout<<str.back()<<" "<<endl;
   *it--;
   *it--;
   cout<<*it<<endl;
   str.insert(str.begin()+2,100);
   str.erase(str.begin()+2);



    return 0;
}

