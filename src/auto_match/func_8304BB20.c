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
extern unsigned int *auStack_20;
extern int fn_8304D6F0();


longlong fn_8304BB20(int param_1,int param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint auStack_20 [4];
  
  if ((param_3 != '\0') && (param_2 == 1)) {
    iVar1 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar1 + 0xdb) & 0x80) != 0) {
      fn_8304D6F0(param_1,((ulonglong)*(uint *)(*(int *)(iVar1 + 0x6c) + 0x20) *
                           (ulonglong)*(uint *)(iVar1 + 0xd0)) / 48000 & 0xffffffff,auStack_20,
                   param_1 + 0x1c);
      iVar1 = *(int *)(param_1 + 8);
      *(uint *)(iVar1 + 0xd0) = auStack_20[0] - (auStack_20[0] & 0xffffffc0);
      *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
      uVar2 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x3c) * (longlong)(int)(auStack_20[0] >> 6)
              + (ulonglong)*(uint *)(param_1 + 0x38);
      *(int *)(param_1 + 0x28) = (int)uVar2;
      return 2 - (ulonglong)
                 (uVar2 < (ulonglong)*(uint *)(param_1 + 0x34) +
                          (ulonglong)*(uint *)(param_1 + 0x38));
    }
    return 1;
  }
  return 1;
}

