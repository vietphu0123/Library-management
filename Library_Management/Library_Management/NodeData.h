#pragma once
#include<iostream>
#include"SinhVien.h"
#include"Sach.h"
using namespace std;
template <typename T> class List;
template <typename T>
class NodeData
{
private:
	T            data_;
	NodeData<T>* next_;
	NodeData<T>* prev_;
	
public:
	NodeData();
	void         set_data(T&);
	T            get_data();
	void         set_next(NodeData<T>* );
	NodeData<T>* get_next();
	void         set_prev(NodeData<T>* );
	NodeData<T>* get_prev();
	friend bool List<T>::remove(NodeData<T>* r);
};

template<typename T>
inline NodeData<T>::NodeData() : next_(NULL), prev_(NULL) { ; }

template<typename T>
inline void NodeData<T>::set_data(T &val)
{
	data_ = val;
}

template<typename T>
inline T NodeData<T>::get_data()
{
	return data_;
}

template<typename T>
inline void NodeData<T>::set_next(NodeData<T>* next)
{
	{ next_ = next; }
}

template<typename T>
inline NodeData<T>* NodeData<T>::get_next()
{
	return next_;
}

template<typename T>
inline void NodeData<T>::set_prev(NodeData<T>* prev)
{
	prev_ = prev;
}

template<typename T>
inline NodeData<T>* NodeData<T>::get_prev()
{
	return prev_;
}
