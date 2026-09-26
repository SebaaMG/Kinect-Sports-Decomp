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
extern unsigned int *auStack_20;
extern unsigned int *auStack_2c;
extern int fn_82F65FE0();
extern unsigned int stack0x00000000;
extern unsigned int uStack_30;
extern U64 storeVectorElementHalfWordIndexed();
extern V16 loadVectorForShiftLeft();
extern V16 vectorPackD3D128();
extern V16 vectorPermute();
extern V16 vectorSplatHalfWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825EB400(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  float *pfVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 in_vs32 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs33 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined2 uStack_30;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [16];
  
  piVar6 = (int *)(param_1 + 0x10);
  uVar1 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar4 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      lVar8 = ZEXT48(&stack0x00000000) - 0x30;{ V16 _vt0 = loadVectorForShiftLeft(in_r0,ZEXT48(&stack0x00000000) - 0x2c); memcpy(auVar10, &_vt0, 16); }
      piVar5 = (int *)(*(int *)((*piVar6 + 3) * 4 + *(int *)(param_1 + 8)) + iVar7);
      iVar7 = iVar7 + 0x18;
      uVar1 = *piVar5 + 0x10U & 0xfffffff0;
      fVar11 = *(float *)(uVar1 + 4);
      fVar12 = *(float *)(uVar1 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,in_vs32); memcpy(auVar9, &_vt1, 16); }
      fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
      pfVar3 = (float *)((uint)(auStack_20 + (int)in_r0) & 0xfffffff0);
      *pfVar3 = fVar11;
      pfVar3[1] = fVar11;
      pfVar3[2] = fVar11;
      pfVar3[3] = fVar11;{ V16 _vt2 = vectorPermute(auVar9,auVar9,auVar10); memcpy(auVar9, &_vt2, 16); }
      vectorPackD3D128(*(undefined1 (*) [16])((uint)(auStack_2c + (int)in_r0) & 0xfffffff0),5,2,2);{ V16 _vt3 = vectorSplatHalfWord(auVar9,0); memcpy(in_vs32, &_vt3, 16); }
      uVar2 = storeVectorElementHalfWordIndexed(in_vs32,0,lVar8);
      *(undefined2 *)lVar8 = uVar2;
      *(undefined2 *)(piVar5 + 1) = uStack_30;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)((*piVar6 + 1) * 4 + iVar7) != 0) {
    fn_82F65FE0(*(undefined4 *)((*piVar6 + 3) * 4 + iVar7),
                      *(undefined4 *)((*piVar6 + 1) * 4 + iVar7),0x18,0xffffffff825eb510);
  }
  return;
}

