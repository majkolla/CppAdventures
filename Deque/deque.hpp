/*
We're going to implement a deque here, 

methods: 
- push_front
- push_back
- pop_front - add a value to the front of the deque
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

    void push_front(T var)
    {
        if (begin_index_ == 0) {
            // We need to go to the previous chunk so the first element on
            // or we need to move all elements one step to the right
            if (begin_chunk_ == 0) {
                // No more room on the left — optional: reallocate
                throw std::out_of_range("No room to push_front");
            }
            --begin_chunk_;
            begin_index_ = chunk_size_ - 1;
        } else {
            --begin_index_;
        }
    
        data_[begin_chunk_][begin_index_] = var;
        ++size_;
    }
   void push_back(T var)
   {
        size_t total_offset = begin_index_ + size_; 
        size_t target_chunk = begin_chunk_ + (total_offset / chunk_size_);
        size_t target_index = total_offset % chunk_size_;

        if(target_chunk >= chunk_)
        {
            
        }
   } 



private: 
    T* begin_index_{}; // the index to the first value in the first chunk 
    size_t size_; // number of elements stored 
    size_t chunk; // number of active chunks
    T** data_;// a pointer to an array of pointers 
    size_t chunk_size_; // the size for every chunk
    size_t begin_chunk_; 
};