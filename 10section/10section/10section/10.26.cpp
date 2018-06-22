/*
1. back_inserter_iterator: 赋值时调用容器的push_back

2. front_inserter_itertor：赋值时调用容器的push_front

3. inserter_iterator：赋值时调用容器的insert,
	此函数接受第二个参数，这个参数必须是一个指向给定容器的迭代器。
	元素将被插入到给定迭代器所表示的元素之前
*/