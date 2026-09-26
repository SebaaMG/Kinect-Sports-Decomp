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
extern unsigned int *auStack_20;
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E57D8();
extern int fn_822F25B0();
extern int fn_822F3018();
extern int fn_82397F30();
extern int fn_82397F88();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822F2F20(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 in_vr12 [16];
  undefined1 auStack_20 [16];
  
  fn_822F25B0();
  bVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0;
  bVar6 = bVar1 << 1;
  if ((bVar1) && (iVar4 = fn_82397F30(*(undefined4 *)(param_1 + 0x10)), iVar4 != 0)) {
    iVar5 = fn_822F3018(auStack_20,param_1);
    iVar4 = *(int *)(param_1 + 0xc);
    puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(0xffffffff82192950,0x60);
    vectorRotateLeftImmediateMaskInsert128
              (*(undefined1 (*) [16])(in_r0 + iVar4 + 0x290 & 0xfffffff0),in_vr12,1,0);
    if (!(bool)(bVar6 >> 1 & 1)) {
      puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x290 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined4 *)(iVar4 + 0x2a4) = 0;
      *(undefined4 *)(iVar4 + 0x2a8) = 0;
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar4 = fn_82397F88(*(undefined4 *)(param_1 + 0x10)), iVar4 != 0)) {
    fn_822E5640(*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_822E57D8();
  }
  else {
    iVar4 = fn_82397F88(*(undefined4 *)(param_1 + 0x10));
    if (iVar4 != 0) {
      fn_822E5710(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}

