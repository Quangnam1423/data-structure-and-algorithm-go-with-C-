#include<iostream>
#include<vector>
//ham de chen vao vector la name_vector.push_back(value);
// truy cap de in ra gia tri cua cac phan tu thong qua chi so
//v.size();
//v.back la ham lay gia tri cua phan tu cuoi cung
//v.end() v.begin() v.rbegin() deu tro den cac iterator nen muon lay gia tri phai them dau *;cung co the dung *(v.end()-1)de in ra phan tu cuoi cung
//v.resize() thay doi kich thuoc mang capacity.
//pop_back() xoa phan tu cuoi ...... push_back() them phan tu vao cuoi 
//v.reserve(number) dat dung luong cho vector.




using namespace std;
int main(){
	
	vector<int> v;
	//khai bao;
	
	
	
	//vector<int> v;
	//vector<int> v2(n); //khai bao mang vector co san n phan tu;
	//vector<int> v3(n,0); // khai bao mang vector co san n phan tu co gia tri bang 0;
	//vector<int> v4[n]; //khai bao mang vector v co n vector;
	
	
	
	
	//lam viec voi vector;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout<<v.size()  <<endl;
	v.push_back(40);
    //	cout<<v.size()<<endl;  // in ra so phan tu trong vector
    //	cout<<"phan tu dau tien cua vector la:"<<v[0]<<endl; 
    //	cout<<"phan tu dau tien cua vector la:"<<*v.begin()<<endl;
    //	cout<<"phan tu cuoi cung trong vector: "<<v[v.size()-1]<<endl;
    //	cout<"phan tu cuoi cung trong viector la: "<<v.back()<<endl;
    cout<<*v.rbegin()<<"="<<v.back()<<endl;
    cout<<*(v.end()-1)<<endl;
    
    // nhung cach duyet qua cac phan tu trng mang vector :
    //    +. duyet qua index
    //    +.duyet qua for each
    //    +.duyet qua con tro iterator
    for(int x : v){
    	cout<<x<<" ";
	}
	cout<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}

