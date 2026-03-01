import java.util.zip.DeflaterOutputStream;

class Demo
{}

class ObjectClass
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        System.out.println(dobj.hashCode());
        System.out.println(dobj.getClass());

    }
}