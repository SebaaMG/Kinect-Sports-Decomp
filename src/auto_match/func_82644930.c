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
extern int fn_82644040();
extern U64 storeDoubleWordConditionalIndexed();


void fn_82644930(longlong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  
  iVar7 = (int)param_1;
  lVar10 = param_1 + 12000;
  bVar1 = *(longlong *)(iVar7 + 12000) != 0xffffffff;
  bVar4 = *(byte *)(iVar7 + 0x2abe) >> 2;
  iVar9 = ((bVar4 & 1) + (uint)bVar1) * 0xb;
  if ((iVar9 == 0) ||
     (puVar5 = (undefined4 *)fn_82644040(param_1,iVar9,0x20), puVar5 == (undefined4 *)0x0)) {
    *param_3 = 0;
  }
  else {
    puVar8 = puVar5 + -1;
    if (bVar1) {
      while( true ) {
        plVar11 = (longlong *)lVar10;
        lVar6 = *plVar11;
        if (*plVar11 == lVar6) break;
        lVar6 = storeDoubleWordConditionalIndexed(*plVar11,0,lVar10);
        *plVar11 = lVar6;
      }
      lVar10 = storeDoubleWordConditionalIndexed(0xffffffff,0,lVar10);
      *plVar11 = lVar10;
      *puVar5 = 0xa31;
      uVar2 = (uint)lVar6 & 0xfffff000;
      puVar5[1] = 0x3000000;
      puVar5[2] = 0x10a2f;
      puVar5[3] = ((int)((ulonglong)lVar6 >> 0x20) + 0xfffU & 0xfffff000) - uVar2;
      puVar5[4] = uVar2;
      puVar5[5] = 0xc0043c00;
      puVar5[6] = 3;
      puVar5[7] = 0xa31;
      puVar5[8] = 0;
      puVar5[9] = 0x80000000;
      puVar8 = puVar5 + 10;
      *puVar8 = 8;
    }
    if ((bVar4 & 1) != 0) {
      uVar2 = *(uint *)(iVar7 + 0x3b10);
      uVar3 = *(uint *)(iVar7 + 0x3b0c);
      puVar8[1] = 0xa31;
      puVar8[2] = 0x1000000;
      iVar7 = ((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1ffff000);
      puVar8[3] = 0x10a2f;
      puVar8[4] = (((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) + 0xfff & 0xfffff000) -
                  iVar7;
      puVar8[5] = iVar7;
      puVar8[6] = 0xc0043c00;
      puVar8[7] = 3;
      puVar8[8] = 0xa31;
      puVar8[9] = 0;
      puVar8[10] = 0x80000000;
      puVar8[0xb] = 8;
    }
    *param_3 = iVar9;
    *param_2 = (((uint)puVar5 >> 0x14) + 0x200 & 0x1000) + ((uint)puVar5 & 0x1fffffff);
  }
  return;
}

