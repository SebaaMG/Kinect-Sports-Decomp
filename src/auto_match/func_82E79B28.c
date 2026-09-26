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
extern unsigned int *auStack_2c;
extern int fn_82E76C40();
extern int fn_82E78690();
extern int fn_82E798F8();
extern unsigned int uStack_30;


undefined8 fn_82E79B28(int param_1)

{
  int iVar2;
  longlong lVar1;
  uint uVar3;
  ulonglong uVar4;
  uint uStack_30;
  uint auStack_2c [11];
  
  iVar2 = fn_82E76C40();
  uVar4 = 0;
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    do {
      lVar1 = fn_82E78690(param_1 + 0x178,uVar4,&uStack_30);
      *(int *)((-(uint)(lVar1 != 0) & uStack_30) + 0x13) = iVar2;
      lVar1 = fn_82E78690(param_1 + 0x178,uVar4,auStack_2c);
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)((-(uint)(lVar1 != 0) & auStack_2c[0]) + 0x17) + iVar2;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1e0));
  }
  uVar3 = fn_82E798F8(param_1);
  if (*(int *)(param_1 + 0x160) == 0) {
    if (*(uint *)(param_1 + 0x148) < uVar3) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      return 0xffffffffc00d3a9a;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x148) - uVar3;
  }
  else {
    *(uint *)(param_1 + 0x148) = uVar3;
    *(uint *)(param_1 + 0x160) = uVar3;
  }
  return 0;
}

