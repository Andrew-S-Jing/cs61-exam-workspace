Good luck on the exam!

How to use the repo:
First, make sure you can run wsl or docker in this folder!

`make`
    Cleans your directory with `make clean`
    Compiles your `main.cc` code into
        1.  **Unoptimized** machine code/executable code in the file `main`
        2.  **Unoptimized** Assembly code in the file `main.asm`
    Also runs the machine code from the file `main`

`make o`
    Same as `make`, but it's **optimized**

`make run`
    Just runs your already compiled code in the file `main`

`make clean`
    Deletes the file `main`