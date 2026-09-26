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
extern int fn_82A3FF60();
extern int fn_82A41AE8();
extern int fn_82A442F0();
extern int fn_82A47D50();
extern int fn_82A48C80();
extern int fn_82A48CD8();
extern int fn_82A48D88();
extern int fn_82A4F4E0();


longlong fn_82A494B8(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  int *piVar5;
  ulonglong uVar4;
  longlong lVar6;
  
  piVar5 = *(int **)(param_1 + 0xcc);
  lVar6 = 0;
  do {
    if (piVar5 == (int *)0x0) goto LAB_82a4951c;
    if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar5;
      piVar5 = (int *)piVar5[1];
    }
  } while ((ulonglong)*(uint *)(iVar3 + 0x104) < (param_2 & 0xffffffff));
  lVar6 = fn_82A48D88(iVar3,param_2);
  if (lVar6 == 0) {
LAB_82a4951c:
    uVar1 = fn_82A3FF60(0xffffffff83219d50,0x108,0x20970000,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82A48C80(uVar1,*(undefined4 *)(param_1 + 0xdc));
    }
    if ((uVar1 & 0xffffffff) != 0) {
      iVar3 = fn_82A442F0(param_1,uVar1);
      if (iVar3 != 0) {
        uVar4 = (ulonglong)*(uint *)(param_1 + 0xe0);
        if ((ulonglong)*(uint *)(param_1 + 0xe0) <= (param_2 & 0xffffffff)) {
          uVar4 = param_2;
        }
        lVar2 = fn_82A48CD8(uVar1,uVar4 + 0xfff & 0xfffff000);
        if (lVar2 < 0) {
          fn_82A47D50(param_1);
        }
        else {
          lVar6 = fn_82A48D88(uVar1,param_2);
        }
        if (-1 < (int)lVar2) {
          return lVar6;
        }
      }
      fn_82A41AE8(uVar1);
      fn_82A4F4E0(uVar1);
    }
  }
  return lVar6;
}

