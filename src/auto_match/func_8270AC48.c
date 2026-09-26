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
extern int fn_826909B0();
extern int fn_82690F08();


void fn_8270AC48(uint *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar9;
  int iVar8;
  longlong lVar10;
  
  iVar7 = param_2 + 0x20;
  bVar5 = true;
  iVar8 = *(int *)(param_2 + 0x1c);
  iVar1 = *(int *)(param_2 + 0x18);
  uVar3 = param_4 >> (*param_1 & 0x3f);
  uVar2 = param_3 - iVar8 >> (*param_1 & 0x3f);
  uVar4 = uVar2 >> 3 & 0x1ffffffc;
  lVar10 = (ulonglong)uVar3 + (longlong)(int)uVar2;
  uVar6 = lVar10 - 1;
  *(uint *)(uVar4 + iVar7) = *(uint *)(uVar4 + iVar7) & ~(1 << (uVar2 & 0x1f));
  uVar4 = (uint)((uVar6 & 0xffffffff) >> 3) & 0x1ffffffc;
  *(uint *)(uVar4 + iVar7) = *(uint *)(uVar4 + iVar7) & ~(1 << ((uint)uVar6 & 0x1f));
  if ((longlong)(int)uVar2 == 0) {
LAB_8270acec:
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((1 << (uVar2 - 1 & 0x1f) & *(uint *)((uVar2 - 1 >> 3 & 0x1ffffffc) + iVar7)) != 0)
    goto LAB_8270acec;
  }
  if (param_3 + param_4 < (uint)(iVar1 + iVar8)) {
    uVar2 = (uint)lVar10;
    if ((1 << (uVar2 & 0x1f) & *(uint *)((uVar2 >> 3 & 0x1ffffffc) + iVar7)) == 0)
    goto LAB_8270ad18;
  }
  bVar5 = false;
LAB_8270ad18:
  iVar8 = (uVar3 << (*param_1 & 0x3f)) + param_3;
  if ((ulonglong)uVar3 < 0x21) {
    *(short *)(iVar8 + -2) = (short)uVar3;
    *(short *)(param_3 + 0xc) = (short)uVar3;
  }
  else {
    *(undefined2 *)(iVar8 + -2) = 0x21;
    *(undefined2 *)(param_3 + 0xc) = 0x21;
    *(uint *)(iVar8 + -8) = uVar3;
    *(uint *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 8) = param_2;
  if (bVar5 || bVar9) {
    fn_82690F08(param_1 + 2,param_3,*param_1);
  }
  else {
    fn_826909B0(param_1 + 2);
  }
  return;
}

