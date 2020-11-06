package java1;


import java.util.Scanner;

class Shape{
    int S_lenght;
    int S_breadth;

    void printArea(){
    
    }

    Scanner S_inp = new Scanner(System.in);
}

class Rectangle extends Shape{
    void printArea(){
        System.out.println("Enter the lenght of Rectangle");
        S_lenght = S_inp.nextInt();
        System.out.println("Enter the breadth of Rectangle");
        S_breadth = S_inp.nextInt();

        System.out.println("The AREA of RECTANGLE is  : "+ (S_breadth*S_lenght));
    }
}

class Trinagle extends Shape{
    void printArea(){
        System.out.println("Enter the Height : ");
        S_lenght = S_inp.nextInt();
        System.out.println("Enter the Base : ");
        S_breadth = S_inp.nextInt();

        System.out.println("The AREA of TRIANGLE is : " +(.5*S_breadth*S_lenght));
    }
}

class Circle extends Shape{
    void printArea(){
        System.out.println("Enter the Radius :");
        S_lenght = S_inp.nextInt();

        System.out.println("The AREA of CIRCLE is : "+(3.143*S_lenght*S_lenght));
    }
}


public class App {
    public static void main(String[] args) throws Exception {

        Rectangle R1 = new Rectangle();
        Trinagle T1 = new Trinagle();
        Circle C1 = new Circle();

        R1.printArea();
        T1.printArea();
        C1.printArea();
    }
}