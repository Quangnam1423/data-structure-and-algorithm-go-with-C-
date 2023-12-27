#include<iostream>
#include<set>

//s.find(value) tra ve iterator.Neu tra ve iterator s.end() tuc la khong tim thay
//s.count(value) tra ve gia tri boolean
// s.insert(value) chen1  gia tri vao set
//s.erase(value) xoa 1 gia tri trong s hoac xoa 1 iterator muon xoa
// s.erase(value or iterator) xoa 1 gia tri trong set
//s.find(value of iterator)
//s.count(value) return boolean value
//multiset<int> name_of_contruction 
//.................................!

//for(set<int>::iterator it = s.begin();it!allocator_type=s.end();it++){
//	cout<<*it<<endl;
//}
//for(auto it=s.begin();it!=s.end();it++){
//	cout<<*it<<endl;
//}
//..................................!


//set luon co thu tu luu tu be den lon va khong co phan tu trung nhau 
//multiset cho phep su dung  
//unorderset
// cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu k
//in ra duoc phan tu lon nhat trong day con do
//output
//10 3
//1 2 3 1 4 5 1 8 9 10
//{1,2,3} {2,3,1} {}
using namespace std;

int main(){
//	multiset<int> ms;
//	ms.insert(100);
//	ms.insert(100);
//	ms.insert(150);
//	ms.insert(200);
//	ms.insert(200);
//	ms.erase(100);  // xoa het tat ca cac phan tu 100 trong mang
	// neu muon chi xoa 1 thang 100 trong set thi phai thong qua iterator*
//	unorderset cunxg tuonwg tu nhu multiset nhung khong xep phan tu theo thu tu tu be den lon ma xep nhu bt giong mang 


	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x : a) cin>>x;
	multiset<int> ms; 
	for(int i=0;i<k;i++){
		ms.insert(a[i]);
	}
	for(int i=k;i<n;i++){
		cout<<*ms.rbegin()<<" ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout<<*ms.rbegin()<<endl;
	return EXIT_SUCCESS; 
}
