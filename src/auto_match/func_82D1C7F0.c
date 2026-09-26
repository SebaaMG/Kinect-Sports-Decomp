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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_1a0;
extern unsigned int fStack_1ac;
extern unsigned int fStack_1b0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D1BF38();
extern unsigned int iStack_1a4;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_82134504;
extern unsigned int lbl_821347B0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_82D1C7F0(int param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010130;
  undefined4 in_register_00010134;
  undefined4 in_register_00010138;
  undefined4 in_vr19;
  float fStack_1b0;
  float fStack_1ac;
  int iStack_1a4;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  
  uVar5 = ZEXT48(&stack0x00000000);
  uStack_188 = 0x80000020;
  uVar12 = uVar5 - 0x184;
  dVar17 = (double)lbl_82134504;
  uStack_18c = 0;
  dVar16 = (double)lbl_821347B0;
  dVar18 = (double)lbl_8201DFF4;
  uStack_190 = (uint)uVar12;
  bVar3 = false;
  while( true ) {
    iVar7 = *(int *)(param_1 + 4);
    iVar13 = -1;
    iStack_1a4 = -1;
    iVar8 = 0;
    dVar15 = dVar17;
    if (iVar7 < 1) break;
    do {
      iVar6 = iVar8 + 1;
      iVar9 = iVar6;
      if (iVar6 < iVar7) {
        do {
          uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar5 - 0x1b0);
          *(undefined4 *)(uVar5 - 0x1b0) = uVar1;
          dVar14 = (double)fStack_1b0;
          if ((dVar15 < dVar14) && (dVar14 < dVar18)) {
            iVar7 = 0;
            uVar10 = uVar12;
            if (0 < (int)uStack_18c) {
              do {
                if ((*(int *)uVar10 != iVar8) || (bVar4 = true, ((int *)uVar10)[1] != iVar9)) {
                  bVar4 = false;
                }
                if (bVar4) {
                  if (iVar7 != -1) goto LAB_82d1c93c;
                  break;
                }
                iVar7 = iVar7 + 1;
                uVar10 = uVar10 + 8;
              } while (iVar7 < (int)uStack_18c);
            }
            *param_2 = iVar8;
            *param_3 = iVar9;
            dVar15 = dVar14;
            iVar13 = iVar8;
            iStack_1a4 = iVar9;
          }
LAB_82d1c93c:
          iVar7 = *(int *)(param_1 + 4);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      iVar8 = iVar6;
    } while (iVar6 < iVar7);
    if (iVar13 == -1) break;
    iVar7 = fn_82CE5410();
    if (uStack_18c == (uStack_188 & 0x3fffffff)) {
      fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),uVar5 - 400,8);
    }
    puVar11 = (undefined8 *)(uStack_18c * 8 + uStack_190);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = CONCAT44(iVar13,iStack_1a4);
    }
    iVar7 = *param_2;
    iVar8 = *param_3;
    uStack_18c = uStack_18c + 1;
    vectorSubtractFloatingPoint(in_vs39,in_vs41);
    puVar2 = (undefined4 *)((uint)(auStack_1a0 + (int)in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010130;
    puVar2[1] = in_register_00010134;
    puVar2[2] = in_register_00010138;
    puVar2[3] = in_vr19;
    iVar7 = fn_82D1BF38(uVar5 - 0x1a0,param_1,iVar7,iVar8,param_5,param_4);
    if (iVar7 == 1) break;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs44, &_vt0, 16); }
    uVar1 = storeVectorElementWordIndexed(in_vs43,0,uVar5 - 0x1ac);
    *(undefined4 *)(uVar5 - 0x1ac) = uVar1;
    if (dVar16 < (double)fStack_1ac) {
      bVar3 = true;
    }
    if (bVar3) {
      iVar7 = fn_82CE5410();
      uStack_18c = 0;
      if ((uStack_188 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
                  (*(int **)(iVar7 + 0x10),uStack_190,uStack_188 & 0x3fffffff,8);
      }
      return 0;
    }
    uVar12 = (ulonglong)uStack_190;
  }
  iVar7 = fn_82CE5410();
  uStack_18c = 0;
  if ((uStack_188 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar7 + 0x10) + 0x10))
              (*(int **)(iVar7 + 0x10),uStack_190,uStack_188 & 0x3fffffff,8);
  }
  return 1;
}

