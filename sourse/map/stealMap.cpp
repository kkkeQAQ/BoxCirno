#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	while(1)
	{
		printf("��Ҫ�õ���ͼ���:");
		string s;
		cin>>s;
		s="map"+s+".txt";
		if(ifstream(s.c_str())!=NULL)
		{
			printf("�õ�ͼ�Ѵ���\n");
			continue;
		}
		ofstream fout(s.c_str());
		getline(cin,s);
		getline(cin,s);
		string temp;
		int n=0,m=s.length();
		do{
			n++;
			for(int i=0;i<m;i++)
			{
				switch(s[i])
				{
			    case '#':
					temp.append("#");
					break;
				case '-':
					temp.append(" ");
					break;
				case '@':
					temp.append("0");
					break;
				case '$':
					temp.append("*");
					break;
				case '.':
					temp.append("$");
					break;
				case '*':
					temp.append("+");
					break;
				}
			}
			temp.append("\n");
		}while(getline(cin,s),s.length()==m);
		fout<<n<<' '<<m<<endl;
		fout<<temp;
		printf("��ͼ�ɹ�!�t(*�㨌��*)�s\n");
    }
	return 0;
}
