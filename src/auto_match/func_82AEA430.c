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


void fn_82AEA430(uint *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = *(uint *)(uVar3 + 8) >> 7 & 0x7f;
  if ((uVar1 == 0) || (bVar2 = true, 0x1f < uVar1)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(uint *)((uVar3 & 0xfffffffe) + 0x28);
    if ((((uVar1 & 1) == 0) && (uVar1 != 0)) &&
       (((*(uint *)(uVar1 + 0x14) ^ *(uint *)(uVar3 + 0x14)) & 0x1fff) == 0)) {
      uVar3 = uVar1;
    }
  }
  uVar1 = *(uint *)(uVar3 + 8) >> 7 & 0x7f;
  if ((uVar1 < 0x20) || (bVar2 = true, 0x52 < uVar1)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(uint *)((uVar3 & 0xfffffffe) + 0x28);
    if ((((uVar1 & 1) == 0) && (uVar1 != 0)) &&
       (((*(uint *)(uVar1 + 0x14) ^ *(uint *)(uVar3 + 0x14)) & 0x1fff) == 0)) {
      uVar3 = uVar1;
    }
  }
  uVar3 = uVar3 & 0xfffffffe;
  param_2 = param_2 & 0xfffffffe;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(uVar3 + 0x28);
  *(uint *)((*(uint *)(uVar3 + 0x28) & 0xfffffffe) + 0x24) = param_2 + 0x28;
  *(uint *)(param_2 + 0x24) = uVar3 + 0x28;
  *(uint *)(uVar3 + 0x28) = param_2;
  return;
}

