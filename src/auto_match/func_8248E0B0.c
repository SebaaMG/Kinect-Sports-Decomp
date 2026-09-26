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
extern int fn_82231540();
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_8248E650();
extern int fn_8248EA08();
extern int fn_8248EB98();
extern int fn_8265CA20();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8248E0B0(int param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar5;
  ulonglong uVar3;
  int iVar4;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  puVar11 = (uint *)(param_1 + 0x4c);
  cVar5 = fn_82248AE8(&uStack_50,*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3);
  uVar2 = uStack_50;
  uVar10 = (ulonglong)uStack_50;
  if (cVar5 == '\0') {
    uVar12 = (ulonglong)uStack_4c;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x50);
    uVar12 = uVar10;
    if ((ulonglong)*puVar11 != (ulonglong)uVar8) {
      lVar9 = *puVar11 - uVar10;
      do {
        if ((uVar12 & 0xffffffff) != 0) {
          fn_82365BD8(uVar12,lVar9 + uVar12);
        }
        uVar12 = uVar12 + 8;
      } while ((lVar9 + uVar12 & 0xffffffff) != (ulonglong)uVar8);
    }
  }
  fn_8248EA08(uVar10,uVar12,(int)((int)uVar12 - uVar2) >> 3,0);
  uVar3 = fn_8248EB98(uVar10,uVar12);
  if ((uVar3 & 0xffffffff) != (uVar12 & 0xffffffff)) {
    fn_82231540(uVar3,uVar12);
    uVar12 = uVar3;
  }
  if (*(uint *)(param_1 + 0x5c) <= (uint)((int)((int)uVar12 - uVar2) >> 3)) goto LAB_8248e244;
  if (*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0x28)) {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x28);
  }
  piVar13 = (int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0xc) <= *(uint *)(param_1 + 0x44))
  goto LAB_8248e244;
  piVar1 = *(int **)(param_1 + 0x50);
  piVar7 = (int *)*puVar11;
  piVar6 = (int *)(*(uint *)(param_1 + 0x44) * 0xc + *piVar13);
  if (piVar7 == piVar1) {
LAB_8248e290:
    iVar4 = (**(code **)(*(int *)*piVar6 + 8))();
    if (iVar4 == 0) goto LAB_8248e244;
    piVar6 = (int *)(*(int *)(param_1 + 0x44) * 0xc + *piVar13);
  }
  else {
    do {
      if (*piVar7 == *piVar6) break;
      piVar7 = piVar7 + 2;
    } while (piVar7 != piVar1);
    if (piVar7 == piVar1) goto LAB_8248e290;
  }
  fn_8248E650(puVar11,piVar6);
  iVar4 = *(int *)(param_1 + 0x44);
  uVar8 = iVar4 + 1;
  *(uint *)(param_1 + 0x44) = uVar8;
  if (uVar8 < (uint)((*(int *)(param_1 + 0xc) - *piVar13) / 0xc)) {
    if (uVar2 != 0) {
      fn_82231540(uVar10,uVar12);
      fn_8265CA20(uVar10);
    }
    return 1;
  }
  *(int *)(param_1 + 0x44) = iVar4;
LAB_8248e244:
  if (uVar2 != 0) {
    fn_82231540(uVar10,uVar12);
    fn_8265CA20(uVar10);
  }
  return 0;
}

