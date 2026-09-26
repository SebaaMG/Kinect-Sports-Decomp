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
extern int fn_82767CC8();


void fn_82769D28(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_82767CC8(param_1,*(undefined4 *)(param_1 + 0x20),param_2);
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x20);
  uVar2 = *param_2;
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2[1];
code_r0x82769e2c:
    *param_2 = 2;
    param_2[1] = *(uint *)(param_1 + 0x10);
  }
  else {
    if (uVar2 == 1) {
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1];
      goto code_r0x82769e2c;
    }
    if (2 < uVar2) {
      if (uVar2 == 3) {
        uVar2 = *(int *)(param_1 + 0x10) + param_2[1];
        *(uint *)(param_1 + 0x10) = uVar2;
        *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
        param_2[1] = uVar2;
        param_2[2] = *(uint *)(param_1 + 0x14);
        uVar2 = *(int *)(param_1 + 0x10) + param_2[3];
        *(uint *)(param_1 + 0x10) = uVar2;
        *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[4];
        param_2[3] = uVar2;
        param_2[4] = *(uint *)(param_1 + 0x14);
      }
      goto code_r0x82769e44;
    }
    uVar2 = *(int *)(param_1 + 0x10) + param_2[1];
    *(uint *)(param_1 + 0x10) = uVar2;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
    param_2[1] = uVar2;
  }
  param_2[2] = *(uint *)(param_1 + 0x14);
code_r0x82769e44:
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(char *)(param_1 + 0x24) != '\0')) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}

