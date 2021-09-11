<p align="center">
  <h1 align="center">Dunamis</h1>
  <h3 align="center">Version 0.0.0.1 - Alpha Version 1<br>
An interpreted general-purpose programming language
</h3>
</p>


# Contents
- [**Syntax**](#syntax)
- - - [*Functions*](#functions)
- - - [*Variables*](#variables)
- - - [*Objects*](#objects)
- - - [*Enums*](#enums)
- - - [*Include*](#include)
- - - [*For Loops*](#for-loops)
- - - [*Lists*](#lists)
- - - [*Notes*](#notes)
- - - [*Ternaries*](#ternaries)
- - - [*This Properties*](#this-properties)
- - - [*Timers*](#timers)
- - - [**Lists*](#lists)
- - - [**Random**](#random)
- - - - [*Randint*](#randint)
- - [**File System**](#aaa)
- - - [*FPuts*](#fputs)
- [**Compiler**](#compiler)
- - [*Run*](#run)
- - [**Developer Tools**](#dev-tools)
- - - [*Parser*](#parser)
- [**Ownership**](#ownership)


<hr>



# Compiler

## Run
```duna compile <PATH_TO_FILE>```
## Dev Tools

### Parser
```duna arg parse```



# Syntax

### Functions
```js
fx say_name(str name)
{
  write("Hello, $(name)!");
}
```

### Variables
```js
float x = 1.5;
int y = 2;
str z = "Hello";
```

### Objects

```js
obj car = {
    int price = 2000;
    str colour = "Red";
}
```

### Lists
```
list fruits = ["apples","bananas","pears"]
```

### Enums
```enum
{
    Data_one,
    Data_two,
    Data_three
} enum_name;
```

### Include
```
src s = include("examples/fileone.dun")
src v = visit(s)
```

### For Loops
```
for(int i = 0; i < 10; i+=1)
{
    write(i);
}
```

###  FPuts

```
obj file = fopen("hello_world.txt", "w+")

fputs("This is a random sentence", file)
```

### Lists 

```
fx print_list(list l)
{
    fx list_printer(fx e)
    {
        write(e);
    }

    iterate l with list_printer;
}

print_list(["apple", "pear", "banana"]);
```

### Notes

``` 
### This is a note
```

### Ternaries

```
int x = 5;
str name = x > 3 ? "John" : "David";
write(name);
```

### This Properties
```fx something()
{

    ### Returns amount of arguments required
    write(this)
}

something()
```

### Timers

```
obj timer = time()

write(timer.seconds)
```

## Random
### Randit
``` int number = randint(1,10) ```
> randint(minimum, maximum)

# Ownership

This language is owned by TechPenguineer, who is also formally known as the owner of Zeno Inc.
We have all right to own this language into our organization.
