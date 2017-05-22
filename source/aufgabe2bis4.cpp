#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <functional>
#include <iterator>
#include <algorithm>
#include <set>
#include <map>

typedef std::map<unsigned, unsigned> zhmap;

int main()
{
	zhmap map;
	std::list<unsigned>list1(100);
	generate( list1.begin(), list1.end(), rand );
	std::vector<unsigned> vector1(100);
	std::set<unsigned> set1;
	int loc=0;

	std::copy(list1.begin(),list1.end(),vector1.begin());
	std::cout << "Liste" << std::endl;
	std::copy(list1.begin(), list1.end(),
              std::ostream_iterator<unsigned>(std::cout, "\n"));
	std::cout << "Vektor" << std::endl;
	std::copy(vector1.begin(), vector1.end(),
              std::ostream_iterator<unsigned>(std::cout, "\n"));


  	for (unsigned i=0; i<vector1.size(); i++)
	{
		if (~(std::includes(set1.begin(),set1.end(),vector1.begin()+i,vector1.begin()+i)));
		{
		//set1.insert(vector1[i],i);
		}
	}	
	std::copy(set1.begin(), set1.end(),
              std::ostream_iterator<int>(std::cout, "\n"));

	//for (unsigned i=0; i<list1.size(); i++)
	//{
	//	unsigned e = 0;
	//	if (list1.size() > i)
	//	{
    	//		std::list<unsigned>::iterator it = list1.begin();
    	//		std::advance(it, i);
	//		e = *it;
	//	}
	//	unsigned h = map[e];
	//	if(h == 0)
	//	{
	//		h = 1;
	//	}
	//	else{
	//		h = h+1;
	//	}
	//	map.insert(zhmap(i, h));
	//}
	//for (unsigned i=0; i<list1.size(); i++)
	//{
	//	unsigned z = 0;
	//	if (list1.size() > i)
	//	{
    	//		std::list<unsigned>::iterator it = list1.begin();
    	//		std::advance(it, i);
	//		z = *it;
	//	}
	//	unsigned r = map[z];
	//cout << "Zahl: " << z << "Häufigkeit" << r << endl;
	//}
}
