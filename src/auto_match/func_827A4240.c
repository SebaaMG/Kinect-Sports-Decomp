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
extern int fn_8279C910();
extern int fn_827A3A50();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_827A4240(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uStack_50;
  undefined2 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  if ((param_2 == 0) || (uVar1 = *(ushort *)(param_1 + 0x68), (uVar1 >> 5 & 1) != 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  uVar4 = *(uint *)(iVar2 + 0x1c);
  uVar9 = (ulonglong)uVar4;
  uVar10 = (ulonglong)*(uint *)(iVar2 + 0x20);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((param_2 & 0xffff) < 0x20) {
    return 0;
  }
  if (uVar9 == uVar10) {
    if ((uVar1 >> 7 & 1) != 0) {
      uVar10 = uVar10 + 1;
    }
    if (uVar9 == (uVar10 & 0xffffffff)) {
      uStack_50 = uVar3;
      uStack_4c = (short)param_2;
      lVar6 = fn_8279C910(*(undefined4 *)(param_1 + 8),0,&uStack_50);
      uVar7 = lVar6 + (ulonglong)uVar3;
      goto LAB_827a4300;
    }
  }
  uStack_44 = (undefined4)uVar10;
  uStack_48 = uVar4;
  uStack_40 = (short)param_2;
  lVar6 = fn_8279C910(*(undefined4 *)(param_1 + 8),5,&uStack_48);
  uVar7 = uVar9;
  if ((uVar10 & 0xffffffff) <= (ulonglong)uVar4) {
    uVar7 = uVar10;
  }
  uVar7 = uVar7 + lVar6;
LAB_827a4300:
  if ((((ulonglong)*(uint *)(param_1 + 0x18) != (uVar7 & 0xffffffff)) ||
      (uVar9 != (uVar7 & 0xffffffff))) || ((uVar10 & 0xffffffff) != (uVar7 & 0xffffffff))) {
    fn_827A3A50(param_1,uVar7,0);
    uVar8 = 1;
  }
  piVar5 = *(int **)(iVar2 + 0x10);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x20))(piVar5,param_1);
  }
  return uVar8;
}

