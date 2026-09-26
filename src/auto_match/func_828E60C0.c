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
extern int fn_8265CA20();
extern unsigned int lbl_82027424;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_828E60C0(undefined4 *param_1,ulonglong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = &lbl_82027424;
  piVar1 = (int *)param_1[3];
  if (ZEXT48(piVar1) != 0) {
    lVar3 = ZEXT48(piVar1) + 8;
    do {
      puVar4 = (uint *)lVar3;
      lVar5 = (ulonglong)*puVar4 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar5,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar5 == 0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

