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
extern int fn_82414950();
extern int fn_82552720();


void fn_8235FAF8(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc0c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xcb8) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x2b84) != 0) || (*(int *)(param_1 + 0x2b88) != 0)) goto LAB_8235fba8;
  fn_82552720(*(undefined4 *)(param_1 + 0x2b58),param_1 + 0x2b68,param_1 + 0xd70,0,2,0,0);
  if (param_2 == 0) {
    uVar2 = 5;
LAB_8235fb9c:
    uVar1 = *(undefined4 *)(param_1 + 0x2b50);
  }
  else {
    if (param_2 == 1) {
      uVar2 = 6;
      goto LAB_8235fb9c;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2b50);
    if (param_2 < 3) {
      uVar2 = 7;
    }
    else {
      uVar2 = 8;
    }
  }
  fn_82414950(uVar1,0,uVar2);
LAB_8235fba8:
  *(undefined4 *)(param_1 + 0x2b88) = 1;
  return;
}

