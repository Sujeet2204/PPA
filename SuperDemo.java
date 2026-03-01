class Hello
{
    public int i;

    public Hello(int no)
    {
        System.out.println("Inside Hello constructor");
        this.i=no+1;
    }
    public void Display()
    {
        System.out.println("INside hello display");
    }
}

class Demo extends Hello 
{
    public int i;

    public Demo(int a)
    {
        super(a);
        System.out.println("Inside Demo constructor");
        this.i =a;     

    }
   
    public void Display()
    {
        int i = 0;
        System.out.println("Inside Display"+i);    //0 
        System.out.println("INside Display"+this.i);  //51
        System.out.println("INside Display"+super.i);  //52
        super.Display();     //3rd use
    }
}
class SuperDemo
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(51);
        dobj.Display();        
    }
}
