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


longlong fn_82D454D0(int param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    uVar4 = param_2 >> (*(uint *)(param_1 + 0x1c) & 0x3f);
    uVar3 = (ulonglong)uVar4;
    param_2 = *(uint *)(param_1 + 0x24) & param_2;
    if (uVar3 == 0) {
      return (longlong)(int)(uint)*(ushort *)(param_1 + 0xc4) *
             (longlong)*(int *)(*(int *)(param_1 + 0x6c) + param_2 * 0x10 + 8) + uVar1;
    }
    if (uVar4 != (1 << (0x20 - *(uint *)(param_1 + 0x1c) & 0x3f)) - 1U) {
      uVar2 = (ulonglong)
              *(ushort *)
               ((int)((uVar3 + ((ulonglong)uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 4) +
                *(int *)(param_1 + 0x78) + -0xc);
      if (uVar2 == 0xffff) {
        uVar2 = uVar3 - 1;
      }
      uVar3 = (ulonglong)*(byte *)(param_1 + 0x2d) - 1;
      uVar4 = *(uint *)((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) +
                        *(int *)(param_1 + 0x78) + 0x40);
      if ((uVar3 & 0xffffffff) < 4) {
        if ((int)uVar3 != 0) {
          if ((ulonglong)*(byte *)(param_1 + 0x2d) != 2) {
            if (uVar3 == 2) {
              return (longlong)(int)(uint)*(ushort *)(param_1 + 0xc4) *
                     (longlong)
                     (int)(uint)*(ushort *)
                                 ((int)(((ulonglong)uVar4 + (ulonglong)param_2 & 0xffffffff) << 1) +
                                 *(int *)(param_1 + 0x3c)) + uVar1;
            }
            return (longlong)(int)(uint)*(ushort *)(param_1 + 0xc4) *
                   (longlong)
                   *(int *)((int)(((ulonglong)uVar4 + (ulonglong)param_2 & 0xffffffff) << 2) +
                           *(int *)(param_1 + 0x30)) + uVar1;
          }
          uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x48) + uVar4 + param_2);
        }
        return (longlong)(int)(uint)*(ushort *)(param_1 + 0xc4) * (longlong)(int)uVar4 + uVar1;
      }
    }
  }
  return 0;
}

