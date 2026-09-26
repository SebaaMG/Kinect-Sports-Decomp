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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_824060E8();
extern U64 storeWordConditionalIndexed();


void fn_824063F8(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  char in_RESERVE;
  byte in_cr0;
  int *piStack_30;
  int *piStack_2c;
  
  if (*(int *)(param_1 + 0xc) == 2) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  fn_824060E8(&piStack_30,param_1 + 4);
  uVar6 = ZEXT48(piStack_2c);
  uVar5 = 0;
  piVar7 = (int *)0x0;
  if (uVar6 != 0) {
    cVar2 = fn_8223AAC0(uVar6);
    in_cr0 = (cVar2 == '\0') << 1;
    if (cVar2 != '\0') {
      uVar5 = uVar6;
      piVar7 = piStack_30;
    }
  }
  (**(code **)(*piVar7 + 0x14))(piVar7);
  if (uVar5 != 0) {
    fn_822315A0(uVar5);
  }
  if (uVar6 != 0) {
    do {
      puVar4 = (uint *)(uVar6 + 8);
      lVar3 = (ulonglong)*puVar4 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,uVar6 + 8);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(code **)(*piStack_2c + 4))(uVar6);
    }
  }
  return;
}

