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
extern int fn_8270BD28();


void fn_8270C258(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar11;
  int iVar10;
  int iVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar12 = param_2 + 0x20;
  uVar2 = *param_1;
  iVar3 = *(int *)(param_2 + 0x18);
  uVar4 = param_3 - iVar1 >> (uVar2 & 0x3f);
  lVar13 = (longlong)(int)uVar4;
  uVar6 = fn_8270BD28(iVar12,lVar13);
  uVar5 = uVar4 >> 2 & 0x3ffffffc;
  uVar8 = uVar6 + lVar13;
  iVar7 = (int)uVar6;
  iVar10 = iVar7 << (uVar2 & 0x3f);
  *(uint *)(uVar5 + iVar12) = *(uint *)(uVar5 + iVar12) & ~(3 << ((uVar4 & 0xf) << 1));
  uVar5 = (uint)((uVar8 - 1 & 0xffffffff) >> 2) & 0x3ffffffc;
  *(uint *)(uVar5 + iVar12) =
       *(uint *)(uVar5 + iVar12) & ~(3 << ((uint)((uVar8 - 1 & 0xffffffff) << 1) & 0x1e));
  if (uVar4 == 0) {
LAB_8270c310:
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((*(uint *)(((uint)(lVar13 - 1U) >> 2 & 0x3ffffffc) + iVar12) >>
         ((uint)((lVar13 - 1U & 0xffffffff) << 1) & 0x1e) & 3) != 0) goto LAB_8270c310;
  }
  if ((uint)(iVar10 + param_3) < (uint)(iVar3 + iVar1)) {
    bVar11 = true;
    if ((*(uint *)(((uint)uVar8 >> 2 & 0x3ffffffc) + iVar12) >>
         ((uint)((uVar8 & 0xffffffff) << 1) & 0x1e) & 3) == 0) goto LAB_8270c340;
  }
  bVar11 = false;
LAB_8270c340:
  iVar10 = iVar10 + param_3;
  if ((uVar6 & 0xffffffff) < 0x21) {
    *(short *)(iVar10 + -2) = (short)uVar6;
    *(short *)(param_3 + 0xc) = (short)uVar6;
  }
  else {
    *(undefined2 *)(iVar10 + -2) = 0x21;
    *(undefined2 *)(param_3 + 0xc) = 0x21;
    *(int *)(iVar10 + -8) = iVar7;
    *(int *)(param_3 + 0x10) = iVar7;
  }
  *(int *)(param_3 + 8) = param_2;
  if (bVar11 || bVar9) {
    fn_82690F08(param_1 + 2,param_3,uVar2);
  }
  else {
    fn_826909B0(param_1 + 2,param_3);
  }
  return;
}

