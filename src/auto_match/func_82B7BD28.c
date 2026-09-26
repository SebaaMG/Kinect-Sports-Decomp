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
extern int fn_82BA7168();


undefined4 fn_82B7BD28(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (*(uint *)(param_1 + 0x10) < *(int *)(param_1 + 8) + uVar2) {
    fn_82BA7168(param_1,uVar2);
  }
  uVar4 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0x14) = uVar4;
  if ((*(char *)(param_1 + 0x28) != '\0') && (uVar1 = *(uint *)(param_1 + 0xc), uVar4 < uVar1)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    uVar3 = uVar2;
    if (uVar1 <= uVar4 + uVar2) {
      uVar3 = uVar1 - uVar4;
    }
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar3;
  }
  uVar4 = uVar4 + uVar2;
  *(uint *)(param_1 + 8) = uVar4;
  if (uVar4 <= *(uint *)(param_1 + 0xc)) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0xc) = uVar4;
  return *(undefined4 *)(param_1 + 0x14);
}

