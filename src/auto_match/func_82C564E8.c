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


void fn_82C564E8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1c8) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0xc4c);
    uVar1 = *(undefined4 *)(param_1 + 0xc50);
  }
  else {
    if (*(int *)(param_1 + 0xf74) == 0) goto LAB_82c56534;
    if (*(int *)(param_1 + 0xf78) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc40);
      uVar1 = *(undefined4 *)(param_1 + 0xc3c);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc38);
      uVar1 = *(undefined4 *)(param_1 + 0xc34);
    }
  }
  *(undefined4 *)(param_1 + 0xc30) = uVar2;
  *(undefined4 *)(param_1 + 0xc2c) = uVar1;
LAB_82c56534:
  if (*(int *)(param_1 + 0xf74) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xf78) != 0) {
    *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0xc38);
    *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0xc34);
    return;
  }
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0xc3c);
  return;
}

