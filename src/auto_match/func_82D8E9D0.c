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


int fn_82D8E9D0(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if ((param_3 < *(int *)(param_1 + 0xb4)) && (*(char *)(param_1 + 200) != '\0')) {
    uVar5 = (ulonglong)param_2[1] - 0x14;
    uVar4 = (ulonglong)param_2[1] - 1;
    uVar2 = -(uint)(uVar5 < 0xffffffff80000000) & (uint)uVar5;
    if ((int)uVar2 <= (int)uVar4) {
      lVar3 = (uVar4 & 0x3fffffff) * 4 + (ulonglong)*param_2;
      do {
        iVar1 = *(int *)lVar3;
        if (param_4 != iVar1) {
          iVar6 = *(int *)(iVar1 + 0x4c);
          if (*(int *)(iVar1 + 0x4c) <= *(int *)(iVar1 + 0x1c)) {
            iVar6 = *(int *)(iVar1 + 0x1c);
          }
          if (((*(byte *)(iVar1 + 0x26) & 0x30) != 0) &&
             (iVar6 + param_3 < *(int *)(param_1 + 0xb4))) {
            *(byte *)(iVar1 + 0x25) = *(byte *)(iVar1 + 0x25) & 0xcf | 0x10;
            return iVar1;
          }
        }
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + -4;
      } while ((int)uVar2 <= (int)uVar4);
    }
  }
  return 0;
}

