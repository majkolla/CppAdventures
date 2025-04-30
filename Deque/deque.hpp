/*
We're going to implement a deque here, 

methods: 
- push_front
- push_back
- pop_front
- pop_back
operator[]
- at

*/


template<typename T>
class deque
{

public: 
    deque(size_t chunk_sz = 64, int initial_chunks = 4) 
    : size_ {0}, chunks_ {initial_chunks}, chunk_size_ {chunk_sz}
    {
        data_ = new T*[chunks_]{}; // create an array of T pointers with chunks_ amount of pointer
        for (size_t i = 0; i < chunks_; ++i)
        {
            data_[i] = new T[chunk_size_];
        }
        begin_ = 0; 
    } 

    ~deque()
    {
        for (size_t i = 0; i < chunks_; ++i)
        {
            delete[] data_;
        }
    }

    void push_front()
    {
        
    }



private: 
    T* begin_{}; // the index to the first value in the first chunk 
    size_t size_; // number of elements stored 
    size_t chunks_; // number of active chunks
    T** data_;// a pointer to an array of pointers 
    size_t chunk_size_; // the size for every chunk
};