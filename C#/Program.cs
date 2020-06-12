using System;

namespace C_
{
    class Program

        // ██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░
        // ██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗
        // ██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝
        // ██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗
        // ██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝
        // ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░
    {
        static void Main(string[] args)
        {
            // Main Function

            int score = 0; // Score Variable

            Console.WriteLine("██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░");
            Console.WriteLine("██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗");
            Console.WriteLine("██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝");
            Console.WriteLine("██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗");
            Console.WriteLine("██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝");
            Console.WriteLine("╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░\n");

            Console.Write("Whats Your Name :- ");
            string name = Console.ReadLine();
            Console.WriteLine($"\nWelcome {name} To DarkWeb Quiz");

            Console.Write("\n1 - What I Like Most Python or Go :- ");
            string q1 = Console.ReadLine();

            if (q1.ToLower() == "python")
            {
                Console.WriteLine("Correct Answer");
                score++;
            }
            else
            {
                Console.WriteLine("Incorrect Answer");
            }

            Console.Write("\n2 - What Will I Choose In Study and Programming :- ");
            string q2 = Console.ReadLine();

            if (q2.ToLower() == "study")
            {
                Console.WriteLine("Correct Answer");
                score++;
            }
            else
            {
                Console.WriteLine("Incorrect Answer");
            }

            Console.Write("\n3 - Which Color I Like The Most Red or Blue :- ");
            string q3 = Console.ReadLine();

            if (q3.ToLower() == "red")
            {
                Console.WriteLine("Correct Answer");
                score++;
            }
            else
            {
                Console.WriteLine("Incorrect Answer");
            }

            Console.Write("\n4 - What Will I Choose in Iphone and Android :- ");
            string q4 = Console.ReadLine();

            if (q4.ToLower() == "iphone")
            {
                Console.WriteLine("Correct Answer");
                score++;
            }
            else
            {
                Console.WriteLine("Incorrect Answer");
            }

            Console.WriteLine($"\nThanks For Playing {name}, You Scored {score} Points");
            Console.Write("\nPress Enter To Exit ");
            Console.ReadLine();

        }
    }
}
