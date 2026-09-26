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
extern int fn_825FCE80();
extern int fn_82624F40();


undefined4
fn_825FC178(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = fn_825FCE80(param_2,0x1f4f,param_4);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(iVar2 + 0x14) - 1;
    iVar2 = (int)lVar4 - ((*(uint *)(iVar2 + 0x14) - 2) + (uint)(lVar4 == 0));
  }
  uVar5 = (ulonglong)*(byte *)(param_2 + 8);
  if (iVar2 != 0) {
    uVar5 = uVar5 + 3;
  }
  uVar6 = 0;
  piVar1 = *(int **)((int)(uVar5 << 2) + param_1);
  if (0 < *piVar1) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + piVar1[1]) == 0) goto LAB_825fc218;
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar6 < *piVar1);
  }
  uVar6 = 0xffffffffffffffff;
LAB_825fc218:
  if ((int)uVar6 == -1) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar3 = fn_82624F40(param_1,param_3,param_2 + 0xc,*(undefined2 *)(param_2 + 10),param_4,
                              param_5);
    *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + piVar1[1]) = uVar3;
    uVar5 = (uVar5 & 0xff) << 8 | uVar6 & 0xff;
  }
  iVar2 = (int)uVar5;
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)((iVar2 >> 8 & 0xffU) * 4 + param_1) + 4) +
             ((uint)((uVar5 & 0xffffffff) << 2) & 0x3fc));
  }
  return uVar3;
}

