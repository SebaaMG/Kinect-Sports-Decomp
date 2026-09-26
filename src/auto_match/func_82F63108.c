typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F69290();
extern unsigned int lbl_82167FA8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_82F63108(void)

{
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  
  uStack_1c = 0;
  ppuStack_20 = &lbl_82167FA8;
  uStack_18 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F69290(&ppuStack_20,0xffffffff821dda54);
}

