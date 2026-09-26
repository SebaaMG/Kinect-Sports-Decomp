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


undefined8
fn_82EEAE00(longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((param_2 == 0) || (param_3 < param_4)) || (param_3 < param_1[3])) {
LAB_82eeae14:
    uVar4 = 0xffffffffc00d36bb;
  }
  else {
    uVar4 = 0;
    if (param_3 < param_1[2]) {
      if ((*(uint *)((int)param_1 + 0xc) & 1) == 0) {
        return 0xffffffffc00d4651;
      }
      uVar5 = param_3 - param_1[3];
      if (uVar5 == 0) {
        uVar5 = param_1[5];
        if ((longlong)uVar5 < 1) goto LAB_82eeae14;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 6) + *(int *)(param_1 + 4);
      }
      uVar1 = *(uint *)(param_1 + 4);
      trapDoubleWordImmediate(6,uVar5,0);
      param_1[2] = param_3;
      iVar2 = *(int *)(param_1 + 1);
      param_1[5] = uVar5;
      *(uint *)(param_1 + 6) = uVar1;
      iVar3 = (int)((longlong)((ulonglong)uVar1 * 80000000) / (longlong)uVar5);
      *(int *)(param_1 + 1) = iVar3;
      trapDoubleWordImmediate(5,uVar5 & ~((ulonglong)uVar1 * 160000000 - 1),0xffff);
      *(int *)((int)param_1 + 0x24) = (iVar3 - iVar2) + *(int *)((int)param_1 + 0x24);
    }
    else if (*param_1 + param_1[2] < param_3) {
      param_1[2] = param_3 - *param_1;
    }
    lVar6 = param_1[2];
    if (param_1[2] < param_4) {
      lVar6 = param_4;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 1);
    param_1[3] = lVar6;
    *(uint *)(param_1 + 4) = param_2;
    trapDoubleWordImmediate(6,uVar5,0);
    param_1[2] = ((ulonglong)param_2 * 80000000) / uVar5 + lVar6;
    trapDoubleWordImmediate(5,uVar5 & ~((ulonglong)param_2 * 160000000 - 1),0xffff);
    if (param_5 != (longlong *)0x0) {
      *param_5 = lVar6;
    }
  }
  return uVar4;
}

