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
extern int fn_8229AAF8();
extern int fn_8234B0C8();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_82406BE0();
extern int fn_824554C8();
extern int fn_82455740();
extern int fn_824557C0();
extern int fn_824A5DE0();
extern int fn_824BD9D8();
extern int fn_824CD030();
extern int fn_8254E7D8();
extern int fn_8288B760();
extern unsigned int iStack_3c;
extern unsigned int iStack_5c;
extern unsigned int iStack_7c;
extern unsigned int iStack_9c;
extern unsigned int iStack_bc;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B7E20;
extern unsigned int lbl_821B7E38;
extern unsigned int lbl_821B7E50;
extern unsigned int lbl_821B7E68;
extern unsigned int lbl_821B7E80;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82406888(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  double dVar7;
  undefined **ppuStack_c0;
  int iStack_bc;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a0;
  int iStack_9c;
  undefined ***pppuStack_90;
  undefined **ppuStack_80;
  int iStack_7c;
  undefined ***pppuStack_70;
  undefined **ppuStack_60;
  int iStack_5c;
  undefined ***pppuStack_50;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined ***pppuStack_30;
  
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 == 3) {
    if (*(int *)(param_2 + 0x4c) != 0) {
      return;
    }
    iVar3 = *(int *)(param_2 + 0x48);
    if (*(int *)(iVar3 + 0x11c) != 0) {
      return;
    }
    if (*(float *)(iVar3 + 0x88) < *(float *)(iVar3 + 0x94)) {
      return;
    }
    pppuStack_30 = &ppuStack_40;
    ppuStack_40 = &lbl_821B7E20;
    iStack_3c = param_2;
    fn_824557C0((ulonglong)*(uint *)(param_2 + 8) + 0x7f0,&ppuStack_40);
    pppuVar5 = &ppuStack_40;
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        return;
      }
      *(float *)(param_2 + 0x68) = (float)((double)*(float *)(param_2 + 0x68) + param_1);
      dVar7 = (double)lbl_821CC160;
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) + 0x24);
      if (iVar3 != 0) {
        iVar2 = fn_824CD030(iVar3);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_824A5DE0(*(undefined4 *)(iVar3 + 0xa50));
        }
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_2 + 0x5c);
          *(undefined4 *)(iVar3 + 0x90) = 0;
          if (*(int *)(*(int *)(iVar3 + 0x7c) + 4) != 0) {
            fn_8254E7D8(dVar7,(double)*(float *)(iVar3 + 0x6c));
          }
          iVar3 = *(int *)(iVar3 + 0x7c);
          if (*(int *)(iVar3 + 4) != 0) {
            *(undefined4 *)(iVar3 + 0x1d4) = 0;
            *(undefined4 *)(iVar3 + 0x1cc) = 0;
            uVar1 = lbl_821CA460;
            *(undefined4 *)(iVar3 + 0x1d0) = lbl_82192734;
            *(undefined4 *)(iVar3 + 0x1e0) = uVar1;
          }
          uVar6 = 0xffffffff821b1acc;
        }
        else {
          fn_824554C8(*(undefined4 *)(param_2 + 0x5c));
          uVar6 = 0xffffffff821b0c44;
        }
        fn_8234B0C8(dVar7,(ulonglong)
                                *(uint *)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) + 0x118) + 0x2c0
                          ,uVar6);
      }
      if (*(int *)(param_2 + 0x74) == 0) {
        pppuStack_b0 = &ppuStack_c0;
        ppuStack_c0 = &lbl_821B7E68;
        iStack_bc = param_2;
        fn_823599A8(*(undefined4 *)(param_2 + 8),&ppuStack_c0);
        fn_82359C18(&ppuStack_c0);
        *(undefined4 *)(param_2 + 0x74) = 1;
      }
      if (*(int *)(param_2 + 0x6c) != 0) {
        iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4) + 0x14);
        if (((*(int *)(iVar3 + 0x14) == 0) && (*(int *)(iVar3 + 0x18) == 0)) &&
           (*(int *)(param_2 + 0x70) == 0)) {
          iVar3 = *(int *)(*(int *)(param_2 + 0x10) + 0x38);
          if (*(int *)(iVar3 + 0x168) == 0) {
            uVar4 = *(uint *)(iVar3 + 0x16c);
          }
          else {
            uVar4 = fn_8288B760();
            uVar4 = uVar4 & 0xff;
          }
          if (uVar4 != 0) {
            fn_824BD9D8(*(undefined4 *)(*(int *)(param_2 + 8) + 0x90));
          }
          *(undefined4 *)(param_2 + 0x70) = 1;
        }
        if (*(float *)(param_2 + 0x68) <= *(float *)(param_2 + 0x38)) {
          return;
        }
        fn_82406BE0(param_2,0);
        pppuStack_90 = &ppuStack_a0;
        ppuStack_a0 = &lbl_821B7E80;
        iStack_9c = param_2;
        fn_82455740((ulonglong)*(uint *)(param_2 + 8) + 0x7f0,&ppuStack_a0);
        fn_82359C18(&ppuStack_a0);
        return;
      }
      if (*(float *)(param_2 + 0x68) <= *(float *)(param_2 + 0x34)) {
        return;
      }
      *(undefined4 *)(param_2 + 0x6c) = 1;
      *(float *)(param_2 + 0x68) = (float)dVar7;
      fn_8229AAF8(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4));
      return;
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      return;
    }
    iVar3 = *(int *)(param_2 + 8) + 0x7f0;
    if (*(float *)(*(int *)(param_2 + 8) + 0x7f0) <
        *(float *)(*(int *)(param_2 + 0x48) + 0x94) - *(float *)(*(int *)(param_2 + 0x48) + 0x88)) {
      return;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) + 0x24) == 0) {
      pppuStack_70 = &ppuStack_80;
      ppuStack_80 = &lbl_821B7E38;
      iStack_7c = param_2;
      fn_82455740(iVar3,&ppuStack_80);
      pppuVar5 = &ppuStack_80;
    }
    else {
      pppuStack_50 = &ppuStack_60;
      ppuStack_60 = &lbl_821B7E50;
      iStack_5c = param_2;
      fn_824557C0(iVar3,&ppuStack_60);
      pppuVar5 = &ppuStack_60;
    }
  }
  fn_82359C18(pppuVar5);
  *(undefined4 *)(param_2 + 0x4c) = 1;
  return;
}

