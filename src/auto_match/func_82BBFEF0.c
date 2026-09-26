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


void fn_82BBFEF0(int param_1,code *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar11;
  ulonglong uVar10;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 4);
  uVar5 = 1;
  do {
    uVar5 = uVar5 * 3 + 1;
  } while (uVar5 < uVar6);
  uVar14 = (ulonglong)uVar5 / 3;
  iVar4 = (int)uVar14;
  do {
    if (iVar4 == 0) {
      return;
    }
    if (uVar14 < uVar6) {
      uVar3 = uVar14 & 0x3fffffff;
      lVar13 = 0;
      lVar12 = uVar3 * 4 + (ulonglong)uVar1;
      uVar8 = (ulonglong)uVar1;
      do {
        uVar2 = *(undefined4 *)lVar12;
        lVar9 = lVar13;
        if (-1 < (int)lVar13) {
          lVar7 = lVar12 + uVar3 * 4;
          uVar10 = uVar8;
          do {
            puVar11 = (undefined4 *)uVar10;
            iVar4 = (*param_2)(*puVar11,uVar2);
            if (iVar4 < 1) break;
            lVar7 = lVar7 + uVar3 * -4;
            lVar9 = lVar9 - uVar14;
            uVar10 = uVar10 + uVar3 * -4;
            *(undefined4 *)lVar7 = *puVar11;
          } while (-1 < lVar9);
        }
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 4;
        uVar8 = uVar8 + 4;
        *(undefined4 *)((int)((lVar9 + uVar14 & 0xffffffff) << 2) + uVar1) = uVar2;
        uVar6 = *(uint *)(param_1 + 4);
      } while ((lVar13 + uVar14 & 0xffffffff) < (ulonglong)uVar6);
    }
    uVar14 = uVar14 / 3;
    iVar4 = (int)uVar14;
  } while( true );
}

