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
extern int fn_82D14080();
extern unsigned int lbl_821344F4;
extern unsigned int lbl_82134670;
extern unsigned int lbl_8323B6AC;
extern U64 storeWordConditionalIndexed();


undefined1 * fn_82D16868(undefined1 *param_1)

{
  uint uVar1;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = lbl_821344F4;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined ***)(param_1 + 0x10) = &lbl_82134670;
  *(undefined2 *)(param_1 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x80000000;
  do {
    uVar1 = lbl_8323B6AC;
    if (in_RESERVE != '\0') {
      lbl_8323B6AC = storeWordConditionalIndexed((ulonglong)lbl_8323B6AC + 1,0,0xffffffff8323b6ac);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(uint *)(param_1 + 0x1b0) = uVar1;
  fn_82D14080(param_1,0,in_MSR);
  return param_1;
}

