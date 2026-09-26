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
extern int fn_82EC7488();


void fn_82E81C50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fa8);
  *(code **)(param_1 + 0x1b90) = fn_82EC7488;
  if (*(int *)(param_1 + 0x1fac) == 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
LAB_82e81c7c:
        *(undefined4 *)(param_1 + 0x1f28) = 1;
        *(undefined4 *)(param_1 + 0x760c) = 1;
        *(undefined4 *)(param_1 + 0x920) = 1;
        return;
      }
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_82e81c7c;
        if ((iVar1 != 4) && (iVar1 != 5)) {
          return;
        }
      }
LAB_82e81cb0:
      *(undefined4 *)(param_1 + 0x760c) = 1;
      *(undefined4 *)(param_1 + 0x920) = 1;
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5268) = 0;
      *(undefined4 *)(param_1 + 0x648) = 0;
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x920) = 1;
        return;
      }
      if (iVar1 != 3) {
        if ((iVar1 != 4) && (iVar1 != 5)) {
          return;
        }
        *(undefined4 *)(param_1 + 0x6d70) = 1;
        *(undefined4 *)(param_1 + 0x6dc8) = 2;
        *(undefined4 *)(param_1 + 0x6dcc) = 2;
        *(undefined4 *)(param_1 + 0x760c) = 1;
        *(undefined4 *)(param_1 + 0x920) = 1;
        return;
      }
      goto LAB_82e81cb0;
    }
  }
  *(undefined4 *)(param_1 + 0x5268) = 0;
  *(undefined4 *)(param_1 + 0x920) = 1;
  return;
}

