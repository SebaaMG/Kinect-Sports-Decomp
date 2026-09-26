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
extern int fn_82CE6310();


int fn_82D42908(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    iVar4 = param_1 + 0x20;
    *(int *)(param_1 + 0xb4) = iVar4;
    *(undefined4 *)(param_1 + 0xbc) = 0x80000001;
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  else {
    piVar7 = (int *)(param_1 + 0xb4);
    iVar3 = fn_82CE5410();
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar5 = iVar4 + 1;
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar5) {
      iVar2 = (*(uint *)(param_1 + 0xbc) & 0x3fffffff) << 1;
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),piVar7,iVar5,0x60);
    }
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0xb8) * 0x60 + *piVar7);
    if (puVar6 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar6 + 0x10) = 0;
      puVar6[0x49] = 0;
      *puVar6 = 0;
      puVar6[1] = 1;
      *(undefined2 *)(puVar6 + 8) = 0;
      *(undefined2 *)(puVar6 + 2) = 0;
      *(undefined2 *)(puVar6 + 10) = 1;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar1 = (undefined4 *)((uint)(puVar6 + in_r0 + 0x30) & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      *(undefined4 *)(puVar6 + 0x50) = 0;
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    iVar4 = iVar4 * 0x60 + *piVar7;
  }
  return iVar4;
}

