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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6368();
extern int fn_827AEAA8();
extern unsigned int uStack_40;


void fn_827A98B0(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  uint uStack_40;
  
  if (param_1[0x14] != 0) {
    fn_8267C498();
  }
  param_1[0x14] = 0;
  uVar1 = *param_1;
  if ((uVar1 == 0) || (bVar4 = false, param_1[1] <= uVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
  if ((*(ushort *)(uVar1 + 6) >> 0xe & 1) != 0) {
    if ((*(ushort *)(uVar1 + 6) >> 0xd & 1) != 0) {
      piVar2 = *(int **)param_1[2];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
      }
      puVar3 = (uint *)param_1[0x13];
      if ((puVar3 != (uint *)0x0) &&
         (uVar1 = *puVar3, *puVar3 = (uint)((ulonglong)uVar1 - 1), (ulonglong)uVar1 - 1 == 0)) {
        fn_826C6368(puVar3);
        fn_8267BE38(puVar3);
      }
      param_1[0x13] = (uint)piVar2;
      param_1[2] = param_1[2] + 4;
    }
    if ((*(ushort *)(*param_1 + 6) >> 0xc & 1) != 0) {
      uVar1 = *(uint *)param_1[2];
      param_1[2] = (uint)((uint *)param_1[2] + 1);
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar1;
    }
    if ((*(ushort *)(*param_1 + 6) >> 0xb & 1) != 0) {
      uVar1 = *(uint *)param_1[2];
      if (uVar1 != 0) {
        *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
      }
      if (param_1[0x14] != 0) {
        fn_8267C498();
      }
      param_1[0x14] = uVar1;
      param_1[2] = param_1[2] + 4;
    }
  }
  if ((*(ushort *)(*param_1 + 6) >> 10 & 1) == 0) {
    param_1[0x15] = 0;
  }
  else {
    param_1[0x15] = 1;
    param_1[0x12] = param_1[0x10];
  }
  cVar5 = fn_827AEAA8(param_1 + 3);
  uVar1 = *param_1;
  if (cVar5 == '\0') {
    param_1[0x10] = param_1[0x11];
    if (((*(ushort *)(uVar1 + 4) & 0xf000) == 0) && ((*(ushort *)(uVar1 + 6) >> 3 & 1) == 0)) {
      return;
    }
    if ((param_1[0xf] & 0x10000000) != 0) {
      if ((param_1[0xf] & 0x10000000) == 0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = param_1[0xd];
      }
      param_1[0x10] = uStack_40;
    }
    if ((*(byte *)(param_1 + 0xf) & 7) != 0) {
      param_1[0x15] = *(byte *)(param_1 + 0xf) & 7;
    }
    if ((param_1[0xf] & 0x20000000) != 0) {
      if ((param_1[0xf] & 0x20000000) == 0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = param_1[0xe];
      }
      goto LAB_827a9afc;
    }
  }
  else {
    if ((*(ushort *)(uVar1 + 6) >> 10 & 1) == 0) {
      return;
    }
    param_1[0x15] = 1;
  }
  uStack_40 = param_1[0x10];
LAB_827a9afc:
  param_1[0x12] = uStack_40;
  return;
}

