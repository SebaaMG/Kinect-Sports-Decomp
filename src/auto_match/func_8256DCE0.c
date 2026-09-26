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
extern int fn_825BE350();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_8326B7C8;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_8256DCE0(undefined4 *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined4 *param_7)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar8;
  longlong lVar7;
  undefined4 uVar9;
  int iVar10;
  char in_RESERVE;
  
  uVar5 = fn_8265C9E0(0x240);
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined4 *)uVar5;
    puVar4[1] = 1;
    *puVar4 = &lbl_821A8D8C;
    puVar4[2] = 1;
    if (uVar5 + 0x10 != 0) {
      lVar6 = param_2 + 4;
      if ((param_2 & 0xffffffff) == 0) {
        lVar6 = 0;
      }
      fn_825BE350(uVar5 + 0x10,lVar6,*param_3,*param_4,*param_5,param_6,lbl_8326B7C8,*param_7)
      ;
    }
  }
  bVar1 = uVar5 + 0x10 == 0;
  iVar10 = (int)uVar5;
  param_1[1] = iVar10;
  uVar9 = (undefined4)(uVar5 + 0x10);
  *param_1 = uVar9;
  if (!bVar1) {
    if ((uVar5 & 0xffffffff) != 0) {
      do {
        puVar8 = (uint *)(uVar5 + 8);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,uVar5 + 8);
          *puVar8 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
    }
    piVar2 = *(int **)(iVar10 + 0x18);
    if (ZEXT48(piVar2) != 0) {
      lVar6 = ZEXT48(piVar2) + 8;
      do {
        puVar8 = (uint *)lVar6;
        lVar7 = (ulonglong)*puVar8 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar7,0,lVar6);
          *puVar8 = uVar3;
          bVar1 = true;
        }
      } while (!bVar1);
      if ((int)lVar7 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(int *)(iVar10 + 0x18) = iVar10;
    *(undefined4 *)(iVar10 + 0x14) = uVar9;
  }
  return param_1;
}

