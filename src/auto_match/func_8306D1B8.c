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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_5c;
extern unsigned int fStack_6c;
extern int fn_8306D698();
extern int fn_8306D7E0();
extern int fn_8306EEF8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8217EB78;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_8306D1B8(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  char cVar4;
  int iVar3;
  undefined8 uVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar6 = (undefined4 *)(param_1 + 0xdc10);
  cVar4 = fn_8306D7E0(*puVar6);
  if (cVar4 == '\0') {
    if (param_3 == '\0') {
      fn_8306D698(auStack_40,*puVar6,9);
      uVar1 = *puVar6;
      altv207_13(in_vs32,in_vs43);
      puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      iVar3 = fn_8306D698(auStack_50,uVar1,0xb);
      uVar5 = 7;
    }
    else {
      fn_8306D698(auStack_60,*puVar6,5);
      uVar1 = *puVar6;
      altv207_13(in_vs32,in_vs43);
      puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      iVar3 = fn_8306D698(auStack_50,uVar1,7);
      uVar5 = 0xb;
    }
    puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    uVar1 = *puVar6;
    puVar6 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar6 = *puVar2;
    puVar6[1] = uVar8;
    puVar6[2] = uVar9;
    puVar6[3] = uVar10;
    fn_8306D698(auStack_40,uVar1,uVar5);
    dVar7 = (double)fn_8306EEF8();
    uVar1 = lbl_82005344;
    iVar3 = *(int *)(param_2 + 0xd80);
    if ((double)lbl_82002C28 <= dVar7) {
      if (iVar3 == 0) {
        if (fStack_5c - fStack_6c <= lbl_82186E6C) {
          return;
        }
        *(undefined4 *)(param_2 + 0xd80) = 1;
        *(undefined4 *)(param_2 + 0xd84) = uVar1;
        uVar8 = lbl_821AAD20;
        *(undefined4 *)(param_2 + 0xd88) = lbl_821AAD20;
        *(undefined4 *)(param_2 + 0xd94) = 1;
        uVar1 = lbl_82002AE0;
        *(undefined4 *)(param_2 + 0xd98) = 0;
        *(undefined4 *)(param_2 + 0xd8c) = uVar8;
        *(undefined4 *)(param_2 + 0xd9c) = 0;
        *(undefined4 *)(param_2 + 0xd90) = uVar1;
        *(undefined4 *)(param_2 + 0xda4) = 0;
        *(undefined4 *)(param_2 + 0xda0) = uVar8;
        *(undefined4 *)(param_2 + 0xda8) = uVar8;
        return;
      }
      if (iVar3 != 1) {
        return;
      }
      if (lbl_8217EB78 <= fStack_5c - fStack_6c) {
        return;
      }
      goto LAB_8306d344;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0xd80);
  }
  uVar1 = lbl_820162A0;
  if (iVar3 == 0) {
    return;
  }
LAB_8306d344:
  *(undefined4 *)(param_2 + 0xd84) = uVar1;
  *(undefined4 *)(param_2 + 0xd80) = 0;
  uVar1 = lbl_821AAD20;
  *(undefined4 *)(param_2 + 0xd88) = lbl_821AAD20;
  *(undefined4 *)(param_2 + 0xda8) = uVar1;
  *(undefined4 *)(param_2 + 0xda0) = uVar1;
  *(undefined4 *)(param_2 + 0xda4) = 0;
  *(undefined4 *)(param_2 + 0xd90) = lbl_82002AE0;
  *(undefined4 *)(param_2 + 0xd9c) = 0;
  *(undefined4 *)(param_2 + 0xd8c) = uVar1;
  *(undefined4 *)(param_2 + 0xd98) = 0;
  *(undefined4 *)(param_2 + 0xd94) = 1;
  return;
}

