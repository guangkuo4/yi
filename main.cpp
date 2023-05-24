#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {
    unordered_map<int, int> umap;
    map<int, int> mmap;

    // 插入元素
    umap[2] = 20;
    mmap[2] = 20;
    umap[1] = 10;
    mmap[1] = 10;
    umap[3] = 30;
    mmap[3] = 30;

    // 遍历元素
    cout << "unordered_map:" << endl;
    for (auto& p : umap) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "map:" << endl;
    for (auto& p : mmap) {
        cout << p.first << " " << p.second << endl;
    }

    // 查找元素
    if (umap.find(2) != umap.end()) {
        cout << "unordered_map contains key 2" << endl;
    }
    if (mmap.find(2) != mmap.end()) {
        cout << "map contains key 2" << endl;
    }

    // 删除元素
    umap.erase(2);
    mmap.erase(2);

    // 大小和空判断
    cout << "unordered_map size: " << umap.size() << endl;
    cout << "map size: "" << mmap.size() << endl;
    cout << "unordered_map is " << (umap.empty() ? "" : "not ") << "empty" << endl;
    cout << "map is " << (mmap.empty() ? "" : "not ") << "empty" << endl;

    return 0;
}
