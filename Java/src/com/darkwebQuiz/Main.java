package com.darkwebQuiz;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        System.out.println("██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░");
        System.out.println("██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗");
        System.out.println("██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝");
        System.out.println("██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗");
        System.out.println("██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝");
        System.out.println("╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░");

        byte score = 0;

        System.out.print("Whats Your Name :- ");
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine().trim();
        System.out.println("\nWelcome " + name + " To DarkWeb Quiz");

        System.out.print("\n1 - What I Like Most Python or Go :- ");
        String q1 = scanner.next();
        if (q1.equals("python")) {
            System.out.println("Correct Answer");
            score++;
        } else {
            System.out.println("Incorrect Answer");
        }

        System.out.print("\n2 - What Will I Choose In Study and Programming :- ");
        String q2 = scanner.next();
        if (q2.equals("study")) {
            System.out.println("Correct Answer");
            score++;
        } else {
            System.out.println("Incorrect Answer");
        }

        System.out.print("\n3 - Which Color I Like The Most Red or Blue :- ");
        String q3 = scanner.next();
        if (q3.equals("red")) {
            System.out.println("Correct Answer");
            score++;
        } else {
            System.out.println("Incorrect Answer");
        }

        System.out.print("\n4 - What Will I Choose in Iphone and Android :- ");
        String q4 = scanner.next();
        if (q4.equals("iphone")) {
            System.out.println("Correct Answer ! You Knows Me Well HEHE");
            score++;
        } else {
            System.out.println("Incorrect Answer");
        }

        System.out.println("\nNice! , " + name + " You Scored " + score + " Points");
    }
}
