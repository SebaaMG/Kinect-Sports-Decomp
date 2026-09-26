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
extern unsigned int lbl_820FC098;
extern unsigned int lbl_820FC0B4;
extern unsigned int lbl_820FC0D0;
extern unsigned int lbl_820FC108;
extern unsigned int lbl_820FC284;


bool fn_82C5E1D8(int param_1,ulonglong param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  if (param_3 == 0) {
    if (param_4 == 0) {
      iVar3 = (int)((param_2 & 0x3fffffff) << 2);
      bVar1 = *(int *)(param_1 + 0xd64) == *(int *)(&lbl_820FC098 + iVar3);
      iVar4 = *(int *)(param_1 + 0xd60);
      puVar2 = &lbl_820FC0B4;
      goto LAB_82c5e264;
    }
    iVar4 = (int)((param_2 & 0x3fffffff) << 2);
    puVar2 = &lbl_820FC0B4;
    *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(&lbl_820FC098 + iVar4);
  }
  else {
    if (param_4 == 0) {
      iVar3 = (int)((param_2 - 0x70 & 0x3fffffff) << 2);
      bVar1 = *(int *)(param_1 + 0xd64) == *(int *)(&lbl_820FC0D0 + iVar3);
      iVar4 = *(int *)(param_1 + 0xd60);
      puVar2 = &lbl_820FC108;
LAB_82c5e264:
      bVar1 = iVar4 != *(int *)(puVar2 + iVar3) || !bVar1;
      if (*(int *)(param_1 + 0x39f8) != *(int *)(&lbl_820FC284 + iVar4 * 4)) {
        bVar1 = true;
      }
      goto LAB_82c5e298;
    }
    iVar4 = (int)((param_2 - 0x70 & 0x3fffffff) << 2);
    puVar2 = &lbl_820FC108;
    *(undefined4 *)(param_1 + 0xd64) = *(undefined4 *)(&lbl_820FC0D0 + iVar4);
  }
  iVar4 = *(int *)(puVar2 + iVar4);
  *(int *)(param_1 + 0xd60) = iVar4;
  *(undefined4 *)(param_1 + 0x39f8) = *(undefined4 *)(&lbl_820FC284 + iVar4 * 4);
LAB_82c5e298:
  if (*(int *)(param_1 + 0x39f4) != 0) {
    return bVar1;
  }
  if (param_4 == 0) {
    return bVar1;
  }
  *(undefined4 *)(param_1 + 0x39f4) = 1;
  return bVar1;
}

