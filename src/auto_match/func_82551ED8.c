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
extern int fn_82F68CC0();


void fn_82551ED8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar5 = (iVar3 + 1) * 2;
    if (param_3 <= iVar5) break;
    iVar2 = (iVar3 + 1) * 0x30 + param_1;
    uVar4 = *(uint *)(iVar2 + 0x10);
    uVar1 = *(uint *)(iVar2 + -8);
    if (uVar4 == uVar1) {
      bVar6 = *(uint *)(iVar2 + -4) <= *(uint *)(iVar2 + 0x14);
      uVar1 = *(uint *)(iVar2 + -4) ^ *(uint *)(iVar2 + 0x14);
    }
    else {
      bVar6 = uVar1 <= uVar4;
      uVar1 = uVar1 ^ uVar4;
    }
    if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar6 & 1) != 0) {
      iVar5 = iVar5 + -1;
    }
    fn_82F68CC0(iVar3 * 0x18 + param_1,iVar5 * 0x18 + param_1,0x18);
    iVar3 = iVar5;
  }
  if (iVar5 == param_3) {
    fn_82F68CC0(iVar3 * 0x18 + param_1,param_3 * 0x18 + param_1 + -0x18,0x18);
    iVar3 = param_3 + -1;
  }
  while( true ) {
    uVar4 = iVar3 - 1;
    iVar5 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if (iVar3 <= param_2) break;
    uVar4 = *(uint *)(param_4 + 0x10);
    iVar2 = iVar5 * 0x18 + param_1;
    uVar1 = *(uint *)(iVar2 + 0x10);
    if (uVar1 == uVar4) {
      bVar6 = *(uint *)(param_4 + 0x14) <= *(uint *)(iVar2 + 0x14);
      uVar4 = *(uint *)(param_4 + 0x14) ^ *(uint *)(iVar2 + 0x14);
    }
    else {
      bVar6 = uVar4 <= uVar1;
      uVar4 = uVar4 ^ uVar1;
    }
    if ((((~(ulonglong)uVar4 & 0xffffffff) >> 0x1f) + (ulonglong)bVar6 & 1) == 0) break;
    fn_82F68CC0(iVar3 * 0x18 + param_1,iVar2,0x18);
    iVar3 = iVar5;
  }
  fn_82F68CC0(iVar3 * 0x18 + param_1,param_4,0x18);
  return;
}

