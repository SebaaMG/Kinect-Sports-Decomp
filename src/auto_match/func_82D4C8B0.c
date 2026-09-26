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
#define ZEXT48(x) ((U64)((U32)(x)))
#define TBLr 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_48;
extern unsigned int *fStack_4c;
extern unsigned int fStack_50;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


longlong fn_82D4C8B0(undefined8 param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar11 + 4);
  if (puVar1 < *(undefined4 **)(iVar11 + 0xc)) {
    *puVar1 = "TtrcMultiSpher";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar11 + 4) = puVar1 + 3;
  }
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_82021540;
  fVar7 = lbl_82005344;
  fVar6 = lbl_82002C5C;
  lVar12 = 0;
  iVar11 = 0;
  if (0 < (int)param_3) {
    param_4 = param_4 - (int)param_5;
    do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(auVar13, &_vt1, 16); }{ V16 _vt2 = vectorSubtractFloatingPoint(auVar13,auVar14); memcpy(in_vs32, &_vt2, 16); }
      uVar2 = storeVectorElementWordIndexed(in_vs41,0,uVar10 - 0x48);
      *(undefined4 *)(uVar10 - 0x48) = uVar2;
      uVar2 = storeVectorElementWordIndexed(in_vs40,0,uVar10 - 0x50);
      *(undefined4 *)(uVar10 - 0x50) = uVar2;
      fVar4 = fStack_50 * fVar7;
      if (fVar4 < fVar9) {
        uVar2 = storeVectorElementWordIndexed(in_vs32,0,uVar10 - 0x4c);
        *(undefined4 *)(uVar10 - 0x4c) = uVar2;
        fVar5 = fVar4 * fVar4 -
                -(*(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc) - fStack_48) * fStack_4c *
                fVar8;
        if (((fVar9 < fVar5) && (fVar4 = (-fVar4 - SQRT(fVar5)) * fVar6, fVar4 < fStack_4c)) &&
           (fVar9 <= fVar4)) {
          *(float *)(param_4 + (int)param_5) = fVar4 / fStack_4c;
          *param_5 = iVar11;
          lVar12 = lVar12 + 1;
          param_5 = param_5 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar11 + 4);
  if (puVar1 < *(undefined4 **)(iVar11 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar11 + 4) = puVar1 + 3;
  }
  return lVar12;
}

