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
extern unsigned int *auStack_d0;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826E30D0();
extern int fn_827228C8();
extern int fn_82761DE8();
extern int fn_8276A0F0();
extern int fn_8276FF08();
extern int fn_827704D0();
extern int fn_82770948();
extern unsigned int lbl_820151BC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82770B88(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar5;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  longlong lStack_c0;
  uint uStack_b8;
  int *piStack_b4;
  uint uStack_b0;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  iVar5 = (**(code **)(**(int **)(param_3 + 0xc) + 0x38))();
  if (iVar5 != 0) {
    lVar2 = fn_8267B890(*(undefined4 *)(param_1 + 0x2c),0x2c,0);
    if (lVar2 == 0) {
      iVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(**(int **)(param_3 + 0xc) + 0x38))();
      iVar5 = fn_826E30D0(lVar2,uVar3,0);
    }
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    fn_827228C8(param_3,iVar5);
    uStack_c8 = (longlong)*(int *)(param_1 + 0xc);
    dVar12 = (double)((float)uStack_c8 * lbl_820151BC);
    uVar4 = (**(code **)(**(int **)(param_3 + 0xc) + 0x38))();
    uVar9 = 0;
    if (uVar4 != 0) {
      dVar13 = (double)lbl_821AAD20;
      do {
        iVar6 = fn_8276A0F0(iVar5,uVar9);
        if ((*(int *)(iVar6 + 8) != 0) || (bVar1 = true, *(int *)(iVar6 + 0xc) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          piVar7 = (int *)(**(code **)(**(int **)(param_3 + 0xc) + 0x18))
                                    (*(int **)(param_3 + 0xc),uVar9,0);
          if (piVar7 != (int *)0x0) {
            fStack_a0 = (float)dVar13;
            fStack_94 = (float)dVar13;
            fStack_9c = (float)dVar13;
            fStack_98 = (float)dVar13;
            (**(code **)(*piVar7 + 0x14))(piVar7,&fStack_a0);
            if (dVar13 < (double)(float)((double)fStack_98 - (double)fStack_a0)) {
              if (dVar13 < (double)(float)((double)fStack_94 - (double)fStack_9c)) {
                lStack_c0 = (longlong)*(int *)(param_1 + 0x10);
                fStack_70 = (float)dVar13;
                fStack_6c = (float)dVar13;
                dVar11 = (double)lStack_c0;
                fStack_80 = (float)((double)fStack_a0 * dVar12 - dVar11);
                fStack_78 = (float)((double)fStack_98 * dVar12 + dVar11);
                fStack_7c = (float)((double)fStack_9c * dVar12 - dVar11);
                fStack_74 = (float)((double)fStack_94 * dVar12 + dVar11);
                if ((dVar13 < (double)(fStack_78 - fStack_80)) &&
                   (dVar13 < (double)(fStack_74 - fStack_7c))) {
                  uStack_8c = (undefined4)uVar9;
                  uStack_88 = 0xffffffff;
                  uStack_84 = 0xffffffff;
                  uStack_90 = param_3;
                  uStack_b0 = (**(code **)(*piVar7 + 0x1c))(piVar7);
                  iVar10 = param_1 + 0x148;
                  uStack_b8 = param_3;
                  piStack_b4 = piVar7;
                  iVar6 = fn_8276FF08(iVar10,&uStack_b8);
                  puVar8 = (undefined4 *)(-(uint)(iVar6 != 0) & iVar6 + 0xcU);
                  if (puVar8 == (undefined4 *)0x0) {
                    auStack_d0[0] = *(undefined4 *)(param_2 + 4);
                    uStack_c8 = CONCAT44(&uStack_b8,auStack_d0);
                    fn_82770948(iVar10,iVar10,&uStack_c8,uStack_b8 >> 6 ^ uStack_b0 ^ uStack_b8);
                  }
                  else {
                    uStack_88 = *puVar8;
                  }
                  fn_827704D0(param_2,&uStack_90);
                }
              }
            }
            fn_82761DE8(piVar7);
          }
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
    fn_8267C498(iVar5);
  }
  return;
}

