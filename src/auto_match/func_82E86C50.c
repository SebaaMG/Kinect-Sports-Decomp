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
extern int fn_82F02410();
extern int fn_82F15A98();


void fn_82E86C50(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x978) == 2) goto LAB_82e86dcc;
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x97c),1);
  if (*(int *)(param_1 + 0x97c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x984);
  if (uVar1 == 0xf) {
    bVar2 = 0;
    goto LAB_82e86da4;
  }
  if ((uVar1 & 5) == 0) {
LAB_82e86d14:
    if ((uVar1 & 10) != 0) {
LAB_82e86d4c:
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),2,2);
      uVar1 = *(uint *)(param_1 + 0x984);
      if (uVar1 == 1) {
        bVar2 = 0;
      }
      else if (uVar1 == 2) {
        bVar2 = 1;
      }
      else {
        if (uVar1 != 4) {
          lVar4 = (ulonglong)uVar1 - 8;
          goto LAB_82e86d94;
        }
        bVar2 = 2;
      }
      goto LAB_82e86da4;
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),3,2);
    uVar3 = 1;
    bVar2 = *(char *)(param_1 + 0x980) == '\x01';
  }
  else {
    if ((uVar1 & 10) == 0) {
      if ((uVar1 & 5) == 0) goto LAB_82e86d14;
      goto LAB_82e86d4c;
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,2);
    uVar1 = *(uint *)(param_1 + 0x984);
    if (uVar1 == 3) {
      bVar2 = 0;
    }
    else if (uVar1 == 6) {
      bVar2 = 1;
    }
    else if (uVar1 == 0xc) {
      bVar2 = 2;
    }
    else {
      lVar4 = (ulonglong)uVar1 - 9;
LAB_82e86d94:
      bVar2 = -(lVar4 == 0) & 3;
    }
LAB_82e86da4:
    uVar3 = 2;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),bVar2,uVar3);
  if ((*(char *)(param_1 + 0x980) != '\x01') && (*(int *)(param_1 + 0x984) == 0)) {
    return;
  }
LAB_82e86dcc:
  fn_82F15A98(param_1,*(undefined1 *)(param_1 + 0x981),1);
  return;
}

