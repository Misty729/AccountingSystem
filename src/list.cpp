#include"list.h"
void List::Sum(List* _list) {
	for(int i=0;i!=num_commodity;i++)
	{
		this->_sum=_list->vec_commodity[i]->TotalPrice()+this->_sum;
	}
	for(int i=0;i!=num_sublist;i++)
		this->_sum+=vec_sublist[i]->_sum;
}
void List::visit_Commodity(Commodity* _Com) {
	cout<<"商品名称："<<_Com->CommodityName<<endl;
	cout<<"购买时间："<<_Com->Date<<endl;
	cout<<"总价："<<_Com->TotalPrice<<endl;
}
void List::visit_sublist(List* _sublist,Commodity* _sublistCom) {
	_sublist->visit_Commodity(_sublistCom);
}
List::List(Filter* _filtertype) :filter(_filtertype) {

}
