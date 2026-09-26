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
extern unsigned int *auStack_4c;
extern int fn_82F351F0();
extern unsigned int uStack_50;


longlong fn_82F356B0(int *param_1,int *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uStack_50;
  uint auStack_4c [19];
  
  if ((param_2 == (int *)0x0) || (param_3 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  lVar3 = 0;
  uVar1 = 0;
  if (param_1[0x14] == 0) {
    uStack_50 = 0;
    lVar3 = fn_82F351F0(param_1,param_2,&uStack_50);
    if ((-1 < lVar3) || (lVar3 = fn_82F351F0(param_1,param_2,&uStack_50), -1 < lVar3)) {
      uVar1 = (ulonglong)uStack_50;
    }
    iVar4 = (int)lVar3;
    if (iVar4 == 0) {
      param_1[0x14] = 1;
      goto LAB_82f35734;
    }
  }
  else {
LAB_82f35734:
    if ((param_1[0x13] & 1U) == 0) goto LAB_82f35830;
    auStack_4c[0] = 0;
    lVar3 = (**(code **)(*param_2 + 0x14))(param_2,0,auStack_4c);
    if (lVar3 < 0) {
      return lVar3;
    }
    if (uVar1 < auStack_4c[0]) {
      do {
        if ((uint)param_1[0x4f] <= (uint)param_1[0x15]) break;
        piVar2 = param_1 + 0x16;
        if ((param_1[0x16] == 0) &&
           (lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_1[0x15],piVar2), lVar3 < 0)) {
          return lVar3;
        }
        uStack_50 = 0;
        lVar3 = (**(code **)(*(int *)*piVar2 + 0x14))((int *)*piVar2,param_2,uVar1,&uStack_50);
        if (-1 < lVar3) {
          uVar1 = uStack_50 + uVar1;
        }
        if ((int)lVar3 != 0) break;
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 8))();
          *piVar2 = 0;
        }
        param_1[0x15] = param_1[0x15] + 1;
      } while ((uVar1 & 0xffffffff) < (ulonglong)auStack_4c[0]);
    }
    iVar4 = (int)lVar3;
  }
  if (iVar4 < 0) {
    return lVar3;
  }
LAB_82f35830:
  *param_3 = (int)uVar1;
  return lVar3;
}

