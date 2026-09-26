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
extern unsigned int *auStack_40;
extern int fn_8300F100();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE6A90(undefined4 param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  undefined2 uVar1;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  uStack_3e = 3;
  uStack_38 = -(uint)(param_2 != 0x2ca33bdb) & (uint)param_2;
  uStack_3c = param_1;
  uStack_34 = param_3;
  uStack_33 = param_4;
  uVar1 = fn_8300F100();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

