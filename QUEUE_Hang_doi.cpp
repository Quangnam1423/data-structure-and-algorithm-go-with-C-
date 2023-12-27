#include<iostream>
#include<queue>

//FIFO first in first out
//queue.front() in ra phan tu cuoi day
//queue.push(member) push a member into QUEUE
//queue.size() = numbers of member in the queue
//queue.empty() = check if queue is empty
//queue.pop() = erase a front member in the queue

int main()
{
	std::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	std::cout << q.front() << std::endl;
	return 0;
} 
