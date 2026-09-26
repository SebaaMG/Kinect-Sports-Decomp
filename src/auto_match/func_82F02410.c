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
extern int fn_82F022F0();


void fn_82F02410(undefined8 param_1,uint param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)param_1;
  if ((uint)puVar1[0xd] < (uint)puVar1[1]) {
    puVar1[4] = 0x20;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[0xe] = 1;
    puVar1[2] = *puVar1;
  }
  uVar4 = puVar1[4];
  if ((param_3 & 0xffffffff) < (ulonglong)uVar4) {
    uVar4 = uVar4 - (int)param_3;
    puVar1[4] = uVar4;
    puVar1[3] = (*(uint *)((int)((param_3 & 0xffffffff) << 2) + -0x7ce56678) & param_2) <<
                (uVar4 & 0x3f) ^ puVar1[3];
  }
  else {
    param_3 = param_3 - uVar4;
    puVar1[3] = puVar1[3] ^ (int)param_2 >> ((uint)param_3 & 0x3f) & ~(-1 << (uVar4 & 0x3f));
    if (puVar1[0xb] == 0) {
      *(undefined1 *)puVar1[2] = *(undefined1 *)(puVar1 + 3);
      iVar5 = puVar1[2];
      puVar1[2] = (undefined1 *)(iVar5 + 1);
      *(undefined1 *)(iVar5 + 1) = *(undefined1 *)((int)puVar1 + 0xd);
      iVar5 = puVar1[2];
      puVar1[2] = (undefined1 *)(iVar5 + 1);
      *(undefined1 *)(iVar5 + 1) = *(undefined1 *)((int)puVar1 + 0xe);
      iVar5 = puVar1[2];
      puVar1[2] = (undefined1 *)(iVar5 + 1);
      *(undefined1 *)(iVar5 + 1) = *(undefined1 *)((int)puVar1 + 0xf);
      iVar5 = puVar1[1] + 4;
      puVar1[2] = puVar1[2] + 1;
    }
    else {
      uVar4 = puVar1[2];
      lVar2 = fn_82F022F0(param_1,*(undefined1 *)(puVar1 + 3),(ulonglong)uVar4,
                              (ulonglong)uVar4 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (ulonglong)*(uint *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      lVar2 = fn_82F022F0(param_1,*(undefined1 *)(iVar5 + 0xd),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (ulonglong)*(uint *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      lVar2 = fn_82F022F0(param_1,*(undefined1 *)(iVar5 + 0xe),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (ulonglong)*(uint *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      iVar3 = fn_82F022F0(param_1,*(undefined1 *)(iVar5 + 0xf),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      iVar3 = iVar3 + *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = iVar3;
      iVar5 = (iVar3 - uVar4) + *(int *)(iVar5 + 4);
    }
    iVar3 = (int)param_1;
    *(int *)(iVar3 + 4) = iVar5;
    if ((param_3 & 0xffffffff) == 0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0x20;
    }
    else {
      uVar4 = 0x20 - (uint)param_3;
      *(uint *)(iVar3 + 0x10) = uVar4;
      *(uint *)(iVar3 + 0xc) =
           (*(uint *)((int)((param_3 & 0xffffffff) << 2) + -0x7ce56678) & param_2) << (uVar4 & 0x3f)
      ;
    }
  }
  return;
}

