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
extern int fn_82CE5410();
extern int fn_82F68B7C();


void fn_82D7EDA8(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)fn_82F68B7C();
  uVar1 = *(ushort *)((int)puVar3 + 0xe);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = puVar3[2];
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))
              (*(int **)(iVar4 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
  }
  uVar1 = *(ushort *)((int)puVar3 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *puVar3;
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))
              (*(int **)(iVar4 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
  }
  return;
}

