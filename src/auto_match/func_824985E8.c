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
extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB4;
extern unsigned int lbl_821BEF88;
extern unsigned int lbl_821BEFA4;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824985E8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar7;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined2 uStack_40;
  
  *param_1 = &lbl_821BEFA4;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0xc) = uStack_40;
  param_1[0xe] = 0;
  uVar4 = fn_8248F890(0x38);
  param_1[0xd] = uVar4;
  *(undefined4 *)uVar4 = uVar4;
  *(undefined4 *)(param_1[0xd] + 4) = param_1[0xd];
  uVar4 = lbl_821CA460;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = uVar4;
  fn_82497430(param_1 + 0xc,8);
  *param_1 = &lbl_821BEF88;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar1 = param_2[1];
  uVar4 = *param_2;
  if ((ulonglong)uVar1 != 0) {
    lVar5 = (ulonglong)uVar1 + 8;
    do {
      puVar7 = (uint *)lVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,lVar5);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  piVar2 = (int *)param_1[0x18];
  if (ZEXT48(piVar2) != 0) {
    lVar5 = ZEXT48(piVar2) + 8;
    do {
      puVar7 = (uint *)lVar5;
      lVar6 = (ulonglong)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar5);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  param_1[0x18] = uVar1;
  param_1[0x17] = uVar4;
  param_1[0x19] = param_3;
  return param_1;
}

