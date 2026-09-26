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
extern int fn_824BC7E8();
extern int fn_82544F40();
extern int fn_825597C0();
extern int fn_8266EC60();
extern int fn_8266EFC0();
extern int fn_82BA02A8();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83281120;
extern U64 storeWordConditionalIndexed();


void fn_824E3190(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char in_RESERVE;
  byte in_cr0;
  
  uVar3 = fn_825597C0();
  uVar4 = fn_8266EC60();
  fn_8266EFC0(uVar4,0,uVar3,param_1);
  fn_82544F40();
  fn_82BA02A8();
  uVar1 = lbl_8320A898;
  do {
    uVar2 = lbl_83281120;
    if (in_RESERVE != '\0') {
      lbl_83281120 = storeWordConditionalIndexed((ulonglong)lbl_83281120,0,0xffffffff83281120);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar2 != 0) {
    piVar5 = (int *)fn_824BC7E8();
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5,uVar1);
    }
  }
  return;
}

