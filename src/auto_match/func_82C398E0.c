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
extern unsigned int lbl_820EF7D8;
extern unsigned int lbl_820EFEA8;
extern unsigned int lbl_820F14E8;
extern unsigned int lbl_820F1B88;
extern unsigned int lbl_820F2B30;
extern unsigned int lbl_820F34E8;
extern unsigned int lbl_820F4008;
extern unsigned int lbl_820F43C0;
extern unsigned int lbl_820F4778;
extern unsigned int lbl_820F4AE0;
extern unsigned int lbl_820F4E48;
extern unsigned int lbl_820F58B8;
extern unsigned int lbl_820F6328;
extern unsigned int lbl_820F6B88;
extern unsigned int lbl_820F73E8;
extern unsigned int lbl_820F7918;
extern unsigned int lbl_820F7E48;
extern unsigned int lbl_820F82A0;


void fn_82C398E0(int *param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x120);
  if (iVar1 == 3) {
    if (param_3 == 1) {
      *(undefined **)(param_2 + 0x18) = &lbl_820F14E8;
      *(undefined **)(param_2 + 0x1c) = &lbl_820F4778;
      *(undefined **)(param_2 + 0x20) = &lbl_820F4AE0;
      *(undefined2 *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(undefined **)(param_2 + 0x18) = &lbl_820EF7D8;
    *(undefined **)(param_2 + 0x1c) = &lbl_820F4008;
    *(undefined **)(param_2 + 0x20) = &lbl_820F43C0;
    *(undefined2 *)((int)param_1 + 0x13a) = 0x46;
    return;
  }
  if (iVar1 == 1) {
    if (param_3 == 1) {
      *(undefined **)(param_2 + 0x18) = &lbl_820F34E8;
      *(undefined **)(param_2 + 0x1c) = &lbl_820F7E48;
      *(undefined **)(param_2 + 0x20) = &lbl_820F82A0;
      *(undefined2 *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(undefined **)(param_2 + 0x18) = &lbl_820F2B30;
    *(undefined **)(param_2 + 0x1c) = &lbl_820F73E8;
    *(undefined **)(param_2 + 0x20) = &lbl_820F7918;
    *(undefined2 *)((int)param_1 + 0x13a) = 0x3c;
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  if (param_3 == 1) {
    *(undefined **)(param_2 + 0x18) = &lbl_820F1B88;
    *(undefined **)(param_2 + 0x1c) = &lbl_820F6328;
    *(undefined **)(param_2 + 0x20) = &lbl_820F6B88;
    *(undefined2 *)((int)param_1 + 0x13a) = 0xb4;
    return;
  }
  *(undefined **)(param_2 + 0x18) = &lbl_820EFEA8;
  *(undefined **)(param_2 + 0x1c) = &lbl_820F4E48;
  *(undefined **)(param_2 + 0x20) = &lbl_820F58B8;
  *(undefined2 *)((int)param_1 + 0x13a) = 0x154;
  return;
}

