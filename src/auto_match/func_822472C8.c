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
extern int fn_822474A8();
extern int fn_82247890();
extern int fn_82248C08();
extern int fn_8225F160();
extern int fn_828A1C20();
extern int fn_828A1C28();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828B0348();


void fn_822472C8(int *param_1,int param_2)

{
  bool bVar1;
  char cVar5;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar5 = fn_828ACCE8(param_1[4]);
  if (cVar5 == '\0') {
LAB_82247304:
    bVar1 = false;
  }
  else {
    cVar5 = fn_828AD740(param_1[4]);
    bVar1 = true;
    if (cVar5 == '\0') goto LAB_82247304;
  }
  if (param_2 == 1) {
    fn_82247890(param_1);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      if (bVar1) {
        fn_822474A8(param_1);
      }
      fn_828A1C20(param_1[4]);
      return;
    }
    if (param_2 != 4) {
      return;
    }
    if (bVar1) {
      return;
    }
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = fn_82248C08(lVar2 + 0x240);
    iVar4 = fn_8225F160();
    *(undefined4 *)(iVar4 + 0x14) = uVar3;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined4 *)(iVar4 + 0x28) = uVar3;
    return;
  }
  if (bVar1) {
    cVar5 = fn_828A1C28(param_1[4]);
    bVar1 = true;
    if (cVar5 != '\0') goto LAB_822473ac;
  }
  bVar1 = false;
LAB_822473ac:
  if (bVar1) {
    fn_828B0348(param_1[4]);
  }
  return;
}

