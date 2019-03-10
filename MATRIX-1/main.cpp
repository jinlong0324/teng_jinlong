#include <iostream>

using namespace std;

class Matrix
{
	public:
		Matrix();
		friend Matrix operator +(Matrix &,Matrix &);
		void input();
		void display();

	private:
		int mat[2][3];
};


Matrix::Matrix()
{
	for(int i=0;i<2;i++)
		for(int j=0;j<3;j++)
			mat[i][j]=0;
}


Matrix operator +(Matrix &a,Matrix &b)
{
	Matrix c;
	for(int i=0;i<2;i++)
		for(int j=0;j<3;j++)
			c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
	return c;
}


void Matrix::input()
{
	cout<<"ÊäÈë¾ØÕó:"<<endl;
	for(int i=0;i<2;i++)
		for(int j=0;j<3;j++)
			cin>>mat[i][j];
}


void Matrix::display()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}


int main()
{
	Matrix a,b,c;
	a.input();
	b.input();
	cout<<"¾ØÕóa:"<<endl;
	a.display();
	cout<<"¾ØÕób:"<<endl;
	b.display();
	c=a+b;
	cout<<"¾ØÕóa+¾ØÕób:"<<endl;
	c.display();

	return 0;
}
