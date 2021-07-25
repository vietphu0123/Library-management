#pragma once
#include<iostream>
#include"NodeData.h"
#include"Sach.h"
#include"SinhVien.h"
using namespace std;

template<typename T>
class LinkedList
{
public:

	LinkedList() : p_head_(NULL), p_tail_(NULL) {};
	/*~LinkedList();*/
	//{
	//	// Gi?i phóng vùng nh? khi k?t thúc ch??ng trình
	//	NodeData<Sach>* temp = p_head_;
	//	while (temp != NULL)
	//	{
	//		p_head_ = p_head_->get_next();
	//		delete temp;
	//		temp = p_head_;
	//	}
	//};
	void show()
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

	void InsetFront(T& val)  //CHÈN TR??C DANH SÁCH
	{
		NodeData<T>* temp = new NodeData<T>();
		temp->set_data(val);
		temp->set_next(p_head_);
		temp->set_prev(NULL);
		if (p_head_ != NULL)
			p_head_->set_prev(temp);
		p_head_ = temp;
	}
	bool remove(NodeData<T>* r)
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
	void InsertBack(T& val) // CHÈN SAU DANH SÁCH
	{
		NodeData<T>* last = p_head_; // Tim ra node cuoi cung.
		if (last == NULL)
		{
			NodeData<T>* temp = new NodeData<T>();
			temp->set_data(val);
			p_head_ = temp;
			last = temp;
		}
		else
		{
			while (last->get_next() != NULL)
			{
				last = last->get_next();
			}

			NodeData<T>* temp = new NodeData<T>(); \
				temp->set_data(val);
			temp->set_next(NULL); // next temp = NULL
			temp->set_prev(last); // prev cua temp se la last
			last->set_next(temp); // next cua last la temp
		}
	}
	void RemoveFront()   // M?t hàm xóa ph?n t? ??u danh sách.
	{
		if (p_head_ != NULL)
		{
			NodeData<T>* temp = p_head_;
			p_head_ = p_head_->get_next();
			delete temp;
		}
	}
	void RemoveAfter()   // M?t hàm xóa ph?n t? ??u danh sách.
	{
		if (p_head_ != NULL)
		{
			NodeData<T>* temp = p_tail_;
			p_tail_ = p_tail_->get_prev();
			delete temp;
		}
	}


	NodeData<T>* head() { return p_head_; };

public:
	NodeData<T>* p_head_;
	NodeData<T>* p_tail_;
};