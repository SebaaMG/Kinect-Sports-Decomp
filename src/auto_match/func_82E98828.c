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
extern int fn_82E871A0();
extern int fn_82E94E58();
extern int fn_82E953A0();


undefined8 fn_82E98828(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  *(int *)(param_1 + 0x31c) = param_2;
  *(int *)(param_1 + 800) = param_3;
  *(int *)(param_1 + 0x324) = param_2 * param_3;
  *(int *)(param_1 + 0x1f3c) = (int)(((param_3 + -1) * 2 & 0x10U) + (param_2 - 1U & 8) ^ 0x18) >> 3;
  fn_82E953A0();
  iVar9 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    do {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        iVar7 = iVar9 * 0x114;
        do {
          lVar4 = LZCOUNT(uVar8);
          iVar9 = iVar9 + 1;
          bVar2 = *(int *)(param_1 + 0x2d0) - 1U == uVar8;
          iVar1 = iVar7 + *(int *)(param_1 + 0x1e54);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 0x114;
          *(uint *)(iVar1 + 0x78) =
               (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x2d4) + -1) - uVar5) >> 4 & 2 |
                       (ulonglong)bVar2) << 1 | (ulonglong)(uVar5 == 0)) << 1) | (uint)lVar4 >> 5;
        } while (uVar8 < *(uint *)(param_1 + 0x2d0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x1ad0) != 0) {
    iVar9 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          iVar7 = iVar9 * 0x114;
          do {
            lVar4 = LZCOUNT(uVar8);
            iVar9 = iVar9 + 1;
            bVar2 = *(int *)(param_1 + 0x2d0) - 1U == uVar8;
            uVar8 = uVar8 + 1;
            uVar6 = (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x2d4) + -1) - uVar5) >> 4 & 2 |
                            (ulonglong)bVar2) << 1 | (ulonglong)(uVar5 == 0)) << 1) |
                    (uint)lVar4 >> 5;
            *(uint *)(iVar7 + *(int *)(param_1 + 0x1e6c) + 0x78) = uVar6;
            *(uint *)(iVar7 + *(int *)(param_1 + 0x1e70) + 0x78) = uVar6;
            iVar7 = iVar7 + 0x114;
          } while (uVar8 < *(uint *)(param_1 + 0x2d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x2d4));
    }
  }
  if (*(int *)(param_1 + 0x920) != 0) {
    uVar5 = *(uint *)(param_1 + 0x31c) & 0xf;
    if (uVar5 == 0) {
      iVar9 = *(int *)(param_1 + 0x2d0);
    }
    else if (uVar5 < 4) {
      iVar9 = *(int *)(param_1 + 0x2d0) + -2;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2d0) + -1;
    }
    *(int *)(param_1 + 0x1ba0) = iVar9;
    uVar5 = *(uint *)(param_1 + 800) & 0xf;
    if (uVar5 == 0) {
      iVar9 = *(int *)(param_1 + 0x2d4);
    }
    else if (uVar5 < 4) {
      iVar9 = *(int *)(param_1 + 0x2d4) + -2;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2d4) + -1;
    }
    *(int *)(param_1 + 0x1ba4) = iVar9;
  }
  uVar10 = 2;
  if (*(uint *)(param_1 + 0x2d0) < 0xc) {
    uVar10 = 1;
  }
  *(undefined4 *)(param_1 + 0x1c24) = uVar10;
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
  *(int *)(param_1 + 0x6df8) = (*(int *)(param_1 + 0x550) + 0x1f >> 4) + 2;
  *(int *)(param_1 + 0x8f4) = (*(int *)(param_1 + 0x550) >> 4) + 1;
  *(uint *)(param_1 + 0x4bfc) = *(uint *)(param_1 + 0x2d0) * 0x300;
  uVar3 = fn_82E94E58(param_1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0xb7c);
    *(undefined4 *)(param_1 + 0xb70) = 0;
    *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_1 + 0xc28);
    *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_1 + 0xc2c);
    *(undefined4 *)(param_1 + 0xf34) = *(undefined4 *)(param_1 + 0xf44);
    *(undefined4 *)(param_1 + 0xf38) = 0;
    *(undefined4 *)(param_1 + 0xf3c) = *(undefined4 *)(param_1 + 0xff0);
    *(undefined4 *)(param_1 + 0xf40) = *(undefined4 *)(param_1 + 0xff4);
    *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_1 + 0x130c);
    *(undefined4 *)(param_1 + 0x1300) = 0;
    *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0x13b8);
    *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0x13bc);
    *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x16d4);
    *(undefined4 *)(param_1 + 0x16c8) = 0;
    *(undefined4 *)(param_1 + 0x16cc) = *(undefined4 *)(param_1 + 0x1780);
    *(undefined4 *)(param_1 + 0x16d0) = *(undefined4 *)(param_1 + 0x1784);
  }
  else {
    fn_82E871A0(param_1);
  }
  return uVar3;
}

