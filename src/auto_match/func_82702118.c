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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267BF50();
extern int fn_826E7BF8();
extern int fn_826E80A8();
extern int fn_826F7D80();
extern int fn_826FD9D0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_5c;


void fn_82702118(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong auStack_70 [2];
  byte *pbStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  pbStack_60 = (byte *)(param_1 + 4);
  iVar7 = 1;
  uStack_5c = 0xffffffff;
  bVar1 = *pbStack_60;
  if ((bVar1 & 0x80) != 0) {
    iVar7 = 5;
  }
  iStack_58 = iVar7 + 2;
  *(uint *)(param_2 + 0x40) = (uint)CONCAT11(pbStack_60[iVar7 + 1],pbStack_60[iVar7]);
  if ((bVar1 & 2) != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 2;
    pbVar6 = pbStack_60 + iStack_58;
    iStack_58 = iVar7 + 4;
    *(uint *)(param_2 + 0x44) = (uint)CONCAT11(pbStack_60[iVar7 + 3],*pbVar6);
  }
  iStack_54 = 0;
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 4;
    fn_826E7BF8(&pbStack_60,param_2 + 0x24);
  }
  if ((bVar1 & 8) != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 8;
    fn_826E80A8(&pbStack_60,param_2 + 4);
  }
  if ((bVar1 & 0x10) != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x10;
    iVar7 = iStack_58;
    if (iStack_54 != 0) {
      iVar7 = iStack_58 + 1;
    }
    iStack_58 = iVar7 + 2;
    iStack_54 = 0;
    auStack_70[0] = (ulonglong)CONCAT11(pbStack_60[iVar7 + 1],pbStack_60[iVar7]);
    *(float *)(param_2 + 0x3c) = (float)auStack_70[0] * lbl_8200DD28;
  }
  if ((bVar1 & 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x50) = 0;
  }
  else {
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    *(int *)(param_2 + 0x50) = iStack_58 + param_1 + 4;
    do {
      iStack_54 = 0;
      pbVar6 = pbStack_60 + iStack_58;
      iStack_58 = iStack_58 + 1;
    } while (*pbVar6 != 0);
  }
  if ((bVar1 & 0x40) != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x40;
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    pbVar6 = pbStack_60 + iStack_58;
    iStack_54 = 0;
    iStack_58 = iStack_58 + 2;
    *(ushort *)(param_2 + 0x48) = CONCAT11(pbVar6[1],*pbVar6);
  }
  puVar4 = (undefined4 *)0x0;
  if (((bVar1 & 0x80) != 0) && (puVar4 = *(undefined4 **)(param_1 + 5), puVar4 == (undefined4 *)0x0)
     ) {
    if (iStack_54 != 0) {
      iStack_58 = iStack_58 + 1;
    }
    iStack_54 = 0;
    iVar7 = iStack_58 + 6;
    if (param_3 < 6) {
      iVar7 = iStack_58 + 4;
    }
    iStack_58 = iVar7;
    uVar3 = fn_8267BF50(param_1);
    puVar4 = (undefined4 *)fn_8267B890(uVar3,0xc,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    while( true ) {
      if (iStack_54 != 0) {
        iStack_58 = iStack_58 + 1;
      }
      iStack_54 = 0;
      if (param_3 < 6) {
        uVar9 = (uint)CONCAT11((pbStack_60 + iStack_58)[1],pbStack_60[iStack_58]);
        iStack_58 = iStack_58 + 2;
      }
      else {
        pbVar6 = pbStack_60 + iStack_58;
        uVar9 = CONCAT31(CONCAT21(CONCAT11(pbVar6[3],pbVar6[2]),pbVar6[1]),*pbVar6);
        iStack_58 = iStack_58 + 4;
      }
      if (uVar9 == 0) break;
      uVar3 = fn_8267BF50(param_1);
      puVar5 = (undefined4 *)fn_8267B890(uVar3,0x14,0);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined2 *)(puVar5 + 2) = 0;
        *(undefined1 *)((int)puVar5 + 10) = 0;
        *(undefined1 *)((int)puVar5 + 0xb) = 0xff;
        *(undefined1 *)(puVar5 + 3) = 0;
        *(undefined1 *)((int)puVar5 + 0xd) = 0;
        puVar5[4] = 0;
      }
      auStack_70[0] = CONCAT44(puVar5,((uint)(auStack_70[0])));
      fn_826F7D80(puVar5,&pbStack_60,uVar9);
      fn_826FD9D0(puVar4,auStack_70);
    }
    *(undefined4 **)(param_1 + 5) = puVar4;
  }
  uVar2 = ((ulonglong)bVar1 & 2) >> 1;
  *(undefined4 **)(param_2 + 0x4c) = puVar4;
  *(undefined4 *)(param_2 + 0x54) = 0;
  if ((uVar2 == 0) || ((bVar1 & 1) == 0)) {
    if (uVar2 != 0) {
      return;
    }
    if ((bVar1 & 1) == 0) {
      return;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 2;
  }
  *(undefined4 *)(param_2 + 0x54) = uVar8;
  return;
}

