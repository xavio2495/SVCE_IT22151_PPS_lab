*THIS IS JUST A REFERENCE, DO NOT BLINDLY COPY WHATEVER IS WRITTEN
  IN THIS TEXT FILE, EVENTHOUGH IT MAY BE CORRECT*

#             BASIC LINUX COMMANDS

## Aim:
    To study the various linux commands to be used.

## Commands and their Description:

### 1)mkdir
-This command is used to create a new directory  
> //this is like creating a folder in your pc(Windows or Mac idgaf)  
-syntax: ``mkdir dir_name``  

### 2)ls
-This command is used to list out all the files and directories present under one directory  
> //this is literally like opening file explorer in your PC  
-syntax: ``ls``  

### 3)cd
-This command is used to change directory  
> //something like opening a folder present inside another folder  
-syntax: ``cd <dir_name>``  

### 4)cat>
-This command is used to create a new file (filetype is set by the user)  
> //I hope i wont have to explain what creating a new file is :(  
-syntax: ``cat> file_name.file_type``  
-example: ``cat> hello.text``  

### 5)cat
-This command is used to display the contents present inside a file  
> //Nahh, ain't gonna explain this either...  
-syntax: ``cat file_name.file_type``  
-example: ``cat hello.txt``  

### 6)cat>>
-This command is used to append content to an existing file  
> //basically editing a text file, but you can only add text  
-syntax: ``cat>> file_name.file_type``  
-example: ``cat>> hello.txt``  

### 7)cp
-This command is used to copy all the contents from one file to another, within the same directory  
> //Just simple copy-paste man, nothing else  
-syntax: ``cp old_file.txt new_file.txt``  

### 8)mv
-This command is used to move the contents of a file from one file to another file, the new file can be in any directory  
> //well, you can move the content from one file to another, but here is the twist- the old file gets deleted. The file needs to be declared also with the directory  
-syntax: ``mv source_dir/old_file.txt dir/new_file.txt``  

### 9)rm
-This command is used to remove a file froma directory  
> //This is just like deleting your chome history after you see weird stuff  
-syntax: ``rm file.txt``

### 10)rmdir
-This command is used to remove an entire directory
> //It is to be noted that the directory which you are going to delete should not have any file inside it, and make sure that you are not inside the directory you are trying to delete.  
> //This command is similar to the way you might delete a folder in you PC  
-syntax: ``rmdir dir_name``