#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::pair;

//struct edge
//{
//public:
//	city* startcity = nullptr;
//	city* endcity = nullptr;
//	int value = 0;
//};

struct city
{
public:
	vector<pair<int,int>> children;
	int min_dist = INT_MAX;
};

int main()
{
	int cities, portals, mycity;
	cin >> cities >> portals >> mycity;

	//vector<edge> edges(portals);
	//city start,end;
	pair<int, int> temp;
	int start, end,value;
	vector<city> madeena(cities);

	for (int i = 0; i < portals; i++)
	{
		cin >> start;
		cin >> end;
		cin >> value;

		temp.first = end;
		temp.second = value;
		madeena[start].children.push_back(temp);
	}


	return 0;
}