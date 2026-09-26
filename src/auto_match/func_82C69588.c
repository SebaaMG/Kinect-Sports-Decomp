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


ulonglong fn_82C69588(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xb14c);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x6070);
    uVar4 = 1;
    if (*(int *)(iVar2 + 0x2c8) != 0) {
      uVar1 = *(uint *)(iVar2 + 0x308);
      iVar3 = (*(int *)(param_1 + 0xbc) * *(int *)(param_1 + 0xb4) + 0x257ff) / 0x25800;
      uVar4 = (longlong)iVar3;
      if ((int)uVar1 < iVar3) {
        uVar4 = (ulonglong)uVar1;
      }
      if (3 < (int)uVar4) {
        uVar4 = 4;
      }
      if ((*(int *)(param_1 + 0x120) == 2) || (*(int *)(param_1 + 0x120) == 4)) {
        iVar3 = *(int *)(iVar2 + 0x30c) + 1;
      }
      else {
        if ((int)uVar1 < *(int *)(iVar2 + 0x30c)) {
          uVar4 = 1;
        }
        iVar3 = 0;
      }
      *(int *)(iVar2 + 0x30c) = iVar3;
      if ((*(int *)(iVar2 + 0x4818) != 0) && (*(int *)(param_1 + 0x120) == 2)) {
        uVar4 = 1;
      }
    }
    *(uint *)(param_1 + 0xb14c) = (uint)uVar4;
  }
  return uVar4;
}

