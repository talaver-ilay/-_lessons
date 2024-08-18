#include <iostream>
#include <memory>
// template<class Type> class SmartPointer{
//     private:
//         Type* pointer;
//     public:
//         SmartPointer(Type* p):pointer(p){};
//         operator Type*(){return pointer;}
//         Type* operator ->(){
//             if(!pointer){
//                 pointer = new Type();
//                 std::cerr<<"Bad pointer!"<<std::endl;
//             }
//             return pointer;}
    
// };
// class Foo{
//     private:
//         int a,b;
//     public:
//         Foo():a(0),b(0){};
//         Foo(int a,int b):a(a),b(b){};
//         int Sum(){
//             return a+b;
//         }
// };

struct B;
struct A{
    int value;
    std::shared_ptr<B> b;
    A(){std::cout<<"A()"<<std::endl;}
    ~A(){std::cout<<"~A()"<<std::endl;}
};

struct B{
    int value;
    std::weak_ptr<A> a;
    B(){std::cout<<"B()"<<std::endl;}
    ~B(){std::cout<<"~B()"<<std::endl;}
};
int main(){
    std::shared_ptr<A> a(new A);
    std::shared_ptr<B> b(new B);
    a->b = b;
    b->a = a;
    a->value =123;
    {
        std::shared_ptr<A> aa = b->a.lock();
        std::cout<<aa->value<<std::endl;
        std::cout<<a.use_count()<<std::endl;
    }
    std::cout<<a.use_count()<<std::endl;
    // std::cout<<b->a->value<<std::endl; // error


    // std::unique_ptr<Foo> sp1(new Foo());
    // std::unique_ptr<Foo> sp2;
    // std::cout<<"sp1 : "<<sp1<<"\n";
    // try{
    //     std::cout<<"sp2 : "<<sp2->Sum()<<"\n";}
    // catch(...){
    //     std::cout<<"Bad"<<std::endl;
    // }
    // sp2 = std::move(sp1);
    // std::cout<<"sp1 : "<<sp1<<"\n";
    // std::cout<<"sp2 : "<<sp2<<"\n";
    // std::shared_ptr<Foo> sp1(new Foo());
    
    // std::shared_ptr<Foo> sp2;
    // sp2 = sp1;
    
    // std::cout<<sp1.use_count()<<std::endl;
    // sp1.reset();
    // std::cout<<sp2.use_count()<<std::endl;
    // std::cout<<sp2->Sum()<<std::endl;

    // std::shared_ptr<int> p1(new int(5));
    // std::weak_ptr<int>wp1=p1;
    // {
    //     std::shared_ptr<int>p2=wp1.lock();
    //     if(p2)std::cout<<"Good!"<<std::endl;
    //     else  std::cout<<"Bad!"<<std::endl;
    // };
    // p1.reset();
    // {
    //     std::shared_ptr<int>p2=wp1.lock();
    //     if(p2)std::cout<<"Good!"<<std::endl;
    //     else  std::cout<<"Bad!"<<std::endl;
    // };
    return 0;
}

