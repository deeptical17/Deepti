package main

import "fmt"

func maximum(numbers ...int) int {
	var large int
	for _, m := range numbers {
		if m > large {
			large = m
		}
	}
	return large
}

func main() {
	bigger := max(4, 7, 9, 123, 543, 23, 435, 53, 125)
	fmt.Println(bigger)
}
