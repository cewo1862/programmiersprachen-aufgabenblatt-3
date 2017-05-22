#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

int main()
{
	std::list<unsigned>list1(100,std::rand());
	std::vector<unsigned> vector1;
	std::set<unsigned> set1;
	int loc=0;

	std::copy(list1.begin(),list1.end(),vector1.begin());
	std::copy(set1.begin(), set1.end(),
              std::ostream_iterator<unsigned>(std::cout, "\n"));


  	for (unsigned i=0; i<vector1.size(); i++)
	{
		if (~(std::includes(set1.begin(),set1.end(),vector1.begin()+i,vector1.end())));
		{
		set1.insert(vector1.at(i),i);
		}
	}	
	std::copy(set1.begin(), set1.end(),
              std::ostream_iterator<int>(std::cout, "\n"));
}
