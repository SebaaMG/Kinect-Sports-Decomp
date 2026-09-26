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
extern int fn_8265C990();
extern int fn_82A5F060();
extern int fn_82A5F298();
extern int fn_82A5F578();


ulonglong fn_82A5F688(int *param_1,undefined8 param_2,ulonglong param_3,undefined4 *param_4)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x34))(param_1,param_2,0);
  if ((longlong)uVar2 < 0) {
    return 0xffffffff80070057;
  }
  iVar3 = fn_82A5F060(param_3);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  bVar1 = param_4 != (undefined4 *)0x0;
  if (bVar1) {
    param_3 = fn_82A5F298(param_3);
    uVar2 = -(ulonglong)(param_3 == 0) & 0xffffffff8007000e;
  }
  if ((((int)uVar2 < 0) ||
      (uVar2 = (**(code **)(*param_1 + 0x34))(param_1,param_3,bVar1), (longlong)uVar2 < 0)) ||
     (uVar2 = fn_82A5F578(param_1,param_2,param_3,bVar1), (longlong)uVar2 < 0)) {
    if (!bVar1) {
      return uVar2;
    }
    if ((param_3 & 0xffffffff) == 0) {
      return uVar2;
    }
    if ((int)uVar2 == -0x7768ffff) {
      *param_4 = (int)param_3;
      return uVar2;
    }
  }
  else if (!bVar1) {
    return uVar2;
  }
  fn_8265C990(param_3,0x20970000);
  return uVar2;
}

