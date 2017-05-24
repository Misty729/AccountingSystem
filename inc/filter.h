#ifndef FILTER_H
#define FILTER_H
#include"date.h"
#include "Commodity.h"
#include "shop.h"
class Filter {
private:
	Filter* filtertype;
public:
	Filter(Filter* _filtertype);
	virtual void doFilter()=0;
	void FilterIt();
};
class dateFilter:public Filter {
private:
	Date start_time,end_time;
public:
	dateFilter(Date _start_time, Date _end_time,Filter* _filtertype);
	dateFilter(Filter* _filtertype);/*预设*/
	void doFilter();
};
class priceFilter:public Filter {
private:
	SingleMoney start_price,end_price;
public:
	priceFilter( SingleMoney start_price, SingleMoney end_price,Filter* _filtertype);
	priceFilter();
	void doFilter();
};
class placeFilter:public Filter {
private:
	shop* ptr_shop;
public:
	placeFilter(shop* pshop);
	void doFilter();
};
#endif
