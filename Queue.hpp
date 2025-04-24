#include <iostream>


/*
static queue and dynamic queue

dynamic queue requires dynamic memory mangement, so we need to
use stuff like new and delete

static queue is on the stack so basically like an array




*/
template<typename T, size_t size>
class Queue
{

public:
    void enqueue(const T& value)
    {
        // insert at the end of the queue
        if (full())
        {
            throw std::overflow_error("Queue is full"); 
        }

        data[tail] = value;
        if (tail == size - 1)
        {
            tail = 0; 
        }
        else
        {
            tail ++;
        } 
        ++ count; 
    }

    T dequeue()
    {
        // removes the first value from the front and return it 

        T ouput = data[head];
        if (head == size - 1)
        {
            head = 0; 
        }
        else
        {
            head += 1; 
        } 
        -- count; 
        return ouput; 
    }
    bool empty () const 
    {
        // returns whether the queue is empty or not
        // its empty when the counter is 0 otherwise no
        return count == 0; 
    }

    bool full() const 
    {
        // returns true if the max number of values has been inserted
        // it's full when the ocunter is equal to the size 
        return count == size; 

    }

    void clear()
    {
        // resets the queue
        count = 0; 
        head = 0; 
        tail = 0; 
    }
    const T&  front() const 
    {
        // returns a refrence to the first element in the front of the queue
        return data[head]; 
    }

    template<size_t M>
    Queue<T, size + M> copy_and_expand() const 
    {
        Queue<T, size + M> newQueue; 

        size_t current = head;

        for (size_t i = 0; i < count; ++i) {
            newQueue.enqueue(data[current]);
            current = (current + 1) % size;
        }
    
        return newQueue;
    }


private: 
    T data[size]; 
    size_t head{0}; // for indexing the head 
    size_t tail{0}; // for indexing the tail
    size_t count {0};
    // size_t count{0}; 
// we initialize an array and use that as the queue
};

