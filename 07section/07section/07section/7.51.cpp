// 因为使用vector<int> ver = 10;这样很容易产生歧义，使代码难以阅读
// 当定义int getSize(const std::vector<int>&);函数时
// 将可以getSize(34);这样调用，这显得很混乱
// 而string s = "abc"; 不会
