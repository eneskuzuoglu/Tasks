// Project1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


#include <iostream>
#include <functional>
#include <vector>
	
struct Province;
struct Country {
	std::string name;
	Province* capital; 
};

struct Province {
	std::string name;
	Country* country; 
};

int main()
{
	
	Country Turkey = { "Turkey", nullptr };	
	Province ankara = { "ankara",&Turkey };
	Turkey.capital = &ankara;
	Province istanbul = { "istanbul", &Turkey };
	return 0;

	//std::cout << " the capital of the country that istanbul in: " << istanbul.country->capital << "." << std::endl;
}



