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
extern int fn_8260C2F0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CAA78;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_6c;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_825B7B58(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  char in_RESERVE;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  
  uVar6 = lbl_8326B7C8;
  uVar5 = lbl_83265A24;
  lVar7 = fn_8265C9E0(0x1cc);
  if (lVar7 != 0) {
    uVar10 = lVar7 + 0xc;
    puVar4 = (undefined4 *)lVar7;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821CAA78;
    if (uVar10 != 0) {
      fn_8260C2F0(uVar10,param_2,param_3,*param_4,*param_5,*param_6,uVar5,uVar6);
    }
    param_1[1] = puVar4;
    bVar1 = (uVar10 & 0xffffffff) == 0;
    *param_1 = (int)uVar10;
    if (!bVar1) {
      do {
        puVar9 = (uint *)(lVar7 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar7 + 8);
          *puVar9 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      piVar2 = (int *)puVar4[5];
      if (ZEXT48(piVar2) != 0) {
        lVar7 = ZEXT48(piVar2) + 8;
        do {
          puVar9 = (uint *)lVar7;
          lVar8 = (ulonglong)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar8,0,lVar7);
            *puVar9 = uVar3;
            bVar1 = true;
          }
        } while (!bVar1);
        if ((int)lVar8 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
      puVar4[5] = puVar4;
      puVar4[4] = (int)uVar10;
    }
    return param_1;
  }
  uStack_6c = 0;
  ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_70);
}

