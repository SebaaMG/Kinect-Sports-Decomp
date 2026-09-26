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
extern int fn_823133E8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 vectorConditionalSelect();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_82313080(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float afStack_40 [16];
  
  fVar4 = lbl_821CC160;
  if (*(int *)(param_2 + 0x24) == 0) {
    iVar5 = fn_823133E8(param_3,param_4,param_5,param_2 + 0x10);
    fVar4 = lbl_821CA460;
    if (iVar5 != 0) {
      uVar2 = in_r0 + param_2 + 0x10 & 0xfffffff0;
      fVar8 = *(float *)(uVar2 + 4);
      fVar9 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorConditionalSelect(in_vs32,in_vs45,in_vs42); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorConditionalSelect(in_vs44,in_vs43,in_vs42); memcpy(auVar6, &_vt1, 16); }
      vectorSubtractFloatingPoint(auVar6,auVar7);
      fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
      pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar8;
      pfVar3[1] = fVar8;
      pfVar3[2] = fVar8;
      pfVar3[3] = fVar8;
      if ((afStack_40[0] < fVar4) && (*(int *)(param_5 + 0x120) != 0)) {
        *(undefined4 *)(param_2 + 0x24) = 1;
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      fVar8 = (float)((double)*(float *)(param_2 + 0x28) - param_1);
      fVar1 = -fVar8;
      fVar9 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar9 = fVar8;
      }
      *(float *)(param_2 + 0x28) = fVar9;
    }
    if (*(float *)(param_2 + 0x28) <= fVar4) {
      *(float *)(param_2 + 0x28) = fVar4;
      return 2;
    }
  }
  return 1;
}

