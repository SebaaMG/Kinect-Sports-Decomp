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
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int fStack_278;
extern unsigned int fStack_27c;
extern unsigned int fStack_280;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern int fn_82D0B8E8();
extern unsigned int lbl_82132D10;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorLogicalAnd();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


int fn_82D0BB70(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_vs32 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  undefined1 auStack_270 [16];
  undefined4 auStack_260 [152];
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar5 = *(int *)(param_2 + 8);
  if (*(char *)(iVar5 + 0x1b4) == '\0') {
    fn_82CEE578(uVar3 - 0x280,uVar3 - 0x220,0x200);
    uVar9 = *(undefined4 *)(iVar5 + 0x1b0);
    uVar4 = fn_82CEDB38(uVar3 - 0x280,0xffffffff82134558);
    uVar4 = fn_82CEDCF0(uVar4,uVar9);
    fn_82CEDB38(uVar4,0xffffffff821c24f0);
    iVar5 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d887,uVar3 - 0x220,0xffffffff8213450c,0x14c);
    if (iVar5 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(uVar3 - 0x280);
  }
  iVar5 = (int)in_r0;
  fn_82D0B8E8(param_2,uVar3 - 0x260,uVar3 - 0x270);
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])((uint)(auStack_270 + iVar5) & 0xfffffff0),
             *(undefined1 (*) [16])((uint)(&lbl_82132D10 + iVar5) & 0xfffffff0),1,0);{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs32); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar7,in_vs32,in_vs43); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar7); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorLogicalAnd(auVar7,in_vs42); memcpy(auVar7, &_vt3, 16); }
  puVar1 = (undefined4 *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  if (fStack_27c <= fStack_280) {
    iVar6 = 2;
    if (fStack_278 <= fStack_280) {
      iVar6 = 0;
    }
  }
  else if (fStack_278 <= fStack_27c) {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  uVar9 = auStack_260[iVar6 * 4 + 1];
  uVar10 = auStack_260[iVar6 * 4 + 2];
  uVar11 = auStack_260[iVar6 * 4 + 3];
  puVar1 = (undefined4 *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  *puVar1 = auStack_260[iVar6 * 4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;{ V16 _vt4 = vectorSubtractFloatingPoint(auVar7,in_vs32); memcpy(auVar7, &_vt4, 16); }
  uVar9 = storeVectorElementWordIndexed(auVar7,0,uVar3 - 0x290);
  *(undefined4 *)(uVar3 - 0x290) = uVar9;
  puVar1 = (undefined4 *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)(iVar5 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  return param_1;
}

