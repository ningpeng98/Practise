import com.sun.corba.se.spi.servicecontext.MaxStreamFormatVersionServiceContext;

//Java数组章节练习题
     public class ArrayUtils{

    //1.计算数组中最大值
    public static int arrayMaxElement(int[] data){
         int max=data[0];
         for(int i=0;i<data.length;i++)
         {
             if(data[i]>max)
             {
                max = data[i];
             }
         }
        return max;
    }
    
    //2.计算数组中最小值
    public static int arrayMinElement(int[] data){
        int min=data[0];
        for(int i=0;i<data.length;i++)
        {
            if(data[i]<min)
            {
              min = data[i];
            }
        }
       return min;
    }
    
    
    //3.计算数组值之和
    public static int arrayElementSum(int[] data){
        for(int i=0;i<data.length;i++)
        {


        }
        return -1;
    }
    
    //4.数组拼接
    // A {1,3,5,7,9} B {2,4,6,8,10} -> {1,3,5,7,9,2,4,6,8,10}
    public static int[] arrayJoin(int[] a, int[] b){
        int[] result=
        return null;
    }

    //5.数组截取
    //[start, end)
    // A {1,3,5,7,9} ->(A,1,3) > {3,5}
    public static int[] arraySub(int[] data, int start , int end){
        //TODO
        return null;
    }
    
    //6.数组打印
    public static void printArray(int[] data){
        for(int i:data)
        {
            System.out.println(data[i]);
        }
    }
    
    //7.数组反转
    // 比如：[1,2,3,4] => [4,3,2,1]
    public static void printReversal(int[] data){
        //TODO
    }
    
    public static void main(String[] args){
       int[] data=new int[]{1,2,4,3,7,8,6};
       System.out.println(arrayMaxElement(data));
       System.out.println(arrayMinElement(data));


    }
}
