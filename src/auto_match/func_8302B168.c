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


undefined8 fn_8302B168(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  uVar4 = (uint)*(byte *)(param_2 + 0x14) << 0x1c;
  *(uint *)(param_1 + 0x20) = uVar4 | uVar1 & 0xfffffff;
  uVar2 = (*(byte *)(param_2 + 0x15) & 0xf) << 0x18;
  *(uint *)(param_1 + 0x20) = uVar2 | uVar4 | uVar1 & 0xffffff;
  uVar3 = (*(byte *)(param_2 + 0x16) & 0xf) << 0x14;
  *(uint *)(param_1 + 0x20) = uVar3 | uVar2 | uVar4 | uVar1 & 0xfffff;
  *(uint *)(param_1 + 0x20) =
       (*(byte *)(param_2 + 0x17) & 0xf) << 0x10 | uVar3 | uVar2 | uVar4 | uVar1 & 0xffff;
  return 1;
}

