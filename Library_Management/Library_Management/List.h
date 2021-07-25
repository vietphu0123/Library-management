#pragma once
#include<iostream>
#include"NodeData.h"
#include"Sach.h"
#include"SinhVien.h"
using namespace std;

template<typename T>
class List
{
public:

	List() : p_head_(NULL), p_tail_(NULL) {};
	
	void show();
	void InsetFront(T&);
	bool remove(NodeData<T>* );

	void RemoveFront();


	NodeData<T>* head() { return p_head_; };

private:
	NodeData<T>* p_head_;
	NodeData<T>* p_tail_;
};

template<typename T>
inline void List<T>::show()
{
	NodeData<T>* phead = p_head_;
	if (phead != NULL)
	{
		NodeData<T>* temp = phead;
		while (temp != NULL)
		{
			temp->get_data();
			temp = temp->get_next();
		}
	}
}

template<typename T>
inline void List<T>::InsetFront(T & val)
{
	NodeData<T>* temp = new NodeData<T>();
	temp->set_data(val);
	temp->set_next(p_head_);
	temp->set_prev(NULL);
	if (p_head_ != NULL)
		p_head_->set_prev(temp);
	p_head_ = temp;
}

template<typename T>
inline bool List<T>::remove(NodeData<T>* r)
{
	NodeData<T>* removeNode = r;
	NodeData<T>* afterRemove = removeNode->next_;
	NodeData<T>* beforeRemove = removeNode->prev_;
	if (removeNode == head())
	{
		RemoveFront();
	}
	else
	{
		afterRemove->prev_ = beforeRemove;
		beforeRemove->next_ = afterRemove;
	}
	removeNode == NULL;
	return true;
}

template<typename T>
inline void List<T>::RemoveFront()
{
	if (p_head_ != NULL)
	{
		NodeData<T>* temp = p_head_;
		p_head_ = p_head_->get_next();
		temp==NULL;
	}
}
