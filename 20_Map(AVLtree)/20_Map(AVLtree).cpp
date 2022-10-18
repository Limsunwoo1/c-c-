#include <iostream>
#include <map>

#include "yaMap.h"


int main()
{
	ya::map<int, int> yaMap;


	////LR
	//yaMap.insert(std::make_pair(44, 100));
	//yaMap.insert(std::make_pair(30, 200));
	//yaMap.insert(std::make_pair(76, 200));
	//yaMap.insert(std::make_pair(16, 300));
	//yaMap.insert(std::make_pair(39, 500));

	// 균형이 꺠질때
	//yaMap.insert(std::make_pair(37, 200));

	//LL
	yaMap.insert(std::make_pair(96, 100));
	yaMap.insert(std::make_pair(85, 200));
	yaMap.insert(std::make_pair(110, 200));
	yaMap.insert(std::make_pair(64, 100));
	yaMap.insert(std::make_pair(90, 200));
	
	//균형이 깨질때
	yaMap.insert(std::make_pair(36, 200));

	int value = yaMap.find(110);

	yaMap.deleteNode(110);

	yaMap.circulateMap();


	return 0;
}

