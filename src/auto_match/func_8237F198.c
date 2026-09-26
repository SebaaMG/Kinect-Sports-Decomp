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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_822315A0();
extern int fn_82379730();
extern int fn_824D2AE8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1B50;


int fn_8237F198(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_r0;
  undefined1 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  int iStack_60;
  int iStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fn_824D2AE8(&iStack_60,param_2 + 0x24c);
  if ((iStack_60 == 0) || ((*(int *)(iStack_60 + 0x174) == 0 && (*(int *)(iStack_60 + 0xa0) != 0))))
  {
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  else {
    iVar2 = iStack_60 + 0x30;
    fn_82379730(auStack_30,iStack_60);
    puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    fVar7 = lbl_821CC160;
    puVar8 = auStack_40;
    puVar1 = (undefined4 *)(iStack_60 + 0x20U & 0xfffffff0);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    bVar9 = lbl_821CC160 <= fStack_4c;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    if (bVar9) {
      puVar8 = auStack_30;
    }
    iVar2 = *(int *)(iStack_60 + 0x9c);
    puVar1 = (undefined4 *)((uint)(puVar8 + in_r0) & 0xfffffff0);
    uVar14 = puVar1[1];
    uVar15 = puVar1[2];
    uVar16 = puVar1[3];
    puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar14;
    puVar3[2] = uVar15;
    puVar3[3] = uVar16;
    if (iVar2 == 0) {
      fVar4 = fStack_48 - -lbl_831D1B50;
      fVar6 = fStack_50 - lbl_831D1B50 * lbl_821925C0;
      fVar5 = fStack_48;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar4 < fVar7) << 2) | (uint)(NAN(fVar4) || NAN(fVar7)) << 2)) <
          0.0) {
        fVar5 = -lbl_831D1B50;
      }
      fVar4 = fStack_50;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar6 < fVar7) << 2) | (uint)(NAN(fVar6) || NAN(fVar7)) << 2)) <
          0.0) {
        fVar4 = lbl_831D1B50 * lbl_821925C0;
      }
      fStack_48 = lbl_831D1B50;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar5 - lbl_831D1B50 < fVar7) << 2) |
                    (uint)(NAN(fVar5 - lbl_831D1B50) || NAN(fVar7)) << 2)) < 0.0) {
        fStack_48 = fVar5;
      }
      fVar5 = fVar4 - lbl_831D1B50 * lbl_8218E8E8;
      fStack_50 = lbl_831D1B50 * lbl_8218E8E8;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar5 < fVar7) << 2) | (uint)(NAN(fVar5) || NAN(fVar7)) << 2)) <
          0.0) {
        fStack_50 = fVar4;
      }
      puVar1 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
    }
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return param_1;
}

