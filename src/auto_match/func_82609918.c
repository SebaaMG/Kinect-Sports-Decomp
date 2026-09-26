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
extern unsigned int *auStack_40;
extern int fn_8253D5A0();
extern int fn_82D82E28();
extern int fn_82D86660();
extern int fn_82D890C8();
extern int fn_82D891F0();


void fn_82609918(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [64];
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
      if (iVar2 != 0) {
        fn_82D890C8(auStack_40,uVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x20));
      if (iVar2 != 0) {
        fn_82D891F0(uVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 8));
      if (iVar2 != 0) {
        fn_8253D5A0(param_2,param_3,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + *(int *)(param_1 + 0x2c)) == 0) goto LAB_82609a40;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  iVar3 = -1;
LAB_82609a40:
  if (iVar3 == -1) {
    fn_82D86660(uVar1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + iVar4);
        if (iVar2 != 0) {
          fn_82D82E28(uVar1,iVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}

