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


void fn_824066B8(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  char in_RESERVE;
  byte in_cr0;
  int *piStack_30;
  int *piStack_2c;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((uVar1 < 3) || ((5 < uVar1 && (uVar1 == 6)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else if ((uVar1 < 3) || (uVar1 == 6)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  fn_824060E8(&piStack_30,param_1 + 4);
  uVar7 = ZEXT48(piStack_2c);
  uVar6 = 0;
  piVar8 = (int *)0x0;
  if (uVar7 != 0) {
    cVar2 = fn_8223AAC0(uVar7);
    in_cr0 = (cVar2 == '\0') << 1;
    if (cVar2 != '\0') {
      uVar6 = uVar7;
      piVar8 = piStack_30;
    }
  }
  (**(code **)(*piVar8 + 0x14))(piVar8);
  if (uVar6 != 0) {
    fn_822315A0(uVar6);
  }
  if (uVar7 != 0) {
    do {
      puVar5 = (uint *)(uVar7 + 8);
      lVar4 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,uVar7 + 8);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piStack_2c + 4))(uVar7);
    }
  }
  return;
}

