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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82A03D08();
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8207F4EC;
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82A03F48(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  undefined4 in_register_00010360;
  undefined4 in_register_00010364;
  undefined4 in_register_00010368;
  undefined4 in_vr54;
  undefined4 in_register_00010380;
  undefined4 in_register_00010384;
  undefined4 in_register_00010388;
  undefined4 in_vr56;
  undefined1 auVar8 [16];
  float afStack_20 [4];
  
  fVar6 = lbl_8207F4EC;{ V16 _vt0 = vectorSplatImmediateSignedWord128(1); memcpy(auVar8, &_vt0, 16); }
  vectorSplatImmediateSignedWord128(0);
  vectorConvertFromSignedFixedPoint128(auVar8,1);
  fVar1 = (in_register_00010020 - in_register_00010010) *
          (in_register_00010020 - in_register_00010010) +
          (in_register_00010024 - in_register_00010014) *
          (in_register_00010024 - in_register_00010014) +
          (in_register_00010028 - in_register_00010018) *
          (in_register_00010028 - in_register_00010018);{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(in_vs43,in_vs42,in_vs32); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs45,auVar8,in_vs45); memcpy(auVar8, &_vt2, 16); }
  vectorConditionalSelect(auVar8,in_vs41,in_vs39);
  fVar2 = in_register_00010080 * in_register_00010040 + in_register_00010084 * in_register_00010044
          + in_register_00010088 * in_register_00010048;
  pfVar3 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar2;
  pfVar3[1] = fVar2;
  pfVar3[2] = fVar2;
  pfVar3[3] = fVar2;
  fVar2 = lbl_8201DFF4;
  iVar5 = (int)param_1;
  if (fVar6 <= afStack_20[0]) {{ V16 _vt3 = vectorNegativeMultiplySubtractFloatingPoint(in_vs42,in_vs43,in_vs32); memcpy(auVar7, &_vt3, 16); }{ V16 _vt4 = vectorMultiplyAddFloatingPoint(in_vs44,auVar7,in_vs44); memcpy(auVar7, &_vt4, 16); }
    vectorConditionalSelect(auVar7,auVar8,in_vs41);
    fVar1 = (1.0 / SQRT(fVar1)) * in_register_00010080 + (1.0 / SQRT(fVar1)) * in_register_00010084
            + (1.0 / SQRT(fVar1)) * in_register_00010088;
    pfVar3 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar1;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar1;
    pfVar3[3] = fVar1;
    if (afStack_20[0] <= fVar2) {
      puVar4 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
      *puVar4 = in_register_00010030;
      puVar4[1] = in_register_00010034;
      puVar4[2] = in_register_00010038;
      puVar4[3] = in_vr3;
    }
    else {
      fn_82A03D08(afStack_20);
      altv207_13(auVar7,in_vs35);
      puVar4 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
      *puVar4 = in_register_00010360;
      puVar4[1] = in_register_00010364;
      puVar4[2] = in_register_00010368;
      puVar4[3] = in_vr54;
    }
  }
  else {
    fn_82A03D08(afStack_20);
    altv207_13(in_vs32,in_vs35);
    puVar4 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    *puVar4 = in_register_00010380;
    puVar4[1] = in_register_00010384;
    puVar4[2] = in_register_00010388;
    puVar4[3] = in_vr56;
  }
  return param_1;
}

