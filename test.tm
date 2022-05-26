> right
< left
. read
^ toggle
? if
/ else


>>> 
go 3 location ahead

? 
check current location is 1, if its 1,

.>>>. 
read it and increment by 3 and read again

/ 
else 

.^. 
read current value toggle it and read it again

? >. 
if current is 1, increment and read 

/ <. 
else decrement and read
