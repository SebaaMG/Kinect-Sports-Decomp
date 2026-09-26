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
extern int fn_82E3BBD0();
extern int fn_82F63CA0();
extern unsigned int lbl_831882E8;


longlong fn_82EE3360(ulonglong param_1,ulonglong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = param_1;
  uVar9 = param_1 & 0xffffffff;
  while ((uVar9 != 0 && ((ulonglong)(*(int *)((int)uVar12 + 4) + 0x14) <= (param_2 & 0xffffffff))))
  {
    uVar12 = (ulonglong)*(uint *)((int)uVar12 + 0x3c);
    uVar9 = uVar12;
  }
  lVar10 = 0;
  uVar9 = uVar12 & 0xffffffff;
  do {
    if (uVar9 == 0) {
      return lVar10;
    }
    iVar2 = (int)uVar12;
    uVar9 = (ulonglong)*(uint *)(iVar2 + 4);
    bVar7 = false;
    uVar11 = 0;
    if ((param_2 & 0xffffffff) < uVar9) {
      if (((*(byte *)(iVar2 + 0xe) & lbl_831882E8) != 0) &&
         (lVar10 = fn_82E3BBD0(param_1,uVar9 - 1,*(undefined2 *)(iVar2 + 0x12)), lVar10 < 0))
      {
        return lVar10;
      }
    }
    else {
      bVar7 = true;
      uVar11 = param_2 - uVar9;
    }
    fn_82F63CA0((uVar11 + 9 & 0x7fffffff) * 2 + uVar12,(uVar11 + 10 & 0x7fffffff) * 2 + uVar12,
                 (0x13 - uVar11 & 0x7fffffff) << 1);
    uVar12 = (uVar11 & 0xffffffff) >> 3;
    iVar3 = (int)uVar12 + iVar2;
    bVar1 = *(byte *)(iVar3 + 0xe);
    if (uVar12 < 3) {
      lVar8 = 3 - uVar12;
      iVar4 = iVar2 + 0xe;
      do {
        iVar5 = (int)uVar12;
        bVar6 = *(char *)(iVar4 + iVar5) << 1;
        *(byte *)(iVar4 + iVar5) = bVar6;
        if (((uVar12 & 0xffffffff) < 2) && ((*(byte *)(iVar5 + iVar2 + 0xf) & 0x80) != 0)) {
          *(byte *)(iVar4 + iVar5) = bVar6 | 1;
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((bVar7) && ((uVar11 & 7) != 0)) {
      iVar4 = (int)(uVar11 & 7);
      bVar6 = *(byte *)(-0x7ce75930 - iVar4) & *(byte *)(iVar3 + 0xe);
      *(byte *)(iVar3 + 0xe) = bVar6;
      *(byte *)(iVar3 + 0xe) = *(byte *)(iVar4 + -0x7ce7592c) & bVar1 | bVar6;
    }
    uVar12 = (ulonglong)*(uint *)(iVar2 + 0x3c);
    uVar9 = uVar12;
  } while( true );
}

