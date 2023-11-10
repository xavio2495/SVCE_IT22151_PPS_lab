*THIS IS JUST A REFERENCE, DO NOT BLINDLY COPY WHATEVER IS WRITTEN
  IN THIS TEXT FILE, EVENTHOUGH IT MAY BE CORRECT*

#             BASIC LINUX COMMANDS

## Aim:
    To study the various linux commands to be used.

## Commands and their Description:

### 1)mkdir
-This command is used to create a new directory  
-syntax: ``mkdir dir_name`` 
> //this is like creating a folder in your pc(Windows or Mac idgaf)  
 

### 2)ls
-This command is used to list out all the files and directories present under one directory  
-syntax: ``ls``  
> //this is literally like opening file explorer in your PC  


### 3)cd
-This command is used to change directory  
-syntax: ``cd <dir_name>`` 
> //something like opening a folder present inside another folder  
 

### 4)cat>
-This command is used to create a new file (filetype is set by the user)  
-syntax: ``cat> file_name.file_type``  
-example: ``cat> hello.text``
> //I hope i wont have to explain what creating a new file is :(  
  

### 5)cat
-This command is used to display the contents present inside a file  
-syntax: ``cat file_name.file_type``  
-example: ``cat hello.txt``  
> //Nahh, ain't gonna explain this either...  


### 6)cat>>
-This command is used to append content to an existing file  
-syntax: ``cat>> file_name.file_type``  
-example: ``cat>> hello.txt``  
> //basically editing a text file, but you can only add text  

### 7)cp
-This command is used to copy all the contents from one file to another, within the same directory  
-syntax: ``cp old_file.txt new_file.txt``  
> //Just simple copy-paste man, nothing else  

### 8)mv
-This command is used to move the contents of a file from one file to another file, the new file can be in any directory  
-syntax: ``mv source_dir/old_file.txt dir/new_file.txt``  
> //well, you can move the content from one file to another, but here is the twist- the old file gets deleted. The file needs to be declared also with the directory  

### 9)rm
-This command is used to remove a file froma directory  
-syntax: ``rm file.txt``
> //This is just like deleting your chome history after you see weird stuff  

### 10)rmdir
-This command is used to remove an entire directory
-syntax: ``rmdir dir_name``
> //It is to be noted that the directory which you are going to delete should not have any file inside it, and make sure that you are not inside the directory you are trying to delete.  
> //This command is similar to the way you might delete a folder in your PC  

### 11)vi
-This command is used to open a interactive editor that can be used to create and edit c program code  
-syntax: ``vi file.c``
> //Let's say this is like MS Word for C program in linux

### 12)cc
-This command is used to compile C program and create a excecutable file. 
-syntax: ``c file.c``
> //Not accurate, but its like converting word document into pdf

### 13) ./a.out
-This command is used to run the executable file and display the output. 
-syntax: ``./a.out``
> //This is like that google drive thing which you use to open and view pdfs

### 14) passwd
-This command is used to change the login password for your account 
-syntax: `` passwd``
          ``enter current pwd: <enter_old_password>``
          ``enter new pwd: <enter_new_password>``
          ``re-enter new pwd: <enter_new_password>``
> //This is just like deleting your chome history after you see weird stuff  

### 15)nano
This command is used to open a interactive editor that can be used to create and edit c program code 
-syntax: ``nano file.c``
> //This is just like the command ``vi``, but with a bit advanced GUI