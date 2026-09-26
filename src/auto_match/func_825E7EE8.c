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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_825E8220();
extern int fn_82A1E650();
extern int fn_82A1E810();
extern int fn_82A1E968();
extern int fn_82A1F160();
extern int fn_82F622E0();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195820;
extern U64 storeWordConditionalIndexed();


void fn_825E7EE8(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint *puVar7;
  int *piVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  char in_RESERVE;
  byte in_cr0;
  double dVar13;
  double dVar14;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined1 auStack_60 [8];
  code *pcStack_58;
  undefined1 auStack_50 [8];
  code *pcStack_48;
  
  fn_825E8220(auStack_60,param_1 + 0x18);
  (*pcStack_58)(auStack_60);
  do {
    puVar7 = (uint *)param_1;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_82A1F160(&lStack_80);
  dVar13 = (double)lStack_80 * lbl_82195820;
  puVar10 = (uint *)puVar7[1];
  dVar14 = lbl_82195518;
  do {
    if (puVar10 == (uint *)puVar7[2]) {
      fn_825E8220(auStack_50,param_1 + 0x48);
      *(double *)(puVar7 + 0x10) = dVar14 + *(double *)(puVar7 + 0x10);
      (*pcStack_48)(auStack_50);
      do {
        piVar8 = (int *)(param_1 + 0x28);
        iVar1 = *piVar8;
        if (in_RESERVE != '\0') {
          iVar5 = storeWordConditionalIndexed(1,0,param_1 + 0x28);
          *piVar8 = iVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (iVar1 == 0) {
        fn_82A1E968(&lStack_68);
        *(double *)(puVar7 + 0xe) = (double)(lStack_68 - *(longlong *)(puVar7 + 0xc)) / dVar13;
      }
      do {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 - 1,0,param_1);
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return;
    }
    puVar2 = (undefined4 *)*puVar10;
    lVar11 = ZEXT48(puVar2) + 4;
    do {
      puVar12 = (uint *)lVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar12 + 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (*(int *)puVar2[2] <= (int)puVar2[1]) {
      fn_82A1E810(*puVar2);
    }
    fn_82A1E650(*puVar2,0xffffffffffffffff);
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar12 - 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar8 = (int *)0x0;
    while( true ) {
      uVar3 = *puVar10;
      do {
        puVar12 = (uint *)((ulonglong)uVar3 + 0xc);
        uVar9 = (ulonglong)*puVar12 + 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar9,0,(ulonglong)uVar3 + 0xc);
          *puVar12 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      uVar4 = *(int *)(uVar3 + 0x14) - *(int *)(uVar3 + 0x10) >> 2;
      if ((int)uVar9 < (int)uVar4) {
        if ((ulonglong)uVar4 <= (uVar9 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        bVar6 = true;
        piVar8 = *(int **)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(uVar3 + 0x10));
      }
      else {
        bVar6 = false;
      }
      in_cr0 = !bVar6 << 1;
      if (!bVar6) break;
      fn_82A1E968(&lStack_78);
      (**(code **)(*piVar8 + 4))(piVar8);
      fn_82A1E968(&lStack_70);
      lStack_68 = lStack_70 - lStack_78;
      dVar14 = (double)lStack_68 / dVar13 + dVar14;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

