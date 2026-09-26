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
extern int fn_825B47E8();
extern int fn_8280A620();
extern int fn_828114A8();


ulonglong fn_825B49E8(uint *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  param_1[6] = param_1[6] + 1;
  uVar4 = fn_8280A620(param_2);
  if (uVar4 < 0x1000) {
    uVar4 = 0x1000;
  }
  uVar7 = 0x1f - LZCOUNT(uVar4 >> 0xc);
  uVar5 = uVar7;
  if ((uVar7 & 0xffffffff) < (ulonglong)*param_1) {
    lVar6 = uVar7 * 0xc;
    do {
      if (*(int *)((int)lVar6 + param_1[7] + 4) != 0) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*param_1);
  }
  if ((uVar5 & 0xffffffff) < (ulonglong)*param_1) {
    lVar6 = uVar5 * 0xc;
    piVar2 = (int *)((int)lVar6 + param_1[7]);
    uVar3 = (ulonglong)(uint)piVar2[1];
    puVar1 = *(undefined4 **)(piVar2[1] + 4);
    piVar2[1] = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    *piVar2 = *piVar2 + -1;
    uVar10 = (ulonglong)(uint)(0x1000 << ((uint)uVar5 & 0x3f));
    uVar9 = (uVar3 - param_1[3] & 0xffffffff) / uVar10;
    if ((uVar7 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      lVar8 = uVar5 - uVar7;
      do {
        fn_828114A8(*(undefined4 *)((int)lVar6 + param_1[7] + 8),uVar9);
        uVar10 = uVar10 >> 1;
        uVar9 = (uVar9 & 0x7fffffff) << 1;
        fn_825B47E8(lVar6 + (ulonglong)param_1[7] + -0xc,uVar3 + uVar10);
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -0xc;
      } while (lVar8 != 0);
    }
    fn_828114A8(*(undefined4 *)((int)uVar7 * 0xc + param_1[7] + 8),uVar9);
    param_1[4] = param_1[4] + uVar4;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

