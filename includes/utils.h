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

void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
process getNext(vector<process> &myProcesses);
int getSize(vector<process> &myProcesses);
int handleMissingData(vector<process> &myProcesses);

#endif /* UTILS_H_ */
