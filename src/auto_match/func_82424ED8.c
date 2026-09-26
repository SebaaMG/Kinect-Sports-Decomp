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
extern int fn_8225F160();
extern int fn_822622E8();


void fn_82424ED8(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  double dVar12;
  
  iVar6 = param_1[1];
  if (iVar6 == *(int *)(param_1[2] + 0x2b20)) {
    iVar2 = *(int *)(iVar6 + 8);
    uVar1 = (*(int *)(iVar6 + 0xc) - iVar2) / 0x1ac;
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0x534);
    }
    if (uVar1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(iVar2 + 0x388);
    }
    if (uVar1 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(iVar2 + 0x1dc);
    }
    if (uVar1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(iVar2 + 0x30);
    }
    if (uVar1 < 2) {
      bVar11 = false;
    }
    else {
      bVar11 = *(int *)(iVar2 + 0x1b0) == 0;
    }
    dVar12 = (double)*(float *)(iVar6 + 0x2e4);
    iVar6 = fn_8225F160();
    uVar3 = *(undefined4 *)(iVar6 + 0x14);
    uVar4 = *(undefined4 *)(param_1[1] + 0x408);
    uVar5 = (**(code **)(*param_1 + 4))(param_1);
    fn_822622E8(dVar12,uVar4,uVar5,uVar3,bVar11,uVar10,uVar9,uVar8,uVar7);
  }
  return;
}

