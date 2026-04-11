// Creating Student class (Blueprint)
class Student {

    // Properties (variables)
    String name;
    int age;

    // Method (function)
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}


// Main class (program starts here)
public class Main {
    public static void main(String[] args) {

        // Creating object of Student class
        Student s1 = new Student();

        // Assigning values
        s1.name = "Rahul";
        s1.age = 18;

        // Calling method
        s1.display();
    }
}