#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void WordCount()
{
    unordered_map<string, size_t> word_count;     // 从string到size_t的空map
    string word;
    while (cin >> word)
        ++word_count[word];                 // 提取word的计数器并将其加1
    for (const auto &w : word_count)    // 对map中的每个元素
        // 打印结果
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;
}

unordered_map<string, string> buildMap(ifstream &map_file)
{
    unordered_map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key&&getline(map_file, value)) {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
    }

    return trans_map;
}

string transform(string word, unordered_map<string, string> trans_map)
{
    return trans_map.find(word) == trans_map.end() ? word : trans_map[word];
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);    // 保存转换规则
    string text;                            // 保存输入中的每一行
    while (getline(input, text)){           // 读取一行输入
        istringstream stream(text);         // 读取每个单词
        string word;
        bool firstword = true;              // 控制是否打印空格
        while (stream >> word){
            if (firstword)
                firstword = false;
            else
                cout << " ";                // 在单词间打印一个空格
            // transform返回它的第一个参数或其转换之后的形式
            cout << transform(word, trans_map); // 打印输出
        }
        cout << endl;                       // 完成一行的转换
    }
}

int main(void)
{
    //WordCount();


    ifstream map_file;
    ifstream input;
    map_file.open("map_file.txt");
    input.open("input.txt");
    word_transform(map_file, input);


    system("pause");
    return 0;
}