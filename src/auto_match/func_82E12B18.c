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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;


undefined4 * fn_82E12B18(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  (**(code **)(*param_2 + 0x1c))(param_2,0x40);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_b0,0x40);
  if (iVar1 != 0x40) {
    *param_1 = 0;
    return param_1;
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(auStack_70,0xffffffffffffffff,0x40);
}

