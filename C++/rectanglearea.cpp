class Rectangle
{
  public:
     void read_input()
    {
    cin>>width;
    cin>>height;
    }
    void display()
{
    cout<<width<<" "<<height;
    
    }
 protected:
      int width;
      int height;
    
};
class RectangleArea : public Rectangle
{int area;
 public:
   void display()
    {
       area=width*height;
        cout<<"\n"<<area;
    }
};

