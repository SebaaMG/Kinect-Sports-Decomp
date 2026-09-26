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


void fn_828C9008(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  iVar2 = (int)param_1;
  uVar1 = param_2 - iVar2 >> 3;
  uVar6 = (longlong)(param_2 - iVar2 >> 4) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (longlong)uVar6) {
    uVar4 = (uVar6 + 1 & 0x7fffffff) << 1;
    param_1 = (uVar6 & 0x1fffffff) * 8 + param_1;
    do {
      uVar4 = uVar4 - 2;
      param_1 = param_1 + -8;
      uVar5 = *(ulonglong *)param_1;
      uVar6 = uVar6 - 1;
      uVar11 = (uint)uVar4;
      uVar10 = uVar4;
      uVar8 = uVar6;
      while (uVar9 = uVar10, (int)uVar11 < (int)uVar1) {
        puVar7 = (ulonglong *)((int)((uVar9 & 0xffffffff) << 3) + iVar2);
        if (*puVar7 < puVar7[-1]) {
          uVar9 = uVar9 - 1;
        }
        uVar10 = (uVar9 + 1 & 0x7fffffff) << 1;
        *(undefined8 *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) =
             *(undefined8 *)((int)((uVar9 & 0xffffffff) << 3) + iVar2);
        uVar11 = (uint)uVar10;
        uVar8 = uVar9;
      }
      if (uVar11 == uVar1) {
        uVar10 = uVar8 & 0xffffffff;
        uVar8 = (longlong)(int)uVar1 - 1;
        *(undefined8 *)((int)(uVar10 << 3) + iVar2) = *(undefined8 *)(uVar1 * 8 + iVar2 + -8);
      }
      iVar3 = (int)uVar8;
      uVar11 = iVar3 - 1;
      uVar10 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
      while ((uVar9 = uVar10, (int)uVar6 < iVar3 &&
             (uVar10 = *(ulonglong *)((int)((uVar9 & 0xffffffff) << 3) + iVar2), uVar10 < uVar5))) {
        iVar3 = (int)uVar9;
        uVar11 = iVar3 - 1;
        *(ulonglong *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) = uVar10;
        uVar10 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar8 = uVar9;
      }
      *(ulonglong *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) = uVar5;
    } while (0 < (int)uVar6);
  }
  return;
}

