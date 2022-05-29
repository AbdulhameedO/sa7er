#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

struct edge
{
public:
	city* startcity = nullptr;
	city* endcity = nullptr;
	int value = 0;
};

struct city
{
public:
	int value = 0;
	int min_dist = INT_MAX;
	city* parent = nullptr;
};

int main()
{
	int cities, portals, start;
	cin >> cities >> portals >> start;

	vector<edge> edges(portals);
	city temp;
	for (int i = 0; i < portals; i++)
	{
		//stopped here;
		cin >> edges[i].startcity;
		cin >> edges[i].endcity;
		cin >> edges[i].value;
	}

	return 0;
}