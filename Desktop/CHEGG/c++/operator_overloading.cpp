class fraction {
  int num,den;
  public:
      fraction(int num,int den){
        this->den=den;
        this->num=num;
      }
      fration operator+(fraction f2)
      {
        int lcm=this->den*f2.den);
        int n=this->num*f2.den+this->den*f2.num;
        fraction newf(n,lcm);
        return newf;
      }
      void print(){
      cout<<this.num<<" "<<this->den<<endl;
      return;
      }

};
