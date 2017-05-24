#include"Filter.h"
#include<iostream>
using namespace std;
void Filter::FilterIt() {
	void doFilter();
	this->filtertype->FilterIt();
}
dateFilter::dateFilter(Date _start_time, Date _end_time,Filter* _filtertype):start_time(_start_time),end_time(_end_time),Filter(_filtertype) {

}
priceFilter::priceFilter(SingleMoney start_price, SingleMoney end_price,Filter* _filtertype):start_price(start_price),end_price(end_price),Filter(_filtertype) {

}
