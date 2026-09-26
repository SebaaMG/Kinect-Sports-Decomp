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
extern int fn_82F68B70();
extern int fn_82F68B7C();
extern int fn_82FB7980();
extern int fn_82FB8288();


void fn_82FB8C50(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint *puVar6;
  
  uVar2 = *(uint *)(*(int *)((int)param_2 + 4) + 0x1c);
  if (3 < uVar2) {
    return;
  }
  if ((uVar2 != 0) && (uVar2 != 1)) {
    fn_82F68B70();
    return;
  }
  iVar3 = fn_82F68B7C();
  iVar4 = *(int *)((int)param_2 + 4);
  sVar5 = 0;
  for (puVar6 = *(uint **)(iVar4 + 0x10);
      (puVar6 != *(uint **)(iVar4 + 0x14) && ((ulonglong)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 1) {
    sVar5 = sVar5 + 1;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 8) + -0xc) + 0x1c);
  if ((iVar4 == 1) || (iVar4 == 3)) {
    iVar4 = fn_82FB7980();
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 8) + -4);
  }
  if (iVar4 != 0) {
    iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
    if (((*(ushort *)(iVar3 + 0x28) & 0x8000) != 0) && (iVar4 == *(int *)(iVar1 + 0x20))) {
      fn_82FB8288(iVar3,iVar1,iVar4);
    }
    *(short *)(iVar4 + 0xe) = sVar5;
  }
  return;
}

