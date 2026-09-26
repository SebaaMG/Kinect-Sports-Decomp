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


ulonglong fn_8227EC78(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar4 = 0;
  uVar3 = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    uVar4 = *(int *)(*(int *)(uVar1 * 4 + *(int *)(param_1 + 0xc)) + 0x18) + 1;
  }
  piVar7 = *(int **)(param_1 + 0xc);
  uVar5 = 0;
  uVar8 = 0xffffffffffffffff;
  if (piVar7 != *(int **)(param_1 + 0x10)) {
    do {
      uVar6 = (ulonglong)*(uint *)(*piVar7 + 0x6c);
      uVar9 = uVar8;
      if ((((~uVar6 & 0xffffffff) >> 1 & 1) != 0) && ((~uVar6 & 1) != 0)) {
        uVar2 = *(uint *)(*piVar7 + 0x18);
        uVar9 = uVar5;
        if (uVar2 == uVar4) break;
        uVar9 = uVar8;
        if ((uVar2 < uVar3) && (uVar4 < uVar2)) {
          uVar9 = uVar5;
          uVar3 = uVar2;
        }
      }
      piVar7 = piVar7 + 1;
      uVar5 = uVar5 + 1;
      uVar8 = uVar9;
    } while (piVar7 != *(int **)(param_1 + 0x10));
    if ((int)uVar9 != -1) {
      return uVar9;
    }
  }
  return (ulonglong)uVar1;
}

