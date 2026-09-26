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
extern int fn_82EE0958();
extern int fn_82F63CA0();
extern unsigned int lbl_8318A10C;


longlong fn_82EE10E0(ulonglong param_1,ulonglong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = param_1;
  uVar8 = param_1 & 0xffffffff;
  while ((uVar8 != 0 && ((ulonglong)(*(int *)((int)uVar12 + 4) + 0x14) <= (param_2 & 0xffffffff))))
  {
    uVar12 = (ulonglong)*(uint *)((int)uVar12 + 0x208);
    uVar8 = uVar12;
  }
  lVar10 = 0;
  uVar8 = uVar12 & 0xffffffff;
  do {
    if (uVar8 == 0) {
      return lVar10;
    }
    iVar2 = (int)uVar12;
    uVar8 = (ulonglong)*(uint *)(iVar2 + 4);
    bVar7 = false;
    uVar11 = 0;
    if ((param_2 & 0xffffffff) < uVar8) {
      if (((*(byte *)(iVar2 + 0x24) & lbl_8318A10C) != 0) &&
         (lVar10 = fn_82EE0958(param_1,uVar8 - 1,*(undefined8 *)(iVar2 + 0x28),
                                     *(undefined8 *)(iVar2 + 0x30),*(undefined8 *)(iVar2 + 0x38)),
         lVar10 < 0)) {
        return lVar10;
      }
    }
    else {
      bVar7 = true;
      uVar11 = param_2 - uVar8;
    }
    lVar9 = uVar11 * 0x18 + uVar12;
    fn_82F63CA0(lVar9 + 0x28,lVar9 + 0x40,(0x13 - uVar11) * 0x18);
    uVar12 = (uVar11 & 0xffffffff) >> 3;
    iVar3 = (int)uVar12 + iVar2;
    bVar1 = *(byte *)(iVar3 + 0x24);
    if (uVar12 < 3) {
      lVar9 = 3 - uVar12;
      iVar4 = iVar2 + 0x24;
      do {
        iVar5 = (int)uVar12;
        bVar6 = *(char *)(iVar4 + iVar5) << 1;
        *(byte *)(iVar4 + iVar5) = bVar6;
        if (((uVar12 & 0xffffffff) < 2) && ((*(byte *)(iVar5 + iVar2 + 0x25) & 0x80) != 0)) {
          *(byte *)(iVar4 + iVar5) = bVar6 | 1;
        }
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((bVar7) && ((uVar11 & 7) != 0)) {
      iVar4 = (int)(uVar11 & 7);
      bVar6 = *(byte *)(-0x7ce75ee4 - iVar4) & *(byte *)(iVar3 + 0x24);
      *(byte *)(iVar3 + 0x24) = bVar6;
      *(byte *)(iVar3 + 0x24) = *(byte *)(iVar4 + -0x7ce75ee0) & bVar1 | bVar6;
    }
    uVar12 = (ulonglong)*(uint *)(iVar2 + 0x208);
    uVar8 = uVar12;
  } while( true );
}

