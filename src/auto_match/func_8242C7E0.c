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


bool fn_8242C7E0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x174);
  if (((*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) != -1) &&
      (*(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
               *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4)) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0xa0), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x40) == 2) {
      if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      iVar2 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4);
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0xf8) != 0) {
        if (iVar2 == -1) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(*(int *)(iVar3 + 0x40) + 0x14c) + 1U <
            *(uint *)(*(int *)(iVar3 + 0x40) + 0x158)) {
          bVar4 = true;
        }
        else {
          bVar4 = (ulonglong)*(uint *)(*(int *)(iVar3 + 0x40) + 0x148) + 1 <
                  (ulonglong)*(uint *)(*(int *)(iVar3 + 0x40) + 0x154);
        }
        return !bVar4;
      }
      if (iVar2 == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      if ((*(int *)(*(int *)(iVar1 + 0x40) + 0xf8) != 0) ||
         (bVar4 = false,
         *(int *)(*(int *)(iVar1 + 0x40) + 0x14c) + 1 == *(int *)(*(int *)(iVar1 + 0x40) + 0x158)))
      {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(iVar3 + 0x14) != 0x13) {
          return true;
        }
      }
    }
    else if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
      if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      if (*(int *)(**(int **)(iVar1 + 0x40) + 0xa0) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(iVar2 + 0x14) != 0x13) {
          iVar2 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4);
          if (*(int *)(*(int *)(**(int **)(iVar1 + 0x40) + 0xa0) + 0x150) == 0) {
            if (iVar2 == -1) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                              *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
            }
            if ((*(int *)(*(int *)(iVar3 + 0x40) + 0xf8) != 0) ||
               (bVar4 = false,
               *(int *)(*(int *)(iVar3 + 0x40) + 0x14c) + 1 ==
               *(int *)(*(int *)(iVar3 + 0x40) + 0x158))) {
              bVar4 = true;
            }
            return bVar4;
          }
          if (iVar2 == -1) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                            *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
          }
          if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                            *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
          }
          if ((ulonglong)(*(int *)(*(int *)(iVar1 + 0x40) + 0x148) + 1) ==
              (ulonglong)*(uint *)(*(int *)(iVar2 + 0x40) + 0x154) /
              (ulonglong)*(uint *)(*(int *)(iVar3 + 0x5c) + 0x20c)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

