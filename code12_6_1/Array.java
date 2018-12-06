public class Array{
    public static void main(String[] args) {
        int i=20;
        long ret=Test(i);
        System.out.println(ret);
    }
    public static long Test(int i)
    {

        if(i==1)
        {
        return 1L;
        }
        else
        {
        return i*Test(i-1);
        }

    }
}
