import java.io.Serializable;
public class LoginBean implements Serializable
{
    private static final long serialVersionUID = 1 L;
    private String username;
    private String password;
    public String getUsername()
    {
        return username;
    }
    public void setUsername(String username)
    {
        this.username = username;
    }
    public String getPassword()
    {
        return password;
        public void setPassword(String password)
        {
            this.password = password;
        }
    }
}


import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import net.javaguides.login.bean.LoginBean;
import net.javaguides.login.database.LoginDao;

/**
* @email Ramesh Fadatare
*/

@WebServlet("/login")
public class LoginServlet extends HttpServlet
{
    private static final long serialVersionUID = 1 L;
    private LoginDao loginDao;
    public void init()
    {
        loginDao = new LoginDao();
    }
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
    {
        String username = request.getParameter("username");
        String password = request.getParameter("password");
        LoginBean loginBean = new LoginBean();
        loginBean.setUsername(username);
        loginBean.setPassword(password);
        try
        {
            if (loginDao.validate(loginBean))
            {
                response.sendRedirect("loginsuccess.html");
            }
            else
            {
                HttpSession session = request.getSession();
            }
        }
        catch (ClassNotFoundException e)
        {
            e.printStackTrace();
        }
    }
}

<!DOCTYPE html>
<html>
    <head>
        <meta charset="ISO-8859-1">
        <title>Insert title here</title>
    </head>
    <body>
        <div align="center">
        <h1>Welcome to Login Form</h1>
        <form action="login" method="post">
        <table style="with: 100%">
        <tr>
        <td>UserName</td>
        <td><input type="text" name="username" /></td>
        </tr>
        <tr>
        <td>Password</td>
        <td><input type="password" name="password" /></td>
        </tr>
        </table>
        <input type="submit" value="Submit" />
        </form>
        </div>
    </body>
</html>





CREATE TABLE `employee` (
`id` int(3) NOT NULL AUTO_INCREMENT,
`first_name` varchar(20) DEFAULT NULL,
`last_name` varchar(20) DEFAULT NULL,
`username` varchar(250) DEFAULT NULL,
`password` varchar(20) DEFAULT NULL,
`address` varchar(45) DEFAULT NULL,
`contact` varchar(45) DEFAULT NULL,
PRIMARY KEY (`id`))
ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


package net.javaguides.jsp.jdbc.bean;
import java.io.Serializable;
/**
* JavaBean class used in jsp action tags.
* @author Ramesh Fadatare
*/
public class Employee implements Serializable
{
    private static final long serialVersionUID = 1 L;
    private String firstName;
    private String lastName;
    private String username;
    private String password;
    private String address;
    private String contact;
    public String getFirstName()
    {
        return firstName;
    }
    public void setFirstName(String firstName)
    {
        this.firstName = firstName;
    }
    public String getLastName()
    {
        return lastName;
    }
    public void setLastName(String lastName)
    {
        this.lastName = lastName;
    }
    public String getUsername()
    {
        return username;
    }
    public void setUsername(String username)
    {
        this.username = username;
    }
    public String getPassword()
    {
        return password;
    }
    public void setPassword(String password)
    {
        this.password = password;
    }
    public String getAddress()
    {
        return address;
    }
    public void setAddress(String address)
    {
        this.address = address;
    }
    public String getContact()
    {
        return contact;
    }
    public void setContact(String contact)
    {
        this.contact = contact;
    }
}


package net.javaguides.jsp.jdbc.database;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import net.javaguides.jsp.jdbc.bean.Employee;
public class EmployeeDao
{
    public int registerEmployee(Employee employee) throws ClassNotFoundException
    {
        String INSERT_USERS_SQL = "INSERT INTO employee" + " (id, first_name, last_name, username, password, address, contact) VALUES " + " (?, ?, ?, ?, ?,?,?);";
        int result = 0;
        Class.forName("com.mysql.jdbc.Driver");
        try (Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/employees?useSSL=false", "root", "root");
        // Step 2:Create a statement using connection object
        PreparedStatement preparedStatement = connection.prepareStatement(INSERT_USERS_SQL))
        {
            preparedStatement.setInt(1, 1);
            preparedStatement.setString(2, employee.getFirstName());
            preparedStatement.setString(3, employee.getLastName());
            preparedStatement.setString(4, employee.getUsername());
            preparedStatement.setString(5, employee.getPassword());
            preparedStatement.setString(6, employee.getAddress());
            preparedStatement.setString(7, employee.getContact());
            System.out.println(preparedStatement);

            // Step 3: Execute the query or update query
            result = preparedStatement.executeUpdate();
        } 
        catch (SQLException e)
        {
            // process sql exception
            printSQLException(e);
        }
        return result;
    }
    private void printSQLException(SQLException ex)
    {
        for (Throwable e: ex)
        {
            if (e instanceof SQLException)
            {
                e.printStackTrace(System.err);
                System.err.println("SQLState: " + ((SQLException) e).getSQLState());
                System.err.println("Error Code: " + ((SQLException) e).getErrorCode());
                System.err.println("Message: " + e.getMessage());
                Throwable t = ex.getCause();
                while (t != null)
                {
                    System.out.println("Cause: " + t);
                    t = t.getCause();
                }   
            }
        }
    }
}







import  java.util.Scanner;
class GetWordCount
{
    public static void main(String arg[])
    {
        int i, count=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string");
        String name = sc.nextLine();
        for(i=0; i<name.length(); i++)
        {
            if(name.charAt(i)=='  ' && name.charAt(i+1)!='  ')
            {
                count++;
            }
        }
        System.out.print("Word count of("+name+")---------->"+count);
    }
}
