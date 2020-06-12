// DarkWeb (c)

package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

// Comments Start With //

// ██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░
// ██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗
// ██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝
// ██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗
// ██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝
// ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░

func quiz() {
	score := 0
	fmt.Println("██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░")
	fmt.Println("██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗")
	fmt.Println("██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝")
	fmt.Println("██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗")
	fmt.Println("██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝")
	fmt.Println("╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░")

	scanner := bufio.NewScanner(os.Stdin)
	fmt.Printf("\nWhats Your Name :- ")
	scanner.Scan()
	name := scanner.Text() // Scans For Line
	fmt.Printf("\nWelcome %q To DarkWeb Quiz", name)

	fmt.Printf("\n1 - What I Like Most Python or Go :- ")
	scanner.Scan()
	q1 := scanner.Text()
	if strings.ToLower(q1) == "python" {
		fmt.Println("Correct Answer")
		score++
	} else {
		fmt.Println("Incorrect Answer")
	}

	fmt.Printf("\n2 - What Will I Choose In Study and Programming :- ")
	scanner.Scan()
	q2 := scanner.Text()
	if strings.ToLower(q2) == "study" {
		fmt.Println("Correct Answer")
		score++
	} else {
		fmt.Println("Incorret Answer")
	}

	fmt.Printf("\n3 - Which Color I Like The Most Red or Blue :- ")
	scanner.Scan()
	q3 := scanner.Text()
	if strings.ToLower(q3) == "red" {
		fmt.Println("Correct Answer")
		score++
	} else {
		fmt.Println("Incorrect Answer")
	}

	fmt.Printf("\n4 - What Will I Choose in Iphone and Android :- ")
	scanner.Scan()
	q4 := scanner.Text()
	if strings.ToLower(q4) == "iphone" {
		fmt.Println("Correct Answer ! You Knows Me Well HEHE")
		score++
	} else {
		fmt.Println("Incorrect Answer")
	}

	fmt.Printf("\nNice %q You Scored %d points", name, score)
}

func main() {
	quiz()
	scanner := bufio.NewScanner(os.Stdin)
	fmt.Printf("\nWant To Play Again, yes/no :-  ")
	scanner.Scan()
	play := scanner.Text()
	if strings.ToLower(play) == "yes" {
		quiz()
	} else {
		fmt.Println("Thanks For Playing")
		fmt.Println("\nPress Enter To Exit")
		scanner.Scan()
		scanner.Text()
	}
}
