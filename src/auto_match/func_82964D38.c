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


ulonglong fn_82964D38(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 * 4 + *(int *)(param_3 + 0x14));
  iVar4 = *(int *)(param_2 * 4 + *(int *)(param_3 + 0x14));
  if (*(uint *)(iVar4 + 0x38) <= *(uint *)(iVar3 + 0x38)) {
    if (*(uint *)(iVar4 + 0x38) < *(uint *)(iVar3 + 0x38)) {
      return 1;
    }
    if (*(uint *)(iVar4 + 0x3c) <= *(uint *)(iVar3 + 0x3c)) {
      if (*(uint *)(iVar4 + 0x3c) < *(uint *)(iVar3 + 0x3c)) {
        return 1;
      }
      if (*(uint *)(iVar4 + 4) <= *(uint *)(iVar3 + 4)) {
        if (*(uint *)(iVar4 + 4) < *(uint *)(iVar3 + 4)) {
          return 1;
        }
        if (*(uint *)(iVar4 + 0xc) <= *(uint *)(iVar3 + 0xc)) {
          if (*(uint *)(iVar4 + 0xc) < *(uint *)(iVar3 + 0xc)) {
            return 1;
          }
          if (*(uint *)(iVar4 + 8) <= *(uint *)(iVar3 + 8)) {
            if (*(uint *)(iVar4 + 8) < *(uint *)(iVar3 + 8)) {
              return 1;
            }
            if (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar3 + 0x10)) {
              if (*(uint *)(iVar4 + 0x10) < *(uint *)(iVar3 + 0x10)) {
                return 1;
              }
              if (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar3 + 0x14)) {
                if (*(uint *)(iVar4 + 0x14) < *(uint *)(iVar3 + 0x14)) {
                  return 1;
                }
                uVar1 = *(uint *)(iVar3 + 0x18);
                uVar2 = *(uint *)(iVar4 + 0x18);
                if ((int)uVar2 <= (int)uVar1) {
                  return ((~(ulonglong)(uVar1 ^ uVar2) & 0xffffffff) >> 0x1f) +
                         (ulonglong)(uVar1 <= uVar2) & 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffffffffffff;
}

