#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
   unordered_set<int> s;
   s.insert(10);
   s.insert(10);
   s.insert(21);
   s.insert(43);
   s.insert(14);
   s.insert(91);
   s.insert(63);

   for (auto it = s.begin(); it != s.end(); it++)
   {
      cout << (*it) << " ";
   }
   cout << endl;
   cout << "No. of elements: " << s.size() << endl;

   int key = 10;
   if (s.find(key) == s.end())
   {
      cout << "Key not found" << endl;
   }
   else
   {
      cout << "Key founded" << endl;
   }

   int delete_key = 43;
   s.erase(delete_key);

   for (auto it = s.begin(); it != s.end(); it++)
   {
      cout << (*it) << " ";
   }
   cout << endl;
   cout << "No. of elements: " << s.size() << endl;

   if (s.find(key) == s.end())
   {
      cout << "Key not found" << endl;
   }
   else
   {
      cout << "Key founded" << endl;
      auto temp = s.find(key);
      cout << "Key value is :" << (*temp) << endl;
      s.erase(temp);
      cout << "Key erased successfully" << endl;
   }

   if (s.count(63))
   {
      cout << "Key Found" << endl;
   }
   else
   {
      cout << "Key Not Fount" << endl;
   }

   cout << "No. of elements: " << s.size() << endl;

   s.clear();
   cout << "No. of elements: " << s.size() << endl;

   return 0;
}