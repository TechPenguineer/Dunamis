<p align="center">
  <h1 align="center">Dunamis</h1>
  <h3 align="center">Version 0.0.0.2 - Alpha Version 1.1<br>
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
- - - [*Lists*](#lists)
- - [**Random**](#random)
- - - - [*Randint*](#randint)
- - [**File System**](#aaa)
- - - [*FPuts*](#fputs)
- - [**String Methods**](#string-methods)
- - - [*strcmp*](#strcmp)
- - - [*strcmb*](#strcmb)
- - [**String Transformation**](#string-transformation)
- - - [**toLowercase**](#toLowercase)
- [**Compiler**](#compiler)
- - [*Run*](#run)
- - [*Version*](#version)
- - [*Git*](#git)
- - [*Template*](#template)
- - [**Developer Tools**](#dev-tools)
- - - [*Parser*](#parser)
- [**Ownership**](#ownership)


<hr>



# Compiler

## Run
```duna run <PATH_TO_FILE>```

## Version
```duna version``` or ```duna -v```

## Git
```duna git```

## Template
```duna template``` -> **`Segmentation Fault`**

## Update
- [x] **Comming Soon**

## Dev Tools

### Parser
```duna arg parse```



# Syntax

### Functions

LOL Code do stuff from in block
```js
fx say_name(str name)
{
  cout("Hello, $(name)!");
}
```

### Variables

Um... well... there variables `:/`
```js
float x = 1.5;
int y = 2;
str z = "Hello";
```

### Objects
Stores object and properties

```js
obj car = {
    int price = 2000;
    str colour = "Red";
}
```
### Enums

Lets be honest, we rarely use these anyways
```enum
{
    Data_one,
    Data_two,
    Data_three
} enum_name;
```

### Include

Uses other files data

```
src s = include("examples/fileone.dun")
src v = visit(s)
```

### For Loops

Repeats a certain amount of time
```
for(int i = 0; i < 10; i+=1)
{
    write(i);
}
```

###  FPuts

Writes to a file

```
obj file = fopen("hello_world.txt", "w+")

fputs("This is a random sentence", file)
```

### FOut

Writes file
```
obj file = fopen("file.extention", "permission")
```

### FClose
Deletes file
```
fclose(file)
```


### Lists 
Stores multible variable with any type 

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
There are not read by the lexer or parser
``` 
### This is a note
```

### Ternaries
Compares a value without a `if` `else` statement 
```
int x = 5;
str name = x > 3 ? "John" : "David";
write(name);
```

### This Properties
Writes the properties of the function

```fx something()
{

    ### Returns amount of arguments required
    write(this)
}

something()
```

### Timers

Creates a timer to get current date data
```
obj timer = time()

write(timer.seconds)
```

## Random
### Randit
``` int number = randint(1,10) ```
> randint(minimum, maximum)

## String Methods
### Strcmp
Compares *2* strings
```strcmp("Hello", "hello");```
>>> Returns 0 if compares true
### Strcmb
Combinds *2* strings
```strcmb("Foo ", "bar");```


# String Transformation
# toLowercase
```duna
str UPPERCASE_SENTENCE = "HELLO WORLD!"

str lowercased = toLowercase(UPPERCASE_SENTENCE)
cout(lowercased)
```
> Makes each letter in string to lowercase
# Ownership

This language is owned by TechPenguineer, who is also formally known as the owner of Zeno Inc.
We have all right to own this language into our organization.

# Sebbekarlsson
This template was made by sebbekarlsson! All credit goes to him!!
