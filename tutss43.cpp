// Virtual Base Class in C++ 

/*
student --> test
student --> sport
test--> result 
sport --> result
*/


#include<iostream>
using namespace std;

class student
{
 protected:

 int roll_number;

 public:

 void set_rollnum(int a)
 {
     roll_number = a;

 }

void print_rollnum(void)
{
    cout<<"your roll no is "<<roll_number<<endl;

}

};


class test : virtual public student
{
  protected:

  int maths;
  int phycise;

  public:

  void set_sub(int a,int b)
  {
      maths = a;
      phycise = b;

      
  }
  void print_sub(void)
  {
      cout<<"your maths marks is"<<maths<<endl
           <<"and your physice marks is "<<phycise<<endl;

  }

};

class sports : public virtual student
{
  protected:

  int score;
 
  public:

  void set_score(int a)
  {
      score = a;

  }
  void print_score(void)
  {
      cout<<"the score in rope skipping speed event is "<<score<<endl;


  }

};


class result : public test,public sports
{
  protected :

  int result;
 public:
  void set_result()

  {
     result=maths+phycise+score;
     print_rollnum();
     print_sub();
     print_score();
     cout<<"your final result is"<<result<<endl;
  }
};


int main()
{

result divyansh;
divyansh.set_rollnum(0236);
divyansh.set_sub(99,98);
divyansh.set_score(90);
divyansh.set_result();
return 0;
}
