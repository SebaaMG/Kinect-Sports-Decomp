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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern int fn_8227CB30();
extern int fn_82312D18();
extern int fn_82359C18();
extern int fn_8265CA60();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821AF47C;
extern unsigned int lbl_821B6604;
extern unsigned int lbl_821B6A4C;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_64;


undefined4 * fn_82311AD0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined8 in_r0;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  uVar2 = *(undefined4 *)(param_2 + 0x114);
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = &lbl_821AF47C;
  param_1[2] = uVar2;
  param_1[1] = 0xe;
  param_1[8] = &lbl_821B6604;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  uVar2 = fn_8265CA60(0x54);
  param_1[9] = uVar2;
  param_1[0xd] = 0;
  param_1[0xf] = 7;
  dVar8 = (double)lbl_821CC160;
  param_1[0xe] = lbl_821CC160;
  puVar3 = (undefined4 *)fn_8265CA60(0xb0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 2;
    *puVar3 = 7;
    lVar7 = 7;
    do {
      puVar3 = puVar3 + 6;
      *puVar3 = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[0xd] = puVar4;
  uVar6 = 0;
  do {
    iVar5 = uVar6 + param_1[0xd];
    fn_82359C18(iVar5);
    uVar6 = uVar6 + 0x18;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  } while (uVar6 < 0xa8);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = (float)dVar8;
  param_1[0x10] = param_2;
  param_1[8] = &lbl_821B6A4C;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x40] = (float)dVar8;
  param_1[0x46] = (float)dVar8;
  param_1[0x41] = 0;
  param_1[0x47] = (float)dVar8;
  param_1[0x42] = 0;
  param_1[0x48] = (float)dVar8;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar3 = (undefined4 *)((uint)(&lbl_82196750 + (int)in_r0) & 0xfffffff0);
  uVar2 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_1 + 0x4c) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar2;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  puVar3 = (undefined4 *)((uint)(&lbl_82196750 + (int)in_r0) & 0xfffffff0);
  uVar2 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_1 + 0x50) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar2;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  uVar1 = fn_82312D18(auStack_60,0x823129a800000000,CONCAT44(param_1,uStack_64));
  fn_8227CB30((ulonglong)(uint)param_1[0xd] + 0x48,uVar1);
  fn_82359C18(uVar1);
  uVar1 = fn_82312D18(auStack_60,0x82312ab800000000,CONCAT44(param_1,uStack_64));
  fn_8227CB30((ulonglong)(uint)param_1[0xd] + 0x60,uVar1);
  fn_82359C18(uVar1);
  uVar1 = fn_82312D18(auStack_60,0x823128b800000000,CONCAT44(param_1,uStack_64));
  fn_8227CB30((ulonglong)(uint)param_1[0xd] + 0x78,uVar1);
  fn_82359C18(uVar1);
  return param_1;
}

