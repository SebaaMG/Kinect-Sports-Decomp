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


undefined8 fn_82968730(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar2 = false;
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
      if (*(int *)(iVar6 + 0x38) != -1) {
        iVar1 = *(int *)(*(int *)(iVar6 + 0x38) * 4 + *(int *)(param_1 + 0x14));
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
        *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
        uVar5 = *(uint *)(iVar1 + 0x54);
        if (uVar5 == 0xffffffff) {
          *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
          *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
          iVar6 = *(int *)(iVar6 + 0x5c);
        }
        else {
          if (*(uint *)(iVar6 + 0x54) <= uVar5) {
            uVar5 = *(uint *)(iVar6 + 0x54);
          }
          *(uint *)(iVar6 + 0x54) = uVar5;
          *(uint *)(iVar1 + 0x54) = uVar5;
          uVar5 = *(uint *)(iVar1 + 0x58);
          if (*(uint *)(iVar1 + 0x58) <= *(uint *)(iVar6 + 0x58)) {
            uVar5 = *(uint *)(iVar6 + 0x58);
          }
          *(uint *)(iVar6 + 0x58) = uVar5;
          *(uint *)(iVar1 + 0x58) = uVar5;
          iVar6 = *(int *)(iVar6 + 0x5c) + *(int *)(iVar1 + 0x5c);
        }
        *(int *)(iVar1 + 0x5c) = iVar6;
        bVar2 = true;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(param_1 + 8));
    if ((bVar2) && (uVar3 = 0, *(uint *)(param_1 + 8) != 0)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
        iVar6 = *(int *)(iVar1 + 0x38);
        if (iVar6 != -1) {
          *(undefined4 *)(iVar1 + 0x54) =
               *(undefined4 *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x54);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *(uint *)(param_1 + 8));
    }
  }
  return 0;
}

