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
extern int fn_82D7E470();
extern int fn_82E98148();
extern int fn_82EC7488();
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E81AE0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 8) {
    *(code **)(param_1 + 0x1b98) = fn_82D7E470;
    *(code **)(param_1 + 0x1b9c) = fn_82D7E470;
    if (*(int *)(param_1 + 0x76c8) == 0) {
      pcVar2 = fn_82EC7488;
    }
    else {
      pcVar2 = fn_82E98148;
    }
    *(code **)(param_1 + 0x1b94) = pcVar2;
    iVar1 = *(int *)(param_1 + 0x1fa8);
    *(undefined4 *)(param_1 + 0x644) = 1;
    *(undefined4 *)(param_1 + 0x5268) = 1;
    *(undefined4 *)(param_1 + 0x920) = 1;
    *(undefined4 *)(param_1 + 0x1b90) = *(undefined4 *)(param_1 + 0x1b98);
    *(undefined4 *)(param_1 + 0x760c) = 1;
    *(undefined4 *)(param_1 + 0x648) = 1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x644) = 1;
      *(undefined4 *)(param_1 + 0x5268) = 0;
      *(undefined4 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x760c) = 0;
      *(undefined4 *)(param_1 + 0x648) = 0;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x644) = 1;
      *(undefined4 *)(param_1 + 0x5268) = 0;
      *(undefined4 *)(param_1 + 0x920) = 1;
      *(undefined4 *)(param_1 + 0x760c) = 1;
      *(undefined4 *)(param_1 + 0x648) = 1;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 1;
      *(undefined4 *)(param_1 + 0x5268) = 1;
      *(undefined4 *)(param_1 + 0x920) = 1;
      *(undefined4 *)(param_1 + 0x760c) = 1;
      *(undefined4 *)(param_1 + 0x648) = 1;
    }
    else if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x644) = 1;
      *(undefined4 *)(param_1 + 0x5268) = 1;
      *(undefined4 *)(param_1 + 0x920) = 1;
      *(undefined4 *)(param_1 + 0x760c) = 1;
      *(undefined4 *)(param_1 + 0x648) = 1;
    }
    else if ((iVar1 == 4) || (iVar1 == 5)) {
      *(undefined4 *)(param_1 + 0x644) = 1;
      *(undefined4 *)(param_1 + 0x5268) = 1;
      *(undefined4 *)(param_1 + 0x920) = 1;
      *(undefined4 *)(param_1 + 0x760c) = 1;
      *(undefined4 *)(param_1 + 0x648) = 1;
      if ((lbl_83248E44 == 0) && ((lbl_83248E48 == 0 && (*(char *)(param_1 + 0x7b30) == '\0')))) {
        *(undefined1 *)(param_1 + 0x7b30) = 1;
        *(undefined4 *)(param_1 + 0x7910) = 1;
        *(undefined4 *)(param_1 + 0x7914) = 2;
      }
    }
  }
  if (*(char *)(param_1 + 0x7b30) != -1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x7b30) = 0;
  *(undefined1 *)(param_1 + 0x7b31) = 0;
  *(undefined4 *)(param_1 + 0x7b2c) = 0;
  return;
}

