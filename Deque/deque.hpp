/*
We're going to implement a deque here, 

methods: 
- push_front
- push_back
- pop_front
- pop_back
operator[]
- at
test

*/


template<typename T>
class deque
{

public: 



private: 
    int** begin{};
    size_t size; // number of elements stored 
    size_t chunks; // number of active chunks 
    T** data; // a pointer to a 
    size_t chunk_size; // the size for all chunks

    int initial_chunk_count = 4; // intial size 

    data_arr = new T*[initial_chunk_count]; // array of pointers to datatype T 

    for (size_t i = 0; i < initial_chunk_count; ++i )
    {
        data[i] = new T[chunk_size];
    }

};