import java.util.*;

class LearningOOP {
    public static void main(String[] args) {
        Student s1 = new Student(1, "Om", 78.1f);
        Student s2 = new Student(2, "Shivanand", 91.2f);
        Student s3 = new Student(3, "Harshil", 84.3f);
        Student s4 = new Student(s2);
        Student s5 = new Student();
        final Student s6 = new Student(4, "Hardik", 81.5f);
        s6.name = "Mayur";
        System.out.println(s6.name);
        s1.displayName();
        System.out.println(s1.rollNo + " " + s1.name + " " + s1.marks);
        s2.displayName();
        System.out.println(s2.rollNo + " " + s2.name + " " + s2.marks);
        s3.displayName();
        System.out.println(s3.rollNo + " " + s3.name + " " + s3.marks);
        s4.displayName();
        System.out.println(s4.rollNo + " " + s4.name + " " + s4.marks);
        s5.displayName();
        System.out.println(s5.rollNo + " " + s5.name + " " + s5.marks);
        s6.displayName();
        System.out.println(s6.rollNo + " " + s6.name + " " + s6.marks);
    }
}

class Student {
    int rollNo;
    String name;
    float marks;

    void displayName() {
        System.out.println(this.name);
    }

    Student() {
        this(0, "ABC", 100.0f);
    }

    Student(Student obj) {
        this.rollNo = obj.rollNo;
        this.name = obj.name;
        this.marks = obj.marks;
    }

    Student(int roll, String naam, float mark) {
        this.rollNo = roll;
        this.name = naam;
        this.marks = mark;
    }
}

// Array of Objects:
/*
 * // Student[] studArr = new Student[3];
 * // System.out.println(Arrays.toString(studArr));
 * // studArr[0].rollNo=1;
 * // studArr[0].name="Om";
 * // studArr[0].marks=27.0f;
 * 
 * // studArr[1].rollNo=2;
 * // studArr[1].name="Shivanand";
 * // studArr[1].marks=29.0f;
 * 
 * // studArr[2].rollNo=3;
 * // studArr[2].name="Harshil";
 * // studArr[2].marks=22.0f;
 * 
 * // System.out.println("Student 1 Details:");
 * // System.out.println(studArr[0].rollNo);
 * // System.out.println(studArr[0].name);
 * // System.out.println(studArr[0].marks);
 * 
 * // System.out.println("Student 2 Details:");
 * // System.out.println(studArr[1].rollNo);
 * // System.out.println(studArr[1].name);
 * // System.out.println(studArr[1].marks);
 * 
 * // System.out.println("Student 3 Details:");
 * // System.out.println(studArr[2].rollNo);
 * // System.out.println(studArr[2].name);
 * // System.out.println(studArr[2].marks);
 */