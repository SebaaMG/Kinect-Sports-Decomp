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


ulonglong fn_8227EBB0(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar5 = 0;
  uVar6 = 0xffffffffffffffff;
  if (uVar1 != 0xffffffff) {
    uVar6 = (ulonglong)*(uint *)(*(int *)(uVar1 * 4 + *(int *)(param_1 + 0xc)) + 0x18) - 1;
    uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & uVar6;
  }
  piVar9 = *(int **)(param_1 + 0xc);
  uVar7 = 0;
  uVar3 = 0xffffffffffffffff;
  if (piVar9 != *(int **)(param_1 + 0x10)) {
    do {
      uVar8 = (ulonglong)*(uint *)(*piVar9 + 0x6c);
      uVar4 = uVar3;
      if ((((~uVar8 & 0xffffffff) >> 1 & 1) != 0) && ((~uVar8 & 1) != 0)) {
        uVar2 = *(uint *)(*piVar9 + 0x18);
        uVar4 = uVar7;
        if ((ulonglong)uVar2 == (uVar6 & 0xffffffff)) break;
        uVar4 = uVar3;
        if ((uVar5 <= uVar2) && ((ulonglong)uVar2 < (uVar6 & 0xffffffff))) {
          uVar4 = uVar7;
          uVar5 = uVar2;
        }
      }
      piVar9 = piVar9 + 1;
      uVar7 = uVar7 + 1;
      uVar3 = uVar4;
    } while (piVar9 != *(int **)(param_1 + 0x10));
    if ((int)uVar4 != -1) {
      return uVar4;
    }
  }
  return (ulonglong)uVar1;
}

