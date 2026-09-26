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
extern int fn_82AB15D0();
extern int fn_82BB5A58();
extern int fn_82BB5AC0();
extern int fn_82BBFDD0();
extern unsigned int uRam00000000;


void fn_82BB80E8(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  iVar3 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar3;
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) << 1 < iVar3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e05c4,0xffffffff820e0168,0x6cb);
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 4) << 1 < *(int *)(param_1 + 0x1c)) {
    uRam00000000 = 0xd;
  }
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  iVar3 = *(int *)(param_1 + 0x2c);
  while (iVar1 = iVar5, iVar1 != 0) {
    if (iVar4 < *(int *)(iVar3 + 0x14)) {
      iVar4 = *(int *)(iVar3 + 0x14);
    }
    iVar3 = iVar1;
    iVar5 = *(int *)(iVar1 + 8);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
  iVar5 = *(int *)(param_1 + 0x5c);
  while (iVar1 = iVar3, iVar1 != 0) {
    if (iVar4 < *(int *)(iVar5 + 0x14)) {
      iVar4 = *(int *)(iVar5 + 0x14);
    }
    fn_82BBFDD0(iVar5);
    fn_82BB5A58(param_1,iVar5);
    iVar5 = iVar1;
    iVar3 = *(int *)(iVar1 + 8);
  }
  *(int *)(param_1 + 0x6c) = iVar4;
  iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 8);
  iVar5 = *(int *)(param_1 + 0x44);
  while (iVar1 = iVar3, iVar1 != 0) {
    if (iVar4 < *(int *)(iVar5 + 0x14)) {
      iVar4 = *(int *)(iVar5 + 0x14);
    }
    cVar2 = fn_82BB5AC0(param_1,iVar5);
    if (cVar2 != '\0') {
      fn_82BBFDD0(iVar5);
      fn_82BB5A58(param_1,iVar5);
    }
    iVar5 = iVar1;
    iVar3 = *(int *)(iVar1 + 8);
  }
  *(int *)(param_1 + 0x6c) = iVar4;
  return;
}

