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
extern unsigned int *auStack_70;
extern int fn_8306D6D8();
extern int fn_8306D768();
extern int fn_8306D7E0();
extern int fn_8306DA38();
extern int fn_8306DD18();
extern int fn_8306ECD8();
extern int fn_8306F850();
extern int fn_830758C0();
extern int fn_83075BB0();
extern int fn_83075D30();
extern int fn_83075D40();
extern int fn_83075D90();
extern int fn_83075DA8();
extern int fn_830763C8();
extern int fn_83076F10();
extern unsigned int lbl_82057B54;
extern unsigned int lbl_821AAD20;


void fn_8306DEF0(double param_1,int param_2,undefined8 param_3,int *param_4,int param_5)

{
  float fVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs58 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_70 [112];
  
  *(char *)(param_2 + 0x1a7c) = '\x01' - (*param_4 == 0);
  if (*(char *)(param_2 + 0x1a93) == '\0') {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1a94) + param_1);
  }
  else {
    *(undefined1 *)(param_2 + 0x1a93) = 0;
    fVar1 = lbl_821AAD20;
  }
  *(float *)(param_2 + 0x1a94) = fVar1;
  iVar7 = param_2 + 0xa40;
  fn_830758C0((double)fVar1,param_2,param_3,iVar7);
  fn_83075DA8(iVar7,*(undefined1 *)(param_2 + 0x1a90));
  if ((*(char *)(param_2 + 0x1a91) == '\0') && (*(char *)(param_2 + 0x1a90) != '\0')) {
    fn_83075BB0(param_1,param_2 + 0x530,iVar7);
  }
  fn_8306F850(param_1,param_2 + 0xcd0,iVar7);
  lVar9 = 0;
  pfVar8 = (float *)(param_2 + 0x19fc);
  do {
    pfVar8 = pfVar8 + 1;
    fn_83075D90((double)*pfVar8,iVar7,lVar9);
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 < 0x14);
  if (param_5 != 0) {
    iVar5 = param_5 + 0x20;
    lVar9 = 0;
    puVar6 = (undefined4 *)(param_5 + 0x15c);
    dVar11 = (double)lbl_82057B54;
    do {
      fn_83075D30(auStack_70,iVar7,lVar9);
      altv207_13(in_vs32,in_vs43);
      puVar2 = (undefined4 *)((int)in_r0 + iVar5 & 0xfffffff0);
      *puVar2 = in_register_000103f0;
      puVar2[1] = in_register_000103f4;
      puVar2[2] = in_register_000103f8;
      puVar2[3] = in_vr63;
      dVar10 = (double)fn_83075D40(iVar7,lVar9);
      uVar4 = 2;
      if (dVar10 <= dVar11) {
        uVar4 = 1;
      }
      lVar9 = lVar9 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = uVar4;
      iVar5 = iVar5 + 0x10;
    } while ((int)lVar9 < 0x14);
    altv207_13(in_vs32,in_vs58);
    puVar6 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
    *puVar6 = in_register_000103f0;
    puVar6[1] = in_register_000103f4;
    puVar6[2] = in_register_000103f8;
    puVar6[3] = in_vr63;
  }
  fn_8306DA38(param_2,iVar7);
  fn_8306DD18(param_2);
  fn_8306ECD8();
  fn_830763C8((double)*(float *)(param_2 + 0x1a78));
  fn_83076F10(iVar7,*(undefined1 *)(param_2 + 0x1a7c));
  fn_8306D768(param_1,param_2);
  cVar3 = fn_8306D7E0(param_2);
  if (cVar3 == '\0') {
    fn_8306D6D8(auStack_70,param_2,param_4[4] != 0);
    cVar3 = *(char *)(param_2 + 0x1a7c);
    altv207_13(in_vs32,in_vs35);
    fVar1 = *(float *)(param_2 + 0x1a78);
    puVar6 = (undefined4 *)(param_2 + 0x1a50U & 0xfffffff0);
    *puVar6 = in_register_000103f0;
    puVar6[1] = in_register_000103f4;
    puVar6[2] = in_register_000103f8;
    puVar6[3] = in_vr63;
    if (cVar3 == '\0') {
      fVar1 = -fVar1;
    }
    *(float *)(param_2 + 0x1a70) = fVar1;
  }
  return;
}

