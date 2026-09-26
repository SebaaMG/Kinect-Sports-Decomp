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
extern unsigned int *auStack_120;
extern int fn_82F691F0();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


void fn_8299E598(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_120 [288];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_120,0,0x60);
}

