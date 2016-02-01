package main

import (
	"fmt"
	"os"
	"text/template"
)

type student struct {
	Name string
	Id	int
	Marks int
	Result bool
}

func main() {
	p1 := student{
		Name : "Deepti",
		Id : 109478323,
		Marks : 24
		
	}
	if p1.Marks > 15 {
		p1.Result = true
	}
	tpl, err := template.ParseFiles("index.html")
	if err != nil {
		fmt.Println(err)
	}
	err = tpl.Execute(os.Stdout, p1)
	if err != nil {
		fmt.Println(err)
	}
}
