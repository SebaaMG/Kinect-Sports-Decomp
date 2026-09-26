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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7718();
extern int fn_82558B08();
extern int fn_8265CA20();
extern unsigned int lbl_821ACFB8;
extern U64 storeWordConditionalIndexed();


void fn_822C71C8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_821ACFB8;
  fn_82558B08();
  fn_822C7718(param_1 + 0x10);
  iVar7 = param_1[0xc];
  if (iVar7 != 0) {
    iVar1 = param_1[0xd];
    for (; iVar7 != iVar1; iVar7 = iVar7 + 8) {
      if (*(int *)(iVar7 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  piVar2 = (int *)param_1[0xb];
  if (ZEXT48(piVar2) != 0) {
    lVar4 = ZEXT48(piVar2) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar6 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  fn_82230300(param_1 + 1,1,0);
  return;
}

