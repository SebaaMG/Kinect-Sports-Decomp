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
extern int fn_82C4E0F8();


ulonglong fn_82C4E290(ulonglong *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 1) & 7;
  uVar5 = param_2 + 8;
  if ((int)uVar3 != 0) {
    uVar5 = uVar3 + param_2;
  }
  pbVar4 = *(byte **)((int)param_1 + 0xc);
  if ((ulonglong)(*(uint *)(param_1 + 1) + 0x10) < (uVar5 & 0xffffffff)) {
    do {
      if (*(byte **)(param_1 + 2) < pbVar4) {
        if (*(int *)(param_1 + 3) != 1) break;
        fn_82C4E0F8(param_1);
        pbVar4 = *(byte **)((int)param_1 + 0xc);
      }
      else {
        uVar2 = *(uint *)(param_1 + 1);
        if (0x28 < (int)uVar2) {
          if (((ulonglong)uVar2 + 0x10 & 0xffffffff) < (uVar5 & 0xffffffff)) {
            return (ulonglong)(*pbVar4 >> ((ulonglong)uVar2 + 0xf8 & 0x7f)) + *param_1 >>
                   (0x20 - uVar5 & 0x7f) & 0xffffffff &
                   (ulonglong)(0xffffffff >> ((uint)param_2 & 0x3f));
          }
          break;
        }
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *(uint *)(param_1 + 1) = uVar2 + 8;
        *(byte **)((int)param_1 + 0xc) = pbVar4;
        *param_1 = ((ulonglong)bVar1 << ((longlong)(int)(0x28 - uVar2) & 0x7fU)) + *param_1;
      }
    } while ((ulonglong)(*(int *)(param_1 + 1) + 0x10) < (uVar5 & 0xffffffff));
  }
  return *param_1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff &
         (ulonglong)(0xffffffff >> ((uint)param_2 & 0x3f));
}

