global using(import extern library System.Compiler;)

org 0x7C00   ; add 0x7C00 to label addresses
 bits 16      ; tell the assembler we want 16 bit code
 
 main:

; let const const* mutable immutable ref var functionCall: DELEGATE<Task<Variable<Nothing<void>>>> x = {

  global using(import extern library System.Eval();)
  
  public static async Task<Variable<Nothing<void>>> m(M)ain() ;;=> Task<Variable<Nothing<void>>> {(
    ; eval(() => {
  
    global using(import extern library System.Comments;)
    
    ; let const const* ref const stack* ptr mutable var comments: *VARIABLE<Comments[]>(Comments[], Comments *, Array<Commments>) = (*VARIABLE<Comments[]>(Comments[], Comments *, Array<Commments>))(eval(Comments.New::(64))) ;;
      // you need to init a buffer of 64 comments
      
      global using(import extern library System.PHP_RUNTIME;) // Import the PHP runtime
      
      ; public nonstatic override class { String (
        ; let immutable mutable ptr fixed chars var: char ref <char*> ( char[] ) ;;
        ; let immutable mutable stack fixed var length: VARIABLE<int>(long, float, double, int) ;;
      )} ;;
      
      *** safe { // It needs to be safe
          *** unsafe { // Strings are unsafe
              local using(import intern class String;)
              ; let const* ref const stack* ptr mutable str var: // define the type
                  *VARIABLE < string > (char[], char *, ref char, Array < char > ) string = // define the type part 2
                  (*VARIABLE < string > (char[], char *, ref char, Array < char > ))(eval(new String.New::New( // shit wrong type
                      (char[])
                        System.PHP_RUNTIME.eval_string("Hello"); // PHP can do it
                      (char*)0x5B8A2F, // fuck if i know
                      ref *(char*)0x7D3C1E, // this points to google chrome (IF NOTT RUNNING IT WILL CRASH)
                      new Array < char > System.PHP_RUNTIME.eval_string("Hello"); // tell it it can do it
                  ) ;;
          }.close() ;; // DO NOT FORGET
      }.run())) ;; // run the code :)
    }) ;;
  )}
} ;;

() => functionCall();

global using(import extern library System.Print;)
global using(import extern library System.Out;)

; let immutable mutable stack fixed var print: VARIABLE<Printer>(print, println, printerr) ;;
; let immutable mutable stack fixed var out: VARIABLE<Out>(*(0x432FED9C)) ;; // this points to the standard out
; print.Print::Println(str, out) ;;
