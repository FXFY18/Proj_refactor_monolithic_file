/*
* utils.h
* version: 9/24/2020
* Created: Felix Phommachanh
*
*/

#ifndef UTILS_H_
#define UTILS_H_


#include "constants.h"
#include <vector>

//std::vector<process>

void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
process getNext(std::vector<process> &myProcesses);
int getSize(std::vector<process> &myProcesses);
int handleMissingData(std::vector<process> &myProcesses);

#endif /* UTILS_H_ */
