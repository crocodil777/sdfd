#pragma once
template <typename T>  class Array {

private:
	unsigned _size;			
	T* _data;		

public:
	Array(unsigned size);		
	virtual ~Array();		
	Array(Array& a);	
	Array& operator=(Array& a);    
	void set(int i, T val);		
	T get(int i);			
	unsigned getSize();		

};