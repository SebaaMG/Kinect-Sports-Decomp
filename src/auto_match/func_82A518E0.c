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
extern int fn_82A403E8();
extern int fn_82A4F4E0();
extern int fn_82A4FD48();
extern int fn_82A51860();
extern U64 storeWordConditionalIndexed();


void fn_82A518E0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  char in_RESERVE;
  byte in_cr0;
  
  fn_82A51860();
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    fn_82A4FD48(iVar1);
    fn_82A4F4E0(iVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_82A403E8(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_82A403E8(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  puVar2 = *(uint **)(param_1 + 0x78);
  if (ZEXT48(puVar2) != 0) {
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar2 - 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

