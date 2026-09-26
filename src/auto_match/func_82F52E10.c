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
extern int fn_82F52A70();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200DFF4;


void fn_82F52E10(double param_1,int param_2,undefined8 param_3)

{
  if (*(int *)(param_2 + 8) != 0) {
    fn_82F52A70();
    (**(code **)(**(int **)(param_2 + 8) + 8))
              (*(int **)(param_2 + 8),1,param_3,
               (longlong)(param_1 * (double)lbl_8200DFF4 + (double)lbl_82002C5C) & 0xffffffff,0,0);
    (**(code **)(**(int **)(param_2 + 8) + 0x14))(*(int **)(param_2 + 8),0);
  }
  return;
}

