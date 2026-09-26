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


undefined8 fn_82E6E2E0(int *param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong auStack_40 [8];
  
  if (param_4 == (uint *)0x0) {
    return 0xffffffff80004003;
  }
  *param_4 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  if ((param_2 & 0xffffffff) == 0) {
    return 0xffffffff80004003;
  }
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,auStack_40);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar3 = *(ulonglong *)(param_1 + 6);
  if (auStack_40[0] < uVar3) {
    return 0xffffffffc00d36bb;
  }
  if ((((param_3 & 0xffffffff) + uVar3 <= auStack_40[0]) ||
      (param_3 = (auStack_40[0] & 0xffffffff) - (uVar3 & 0xffffffff), param_3 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4), iVar2 < 0)) {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_1 + 6));
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (param_1[0xe] == 0) {
      return 0xffffffffc00d36bb;
    }
    iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4);
    if (iVar2 < 0) {
      uVar1 = (**(code **)(*param_1 + 0x60))
                        (param_1,*(longlong *)(param_1 + 4) + *(longlong *)(param_1 + 6),param_2,
                         param_3,param_4);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      goto LAB_82e6e440;
    }
  }
  uVar1 = 0;
LAB_82e6e440:
  *(ulonglong *)(param_1 + 6) = (ulonglong)*param_4 + *(longlong *)(param_1 + 6);
  return uVar1;
}

