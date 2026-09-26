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


undefined8 fn_82C48040(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0x3c04) == 0)) &&
     (*(int *)(iVar1 + 0x3c48) == 0)) {
    return 0xfffffffffffffffc;
  }
  if (*(int *)(iVar1 + 0x3cb0) < 7) {
    if (*(int *)(iVar1 + 0x3a28) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x3a40);
      uVar3 = *(undefined4 *)(iVar1 + 0x3a44);
      goto code_r0x82c480dc;
    }
  }
  else if (((*(int *)(iVar1 + 0x5580) == 1) && (0 < *(int *)(iVar1 + 0x39f4))) &&
          (1 < *(longlong *)(iVar1 + 0xe30))) {
    uVar2 = *(undefined4 *)(iVar1 + 0x5644);
    uVar3 = *(undefined4 *)(iVar1 + 0x5648);
    goto code_r0x82c480dc;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x9c);
  uVar3 = *(undefined4 *)(iVar1 + 0xa0);
code_r0x82c480dc:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  return 0;
}

