class Person{
    public String name;
    public int age;
    public void fun(){
        System.out.println(name+"在"+age+"吃饭");
    }
}

public class Day12_6{
    public static void main(String[] args){
        //根据Person类产生一个Person对象
        Person per = new Person();
        per.name="张三";
        per.age=20;
        per.fun();
    }
}