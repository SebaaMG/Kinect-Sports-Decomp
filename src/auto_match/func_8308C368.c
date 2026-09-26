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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_831BCF54;


longlong fn_8308C368(uint *param_1,int param_2,int param_3,int param_4,ulonglong param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar9;
  longlong lVar8;
  ulonglong uVar10;
  uint uVar11;
  
  uVar2 = param_1[1];
  uVar10 = uVar2 + param_5;
  iVar3 = fn_82CE5410();
  uVar11 = (uint)uVar10;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar11) {
    uVar6 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar11) {
      uVar6 = uVar10;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,uVar6,4);
  }
  param_1[1] = uVar11;
  lVar4 = (uVar10 & 0x3fffffff) * 4 + (ulonglong)*param_1;
  lVar7 = ((ulonglong)uVar2 & 0x3fffffff) * 4 + (ulonglong)*param_1;
  uVar1 = *(ushort *)((int)((param_5 & 0xffffffff) << 2) + param_4 + -4);
  dataCacheBlockTouch(lVar4 + -4);
  dataCacheBlockTouch(lVar4 + -0x204);
  dataCacheBlockTouch(lVar7 + -4);
  dataCacheBlockTouch(lVar4 + -0x204);
  puVar9 = (ushort *)(lVar7 + -4);
  puVar5 = (ushort *)(lVar4 + -4);
  *puVar5 = *puVar9;
  *(undefined2 *)((int)lVar4 + -2) = *(undefined2 *)((int)lVar7 + -2);
  lVar4 = lVar4 + -8;
  iVar3 = (int)lVar4;
  *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar9 & 1) + param_3 * 2) * 4) +
             (uint)*(ushort *)((int)lVar7 + -2) * 0x10 + param_2) =
       (short)((int)((int)puVar5 - *param_1) >> 2);
  lVar8 = lVar7 + -8;
  if (uVar1 < *(ushort *)lVar8) {
    lVar7 = lVar7 + -0x208;
    do {
      *(undefined4 *)lVar4 = *(undefined4 *)(ushort *)lVar8;
      dataCacheBlockTouch(lVar7);
      *(short *)(*(int *)(&lbl_831BCF54 + ((*(ushort *)lVar8 & 1) + param_3 * 2) * 4) +
                 (uint)*(ushort *)((int)lVar7 + 0x202) * 0x10 + param_2) =
           (short)((int)((int)(undefined4 *)lVar4 - *param_1) >> 2);
      dataCacheBlockTouch(lVar7);
      lVar7 = lVar7 + -4;
      lVar8 = lVar8 + -4;
      lVar4 = lVar4 + -4;
      iVar3 = (int)lVar4;
    } while (uVar1 < *(ushort *)lVar8);
  }
  return (longlong)((int)(iVar3 - *param_1) >> 2) + 1;
}

