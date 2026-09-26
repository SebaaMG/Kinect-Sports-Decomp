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
extern int fn_82F142B0();


undefined8 fn_82E94E58(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar4 = *(uint *)(param_1 + 0x2d8);
  iVar2 = uVar4 * 0x300;
  iVar10 = *(int *)(param_1 + 0xd54) + iVar2;
  iVar1 = uVar4 * 0xc;
  iVar5 = iVar10 + iVar2;
  *(int *)(param_1 + 0xd58) = iVar10;
  iVar10 = iVar5 + iVar2;
  *(int *)(param_1 + 0xd5c) = iVar5;
  iVar2 = iVar10 + iVar2;
  *(int *)(param_1 + 0xd60) = iVar10;
  iVar10 = iVar2 + iVar1;
  *(int *)(param_1 + 0xd64) = iVar2;
  iVar2 = iVar10 + iVar1;
  *(int *)(param_1 + 0xd68) = iVar10;
  *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x564) * 8 + -8;
  *(int *)(param_1 + 0xd6c) = iVar2;
  *(uint *)(param_1 + 0x4c04) = uVar4 >> 1;
  *(int *)(param_1 + 0xd70) = iVar2 + iVar1;
  *(uint *)(param_1 + 0xc24) = uVar4 * 0x600 + *(int *)(param_1 + 0xc20);
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar8 = (int *)(param_1 + 0x824);
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 1;
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xeb] = (int)(((longlong)(int)uVar4 * (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xec] = (int)(((longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xed] = (int)(((longlong)*(int *)(param_1 + 0x55c) * (longlong)(int)uVar4 & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xee] = (int)(((longlong)*(int *)(param_1 + 0x55c) * (longlong)(int)uVar6 & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xef] = (int)(((longlong)*(int *)(param_1 + 800) * (longlong)(int)uVar4 & 0xffffffffU)
                          / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xf0] = (int)(((longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 800) & 0xffffffffU)
                          / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xf1] = (int)(((longlong)(int)(uVar4 * *(int *)(param_1 + 0x564)) *
                            (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU) /
                          (ulonglong)*(uint *)(param_1 + 0x658)) + *(int *)(param_1 + 0x574);
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8 = piVar8 + 0xf2;
      *piVar8 = (int)(((longlong)(*(int *)(param_1 + 0x55c) * *(int *)(param_1 + 0x568)) *
                       (longlong)(int)uVar4 & 0xffffffffU) / (ulonglong)*(uint *)(param_1 + 0x658))
                + *(int *)(param_1 + 0x578);
      uVar4 = uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x658));
  }
  uVar9 = 0;
  iVar2 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a94) = *(int *)(iVar2 + 0x40) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a98) = *(int *)(iVar2 + 0x58) + *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x4a9c) = *(int *)(iVar2 + 0x70) + *(int *)(param_1 + 0x578);
  if (*(int *)(param_1 + 0x658) != 0) {
    do {
      iVar2 = (int)uVar9;
      if ((uVar9 & 0xffffffff) == 0) {
        *(undefined4 *)(param_1 + 0xc28) = 0;
        *(undefined4 *)(param_1 + 0xc30) = 0;
      }
      else {
        iVar10 = iVar2 * 0x3c8 + param_1;
        trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
        *(uint *)(iVar10 + 0xc28) = *(uint *)(param_1 + 0x2d4) / *(uint *)(param_1 + 0x658);
        *(undefined4 *)(iVar10 + 0xc30) = *(undefined4 *)(iVar10 + 0x86c);
      }
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x658);
      if ((uVar9 & 0xffffffff) == (uVar7 - 1 & 0xffffffff)) {
        iVar10 = iVar2 * 0x3c8 + param_1;
        *(undefined4 *)(iVar10 + 0xc2c) = *(undefined4 *)(param_1 + 0x2d4);
        *(undefined4 *)(iVar10 + 0xc34) = *(undefined4 *)(param_1 + 0x2d4);
        *(undefined4 *)(iVar10 + 0xe2c) = *(undefined4 *)(param_1 + 0x2d0);
      }
      else {
        iVar10 = iVar2 * 0x3c8 + param_1;
        trapWord(6,uVar7,0);
        uVar4 = (uint)(((longlong)(iVar2 + 1) * (longlong)*(int *)(param_1 + 0x2d4) & 0xffffffffU) /
                      uVar7);
        *(uint *)(iVar10 + 0xc2c) = uVar4;
        *(uint *)(iVar10 + 0xc34) = uVar4 & 0xfffffffe;
        trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
        *(int *)(iVar10 + 0xe2c) =
             (int)(((longlong)(iVar2 + 1) * (longlong)*(int *)(param_1 + 0x2d0) & 0xffffffffU) /
                  (ulonglong)*(uint *)(param_1 + 0x658));
      }
      iVar2 = *(int *)(iVar10 + 0xc28);
      *(int *)(iVar10 + 0xc38) = iVar2 << 4;
      *(int *)(iVar10 + 0xc3c) = iVar2 * *(int *)(param_1 + 0x2d0);
      *(int *)(iVar10 + 0xc40) = iVar2 * *(int *)(param_1 + 0x2d0);
      if ((uVar9 & 0xffffffff) != 0) {
        *(int *)(iVar10 + 0xd48) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x60 + *(int *)(param_1 + 0xd48);
        *(int *)(iVar10 + 0xd4c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xd4c);
        *(int *)(iVar10 + 0xd50) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd50);
        *(int *)(iVar10 + 0xd44) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xd44);
        *(int *)(iVar10 + 0xd54) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd54);
        *(int *)(iVar10 + 0xd58) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd58);
        *(int *)(iVar10 + 0xd5c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd5c);
        *(int *)(iVar10 + 0xd60) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd60);
        *(int *)(iVar10 + 0xc20) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xc20);
        *(int *)(iVar10 + 0xd64) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd64);
        *(int *)(iVar10 + 0xd68) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd68);
        *(int *)(iVar10 + 0xd6c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd6c);
        *(int *)(iVar10 + 0xd70) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd70);
        *(int *)(iVar10 + 0xc24) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x30 + *(int *)(param_1 + 0xc24);
      }
      iVar1 = *(int *)(iVar10 + 0xd84);
      iVar5 = *(int *)(param_1 + 0x57c) * iVar2;
      *(int *)(iVar10 + 0xd7c) = iVar5;
      *(int *)(iVar10 + 0xd80) = iVar2 * *(int *)(param_1 + 0x580);
      *(int *)(iVar10 + 0xd74) = iVar5 + *(int *)(param_1 + 0x310);
      *(undefined4 *)(iVar10 + 0xd8c) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar10 + 0xd90) = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(iVar10 + 0xd94) = *(undefined4 *)(iVar1 + 0x70);
      puVar3 = (undefined4 *)fn_82F142B0(*(undefined4 *)(iVar10 + 0xd88),0);
      *(undefined4 *)(iVar10 + 0xd98) = *puVar3;
      puVar3 = (undefined4 *)fn_82F142B0(*(undefined4 *)(iVar10 + 0xd88),1);
      *(undefined4 *)(iVar10 + 0xd9c) = *puVar3;
      puVar3 = (undefined4 *)fn_82F142B0(*(undefined4 *)(iVar10 + 0xd88),2);
      iVar2 = *(int *)(iVar10 + 0xda4);
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar10 + 0xda0) = *puVar3;
      *(undefined4 *)(iVar10 + 0xda8) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar10 + 0xdac) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar10 + 0xdb0) = *(undefined4 *)(iVar2 + 0x70);
    } while ((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x658));
  }
  return 0;
}

