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
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82546A70();
extern int fn_8262FEC8();
extern int fn_8263C550();
extern int fn_8263CA78();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int lbl_821CE9E0;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern V16 vectorConvertFromSignedFixedPointWord();
extern V16 vectorConvertToSignedFixedPointWordSaturate();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825473C0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_28;
  int iStack_24;
  
  fn_82546A70(param_1,auStack_50,auStack_48,auStack_4c,auStack_44);
  pfVar1 = (float *)((uint)(&lbl_821CE9E0 + in_r0) & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  uStack_38 = lbl_8326B430;
  uStack_40 = lbl_8326B430;
  uStack_34 = lbl_8326B434;
  uStack_3c = lbl_8326B434;
  vectorConvertFromSignedFixedPointWord(in_vs44,0);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }
  vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
  pfVar2 = (float *)(in_r0 + (int)param_2 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_000100b0;
  pfVar2[1] = fVar7 * in_register_000100b4;
  pfVar2[2] = fVar8 * in_register_000100b8;
  pfVar2[3] = fVar9 * in_vr11;
  uVar3 = fn_8263C550(param_3,0);
  fn_8263CA78(uVar3,&uStack_40);
  fn_8262FEC8(uVar3);
  iVar4 = param_2[2] - *param_2;
  if (iStack_28 <= iVar4) {
    iVar4 = iStack_28;
  }
  iVar5 = param_2[3] - param_2[1];
  param_2[2] = *param_2 + iVar4;
  if (iStack_24 <= iVar5) {
    iVar5 = iStack_24;
  }
  param_2[3] = param_2[1] + iVar5;
  return;
}

