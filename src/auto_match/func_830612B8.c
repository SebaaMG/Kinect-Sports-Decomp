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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82810280();
extern int fn_8305D7D0();
extern int fn_8305DB40();
extern int fn_83060438();
extern int fn_83066810();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b4;


undefined8
fn_830612B8(undefined8 param_1,int param_2,int *param_3,undefined8 param_4,ulonglong param_5)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cStack_c0;
  char cStack_bf;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar9 = 1;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if ((param_5 & 0xffffffff) != 0) {
    fn_830677A0(param_5,*(undefined4 *)(param_2 + 0x18),0xffffffff8217e6f4);
  }
  iVar10 = 0;
  iVar11 = *(int *)(param_2 + 0x2c);
  if (0 < *(int *)(param_2 + 0x18)) {
    dVar14 = (double)lbl_821AAD20;
    dVar15 = (double)lbl_8201DCB8;
    do {
      iVar1 = *(int *)(iVar11 + 8) - *(int *)(iVar11 + 4) >> 3;
      fn_83060438(iVar11);
      iVar12 = 0;
      if (0 < iVar1) {
        do {
          iVar4 = *(int *)(iVar11 + 4);
          iVar5 = iVar12 * 8;
          iVar12 = iVar12 + 1;
          iVar6 = 1;
          piStack_b8 = (int *)((ulonglong)*(undefined8 *)(iVar5 + iVar4) >> 0x20);
          iVar5 = *piStack_b8;
          if (iVar1 <= iVar12) break;
          iVar8 = iVar12 * 8;
          do {
            piStack_b8 = (int *)((ulonglong)*(undefined8 *)(iVar8 + iVar4) >> 0x20);
            if (*piStack_b8 != iVar5) break;
            iVar12 = iVar12 + 1;
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 8;
          } while (iVar12 < iVar1);
          if ((iVar6 == 2) && (iVar10 < iVar5)) {
            uVar7 = *(undefined8 *)(iVar12 * 8 + iVar4 + -8);
            uStack_b4 = (undefined4)*(undefined8 *)((iVar12 + -2) * 8 + iVar4);
            uVar3 = uStack_b4;
            dVar13 = (double)fn_8305DB40(uStack_b4);
            if (dVar15 < dVar13) {
              uStack_b4 = (undefined4)uVar7;
              dVar13 = (double)fn_8305DB40(uStack_b4);
              if (dVar15 < dVar13) {
                fn_8305D7D0(uVar3,auStack_90);
                fn_8305D7D0(uStack_b4,auStack_b0);
                iVar4 = fn_83066810(param_1,auStack_90,uStack_b4);
                iVar5 = fn_83066810(param_1,auStack_b0,uVar3);
                bVar2 = false;
                if ((cStack_c0 == '\0') && (cStack_bf == '\0')) {
                  if (iVar4 != iVar5) {
LAB_83061488:
                    bVar2 = true;
                  }
                }
                else {
                  dVar13 = (double)fn_82810280(auStack_90,auStack_b0);
                  if (dVar13 < dVar14) goto LAB_83061488;
                }
                if (bVar2) {
                  if (param_3 == (int *)0x0) {
                    return 0;
                  }
                  uVar9 = 0;
                  *param_3 = *param_3 + 1;
                }
              }
            }
          }
        } while (iVar12 < iVar1);
      }
      if ((param_5 & 0xffffffff) != 0) {
        fn_830679A8(param_5);
      }
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x18;
    } while (iVar10 < *(int *)(param_2 + 0x18));
  }
  if ((param_5 & 0xffffffff) != 0) {
    fn_830678C8(param_5);
  }
  return uVar9;
}

