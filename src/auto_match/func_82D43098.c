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


longlong fn_82D43098(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_1 + 0xc0);
  iVar3 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0xc4);
  lVar4 = (ulonglong)uVar1 + 1;
  iVar5 = (int)lVar4;
  if ((int)(*(uint *)(param_1 + 200) & 0x3fffffff) < iVar5) {
    lVar2 = ((ulonglong)*(uint *)(param_1 + 200) & 0x3fffffff) << 1;
    if (iVar5 < (int)lVar2) {
      lVar4 = lVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),puVar7,lVar4,0x40);
  }
  puVar6 = (undefined1 *)(*(int *)(param_1 + 0xc4) * 0x40 + *puVar7);
  if (puVar6 != (undefined1 *)0x0) {
    *(undefined2 *)(puVar6 + 8) = 0;
    *puVar6 = 1;
    puVar6[1] = 1;
    *(undefined2 *)(puVar6 + 2) = 0;
    *(undefined2 *)(puVar6 + 10) = 1;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0;
    *(undefined4 *)(puVar6 + 0x1c) = 0x80000000;
  }
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  return ((ulonglong)uVar1 & 0x3ffffff) * 0x40 + (ulonglong)*puVar7;
}

