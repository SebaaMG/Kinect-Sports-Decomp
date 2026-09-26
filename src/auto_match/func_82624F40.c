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
extern int fn_82522D98();
extern int fn_82624D70();
extern int fn_82A1EFC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D4;
extern unsigned int lbl_821CA460;


undefined4 *
fn_82624F40(undefined4 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,int param_5,
             undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 *puVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar6 = (ulonglong)param_4 * 0x1d0 + 0x470;
  puVar3 = (undefined4 *)fn_82522D98(lVar6);
  fn_82A1EFC0(puVar3,0,lVar6);
  *puVar3 = param_1;
  *(ushort *)((int)puVar3 + 6) = param_4;
  uVar9 = lbl_821CA460;
  uVar8 = lbl_821954D4;
  uVar7 = lbl_82192734;
  puVar3[0x6c] = 0;
  puVar3[3] = uVar8;
  puVar3[0x8e] = 0xffffffff;
  puVar3[5] = uVar7;
  puVar3[0x61] = uVar9;
  puVar3[0x57] = uVar9;
  puVar3[0x59] = uVar9;
  if (0 < (longlong)(short)param_4 + -1) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 0x1d0;
      sVar5 = (short)iVar4 + 1;
      iVar4 = (int)sVar5;
      *(short *)((int)puVar3 + iVar1 + 0x342) = sVar5;
    } while ((int)sVar5 < *(short *)((int)puVar3 + 6) + -1);
  }
  puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined2 *)((int)puVar3 + *(short *)((int)puVar3 + 6) * 0x1d0 + 0x172) = 0xffff;
  puVar2 = (undefined4 *)((uint)(puVar3 + 0xc) & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar3[0x25] = *param_6;
  puVar3[0x26] = param_6[1];
  puVar3[0x27] = param_6[2];
  puVar3[0x54] = 1;
  puVar3[0x7f] = 0;
  puVar3[0x95] = 6;
  fn_82624D70(puVar3,param_2,param_3);
  puVar3[0xa1] = 0;
  puVar3[0xa3] = 0xffffffff;
  puVar3[0xa2] = 0;
  return puVar3;
}

