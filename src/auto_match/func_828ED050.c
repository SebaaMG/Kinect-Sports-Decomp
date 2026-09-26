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
extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E658();
extern int fn_82CE14C8();


void fn_828ED050(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 2) && (iVar1 != 4)) {
    if (iVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    *(undefined1 *)(param_1 + 0x184) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    fn_82A1C0F0(param_1 + 0x10c);
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x1ac) == 1) {
    fn_82A1C0F0(param_1 + 0x1c0);
  }
  fn_8265CA20(*(undefined4 *)(param_1 + 0x1b4));
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  if (*(char *)(param_1 + 0x164) != '\0') {
    fn_82A1C0F0(param_1 + 0x168);
    *(undefined1 *)(param_1 + 0x164) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x58);
    lVar3 = 7;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    iVar1 = fn_82CE14C8(*(undefined4 *)(param_1 + 0x58));
    if (iVar1 == 0x3e5) {
      *(undefined4 *)(param_1 + 8) = 5;
      goto LAB_828ed184;
    }
    fn_82A1E658(*(undefined4 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 3;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
LAB_828ed184:
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  return;
}

