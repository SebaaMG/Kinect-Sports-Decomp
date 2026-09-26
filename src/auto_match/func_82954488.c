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
extern int fn_82975B00();


undefined8 fn_82954488(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  bVar4 = false;
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar6;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar5);
      *(uint **)(param_1 + 0x104) = puVar1;
      uVar3 = *puVar1 & 0xfff00000;
      if (((*puVar1 & 0xfff00000) != 0) && (puVar1[1] != 0)) {
        iVar2 = *(int *)(*(int *)puVar1[2] * 4 + *(int *)(param_1 + 0x14));
        if (((uVar3 == 0x60500000) ||
            ((((uVar3 == 0x60700000 || (uVar3 == 0x60800000)) || (uVar3 == 0x60900000)) ||
             ((uVar3 == 0x60600000 || (uVar3 == 0x60000000)))))) ||
           ((uVar3 == 0x60200000 ||
            (((uVar3 == 0x60300000 || (uVar3 == 0x60400000)) || (uVar3 == 0x60100000)))))) {
          if ((*(uint *)(iVar2 + 0x3c) & 0xc00000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x200000;
        }
        else if ((((uVar3 == 0x60a00000) || (uVar3 == 0x60c00000)) || (uVar3 == 0x60d00000)) ||
                ((uVar3 == 0x60e00000 || (uVar3 == 0x60b00000)))) {
          if ((*(uint *)(iVar2 + 0x3c) & 0xa00000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x400000;
        }
        else {
          if (((uVar3 != 0x60f00000) && (uVar3 != 0x61100000)) &&
             ((uVar3 != 0x61200000 && ((uVar3 != 0x61300000 && (uVar3 != 0x61000000))))))
          goto LAB_82954624;
          if ((*(uint *)(iVar2 + 0x3c) & 0x600000) != 0) {
            bVar4 = true;
          }
          uVar7 = 0x800000;
        }
        *(undefined4 *)(iVar2 + 0x3c) = uVar7;
      }
LAB_82954624:
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(uint *)(param_1 + 0xc));
    if (bVar4) {
      fn_82975B00(param_1,0,0x11bb,0xffffffff82037bc8);
      return 0xffffffff80004005;
    }
  }
  return 0;
}

