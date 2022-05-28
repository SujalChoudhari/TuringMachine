# TM or Turing Machine
Tm is a simplest of a computer, and the start of modern computers.

## How it works?
You have a strip of memory locations which can be either 0 or 1

| Location| 0000 | 0001 | 0002 | ... | 5000 |
|:----:|:----:|:----:|:----:|:---:|:----:|
|Value| 0    |   1  |  1   |  ...| 0    |

Assume Turing machine as a pointer.
It will always point to one of the location.

## Left
Now a TM can move left or move right by one.
If it is currently pointing towards 3068. And left is used it will point to 3067.
The left character is `<`.

`<<<<` stands for 4 lefts.


## Right
Similarly it can move right on the strip.
The right character is `>`.

`>>>>>>` stands for 6 lefts.

## Read
You are able to read the value at current memory location by using `.`

`>>>.` Move 3 right and read the value.

## Flip
You can toggle the value at current location by using `^`

`>>>.^.` Move 3 right, read, toggle the value and read again.

## If
Check if a value of current memory 1. `?` is the character.
If so it will execute the code following it.

`>>?.` Move 2 right . If the value is 1, then read it.

`?>>^<<` If current values is 1, move 2 left toggle the value, and come back to original position.

## Endif
When you want to use only certain commands after the if statement.`/` is the character.

`?^./>.` If the current character is 1. Toggle it and read it. Then Move right and read the value.

#### Output
[0] 1
[1] 0

#### Note
Code after / will be always executed.



