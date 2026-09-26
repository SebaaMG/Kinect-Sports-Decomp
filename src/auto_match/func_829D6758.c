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
extern unsigned int *auStack_60;
extern unsigned int fStack_38;
extern int fn_824DCB30();
extern int fn_829CFE50();
extern int fn_829D4E08();
extern unsigned int iStack_54;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_829D6758(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  undefined2 auStack_60 [2];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int aiStack_50 [4];
  undefined1 auStack_40 [8];
  float fStack_38;
  
  iVar9 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar9);
  iVar8 = lbl_832179FC;
  if (param_1[0x1a] == 2) {
    iVar6 = fn_829D4E08(*param_1,param_1[2]);
    uVar2 = param_1[0x17];
    uVar1 = *(uint *)(iVar6 + 0x50);
    trapWord(6,(ulonglong)uVar1,0);
    iVar6 = *(int *)((uVar2 - (uVar2 / uVar1) * uVar1) * 4 + iVar6);
    param_1[0x17] = uVar2 + 1;
    if (iVar6 == 3) goto LAB_829d6954;
    param_1[0x1b] = iVar6;
  }
  else {
    param_1[0x1b] = 0;
  }
  uVar2 = param_1[0x1b];
  if (uVar2 == 0) {
    puVar4 = (undefined4 *)(param_1[3] * 0x150 + iVar8 + 0xf0U & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 < 3) {
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
      }
      goto LAB_829d6954;
    }
    altv207_13(in_vs32,in_vs42);
    altv207_13(in_vs42,in_vs43);
    altv207_13(in_vs42,in_vs41);
    altv300_21(in_vs32,in_vs40);
    pfVar3 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar3 = (in_register_000103d0 + in_register_000103e0 + in_register_000103f0) *
              in_register_000103d0;
    pfVar3[1] = (in_register_000103d4 + in_register_000103e4 + in_register_000103f4) *
                in_register_000103d0;
    pfVar3[2] = (in_register_000103d8 + in_register_000103e8 + in_register_000103f8) *
                in_register_000103d0;
    pfVar3[3] = (in_vr61 + in_vr62 + in_vr63) * in_register_000103d0;
  }
  if (*(float *)(lbl_832179FC + 0x8f030) <= fStack_38) {
    fn_824DCB30(&uStack_58,&uStack_5c,auStack_60);
    fn_829CFE50(2,0,uStack_58,uStack_5c,auStack_60[0],&iStack_54,aiStack_50);
    param_1[0x1c] = 1;
    iVar8 = (aiStack_50[0] + -0xf0) * 2;
    param_1[0x1e] = iVar8;
    iVar6 = (iStack_54 + -0x140) * 2;
    param_1[0x1d] = iVar6;
    iVar7 = iVar6;
    if (iVar6 < -0x13f) {
      iVar7 = -0x140;
    }
    if (iVar7 < 0x140) {
      if (iVar6 < -0x13f) {
        iVar6 = -0x140;
      }
    }
    else {
      iVar6 = 0x140;
    }
    param_1[0x1d] = iVar6;
    iVar6 = iVar8;
    if (iVar8 < -0xef) {
      iVar6 = -0xf0;
    }
    if (iVar6 < 0xf0) {
      if (iVar8 < -0xef) {
        iVar8 = -0xf0;
      }
    }
    else {
      iVar8 = 0xf0;
    }
    param_1[0x1e] = iVar8;
  }
  else {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
LAB_829d6954:
  RtlLeaveCriticalSection(iVar9);
  return;
}

