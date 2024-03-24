/* Program to create a Quiz with a variety of choices for subjects.
   Also to display the score after the user has attempted any question and ask whether he wants to play again
   and also print the final score after the user exits the Quiz. */  
import java.io.*;
//Calling I/O Package for input and output using character stream and Buffered Reader....
public class Quiz
{
    int score=0; //int variable to store the points scored by the user in the quiz
    int counter=0; //counter variable
    public void questions() throws IOException
    {
        System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        System.out.println("***************************    WELCOME TO THE 'QUIZ SHOW'    ****************************");
        System.out.println("=========================================================================================");
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in)); 
        System.out.println("RULES OF THE QUIZ GAME:-\n1.\tYou will be given five subjects to choose from under which 10 multiple choice \nquestions will\t be asked related to that Subject.\n2.\tEach question will have 4 options.\n3.\tEnter the answer number as your answer.\n4.\tFor each correct answer you will gain 10 points and for a wrong answer you\n\twill lose 5 points");
        Q: //label declared to continue the loop
        do
        {
        System.out.println("\nWould you like to play the Quiz?\nType 'y' for Yes and 'n' for No");
        String x = br.readLine();
        if(x.equalsIgnoreCase("y"))
        {
            counter=0;
        }
        else if(x.equalsIgnoreCase("n"))
        {
            break Q; //to exit from the entire program
        }
        else 
        { 
            System.out.println("Invalid choice!!! Enter either 'y' or 'n'");
            continue Q; //to again start the loop
        }  
          
        System.out.println();
        System.out.println("\t\t\t\t\t   !!!!!!! GET READY TO ANSWER A BRAIN-CRACKING QUIZ !!!!!!!"); 
        System.out.println("\nENTER YOUR CHOICE OF INTEREST");
        //statement for entering the choice of subject to be attempted
        System.out.println("\n1.\tScience\n2.\tGeneral Knowledge\n3.\tSocial Studies\n4.\tComputer Applications\n5.\tEnglish\n6.\tExit");
        String ch=br.readLine();
        int choice=Integer.parseInt(ch);
 
        switch(choice)
        {   
           case 1:
           //Question 1
           System.out.println("\nQuestion 1.\tThe acceleration given to a body by a force applied to it is directly proportional to\n\t\t(a) Force\t(b) Mass\t(c) Acceleration\t(d) Momentum");
           System.out.println("\t\t#######Enter your choice#######");
           String ans1=br.readLine();
           if(ans1.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)FORCE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 2
           System.out.println("\nQuestion 2.\tWhich one of the following is seldom responsible for cracking of rocks?\n\t\t(a) Covalent bond\t(b) Hydrogen bond\t(c) Metallic bond\t(d) Ionic bond");
           System.out.println("\t\t#######Enter your choice#######");
           String ans2=br.readLine();
           if(ans2.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)HYDROGEN BOND ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 3
           System.out.println("\nQuestion 3.\tName the machine used for converting mechanical energy into electrical energy.\n\t\t(a) generator\t(b) motor\t(c) transformer\t(d) dynamo");
           System.out.println("\t\t#######Enter your choice#######");
           String ans3=br.readLine();
           if(ans3.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)GENERATOR ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 4
           System.out.println("\nQuestion 4.\tWhat is the study of birds is known as?\n\t\t(a) anthropology\t(b) ophthalmology\t(c) ornithology\t(d) seismology");
           System.out.println("\t\t#######Enter your choice#######");
           String ans4=br.readLine();
           if(ans4.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)ORNITHOLOGY ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 5
           System.out.println("\nQuestion 5.\tWhich blood vessel carries pure blood from the lungs to the heart?\n\t\t(a) Pulmonary artery\t(b) Aorta\t(c) Pulmonary vein\t(d) Vena cava");
           System.out.println("\t\t#######Enter your choice#######");
           String ans5=br.readLine();
           if(ans5.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)PULMONARY VEIN ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 6
           System.out.println("\nQuestion 6.\tWhich of these scatters sunlight directly back into space?\n\t\t(a) aerosol\t(b) aerostat\t(c) thermocol\t(d) asbestos");
           System.out.println("\t\t#######Enter your choice#######");
           String ans6=br.readLine();
           if(ans6.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)AEROSOL ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 7
           System.out.println("\nQuestion 7.\tThe medical term hysterectomy refers to the removal of which organ?\n\t\t(a) Kidney\t(b) Liver\t(c) Lungs\t(d) Uterus");
           System.out.println("\t\t#######Enter your choice#######");
           String ans7=br.readLine();
           if(ans7.equalsIgnoreCase("d"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)UTERUS ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 8
           System.out.println("\nQuestion 8.\tWhich of these is the lightest chemical element?\n\t\t(a) Helium\t(b) Oxygen\t(c) Hydrogen\t(d) Nitrogen");
           System.out.println("\t\t#######Enter your choice#######");
           String ans8=br.readLine();
           if(ans8.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)HYDROGEN ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 9
           System.out.println("\nQuestion 9.\tWhich of the following paths does light take to travel?\n\t\t(a) Straight Line\t(b) Curved Line\t(c) Circular Line\t(d) Randomly");
           System.out.println("\t\t#######Enter your choice#######");
           String ans9=br.readLine();
           if(ans9.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)STRAGHT LINE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 10
           System.out.println("\nQuestion 10.\tWhat does the 'X' stand for in the term X-ray?\n\t\t(a) Exact\t(b) Unknown\t(c) Electric\t(d) Ultraviolet");
           System.out.println("\t\t#######Enter your choice#######");
           String ans10=br.readLine();
           if(ans10.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)UNKNOWN ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           
           break;
           
           case 2: 
           System.out.println("Choose anyone of the following topics:\n(1)\tIndia(National)\n(2)\tWorld(International)\n(3)\tSports\n(4)\tEntertainment\n(5)\tBrain Game");
           String ch1=br.readLine(); //to accept the user's choice for G.K. 
           int choice1=Integer.parseInt(ch1);
           switch(choice1)
           {
              case 1:
              //Question 11
              System.out.println("\nQuestion 1.\tWhich date, marked the first anniversary of the new state of southern India- Telangana?\n\t\t(a) 9 September 2015\t(b) 7 August 2015\t(c) 23 December 2014\t(d) 2 June 2015");
              System.out.println("\t\t#######Enter your choice#######");
              String ans11=br.readLine();
              if(ans11.equalsIgnoreCase("d"))
               {
                   System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                   score+=10;
                   System.out.println("\t\tYour Score becomes "+score);
               }
               else
               {
                   System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)2 JUNE 2015 ~~~~~~~~");
                   score-=5;
                   System.out.println("\t\tYour Score becomes "+score);
               }
              //Question 12
              System.out.println("\nQuestion 2.\tIn which city was the Indian Navy’s latest anti-submarine warfare class stealth corvette, the INS Kavaratti, launched?\n\t\t(a) Mumbai\t(b) Chennai\t(c) Kolkata\t(d) Kanyakumari"); 
              System.out.println("\t\t#######Enter your choice#######");
              String ans12=br.readLine();
              if(ans12.equalsIgnoreCase("c"))
              {
                   System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                   score+=10;
                   System.out.println("\t\tYour Score becomes "+score);
              }
              else 
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)KOLKATA ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 13 
              System.out.println("\nQuestion 3.\tWhich of these is the official language of Goa?\n\t\t(a) Gujarati\t(b) Konkani\t(c) Kannada\t(d) Bodo");
              System.out.println("\t\t#######Enter your choice#######");
              String ans13=br.readLine();
              if(ans13.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)KONKANI ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 14
              System.out.println("\nQuestion 4.\tWhat is the name selected for the new capital city of Andhra Pradesh?\n\t\t(a) Amaravati\t(b) Hyderabad\t(c) Visakhapatnam\t(d) Vijayawada"); 
              System.out.println("\t\t#######Enter your choice#######");
              String ans14=br.readLine();
              if(ans14.equalsIgnoreCase("a"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)AMARAVATI ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 15
              System.out.println("\nQuestion 5.\tWhat words were inscribed on the first postage stamp issued in independent India?\n\t\t(a) Vande Mataram\t(b) Satyamev Jayate\t(c) Jai Hind\t(d) Azad Hind");
              System.out.println("\t\t#######Enter your choice#######");
              String ans15=br.readLine();
              if(ans15.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)JAI HIND ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              break;
              
              case 2:
              //Question 16
              System.out.println("\nQuestion 1.\tIn 2015, the G7 Summit was held in which country?\n\t\t(a) India\t(b) Germany\t(c) France\t(d) China");
              System.out.println("\t\t#######Enter your choice#######");
              String ans16=br.readLine();
              if(ans16.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)GERMANY ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 17
              System.out.println("\nQuestion 2.\tWhich country topped the 2015 global peace index?\n\t\t(a) Poland\t(b) Ireland\t(c) Iceland\t(d) Switzerland");
              System.out.println("\t\t#######Enter your choice#######");
              String ans17=br.readLine();
              if(ans17.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)ICELAND ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
               
              }
              //Question 18
              System.out.println("\nQuestion 3.\tIn April 2015, who was appointed Crown Prince of Saudi Arabia?\n\t\t(a) Mohammad bin Salman\t(b) Abdulla\t(c) Muqrin\t(d) Muhammad bin Nayef");
              System.out.println("\t\t#######Enter your choice#######");
              String ans18=br.readLine();
              if(ans18.equalsIgnoreCase("d"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)MUHAMMAD BIN NAYEF ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
               
              }
              //Question 19
              System.out.println("\nQuestion 4.\tWho was the first person to walk in space?\n\t\t(a) Alexei Leonov\t(b) John Glenn\t(c) Leonid Kizim\t(d) Yuri Romanenko");
              System.out.println("\t\t#######Enter your choice#######");
              String ans19=br.readLine();
              if(ans19.equalsIgnoreCase("a"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)ALEXEI LEONOV ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
               
              }
              //Question 20
              System.out.println("\nQuestion 5.\tIn which town of Pakistan was Osama bin laden killed by the US Special Forces on 2 May 2011?\n\t\t(a) Karachi\t(b) Lahore\t(c) Abbottabad\t(d) Rawalpindi");
              System.out.println("\t\t#######Enter your choice#######");
              String ans20=br.readLine();
              if(ans20.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)ABBOTTABAD ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
               
              }
              break;
              
              case 3:
              //Question 21
              System.out.println("\nQuestion 1.\tName the famous Martial art which belongs to South Korea.\n\t\t(a) Karate\t(b) Aikido\t(c) Taekwondo\t(d) Silambam");
              System.out.println("\t\t#######Enter your choice#######");
              String ans21=br.readLine();
              if(ans21.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)TAEKWONDO ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
               
              }
              //Question 22
              System.out.println("\nQuestion 2.\tWho won the Men’s Singles title in Wimbledon 2015?\n\t\t(a) Andy Murray\t(b) Rodger Federer\t(c) Rafael Nadal\t(d) Novak Djokovic");
              System.out.println("\t\t#######Enter your choice#######");
              String ans22=br.readLine();
              if(ans22.equalsIgnoreCase("d"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)NOVAK DJOKOVIC ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 23
              System.out.println("\nQuestion 3.\tWhich country hosted and won the Copa America Football Tournament in 2015?\n\t\t(a) Chile\t(b) Argentina\t(c) Brazil\t(d) Peru");
              System.out.println("\t\t#######Enter your choice#######");
              String ans23=br.readLine();
              if(ans23.equalsIgnoreCase("a"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)CHILE ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 24
              System.out.println("\nQuestion 4.\tWhich was the first team to score over 400 runs in a cricket World Cup match?\n\t\t(a) Sri Lanka\t(b) India\t(c) South Africa\t(d) Pakistan");
              System.out.println("\t\t#######Enter your choice#######");
              String ans24=br.readLine();
              if(ans24.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)INDIA ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 25
              System.out.println("\nQuestion 5.\tIn the Olympic Games, how many hurdles an athlete have to cross in the 400m hurdles race?\n\t\t(a) 10\t(b) 12\t(c) 7\t(d) 5");
              System.out.println("\t\t#######Enter your choice#######");
              String ans25=br.readLine();
              if(ans25.equalsIgnoreCase("a"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)10 ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              break;
               
              case 4:
              //Question 26
              System.out.println("\nQuestion 1.\tWho directed the film Titanic?\n\t\t(a) Martin Scorsese\t(b) James Cameron\t(c) David Fincher\t(d) Kathryn Bigelow");
              System.out.println("\t\t#######Enter your choice#######");
              String ans26=br.readLine();
              if(ans26.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)JAMES CAMERON ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 27
              System.out.println("\nQuestion 2.\tName the lead actor in the 2015 Hollywood film 'Mission Impossible: 5'.\n\t\t(a) Dwayne Johnson\t(b) Tom Cruise\t(c) James Bond\t(d) Vin Diesel");
              System.out.println("\t\t#######Enter your choice#######");
              String ans27=br.readLine();
              if(ans27.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)TOM CRUISE ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 28
              System.out.println("\nQuestion 3.\tMira Rajput is married to which Bollywood actor?\n\t\t(a) Shahid Kapoor\t(b) Shah Rukh Khan\t(c) Hrithik Roshan\t(d) Aamir Khan");
              System.out.println("\t\t#######Enter your choice#######");
              String ans28=br.readLine();
              if(ans28.equalsIgnoreCase("a"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)SHAHID KAPOOR ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 29
              System.out.println("\nQuestion 4.\tWho won the Best Actress award at the 2015 IIFA Awards?\n\t\t(a) Katrina Kaif\t(b) Deepika Padukone\t(c) Kangana Ranaut\t(d) Priyanka Chopra");
              System.out.println("\t\t#######Enter your choice#######");
              String ans29=br.readLine();
              if(ans29.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)KANGANA RANAUT ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 30
              System.out.println("\nQuestion 5.\tName the host of Big Boss 8, who replaced Salman Khan.\n\t\t(a) Arbaaz Khan\t(b) Karan Johar\t(c) Rohit Shetty\t(d) Farah Khan");
              System.out.println("\t\t#######Enter your choice#######");
              String ans30=br.readLine();
              if(ans30.equalsIgnoreCase("d"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)FARAH KHAN ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              break; 
             
              case 5:
              //Question 31
              System.out.println("\nQuestion 1.\tIn a certain code, PLEASE is written as 151140184. How will you write BREAK using that code?\n\t\t(a) 2176110\t(b) 1174010\t(c) 1205113\t(d) 12908867");
              System.out.println("\t\t#######Enter your choice#######");
              String ans31=br.readLine();
              if(ans31.equalsIgnoreCase("b"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)1174010 ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 32
              System.out.println("\nQuestion 2.\tA boy and a doctor were fishing. The boy is the doctor’s son but the doctor is not the boy’s father. Who is the doctor?\n\t\t(a) The boy’s Uncle\t(b) The boy’s son\t(c) The boy’s mother\t(d) The boy himself");
              System.out.println("\t\t#######Enter your choice#######");
              String ans32=br.readLine();
              if(ans32.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)THE BOY'S MOTHER ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 33
              System.out.println("\nQuestion 3.\tIn the given series, which number would logically replace the question mark?\n\t\t“2 6 18 54 ?”\n\t\t(a) 78\t(b) 102\t(c) 161\t(d) 162");
              System.out.println("\t\t#######Enter your choice#######");
              String ans33=br.readLine();
              if(ans33.equalsIgnoreCase("d"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)162 ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 34
              System.out.println("\nQuestion 4.\tIn a certain code language, if LANGUAGE is written as LEAGNAGU, how will you write SEMOLINA in that language?\n\t\t(a) SLAMENOI\t(b) SOLMENAI\t(c) SMLNEOIA\t(d) SAENMIOL");
              System.out.println("\t\t#######Enter your choice#######");
              String ans34=br.readLine();
              if(ans34.equalsIgnoreCase("d"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)SAENMIOL ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              //Question 35
              System.out.println("\nQuestion 5.\tIf you add the number of days in a leap year to the number of spokes in the Ashoka Chakra and divide it with 1/2, what number will you get?\n\t\t(a) 195\t(b) 504\t(c) 780\t(d) 890");
              System.out.println("\t\t#######Enter your choice#######");
              String ans35=br.readLine();
              if(ans35.equalsIgnoreCase("c"))
              {
                  System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
                  score+=10;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              else
              {
                  System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)780 ~~~~~~~~");
                  score-=5;
                  System.out.println("\t\tYour Score becomes "+score);
              }
              break;
              
              default:
              System.out.println("Invalid choice!!!");
           }       
           break;
           
           case 3:
           //Question 36
           System.out.println("\nQuestion 1.\tWho was the Prime Minister of England when India became independent?\n(a) Clement Atlee\t(b) Winston Churchill\t(c) Anthony Eden\t(d) Harold Wilson");
           System.out.println("#######Enter your choice#######");
           String ans36=br.readLine();
           if(ans36.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)CLEMENT ATLEE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 37
           System.out.println("\nQuestion 2.\tWho appoints the Chief Justice of India?\n\t\t(a) President\t(b) Prime Minister\t(c) Speaker of Lok Sabha\t(d) Cabinet Ministers");
           System.out.println("\t\t#######Enter your choice#######");
           String ans37=br.readLine();
           if(ans37.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)PRESIDENT ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 38
           System.out.println("\nQuestion 3.\tWho founded the Pala Empire?\n\t\t(a) Devapala\t(b) Dharmapala\t(c) Gopala I\t(d) Ashoka");
           System.out.println("\t\t#######Enter your choice#######");
           String ans38=br.readLine();
           if(ans38.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)GOPALA I ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 39
           System.out.println("\nQuestion 4.\tWhat is the abnormal warming of surface water in the South Pacific every few years called?\n\t\t(a) El Paso\t(b) El Nino\t(c) El Nina\t(d) La Nina");
           System.out.println("\t\t#######Enter your choice#######");
           String ans39=br.readLine();
           if(ans39.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)EL NINO ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 40
           System.out.println("\nQuestion 5.\tWhich of these is not an official language of the United Nations?\n\t\t(a) Spanish\t(b) French\t(c) Italian\t(d) English");
           System.out.println("\t\t#######Enter your choice#######");
           String ans40=br.readLine();
           if(ans40.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)ITALIAN ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 41
           System.out.println("\nQuestion 6.\tWhat is a grassy plain in tropical and subtropical region, with a few trees generally called?\n\t\t(a) tundra\t(b) savannah\t(c) rift valley\t(d) atoll");
           System.out.println("\t\t#######Enter your choice#######");
           String ans41=br.readLine();
           if(ans41.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)SAVANNAH ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 42
           System.out.println("\nQuestion 7.\tWesterlies are winds which generally travel from:\n\t\t(a) North to South\t(b) East to West\t(c) South to East\t(d) West to East");
           System.out.println("\t\t#######Enter your choice#######");
           String ans42=br.readLine();
           if(ans42.equalsIgnoreCase("d"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)WEST TO EAST ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 43
           System.out.println("\nQuestion 8.\tWhich of these rivers does not flow into the Bay of Bengal?\n\t\t(a) Tungabhadra\t(b) Sutlej\t(c) Mahanadi\t(d) Godavari");
           System.out.println("\t\t#######Enter your choice#######");
           String ans43=br.readLine();
           if(ans43.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)SUTLEJ ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 44
           System.out.println("\nQuestion 9.\tOver which of these territories did the French ruled till 1951?\n\t\t(a) Goa\t(b) Chandernagore\t(c) Lakshadweep\t(d) Daman & Diu");
           System.out.println("\t\t#######Enter your choice#######");
           String ans44=br.readLine();
           if(ans44.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)CHANDERNAGORE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 45
           System.out.println("\nQuestion 10.\tHown many languages are listed in the 8th Schedule of the Indian Constitution?\n\t\t(a) Twelve\t(b) Fifteen\t(c) Twenty-two\t(d) Twenty-one");
           System.out.println("\t\t#######Enter your choice#######");
           String ans45=br.readLine();
           if(ans45.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)TWENTY-TWO ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           break;
           
           case 4:
           //Question 46
           System.out.println("\nQuestion 1.\tGiven below is an arithmetic expression. Which of the following parts of the expression will be calculated first in QBASIC?\n\t\tA+B/5*C-D^2\n\t\t(a) B/5\t(b) D^2\t(c) A+B\t(d) 5*C");
           System.out.println("\t\t#######Enter your choice#######");
           String ans46=br.readLine();
           if(ans46.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)D^2 ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 47
           System.out.println("\nQuestion 2.\tIBM-704 is an example of which generation computer?\n\t\t(a) First\t(b) Second\t(c) Third\t(d) Fourth");
           System.out.println("\t\t#######Enter your choice#######");
           String ans47=br.readLine();
           if(ans47.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)FIRST ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 48
           System.out.println("\nQuestion 3.\tWhich was the first electronic general purpose computer in the world?\n\t\t(a) UNIVAC\t(b) EDVAC\t(c) ENIAC\t(d) None of these");
           System.out.println("\t\t#######Enter your choice#######");
           String ans48=br.readLine();
           if(ans48.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)ENIAC ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 49
           System.out.println("\nQuestion 4.\tIn JAVA, Arrays are passed using the call by _______ method by default\n\t\t(a) value\t(b) reference\t(c) primitives\t(d) none of these");
           System.out.println("\t\t#######Enter your choice#######");
           String ans49=br.readLine();
           if(ans49.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)REFERENCE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 50
           System.out.println("\nQuestion 5.\tWhich of the following is the second generation of supercomputer under the Blue Gene series by IBM?\n\t\t(a) Blue Gene/L\t(b) Blue Gene/P\t(c) Blue Gene/Q\t(d) Blue Gene/R");
           System.out.println("\t\t#######Enter your choice#######");
           String ans50=br.readLine();
           if(ans50.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)BLUE GENE/P ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 51
           System.out.println("\nQuestion 6.\tIn JAVA, BufferedReader is used to balance the speed between:\n\t\t(a) CPU and input devices\t(b) various input devices\t(c) input and output devices\t(d) none of these");
           System.out.println("\t\t#######Enter your choice#######");
           String ans51=br.readLine();
           if(ans51.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)CPU and input devices ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 52
           System.out.println("\nQuestion 7.\tWhich of the following is NOT used to connect to the Internet?\n\t\t(a) ISDN\t(b) DSL\t(c) VDU\t(d) MODEM");
           System.out.println("\t\t#######Enter your choice#######");
           String ans52=br.readLine();
           if(ans52.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)VDU ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 53
           System.out.println("\nQuestion 8.\tIn QBASIC, what is the shortcut keystroke for PRINT?\n\t\t(a) #\t(b) ?\t(c) *\t(d) @");
           System.out.println("\t\t#######Enter your choice#######");
           String ans53=br.readLine();
           if(ans53.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)? ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 54
           System.out.println("\nQuestion 9.\tName the software for iPhone from Apple Inc. that provides user with a personal assistant that can perform various tasks based on the user’s voice commands.\n\t\t(a) Pulse\t(b) Dragon\t(c) Siri\t(d) Safari");
           System.out.println("\t\t#######Enter your choice#######");
           String ans54=br.readLine();
           if(ans54.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)SIRI ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 55
           System.out.println("\nQuestion 10.\tIn JAVA, an instance of which class can be used to manipulate an individual AS/400 printer?\n\t\t(a) Printer\t(b) Scanner\t(c) PrintObject\t(d) PrinterJob");
           System.out.println("\t\t#######Enter your choice#######");
           String ans55=br.readLine();
           if(ans55.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)PRINTER ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           break;
           
           case 5:
           //Question 56
           System.out.println("\nQuestion 1.\tName the type of fiction that has elements of magic and supernatural phenomenon.\n\t\t(a) Play\t(b) Non-fiction\t(c) Fantasy\t(d) Folk tale");
           System.out.println("\t\t#######Enter your choice#######");
           String ans56=br.readLine();
           if(ans56.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)FANTASY ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 57
           System.out.println("\nQuestion 2.\tWho wrote the poem Ulysses?\n\t\t(a) Lord Tennyson\t(b) James Joyce\t(c) William Shakespeare\t(d) Leo Tolstoy");
           System.out.println("\t\t#######Enter your choice#######");
           String ans57=br.readLine();
           if(ans57.equalsIgnoreCase("d"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)LEO TOLSTOY ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 58
           System.out.println("\nQuestion 3.\tSelect the correct meaning of the idiom: ‘Cry for the Moon’.\n\t\t(a) To win a victory\t(b) To give a poor show\t(c) To wish for something impossible\t(d) To repent");
           System.out.println("\t\t#######Enter your choice#######");
           String ans58=br.readLine();
           if(ans58.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)TO WISH FOR SOMETHING IMPOSSIBLE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 59
           System.out.println("\nQuestion 4.\tFind out the opposite of the word: He is a very “timid” person.\n\t\t(a) dashing\t(b) outgoing\t(c) bold\t(d) chivalrous");
           System.out.println("\t\t#######Enter your choice#######");
           String ans59=br.readLine();
           if(ans59.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)BOLD ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 60
           System.out.println("\nQuestion 5.\tWho won the Noble Prize in Literature in 2014?\n\t\t(a) Nadine Gordimer\t(b) Alice Munro\t(c) Patrick Modiano\t(d) Orhan Pamuk");
           System.out.println("\t\t#######Enter your choice#######");
           String ans60=br.readLine();
           if(ans60.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)PATRICK MODIANO ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 61
           System.out.println("\nQuestion 6.\tName the Playwright of ‘The Homecoming’.\n\t\t(a) Samuel Beckett\t(b) Arthur Miller\t(c) Harold Pinter\t(d) Tennessee Williams");
           System.out.println("\t\t#######Enter your choice#######");
           String ans61=br.readLine();
           if(ans61.equalsIgnoreCase("c"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (C)HAROLD PINTER ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 62
           System.out.println("\nQuestion 7.\tGive the correct meaning of the phrase: ‘To sail in the same boat’.\n\t\t(a) having the same fate\t(b) to sail together\t(c) having a common interest\t(d) to be seasick");
           System.out.println("\t\t#######Enter your choice#######");
           String ans62=br.readLine();
           if(ans62.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)HAVING THE SAME FATE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 63
           System.out.println("\nQuestion 8.\tWho wrote the play ‘Julius Caesar’?\n\t\t(a) William Shakespeare\t(b) Anton Chekov\t(c) Sophocles\t(d) George Bernard Shaw");
           System.out.println("\t\t#######Enter your choice#######");
           String ans63=br.readLine();
           if(ans63.equalsIgnoreCase("a"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (A)WILLIAM SHAKESPEARE ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 64
           System.out.println("\nQuestion 9.\tFill in the blank: I have been married _________ Monica for over ten years.\n\t\t(a) at\t(b) to\t(c) with\t(d) into");
           System.out.println("\t\t#######Enter your choice#######");
           String ans64=br.readLine();
           if(ans64.equalsIgnoreCase("b"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (B)TO ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           //Question 65
           System.out.println("\nQuestion 10.\tWho wrote ‘The Divine Comedy’?\n\t\t(a) Homer\t(b) Euripides\t(c) James Joyce\t(d) Dante Alighieri");
           System.out.println("\t\t#######Enter your choice#######");
           String ans65=br.readLine();
           if(ans65.equalsIgnoreCase("d"))
           {
               System.out.println("\t\t!!!!!!!! RIGHT ANSWER !!!!!!!!"); 
               score+=10;
               System.out.println("\t\tYour Score becomes "+score);
           }
           else
           {
               System.out.println("\t\t~~~~~~~~ SORRY! WRONG ANSWER! THE CORRECT ANSWER IS (D)DANTE ALIGHIERI ~~~~~~~~");
               score-=5;
               System.out.println("\t\tYour Score becomes "+score);
           }
           
           break;
           
           case 6:
           counter=1; //if user enters 'exit' the value of counter variable becomes 1 and the loop does not execute
           break;
           
           default:
           System.out.println("Invalid choice!!!");
        }  
      }while(counter==0);
      Q: //if the user don't wants to contine the loop will break
      System.out.println("\nLOADING....."); 
      for(int a=1;a<10000000;a++); //empty loop for time delay
      System.out.println("#####***** YOU FINALLY SCORED "+score+" POINTS *****#####"); //to display final score
      //Statement to indicate the end of the quiz
      System.out.println("~!&*~!@#$%^&*~!@#$%^&*~!@#%^&* THANK YOU FOR PLAYING THE QUIZ *&^%$#!*~&^%$#%$#@~!*&^%$#@!~");
    }
  
   public static void main(String[] args)throws IOException //main method
   {
       Quiz q1=new Quiz(); //object created of class Quiz
            q1.questions(); //method call
   }         
} //class ended   