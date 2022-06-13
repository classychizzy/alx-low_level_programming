#introduction to Dynamic libraries
##commands
* gcc -c : creates an object file
* .c: searches for all c files 
* -fPIC : makes the code position independent
* -shared : creates a dynamic library
* nm -D: helps verify the presence of the right functions and dynamic symbols
* export: used to create an environment variable
##scripts
~~~
gcc -c -fPIC `*.c - creates the object
gcc -shared -o libdynamic.so `*o - creates a dynamic library
ls -la lib~* - lists all libraries present
ldd - allows users to view an executable file's shared 
