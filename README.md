# Queue in C++
## Aim 
To learn queue in C++.

## Theory
In C++, a queue is a linear data structure that operates on the **First In, First Out (FIFO)** principle, where elements are added to the back and removed from the front. It is implemented through the `std::queue` container adapter, part of the Standard Template Library (STL), and typically uses a `deque` or `list` as its underlying container. The main operations of a queue include `push()`, which inserts an element at the back, and `pop()`, which removes the front element. Other important functions include `front()`, which returns the front element, `back()`, which retrieves the last element, `empty()`, which checks if the queue is empty, and `size()`, which returns the number of elements in the queue. Queues are especially useful in scenarios where data needs to be processed in the order it is received, such as task scheduling, breadth-first search (BFS) in graph traversal, and managing real-time systems like network packet handling or printing jobs. While efficient for insertion and deletion operations at the front and back, queues do not support random access to elements, meaning elements must be accessed and processed sequentially.

## Output
![image](https://github.com/user-attachments/assets/9d311325-4013-4c92-8f56-3489e3226e5f)

## Conclusion
We learnt about enqueue and dequeue and hoiw to implement it in C++.

