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
extern int fn_82E5A1E0();
extern int fn_82E5A1F0();
extern int fn_82E5EF70();
extern int fn_82E5F020();
extern int fn_82E5F1F0();


longlong fn_82E60E60(int *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [14];
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || ((param_3 & 0xffffffff) == 0)) {
    return -0x7ff8ffa9;
  }
  piStack_40 = (int *)0x0;
  piStack_3c = (int *)0x0;
  apiStack_38[0] = (int *)0x0;
  lVar2 = fn_82E5F1F0(param_2,param_3);
  if (-1 < lVar2) {
    uVar3 = (**(code **)(*param_2 + 0x88))(param_2);
    lVar2 = fn_82E5A1E0(param_3,uVar3);
    if ((-1 < lVar2) && (lVar2 = (**(code **)(*param_2 + 0x90))(param_2,&piStack_40), -1 < lVar2)) {
      if (piStack_40 == (int *)0x0) {
        lVar2 = -0x3ff2c945;
        goto LAB_82e61000;
      }
      iVar4 = (**(code **)*piStack_40)(piStack_40,0xffffffff821531d8,&piStack_3c);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*piStack_3c + 0x98))();
        uVar1 = *(uint *)(iVar4 + 0x30);
        if (uVar1 != 0) {
          trapDoubleWordImmediate(6,(ulonglong)uVar1,0);
          lVar2 = fn_82E5A1F0(param_3,((ulonglong)*(uint *)(iVar4 + 0x34) * 10000000) /
                                          (ulonglong)uVar1 & 0xffffffff);
          if (lVar2 < 0) goto LAB_82e60fe0;
        }
      }
      lVar2 = (**(code **)(*param_1 + 0x10))(param_1,0xffffffff82154a58,0,apiStack_38);
      if ((-1 < lVar2) && (lVar2 = fn_82E5EF70(param_2,apiStack_38[0],param_3), -1 < lVar2)) {
        lVar2 = fn_82E5F020(param_2,param_3);
      }
    }
  }
LAB_82e60fe0:
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
LAB_82e61000:
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (apiStack_38[0] != (int *)0x0) {
    (**(code **)(*apiStack_38[0] + 8))();
  }
  return lVar2;
}

