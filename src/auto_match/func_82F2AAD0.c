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
extern int fn_82F02410();


void fn_82F2AAD0(int param_1,undefined8 param_2,ulonglong param_3,int param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = (ulonglong)((int)param_3 >> 0x1f);
  uVar3 = (param_3 ^ uVar3) - uVar3;
  if ((*(int *)(param_1 + 0x624) == 0) || (4 < *(int *)(param_6 + 0x60))) {
    if ((uVar3 & 0xffffffff) < (ulonglong)param_5) {
      puVar2 = (undefined4 *)((int)((uVar3 & 0xffffffff) << 3) + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      if ((uVar3 & 0xffffffff) == 0) {
        return;
      }
    }
    else {
      puVar2 = (undefined4 *)(param_5 * 8 + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      fn_82F02410(param_2,uVar3,8);
    }
  }
  else {
    if (*(int *)(param_6 + 0x60) < 3) {
      iVar5 = 2;
      lVar4 = 3;
    }
    else {
      iVar5 = 1;
      lVar4 = 1;
    }
    uVar1 = (uint)((int)lVar4 + (int)uVar3) >> iVar5;
    if (uVar1 < param_5) {
      puVar2 = (undefined4 *)(uVar1 * 8 + param_4);
      fn_82F02410(param_2,*puVar2,puVar2[1]);
      if ((uVar3 & 0xffffffff) == 0) {
        return;
      }
      fn_82F02410(param_2,(lVar4 - (ulonglong)(uVar1 << iVar5)) + uVar3,iVar5);
      fn_82F02410(param_2,((param_3 | ~-param_3) & 0xffffffff) >> 0x1f,1);
      return;
    }
    puVar2 = (undefined4 *)(param_5 * 8 + param_4);
    fn_82F02410(param_2,*puVar2,puVar2[1]);
    fn_82F02410(param_2,uVar3,iVar5 + 8);
  }
  fn_82F02410(param_2,((param_3 | ~-param_3) & 0xffffffff) >> 0x1f,1);
  return;
}

