#include<iostream>
using namespace std;
class F{
	private:
		static F *instance;
		int id;
		F(){};
	public:
		static F *Instance(){
			if(instance==0)instance=new F();
			return instance;
			}
		int operator()(int k){
		id=k;
			cout<<"this is id("<<id<<")"<<endl;
			return 3;
		}
		int d(){
			cout<<"id("<<id<<")"<<endl;
		}
		class Garbo{
		public: ~Garbo(){
		cout<<"deling...";
		if(F::instance){delete F::instance;}}
		};
		static Garbo garbo;
};
F *F::instance=0;
F::Garbo F::garbo;

#define Trace(m) cout<<#m"="<<(m)<<endl;
int main(){
	F *f=F::Instance();
	int i=5;
	(*f)(1);
	f->d();
	(*f)(2);
	//
	F::Instance()->d();
	//
	f->d();
	(*f)(3);
	cout<<"hello"<<endl;
	return 0;
}

