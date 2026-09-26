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
extern unsigned int lbl_82091230;
extern unsigned int lbl_82091900;
extern unsigned int lbl_82092F40;
extern unsigned int lbl_820935E0;
extern unsigned int lbl_82094588;
extern unsigned int lbl_82094F40;
extern unsigned int lbl_82095A60;
extern unsigned int lbl_82095E18;
extern unsigned int lbl_820961D0;
extern unsigned int lbl_82096538;
extern unsigned int lbl_820968A0;
extern unsigned int lbl_82097310;
extern unsigned int lbl_82097D80;
extern unsigned int lbl_820985E0;
extern unsigned int lbl_82098E40;
extern unsigned int lbl_82099370;
extern unsigned int lbl_820998A0;
extern unsigned int lbl_82099CF8;


void fn_82A72B38(int *param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x120);
  if (iVar1 == 3) {
    if (param_3 == 1) {
      *(undefined **)(param_2 + 0x18) = &lbl_82092F40;
      *(undefined **)(param_2 + 0x1c) = &lbl_820961D0;
      *(undefined **)(param_2 + 0x20) = &lbl_82096538;
      *(undefined2 *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(undefined **)(param_2 + 0x18) = &lbl_82091230;
    *(undefined **)(param_2 + 0x1c) = &lbl_82095A60;
    *(undefined **)(param_2 + 0x20) = &lbl_82095E18;
    *(undefined2 *)((int)param_1 + 0x13a) = 0x46;
    return;
  }
  if (iVar1 == 1) {
    if (param_3 == 1) {
      *(undefined **)(param_2 + 0x18) = &lbl_82094F40;
      *(undefined **)(param_2 + 0x1c) = &lbl_820998A0;
      *(undefined **)(param_2 + 0x20) = &lbl_82099CF8;
      *(undefined2 *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(undefined **)(param_2 + 0x18) = &lbl_82094588;
    *(undefined **)(param_2 + 0x1c) = &lbl_82098E40;
    *(undefined **)(param_2 + 0x20) = &lbl_82099370;
    *(undefined2 *)((int)param_1 + 0x13a) = 0x3c;
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  if (param_3 == 1) {
    *(undefined **)(param_2 + 0x18) = &lbl_820935E0;
    *(undefined **)(param_2 + 0x1c) = &lbl_82097D80;
    *(undefined **)(param_2 + 0x20) = &lbl_820985E0;
    *(undefined2 *)((int)param_1 + 0x13a) = 0xb4;
    return;
  }
  *(undefined **)(param_2 + 0x18) = &lbl_82091900;
  *(undefined **)(param_2 + 0x1c) = &lbl_820968A0;
  *(undefined **)(param_2 + 0x20) = &lbl_82097310;
  *(undefined2 *)((int)param_1 + 0x13a) = 0x154;
  return;
}

