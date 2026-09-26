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
extern unsigned int *auStack_28;
extern int fn_82A1EFC0();


int fn_82571050(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_28 [16];
  
  if (param_4 == 0) {
    if (param_2 != 0) {
      for (uVar2 = *(uint *)(param_1 + 0x758); uVar2 < *(uint *)(param_1 + 0x75c);
          uVar2 = uVar2 + 0x3f0) {
        if (param_2 == *(int *)(uVar2 + 0xd4)) goto LAB_825710a4;
      }
      uVar2 = 0;
LAB_825710a4:
      param_4 = uVar2 + 0x2d0;
      if (uVar2 != 0) goto LAB_825710b4;
    }
    param_4 = param_1 + 0x380;
  }
LAB_825710b4:
  if (param_4 == param_1 + 0x380) {
    iVar1 = *(int *)(param_1 + 0x444);
    if (iVar1 == -3) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_28,0,8);
    }
  }
  else {
    iVar1 = *(int *)(param_4 + 0xc4);
  }
  return iVar1;
}

