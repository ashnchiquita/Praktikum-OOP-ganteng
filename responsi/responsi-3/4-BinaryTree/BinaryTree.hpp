/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 2 Maret 2023
   	Topik		: Responsi 3
   	Deskripsi	: Binary Tree */

#ifndef __BINARY_TREE
#define __BINARY_TREE

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class BinaryTree {
    private:
        T value;
        vector<BinaryTree<T>> children;
        int numChildren;

    public:
        // Default constructor, set numChildren = 0
        BinaryTree() {
            this->numChildren = 0;
        }

        // Copy constructor
        BinaryTree(const BinaryTree<T>& bt) {
            this->value = bt.value;
            this->numChildren = bt.numChildren;
            
            for (int i = 0; i < this->numChildren; i++) {
                this->children.push_back(bt.children[i]);
            }
        }

        // Destruktor
        ~BinaryTree() {}

        // Setter untuk value
        void setValue(const T & val) {
            this->value = val;
        }

        /*
        Menambahkan anak binary tree dengan value tertentu.
        Fungsi ini membuat sebuah BinaryTree baru dan menambahkannya ke list of children.
        BinaryTree yang baru dibuat kemudian dikembalikan sebagai return value dari fungsi ini.
        Jika jumlah children sudah lebih dari dua, lemparkan exception "Tidak bisa memiliki lebih dari dua children\n".
        */
        BinaryTree<T>& addChild(T val) {
            if (this->numChildren == 2) {
                throw "Tidak bisa memiliki lebih dari dua children\n";
            }
            this->numChildren++;
            BinaryTree<T> bt = BinaryTree<T>();
            bt.setValue(val);
            this->children.push_back(bt);

            return this->children[this->numChildren - 1];
        }

        /*
        Operator overloading untuk mencetak isi tree ke ostream.
        Format : <value>(<binary_tree_1>)(<binary_tree_2>)
        Tidak perlu ada newline di akhir.
        Berbagai contoh pencetakan binary tree :
        - Binary tree of integer tanpa children : 5()()
        - Binary tree of integer dengan satu children : 5(7()())()
        - Binary tree of integer dengan dua children : 5(7()())(6()())
        */
        friend ostream& operator<<(ostream& os, BinaryTree<T> bt) {
            os << bt.value;
            switch (bt.numChildren) {
                case 0:
                    os << "()()";
                    break;
                case 1:
                    os << "(" << bt.children[0] << ")()";
                    break;
                default:
                    os << "(" << bt.children[0] << ")(" << bt.children[1] << ")";
                    break;
            }
            return os;
        }
};

#endif
