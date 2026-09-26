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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_a0;
extern int fn_82F691F0();
extern int fn_8304EF20();
extern int fn_8304F708();
extern unsigned int uStack_50;


undefined8 fn_82866860(int param_1)

{
  int iVar1;
  undefined4 auStack_a0 [20];
  undefined4 uStack_50;
  undefined1 auStack_4c [76];
  
  auStack_a0[0] = 0;
  fn_8304EF20(auStack_a0);
  iVar1 = fn_8304F708(auStack_a0);
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffffa00a0000;
  }
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4c,0,0x2c);
}

