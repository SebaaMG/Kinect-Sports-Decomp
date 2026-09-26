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
extern int fn_82243568();
extern int fn_8240D928();
extern int fn_82897BE0();
extern int fn_82898308();
extern int fn_82898C40();
extern int fn_82899280();
extern int fn_8289AC08();


undefined8 fn_8289B290(int param_1,ulonglong param_2,char param_3,byte param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  
  fn_82897BE0(*(undefined4 *)(param_1 + 0x18));
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 8))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar1 != 0)) {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      iVar2 = fn_8240D928(param_2);
      if (param_3 != '\0') {
        uVar5 = (uint)param_4 - (uint)*(byte *)(iVar2 + iVar1 + 4);
        if (0xff < uVar5) {
          uVar5 = uVar5 + 0x100;
        }
        if (param_3 != '\0') {
          if (uVar5 == 0) {
            return 1;
          }
          if (0x7f < uVar5) {
            return 1;
          }
          if (param_3 != '\0') {
            *(byte *)(iVar2 + iVar1 + 4) = param_4;
          }
        }
      }
      cVar3 = fn_82899280(iVar1 + 8,iVar2,param_5,0);
      bVar4 = cVar3 == '\0';
      fn_8289AC08(param_1,0,0,bVar4,param_2);
      if (bVar4) {
        fn_82898308(iVar1 + 8,iVar2,param_5,0);
      }
      goto LAB_8289b5a0;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      return 1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    if (iVar1 == 0) {
      return 1;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    }
    if ((param_2 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 4)) {
      return 1;
    }
    if (param_3 != '\0') {
      uVar5 = (uint)param_4 - (uint)*(byte *)(iVar1 + 8);
      if (0xff < uVar5) {
        uVar5 = uVar5 + 0x100;
      }
      if (param_3 != '\0') {
        if (uVar5 == 0) {
          return 1;
        }
        if (0x7f < uVar5) {
          return 1;
        }
        if (param_3 != '\0') {
          *(byte *)(iVar1 + 8) = param_4;
        }
      }
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    }
    if ((param_2 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 4)) {
      return 1;
    }
    if (param_3 != '\0') {
      uVar5 = (uint)param_4 - (uint)*(byte *)(iVar1 + 8);
      if (0xff < uVar5) {
        uVar5 = uVar5 + 0x100;
      }
      if (param_3 != '\0') {
        if (uVar5 == 0) {
          return 1;
        }
        if (0x7f < uVar5) {
          return 1;
        }
        if (param_3 != '\0') {
          fn_82897BE0(*(undefined4 *)(param_1 + 0x18));
          *(byte *)(iVar1 + 8) = param_4;
        }
      }
    }
  }
  cVar3 = fn_82898C40(param_1 + 4,0,param_5,0);
  bVar4 = cVar3 == '\0';
  fn_8289AC08(param_1,0,0,bVar4,0);
  if (bVar4) {
    fn_82243568(param_1 + 4,0,param_5,0);
  }
  param_2 = 0;
LAB_8289b5a0:
  fn_8289AC08(param_1,0,1,bVar4,param_2);
  return 1;
}

