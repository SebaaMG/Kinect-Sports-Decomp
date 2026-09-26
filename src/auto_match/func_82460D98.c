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
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_824BF8A8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_82460D98(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uStack_40;
  int iStack_3c;
  
  iVar4 = 1;
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar4 = 0;
    break;
  case 1:
  case 3:
  case 5:
    iVar4 = 1;
  }
  if (*(int *)(param_1 + 0xb4) != iVar4) {
    iVar2 = fn_8249ABC0();
    iVar2 = *(int *)(iVar2 + 0x110);
    if (*(int *)(param_1 + 0xbc) != -1) {
      iVar2 = fn_8249D980();
      *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    }
    if (iVar4 == 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
      uStack_40 = 0;
      *(int *)(iVar2 + 0x20) = iVar1 + 1;
      iStack_3c = iVar1;
      fn_824BF8A8(iVar2,&uStack_40);
      *(int *)(param_1 + 0xbc) = iVar1;
    }
    *(int *)(param_1 + 0xb4) = iVar4;
  }
  if (*(int *)(param_1 + 0xb8) != iVar4) {
    iVar2 = fn_8249ABC0();
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0x110);
    if (*(int *)(param_1 + 0xc0) != -1) {
      fn_8249DA08(uVar3);
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    }
    if (iVar4 == 0) {
      iVar2 = *(int *)((int)uVar3 + 0x20);
      uStack_40 = 0;
      *(int *)((int)uVar3 + 0x20) = iVar2 + 1;
      iStack_3c = iVar2;
      fn_824BF8A8(uVar3 + 0x10,&uStack_40);
      *(int *)(param_1 + 0xc0) = iVar2;
    }
    *(int *)(param_1 + 0xb8) = iVar4;
  }
  return;
}

