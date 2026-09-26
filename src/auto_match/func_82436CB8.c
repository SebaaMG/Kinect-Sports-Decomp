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
extern unsigned int *auStack_d0;
extern int fn_82A1EFC0();


void fn_82436CB8(int param_1)

{
  int iVar1;
  undefined1 auStack_d0 [208];
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_d0,0,0x40);
}

