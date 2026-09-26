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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_82186E74;


void fn_82D8E4C0(int param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (8 < (param_2 - 1U & 0xffffffff)) {
    return;
  }
  bVar1 = (int)(param_2 - 1U) != 0;
  if (param_2 == 2 && bVar1) {
    *(undefined4 *)(param_1 + 0x80) = 2;
    uVar2 = lbl_82002AE0;
    *(undefined4 *)(param_1 + 0x78) = lbl_8201FBC0;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    return;
  }
  if (param_2 == 3 && bVar1) {
    uVar2 = 2;
  }
  else {
    if (param_2 == 4 && bVar1) {
      *(undefined4 *)(param_1 + 0x80) = 4;
      uVar2 = lbl_8201DFF4;
      *(undefined4 *)(param_1 + 0x78) = lbl_82186E74;
      *(undefined4 *)(param_1 + 0x7c) = uVar2;
      return;
    }
    if (param_2 == 5 && bVar1) {
      *(undefined4 *)(param_1 + 0x80) = 4;
      uVar2 = lbl_82002AE0;
      *(undefined4 *)(param_1 + 0x78) = lbl_8201FBC0;
      *(undefined4 *)(param_1 + 0x7c) = uVar2;
      return;
    }
    if (param_2 == 6 && bVar1) {
      uVar2 = 4;
    }
    else {
      if (param_2 == 7 && bVar1) {
        *(undefined4 *)(param_1 + 0x80) = 8;
        uVar2 = lbl_8201DFF4;
        *(undefined4 *)(param_1 + 0x78) = lbl_82186E74;
        *(undefined4 *)(param_1 + 0x7c) = uVar2;
        return;
      }
      if (param_2 == 8 && bVar1) {
        *(undefined4 *)(param_1 + 0x80) = 8;
        uVar2 = lbl_82002AE0;
        *(undefined4 *)(param_1 + 0x78) = lbl_8201FBC0;
        *(undefined4 *)(param_1 + 0x7c) = uVar2;
        return;
      }
      if (!bVar1) {
        *(undefined4 *)(param_1 + 0x80) = 2;
        uVar2 = lbl_8201DFF4;
        *(undefined4 *)(param_1 + 0x78) = lbl_82186E74;
        *(undefined4 *)(param_1 + 0x7c) = uVar2;
        return;
      }
      uVar2 = 8;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = lbl_82186E18;
  *(undefined4 *)(param_1 + 0x78) = lbl_8201DFF4;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}

