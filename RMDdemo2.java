class Base
{

    public int i,j;
    public void fun()
    {
        System.out.println("INside Base fun");
    } 
    public void gun()
    {
        System.out.println("INside Base gun");
    } 
    public void sun()
    {
        System.out.println("INside Base sun");
    } 
    public void bun()
    {
        System.out.println("INside Base bun");
    } 
}

class Derived extends Base
{
    public int x;
    public void gun()
{
    System.out.println("INside Derived gun");
} 
    public void sun()
{
    System.out.println("INside Derived sun");
} 
    public void run()
{
    System.out.println("INside Derived run");
} 
    public void mun()
{
    System.out.println("INside Derived mun");
} 
}

class RMDdemo2
{
    public static void main(String A[])
    {
        Base bp =new Derived();           //UP casting
        
        bp.fun();   //base fun
        bp.gun();   //Derived gun
        bp.sun();   //Derived sun
       // bp.run();   //Error
       // bp.mun();   //Error
        bp.bun();   //Base bun

    }
}