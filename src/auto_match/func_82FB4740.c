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
extern int fn_82FA9208();
extern int fn_82FB6330();
extern int fn_82FB64A8();
extern int fn_82FB75A8();


int fn_82FB4740(int param_1,undefined4 *param_2,int *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char acStack_40 [64];
  
  uVar1 = *param_5;
  *param_5 = uVar1 + 1;
  if (uVar1 + 1 < 0x41) {
    if (*(int *)(param_2[1] + 0x40) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_2[1] + 0x40) + 0x60);
    }
    if (iVar7 == 0) {
      piVar3 = (int *)(**(code **)(*(int *)*param_2 + 8))();
      uVar9 = (**(code **)(*piVar3 + 0x20))();
      if ((uVar9 & 0xffffffff) == 0) {
        uVar9 = (**(code **)(*(int *)piVar3[3] + 0x20))();
      }
      uVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(iVar7 + 0x10);
      uVar8 = *(undefined4 *)(iVar7 + 0xc);
    }
    iVar7 = *(int *)(*param_4 + 0x40);
    if (iVar7 == 0) {
      piVar3 = (int *)(**(code **)(*(int *)*param_3 + 0x18))();
      if (piVar3 == (int *)0x0) goto LAB_82fb476c;
      iVar2 = (**(code **)(*piVar3 + 8))();
      uVar6 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x20))();
      uVar5 = 0;
    }
    else {
      uVar6 = (ulonglong)*(uint *)(*(int *)(iVar7 + 0x60) + 0x10);
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x60) + 0xc);
    }
    iVar2 = fn_82FB64A8(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x44),uVar8,
                              uVar9,uVar5,uVar6,acStack_40);
    if (acStack_40[0] != '\0') {
      iVar7 = *(int *)(iVar7 + 0xc);
      *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
      iVar4 = fn_82FB75A8(iVar7,*(undefined4 *)(iVar2 + 0x28));
      *param_4 = iVar4;
      if (iVar4 == 0) {
        (**(code **)(*(int *)(*param_3 + 4) + 4))(*param_3 + 4,0);
        *param_3 = 0;
      }
      fn_82FA9208(iVar7);
    }
  }
  else {
LAB_82fb476c:
    iVar2 = fn_82FB6330();
  }
  return iVar2;
}

