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
extern int fn_82FAE198();
extern int fn_82FAE1F0();
extern int fn_82FAE338();
extern int fn_82FAF750();


undefined8
fn_82FAE490(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int *param_5)

{
  bool bVar1;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar2;
  longlong lVar5;
  
  if (((param_4 & 0xff) == 0) || (-1 < (int)param_2)) {
    lVar5 = -(ulonglong)*(uint *)(*(int *)(param_1 + 0xa0) + 4);
    if ((int)param_2 < (int)lVar5) {
      param_2 = lVar5;
    }
  }
  else {
    param_2 = 0;
  }
  iVar4 = (int)param_2;
  if ((iVar4 <= *(int *)(*(int *)(param_1 + 0xa4) + -4) - *(int *)(*(int *)(param_1 + 0xa0) + 4)) &&
     ((param_3 & 0xffffffff) < 8)) {
    bVar1 = (int)param_3 != 0;
    if (param_3 == 1 && bVar1) {
      iVar4 = fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                           param_5);
      return uVar2;
    }
    if (param_3 == 2 && bVar1) {
      iVar4 = fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*(undefined4 *)(iVar4 + 4),0,param_5);
      return uVar2;
    }
    if (param_3 == 3 && bVar1) {
      puVar3 = (undefined4 *)fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*puVar3,0,param_5);
      return uVar2;
    }
    if (param_3 == 4 && bVar1) {
      iVar4 = fn_82FAE198(param_1,param_2,param_4);
      *param_5 = iVar4;
      return 1;
    }
    if (param_3 == 5 && bVar1) {
      uVar2 = fn_82FAE1F0(param_1,param_2,param_5);
      return uVar2;
    }
    if (param_3 != 6 || !bVar1) {
      if (!bVar1) {
        *param_5 = iVar4;
        return 1;
      }
      *param_5 = *(int *)(*(int *)(param_1 + 0xa4) + -4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
      return 1;
    }
    if ((iVar4 < 1) && ((param_4 & 0xff) == 0)) {
      *param_5 = 0;
      return 1;
    }
  }
  return 2;
}

