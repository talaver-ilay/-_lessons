#pragma once
#include <iostream>
template <typename Type>
class List{
    private:
        struct Node{
            Type data;
            Node *next;
            Node(const Type& data, Node* next = nullptr):data(data){}
        };
        Node* first;
        Node* last;
        size_t sz{0};
    public:
        List():first(nullptr),last(nullptr){}
        List(Type d):first(nullptr),last(nullptr){
            insert(d);
        }
        ~List(){
        }
       
        bool no_null(){
            return first == nullptr;
        }
        void erase(const Type& d){
            Node *p = find(d);
            Node *before = find(p); 
            if(p != nullptr){
                Node *before = find(p);
                if(p->next == nullptr){delete p;}
                else{
                    before->next = p->next;
                    delete p;
                }
            }else return;

        }
        Node* find(const Type& value){
            Node *p = first;
            for(size_t i(0);i<sz;++i){
                if(p->data == value){
                    sz-=1;
                    return p;
                }else{
                    p = p->next;
                }
            }
            return nullptr;
        }
        Node* find(const Node* p){
            Node *d = first;
            for(size_t i(0);i<sz;++i){
                if(p == d->next){
                    return d;
                }else{
                    d = d->next;
                }
            }
            return nullptr;
        }
        void insert(const Type& d){
            if(no_null()){
                Node* p = new Node(d);
                first = p;
                last = p;
                sz+=1;
                return;
            }
            Node* p = new Node(d);
            last->next = p;
            last = p;
            sz+=1;
        }
        void print(){
            if(no_null()) return;
            Node *p = first; 
            for(size_t i(0);i<sz;++i){
                
                std::cout<<p->data<<" ";
                p = p->next;
            }
            std::cout<<std::endl;
        }


};
