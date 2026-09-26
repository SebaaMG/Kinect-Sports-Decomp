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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_827D9980();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CAA78;
extern unsigned int lbl_821CB7D0;
extern unsigned int uStack_4c;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_8260C1A8(undefined4 *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  char in_RESERVE;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  lVar5 = fn_8265C9E0(0x68);
  if (lVar5 != 0) {
    uVar8 = lVar5 + 0xc;
    puVar4 = (undefined4 *)lVar5;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821CAA78;
    puVar9 = (undefined4 *)uVar8;
    if (uVar8 != 0) {
      lVar7 = param_2 + 4;
      if ((param_2 & 0xffffffff) == 0) {
        lVar7 = 0;
      }
      fn_827D9980(uVar8,lVar7,*param_3,*param_4,1);
      *puVar9 = &lbl_821CB7D0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = 0;
      puVar4[0x18] = (int)lVar7;
    }
    param_1[1] = puVar4;
    bVar1 = (uVar8 & 0xffffffff) == 0;
    *param_1 = puVar9;
    if (!bVar1) {
      do {
        puVar6 = (uint *)(lVar5 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5 + 8);
          *puVar6 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      piVar2 = (int *)puVar4[5];
      if (ZEXT48(piVar2) != 0) {
        lVar5 = ZEXT48(piVar2) + 8;
        do {
          puVar6 = (uint *)lVar5;
          lVar7 = (ulonglong)*puVar6 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar7,0,lVar5);
            *puVar6 = uVar3;
            bVar1 = true;
          }
        } while (!bVar1);
        if ((int)lVar7 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
      puVar4[5] = puVar4;
      puVar4[4] = puVar9;
    }
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

