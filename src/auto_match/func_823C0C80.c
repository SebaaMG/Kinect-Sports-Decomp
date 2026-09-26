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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_28;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_823C2BC0();
extern int fn_8253A918();
extern int fn_8255C890();
extern unsigned int iStack_60;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_823C0C80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  int iVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_60;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined1 auStack_40 [8];
  float fStack_38;
  undefined1 auStack_30 [8];
  float fStack_28;
  
  uVar8 = *(undefined4 *)((param_2 + 0xa1) * 4 + param_1);
  puVar1 = (undefined4 *)(in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  fn_8255C890(uVar8,auStack_40,auStack_50);
  iVar7 = *(int *)(param_1 + 0xe10);
  fVar3 = *(float *)(iVar7 + 0xa8) * *(float *)(iVar7 + 0x8bc);
  fVar4 = *(float *)(iVar7 + 0xa0) * *(float *)(iVar7 + 0x8bc);
  fVar5 = fVar4 - fVar3;
  if (fStack_38 <= fStack_28) {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fStack_38 = fStack_48 - (fVar4 * *(float *)(iVar7 + 0x280) + lbl_82193AF0);
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fStack_48 = fVar4 * *(float *)(iVar7 + 0x280) + lbl_82193AF0 + fStack_38;
  }
  fVar3 = *(float *)(iVar7 + 0xa8) * *(float *)(iVar7 + 0x8bc);
  fVar4 = *(float *)(iVar7 + 0xa0) * *(float *)(iVar7 + 0x8bc);
  fVar5 = fVar4 - fVar3;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar5 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar5) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = fVar3;
  }
  iVar7 = fn_823C2BC0((double)(fVar4 * *(float *)(iVar7 + 0x280)),param_1);
  if (((iVar7 == 0) || (iStack_60 == 0)) ||
     (iVar7 = fn_8253A918(auStack_30,auStack_40,auStack_50), iVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xd51) = 0;
    uVar6 = 1;
    puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    *(undefined1 *)(param_1 + 0xd50) = 0;
    *(undefined1 *)(param_1 + 0xd52) = 1;
    puVar1 = (undefined4 *)(param_1 + 0xd70U & 0xfffffff0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  }
  return uVar6;
}

