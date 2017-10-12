package main

import (
	"fmt"
)

func main() {
	var i int
	var a string
	fmt.Scanln(&i)
	j := 0
	for j < i {
		fmt.Scanln(&a)
		fmt.Println("Y")
		j++
	}
}
