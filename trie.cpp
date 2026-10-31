#include <iostream>
#include <vector>
#include <memory>

using namespace std;




// 55 rows
struct TrieNode {
    vector<shared_ptr<TrieNode>> children;
    bool isEndOfWord;  // このノードが単語の終わりであるかを示す

    TrieNode() : children(26, nullptr), isEndOfWord(false) {}
};

class Trie {
private:
    shared_ptr<TrieNode> root;

public:
    Trie() {
        root = make_shared<TrieNode>();
    }

    // 単語をTrieに挿入する
    void insert(const string& word) {
        shared_ptr<TrieNode> node = root;
        for (char c : word) {
            int index = c - 'a';  // アルファベットのインデックスを計算
            if (!node->children[index]) {
                node->children[index] = make_shared<TrieNode>();  // 新しいノードを作成
            }
            node = node->children[index];
        }
        node->isEndOfWord = true;  // 単語の終わりをマーク
    }

    // 単語がTrieに存在するかどうかを検索する
    bool search(const string& word) {
        shared_ptr<TrieNode> node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                return false;  // ノードが存在しない場合
            }
            node = node->children[index];
        }
        return node->isEndOfWord;  // 単語の終わりノードであるかを返す
    }

    // 指定されたプレフィックスを持つ単語がTrieに存在するかどうかを検索する
    bool startsWith(const string& prefix) {
        shared_ptr<TrieNode> node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return true;  // プレフィックスが存在する
    }
};




int main() {
    Trie trie;
    trie.insert("apple");
    cout << "Search 'apple': " << trie.search("apple") << endl;  // trueを出力
    cout << "Search 'app': " << trie.search("app") << endl;      // falseを出力
    cout << "Starts with 'app': " << trie.startsWith("app") << endl;  // trueを出力

    trie.insert("app");
    cout << "Search 'app': " << trie.search("app") << endl;  // trueを出力

    return 0;
}
