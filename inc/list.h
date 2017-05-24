#ifndef LIST_H
#define LIST_H
#include "Commodity.h"
#include <cstring>
#include<iostream>
#include<vector>
#include"Filter.h"
using namespace std;
class List {
protected:
	vector<Commodity*> vec_commodity;
	vector<List*> vec_sublist;//超市小票扫描账单
	double _sum;
	int num_commodity;
	int num_sublist;
	Filter* filter;
public:
	friend class Filter;
	List(Filter* _filtertype);//根据筛选条件初始化
	void Sum(List* _list);
	void visit_Commodity(Commodity* _Com);
	void visit_sublist(List* _sublist,Commodity* _sublistCom);
};
#endif
