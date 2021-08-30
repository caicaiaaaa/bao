/*拿boy举例

因为是覆盖的，所以如果是 b 就一定有一个boy

如果是 o ，就要分两种情况：

1:前面是 b ，那就是同一个单词

2:前面不是 b ，那就是被覆盖的单词， 是另一个单词，即另一个boy

y 同理，如果前面是 o ，那就是同一个单词，若果不是 o ，就是另一个单词

girl也是一样*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int boy,girl;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='b') boy++;
        if(s[i]=='o'&&s[i-1]=='b')boy++;
        if(s[i]=='y'&&s[i-1]=='o')boy++;

        if(s[i]=='g')girl++;
        if(s[i]=='i'&&s[i-1]!='g')girl++;
   	    if(s[i]=='r'&&s[i-1]!='i')girl++;
   	    if(s[i]=='l'&&s[i-1]!='r')girl++;
    }
    cout<<boy<<endl<<girl<<endl;
    return 0;
}
