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
extern unsigned int *auStack_40;
extern unsigned int *auStack_80;
extern unsigned int fStack_30;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern int fn_8243D2D8();
extern int fn_824451C8();
extern int fn_82445810();
extern int fn_82445DD0();
extern int fn_82453B80();
extern int fn_82526C70();
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_8329EA20;
extern unsigned int uStack_2c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern V16 vectorConditionalSelect();


void fn_82444580(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  float fStack_30;
  undefined1 uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if ((*(char *)(iVar2 + 0x2c) == '\0') || (*(int *)(iVar2 + 0xd4) != 0)) {
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      iVar2 = fn_82445DD0(param_1,param_2,0);
      if (iVar2 == 0) {
        return;
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      if (0xf < *(uint *)(*(int *)(param_1 + 4) + 0x1c)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      fn_82526C70(&ppuStack_50,0x20,0xffffffff821b0c70,puVar3,0xffffffff821b9a08);
      uStack_60 = lbl_831E4E38;
      fStack_58 = lbl_821CC160;
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
      puVar3 = (undefined4 *)((uint)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
      fStack_68 = lbl_821CC160;
      fStack_6c = lbl_821CC160;
      uStack_70 = lbl_831E4E38;
      fStack_5c = lbl_821CC160;
      puVar1 = (undefined4 *)((int)&uStack_70 + in_r0 & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      fn_8243D2D8(uVar4,&ppuStack_50,&uStack_70,&uStack_60);
      return;
    }
    if (*(int *)(iVar2 + 0xd4) == 0) {
      return;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x174) + 0x5c) + 0x1d4) == -1) {
      uVar4 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_2 + 0x174) + 0x5c);
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
    }
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    fStack_30 = lbl_821CC160;
    uStack_4c = 0;
    ppuStack_50 = &lbl_821B9BC8;
    uStack_48 = 3;
    uStack_44 = 0;
    uStack_2c = 0;
    iVar2 = fn_82453B80(uVar4,2,&ppuStack_50);
    if (iVar2 == 0) {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x2c) = 0;
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x80U & 0xfffffff0);
    *puVar1 = *puVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    auStack_80[0] = uStack_2c;
  }
  else {
    if (*(float *)(iVar2 + 0x3c) == lbl_821CC160) {
      fn_82445810();
      return;
    }
    iVar2 = fn_82445DD0(param_1,param_2,auStack_80);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined4 *)((uint)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x80U & 0xfffffff0);
    *puVar1 = *puVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x2c) = 0;
  }
  fn_824451C8(param_1,param_2,auStack_80[0]);
  return;
}

