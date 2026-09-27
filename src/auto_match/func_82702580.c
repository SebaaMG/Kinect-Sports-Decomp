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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_8267B890();
extern int fn_8267BF50();
extern int fn_8267C498();
extern int fn_826E7BF8();
extern int fn_826E80A8();
extern int fn_826F7D80();
extern int fn_826FD9D0();
extern int fn_8278E9B0();
extern int fn_8278F338();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int lbl_8200DBF8;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_9c;


void fn_82702580(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulonglong auStack_b0 [2];
  byte *pbStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined1 auStack_90 [32];
  
  pbStack_a0 = (byte *)(param_1 + 4);
  uStack_9c = 0xffffffff;
  bVar1 = *pbStack_a0;
  iVar8 = 1;
  if ((bVar1 & 0x80) != 0) {
    iVar8 = 5;
  }
  bVar2 = pbStack_a0[iVar8];
  iStack_98 = iVar8 + 3;
  param_2[0x10] = (uint)CONCAT11(pbStack_a0[iVar8 + 2],pbStack_a0[iVar8 + 1]);
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 2;
    pbVar9 = pbStack_a0 + iStack_98;
    iStack_98 = iVar8 + 5;
    param_2[0x11] = (uint)CONCAT11(pbStack_a0[iVar8 + 4],*pbVar9);
  }
  iStack_94 = 0;
  if ((bVar1 & 4) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 4;
    fn_826E7BF8(&pbStack_a0,param_2 + 9);
  }
  if ((bVar1 & 8) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 8;
    fn_826E80A8(&pbStack_a0,param_2 + 1);
  }
  if ((bVar1 & 0x10) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x10;
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    auStack_b0[0] = (ulonglong)CONCAT11(pbStack_a0[iStack_98 + 1],pbStack_a0[iStack_98]);
    param_2[0xf] = (int)((float)auStack_b0[0] * lbl_8200DD28);
    iStack_98 = iStack_98 + 2;
  }
  if ((bVar1 & 0x20) == 0) {
    param_2[0x14] = 0;
  }
  else {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    param_2[0x14] = iStack_98 + param_1 + 4;
    do {
      iStack_94 = 0;
      pbVar9 = pbStack_a0 + iStack_98;
      iStack_98 = iStack_98 + 1;
    } while (*pbVar9 != 0);
  }
  if ((bVar1 & 0x40) != 0) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    *(ushort *)(param_2 + 0x12) = CONCAT11(pbStack_a0[iStack_98 + 1],pbStack_a0[iStack_98]);
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x40;
    iStack_98 = iStack_98 + 2;
  }
  if ((bVar2 & 1) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x20;
    uVar3 = fn_8278F338(&pbStack_a0,auStack_90,4);
    if (uVar3 != 0) {
      if (*param_2 == 0) {
        uVar4 = fn_8267BF50(param_1);
        puVar5 = (undefined4 *)fn_8267B890(uVar4,0x1c,0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5[1] = 1;
          *(undefined1 *)(puVar5 + 2) = 0;
          *(undefined1 *)((int)puVar5 + 9) = 0;
          *(undefined1 *)(puVar5 + 3) = 0x40;
          *(undefined1 *)((int)puVar5 + 0xd) = 0x40;
          *puVar5 = &lbl_8200DBF8;
          *(undefined1 *)((int)puVar5 + 0xb) = 0x80;
          *(undefined1 *)((int)puVar5 + 10) = 0x10;
          *(undefined1 *)((int)puVar5 + 0xe) = 0x10;
          *(undefined1 *)((int)puVar5 + 0xf) = 0xff;
          *(undefined2 *)(puVar5 + 4) = 0x1c2;
          *(undefined2 *)((int)puVar5 + 0x12) = 0x50;
          *(undefined2 *)(puVar5 + 5) = 0x39;
          *(undefined2 *)((int)puVar5 + 0x16) = 0x39;
          puVar5[6] = 0;
        }
        if (*param_2 != 0) {
          fn_8267C498();
        }
        *param_2 = (int)puVar5;
      }
      if ((uVar3 & 0xffffffff) != 0) {
        puVar10 = auStack_90;
        do {
          fn_8278E9B0(*param_2,puVar10);
          uVar3 = uVar3 - 1;
          puVar10 = puVar10 + 0xc;
        } while (uVar3 != 0);
      }
    }
  }
  if ((bVar2 & 2) != 0) {
    *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x80;
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    bVar7 = pbStack_a0[iStack_98];
    iStack_98 = iStack_98 + 1;
    if ((bVar7 == 0) || (0xe < bVar7)) {
      bVar7 = 1;
    }
    *(byte *)((int)param_2 + 0x4a) = bVar7;
  }
  if ((bVar2 & 4) != 0) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_94 = 0;
    iStack_98 = iStack_98 + 1;
  }
  puVar5 = (undefined4 *)0x0;
  if (((bVar1 & 0x80) != 0) && (puVar5 = *(undefined4 **)(param_1 + 5), puVar5 == (undefined4 *)0x0)
     ) {
    if (iStack_94 != 0) {
      iStack_98 = iStack_98 + 1;
    }
    iStack_98 = iStack_98 + 6;
    iStack_94 = 0;
    uVar4 = fn_8267BF50(param_1);
    puVar5 = (undefined4 *)fn_8267B890(uVar4,0xc,0);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    }
    while( true ) {
      if (iStack_94 != 0) {
        iStack_98 = iStack_98 + 1;
      }
      iStack_94 = 0;
      pbVar9 = pbStack_a0 + iStack_98;
      iVar8 = CONCAT31(CONCAT21(CONCAT11(pbVar9[3],pbVar9[2]),pbVar9[1]),*pbVar9);
      if (iVar8 == 0) break;
      iStack_98 = iStack_98 + 4;
      uVar4 = fn_8267BF50(param_1);
      puVar6 = (undefined4 *)fn_8267B890(uVar4,0x14,0);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined2 *)(puVar6 + 2) = 0;
        *(undefined1 *)((int)puVar6 + 10) = 0;
        *(undefined1 *)((int)puVar6 + 0xb) = 0xff;
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined1 *)((int)puVar6 + 0xd) = 0;
        puVar6[4] = 0;
      }
      auStack_b0[0] = CONCAT44(puVar6,((uint)(auStack_b0[0])));
      fn_826F7D80(puVar6,&pbStack_a0,iVar8);
      fn_826FD9D0(puVar5,auStack_b0);
    }
    *(undefined4 **)(param_1 + 5) = puVar5;
  }
  uVar3 = ((ulonglong)bVar1 & 2) >> 1;
  param_2[0x13] = (int)puVar5;
  param_2[0x15] = 0;
  if ((uVar3 == 0) || ((bVar1 & 1) == 0)) {
    if ((uVar3 == 0) && ((bVar1 & 1) != 0)) {
      param_2[0x15] = 1;
    }
  }
  else {
    param_2[0x15] = 2;
  }
  return;
}

