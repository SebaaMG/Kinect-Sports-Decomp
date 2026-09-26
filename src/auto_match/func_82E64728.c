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
extern unsigned int *auStack_60;
extern int fn_82A3F758();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E5AEC8();
extern int fn_82E64288();
extern int fn_82E644B8();
extern int fn_82E64520();
extern int fn_82F6ADA8();


undefined8 fn_82E64728(int param_1,short *param_2)

{
  longlong lVar1;
  int iVar3;
  int *piVar4;
  ulonglong uVar2;
  undefined8 uVar5;
  short *psVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint auStack_60 [24];
  
  fn_82E50CB8(param_1 + 0xc);
  if (param_2 == (short *)0x0) {
    uVar9 = 0xffffffff80070057;
    goto LAB_82e64924;
  }
  uVar7 = 0x104;
  lVar10 = 0;
  psVar6 = param_2;
  do {
    if (*psVar6 == 0) break;
    uVar7 = uVar7 - 1;
    psVar6 = psVar6 + 1;
  } while (uVar7 != 0);
  uVar9 = 0xffffffff80070057;
  uVar5 = uVar9;
  if ((uVar7 & 0xffffffff) != 0) {
    lVar10 = 0x104 - uVar7;
    uVar5 = 0;
  }
  if ((int)uVar5 < 0) goto LAB_82e64924;
  uVar7 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    do {
      lVar1 = fn_82E644B8(param_1 + 0x4c,uVar7,auStack_60);
      puVar8 = (undefined4 *)(-(uint)(lVar1 != 0) & auStack_60[0]);
      if (puVar8 == (undefined4 *)0x0) {
        uVar9 = 0xffffffff80004003;
        goto LAB_82e64924;
      }
      iVar3 = fn_82F6ADA8(*puVar8,param_2);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0xb8) = (int)uVar7;
        uVar9 = uVar5;
        goto LAB_82e64924;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb4));
  }
  piVar4 = (int *)fn_82E50BE8(0x70,0,0,0,0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    fn_82E5AEC8(piVar4 + 1);
  }
  if (piVar4 == (int *)0x0) {
    uVar9 = 0xffffffff8007000e;
    goto LAB_82e64924;
  }
  *piVar4 = 0;
  uVar7 = lVar10 + 1;
  lVar10 = (uVar7 & 0x7fffffff) << 1;
  if (0x7fffffff < (uVar7 & 0xffffffff)) {
    lVar10 = -1;
  }
  uVar2 = fn_82E50BE8(lVar10,0,0,0,0);
  *piVar4 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
LAB_82e648ac:
    uVar9 = 0xffffffff8007000e;
  }
  else {
    if ((uVar7 & 0xffffffff) < 0x80000000) {
      uVar9 = fn_82A3F758(uVar2,uVar7,param_2);
    }
    if (-1 < (int)uVar9) {
      iVar3 = fn_82E64288(param_1 + 0x4c,piVar4,param_1 + 0xb8);
      if (iVar3 == 0) goto LAB_82e648ac;
      piVar4 = (int *)0x0;
    }
  }
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      fn_82E4FE40();
    }
    *piVar4 = 0;
    fn_82E64520(piVar4,1);
  }
LAB_82e64924:
  fn_82E50F10(param_1 + 0xc);
  return uVar9;
}

