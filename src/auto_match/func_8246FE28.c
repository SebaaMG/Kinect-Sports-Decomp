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
extern int fn_824651F0();
extern int fn_82468FC0();
extern int fn_82469038();
extern int fn_8246B178();
extern int fn_8246B2A8();
extern int fn_82672C20();
extern unsigned int lbl_82193AF0;


void fn_8246FE28(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  uVar4 = *(uint *)(iVar3 + 0x34);
  if ((uVar4 != 0) && (uVar5 = *(uint *)(iVar3 + 0x74), uVar8 = (ulonglong)uVar5, uVar5 != 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x3c);
    if (*(float *)(iVar3 + 0x118) <= *(float *)(iVar3 + 0x234)) {
      uVar7 = fn_8246B178(uVar8 + 0x74,3,0xffffffff831c6cac);
    }
    else {
      uVar7 = fn_8246B178((ulonglong)uVar4 + 0x74,3,0xffffffff831c6cac);
      uVar8 = (ulonglong)uVar4;
    }
    fn_8246B2A8(uVar8,uVar7);
  }
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x24);
  if ((fVar2 < fVar1 - lbl_82193AF0) || (fVar1 + lbl_82193AF0 < fVar2)) {
    if (fVar2 <= fVar1) {
      fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0x114);
      piVar6 = *(int **)(param_1 + 0x444);
      if (*piVar6 != 4) {
        *piVar6 = 4;
        fn_82672C20(piVar6[1],0xffffffff821bc3ac,0,0);
      }
      uVar7 = 2;
    }
    else {
      fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0x110);
      piVar6 = *(int **)(param_1 + 0x444);
      if (*piVar6 != 3) {
        *piVar6 = 3;
        fn_82672C20(piVar6[1],0xffffffff821bc39c,0,0);
      }
      uVar7 = 1;
    }
    fn_82469038(*(undefined4 *)(param_1 + 0x418),uVar7);
  }
  else {
    fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0x10c);
    piVar6 = *(int **)(param_1 + 0x444);
    if (*piVar6 != 5) {
      *piVar6 = 5;
      fn_82672C20(piVar6[1],0xffffffff821bc3bc,0,0);
    }
    fn_82468FC0(*(undefined4 *)(param_1 + 0x418));
  }
  return;
}

