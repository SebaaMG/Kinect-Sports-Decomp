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
extern unsigned int *auStack_30;
extern int fn_82E4FE40();
extern int fn_82EE1048();
extern int fn_82EE10E0();


undefined8 fn_82EE1848(int param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint auStack_30 [12];
  
  param_2 = param_2 & 0xffff;
  if (param_2 < *(uint *)(param_1 + 0x254)) {
    uVar2 = fn_82EE1048(param_1 + 0x48,param_2,auStack_30);
    uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_30[0];
    if (uVar2 == 0) {
      uVar1 = 0xffffffffc00d36bb;
    }
    else {
      iVar3 = (int)uVar2;
      if (*(int *)(iVar3 + 0xc) != 0) {
        fn_82E4FE40();
      }
      *(undefined4 *)(iVar3 + 0xc) = 0;
      if (*(int *)(iVar3 + 0x14) != 0) {
        fn_82E4FE40();
      }
      *(undefined4 *)(iVar3 + 0x14) = 0;
      if ((*(uint *)(param_1 + 0x254) < param_2 + 1) ||
         (iVar3 = fn_82EE10E0(param_1 + 0x48,param_2), iVar3 < 0)) {
        uVar1 = 0xffffffff80004005;
      }
      else {
        *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + -1;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

