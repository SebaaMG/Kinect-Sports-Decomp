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
extern int fn_8264D6C0();


void fn_8264E388(int param_1,ulonglong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    uVar4 = (ulonglong)*(uint *)param_2;
    uVar9 = param_2 + 4;
    puVar8 = (uint *)uVar9;
    if ((uVar9 & 0xffffffff) < uVar4) {
      iVar5 = iVar2 + -1;
      lVar11 = param_2 + 0xc;
      do {
        puVar3 = (ushort *)lVar11;
        uVar6 = 0;
        piVar10 = (int *)uVar9;
        puVar8 = (uint *)(iVar5 * 0x10 + param_1 + 0xc);
        iVar7 = iVar5;
        do {
          uVar6 = uVar6 << 2;
          if ((((puVar8[-1] < (puVar3[-1] + 1) * 8) && ((uint)puVar3[-2] << 3 < puVar8[1])) &&
              (*puVar8 < (puVar3[1] + 1) * 8)) && ((uint)*puVar3 << 3 < puVar8[2])) {
            uVar6 = uVar6 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        uVar9 = uVar9 + 0x10;
        puVar8 = (uint *)uVar9;
        *(uint *)(*piVar10 + 8) = uVar6 | 0x80000000;
        lVar11 = lVar11 + 0x10;
      } while ((uVar9 & 0xffffffff) < uVar4);
    }
    uVar9 = (ulonglong)*puVar8;
    if (param_3 != 0) {
      fn_8264D6C0(param_2,uVar4,0);
    }
    param_2 = uVar9;
  } while ((param_2 & 0xffffffff) != 0xc0000000);
  return;
}

