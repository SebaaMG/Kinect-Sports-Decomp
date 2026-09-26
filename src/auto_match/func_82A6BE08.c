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
extern int fn_82F643F8();
extern int fn_82F64F30();
extern int fn_82F6A520();
extern int fn_82F6A56C();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82021540;
extern unsigned int lbl_8315F7E0;
extern unsigned int lbl_8315F7E4;
extern unsigned int lbl_8315F7EC;
extern unsigned int lbl_8315F7F4;
extern unsigned int lbl_8315F800;
extern unsigned int lbl_8315F80C;
extern unsigned int lbl_8315F818;
extern unsigned int lbl_8315F828;
extern unsigned int lbl_8315F838;
extern unsigned int lbl_8315F848;
extern unsigned int lbl_8315F858;
extern unsigned int lbl_8315F86C;
extern unsigned int lbl_8315F880;
extern unsigned int lbl_8315F894;
extern unsigned int lbl_8315F8A8;
extern unsigned int lbl_8315F8BC;
extern unsigned int lbl_8315F8D4;
extern unsigned int lbl_8315F8EC;
extern unsigned int lbl_8315F904;
extern unsigned int lbl_8315F91C;
extern unsigned int lbl_8315F934;


/* WARNING: Removing unreachable block (ram,0x82a6c074) */

void fn_82A6BE08(void)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  iVar1 = fn_82F6A520();
  if ((2 < *(int *)(iVar1 + 0x3c)) && (uVar2 = 1, *(short *)(iVar1 + 0x22) != 0)) {
    dVar7 = (double)lbl_82002C5C;
    dVar5 = (double)lbl_82021540;
    uVar6 = lbl_82005758;
    do {
      iVar3 = (int)uVar2;
      if ((uVar2 & 0xffffffff) < 7) {
        if (iVar3 != 0) {
          if (uVar2 == 1) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 4) = &lbl_8315F7E0;
          }
          else if (uVar2 == 2) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 8) = &lbl_8315F7E4;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 8) + 4) = &lbl_8315F7EC;
          }
          else if (uVar2 == 3) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0xc) = &lbl_8315F7F4;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0xc) + 4) = &lbl_8315F800;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0xc) + 8) = &lbl_8315F80C;
          }
          else if (uVar2 == 4) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x10) = &lbl_8315F818;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 4) = &lbl_8315F828;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 8) = &lbl_8315F838;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 0xc) = &lbl_8315F848;
          }
          else if (uVar2 == 5) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x14) = &lbl_8315F858;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 4) = &lbl_8315F86C;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 8) = &lbl_8315F880;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 0xc) = &lbl_8315F894;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 0x10) = &lbl_8315F8A8;
          }
          else {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x18) = &lbl_8315F8BC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 4) = &lbl_8315F8D4;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 8) = &lbl_8315F8EC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0xc) = &lbl_8315F904;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0x10) = &lbl_8315F91C;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0x14) = &lbl_8315F934;
          }
        }
      }
      else {
        dVar4 = (double)fn_82F64F30(uVar6);
        if (0 < iVar3) {
                    /* WARNING: Subroutine does not return */
          fn_82F643F8((double)(((float)(dVar7 + 0.0) * 0.0 *
                                     (float)((double)(float)dVar4 * dVar5)) / (float)(longlong)iVar3
                                    ));
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= (int)(uint)*(ushort *)(iVar1 + 0x22));
  }
  fn_82F6A56C(0);
  return;
}

