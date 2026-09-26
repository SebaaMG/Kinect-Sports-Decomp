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
extern unsigned int lbl_83175BB8;
extern unsigned int lbl_83175BBC;
extern unsigned int lbl_83175BC4;
extern unsigned int lbl_83175BCC;
extern unsigned int lbl_83175BD8;
extern unsigned int lbl_83175BE4;
extern unsigned int lbl_83175BF0;
extern unsigned int lbl_83175C00;
extern unsigned int lbl_83175C10;
extern unsigned int lbl_83175C20;
extern unsigned int lbl_83175C30;
extern unsigned int lbl_83175C44;
extern unsigned int lbl_83175C58;
extern unsigned int lbl_83175C6C;
extern unsigned int lbl_83175C80;
extern unsigned int lbl_83175C94;
extern unsigned int lbl_83175CAC;
extern unsigned int lbl_83175CC4;
extern unsigned int lbl_83175CDC;
extern unsigned int lbl_83175CF4;
extern unsigned int lbl_83175D0C;


/* WARNING: Removing unreachable block (ram,0x82c2ea2c) */

void fn_82C2E7C0(void)

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
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 4) = &lbl_83175BB8;
          }
          else if (uVar2 == 2) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 8) = &lbl_83175BBC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 8) + 4) = &lbl_83175BC4;
          }
          else if (uVar2 == 3) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0xc) = &lbl_83175BCC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0xc) + 4) = &lbl_83175BD8;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0xc) + 8) = &lbl_83175BE4;
          }
          else if (uVar2 == 4) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x10) = &lbl_83175BF0;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 4) = &lbl_83175C00;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 8) = &lbl_83175C10;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x10) + 0xc) = &lbl_83175C20;
          }
          else if (uVar2 == 5) {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x14) = &lbl_83175C30;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 4) = &lbl_83175C44;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 8) = &lbl_83175C58;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 0xc) = &lbl_83175C6C;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x14) + 0x10) = &lbl_83175C80;
          }
          else {
            **(undefined4 **)(*(int *)(iVar1 + 0x224) + 0x18) = &lbl_83175C94;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 4) = &lbl_83175CAC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 8) = &lbl_83175CC4;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0xc) = &lbl_83175CDC;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0x10) = &lbl_83175CF4;
            *(undefined **)(*(int *)(*(int *)(iVar1 + 0x224) + 0x18) + 0x14) = &lbl_83175D0C;
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

