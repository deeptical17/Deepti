package main

import "fmt"

func main() {
	var large int
	var small int
	fmt.Print("Please enter a large number: ")
	fmt.Scan(&large)
	fmt.Print("Please enter a smaller number: ")
	fmt.Scan(&small)
	fmt.Println(large, "%", small, " = ", large%small)
}
