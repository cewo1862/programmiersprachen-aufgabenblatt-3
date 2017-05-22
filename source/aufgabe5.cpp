#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <vector>
#include <algorithm>

bool is_multiple_of_3(int value){
	if(value % 3 == 0){
		return true;
	}
	else{
		return false;
	}
}

bool is_not_multiple_of_3(int value){
	if(value % 3 != 0){
		return true;
	}
	else{
		return false;
	}
}


TEST_CASE("filter alle vielfache von drei","[erase]")
{
	std::vector<int> vector1(100,std::rand());
	vector1.erase( std::remove_if(vector1.begin(), vector1.end(), is_not_multiple_of_3), vector1.end());
	REQUIRE(std::all_of(vector1.begin(), vector1.end(), is_multiple_of_3));
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
