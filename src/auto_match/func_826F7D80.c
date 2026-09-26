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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern int fn_8267C4F0();
extern int fn_826A71F0();
extern int fn_826A9FB0();
extern unsigned int uStack_34;


void fn_826F7D80(uint *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar12;
  uint uStack_34;
  
  uStack_34 = ((((U64)(uStack_34)) & (~(((U64)0xFFFFFF) << 8))) | ((((U64)((((U64)(uStack_34) >> 8) & 0xFFFFFF) & 0xffff)) & ((U64)0xFFFFFF)) << 8));
  uStack_34 = (uint)(((U64)(uStack_34) >> 8) & 0xFFFFFF);
  param_1[1] = 0;
  *param_1 = param_3;
  param_1[2] = 0xff;
  param_1[3] = uStack_34;
  if (param_2[3] != 0) {
    param_2[2] = param_2[2] + 1;
  }
  iVar6 = param_2[2];
  iVar7 = *param_2;
  param_2[3] = 0;
  iVar11 = iVar7 + iVar6;
  uVar4 = *(undefined1 *)(iVar7 + iVar6);
  uVar1 = *(undefined1 *)(iVar11 + 2);
  uVar2 = *(undefined1 *)(iVar11 + 1);
  uVar3 = *(undefined1 *)(iVar11 + 3);
  param_2[2] = iVar6 + 4;
  uVar12 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar1),uVar2),uVar4);
  if ((*param_1 & 0x20000) != 0) {
    param_2[3] = 0;
    bVar5 = *(byte *)(iVar6 + 4 + iVar7);
    uVar12 = uVar12 - 1;
    param_2[2] = iVar6 + 5;
    *(ushort *)(param_1 + 2) = (ushort)bVar5;
  }
  uVar8 = fn_826A9FB0();
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = uVar8;
  fn_826A71F0(uVar8,param_2,uVar12);
  uVar9 = (ulonglong)*(uint *)(param_1[4] + 0xc);
  if ((uVar12 & 0xffffffff) != uVar9) {
    if (uVar9 < (uVar12 & 0xffffffff)) {
      for (lVar10 = uVar12 - uVar9; lVar10 != 0; lVar10 = lVar10 + -1) {
        if (param_2[3] != 0) {
          param_2[2] = param_2[2] + 1;
        }
        param_2[3] = 0;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      param_2[2] = (param_2[2] - *(uint *)(param_1[4] + 0xc)) + (int)uVar12;
    }
  }
  return;
}

