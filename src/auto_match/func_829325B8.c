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


undefined8 fn_829325B8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
        (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
       ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
        (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))))) &&
      ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c) &&
       ((*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))))) &&
     ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
      ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
       (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))))) {
    if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
      uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x30)) >> 5;
    }
    else {
      uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x30))();
    }
    if (uVar2 != 0) {
      if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
        uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x34)) >> 5;
      }
      else {
        uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x34))();
      }
      if (uVar2 != 0) {
        if (*(undefined4 **)(param_1 + 0x38) == (undefined4 *)0x0) {
          uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x38)) >> 5;
        }
        else {
          uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x38))();
        }
        if (uVar2 != 0) {
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
            uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x3c)) >> 5;
          }
          else {
            uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x3c))();
          }
          if (uVar2 != 0) {
            if (*(undefined4 **)(param_1 + 0x40) == (undefined4 *)0x0) {
              uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x40)) >> 5;
            }
            else {
              uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x40))();
            }
            if (uVar2 != 0) {
              if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
                uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x48)) >> 5;
              }
              else {
                uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x48))();
              }
              if (uVar2 != 0) {
                if (*(undefined4 **)(param_1 + 0x44) == (undefined4 *)0x0) {
                  uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x44)) >> 5;
                }
                else {
                  uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x44))();
                }
                if (uVar2 != 0) {
                  if (*(int *)(param_1 + 0x4c) != 0) {
                    iVar1 = *(int *)(param_1 + 0x4c) * 4;
                    pbVar4 = *(byte **)(param_2 + 0x50);
                    pbVar6 = *(byte **)(param_1 + 0x50);
                    lVar3 = 0;
                    if (iVar1 != 0) {
                      pbVar5 = pbVar6 + iVar1;
                      do {
                        lVar3 = (ulonglong)*pbVar6 - (ulonglong)*pbVar4;
                        if (lVar3 != 0) break;
                        pbVar6 = pbVar6 + 1;
                        pbVar4 = pbVar4 + 1;
                      } while (pbVar6 != pbVar5);
                    }
                    if ((int)lVar3 != 0) {
                      return 0;
                    }
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

