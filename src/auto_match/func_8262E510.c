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


longlong fn_8262E510(int *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_1 != (int *)0x0) && (param_1[3] == 0)) {
    uVar5 = (ulonglong)(uint)param_1[1];
    uVar3 = ((ulonglong)*(uint *)(*param_1 + 4) * 6 + uVar5) - 6;
    uVar6 = (ulonglong)*(uint *)(*param_1 + 4);
    while ((uVar5 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar1 = (uVar6 & 0xffffffff) >> 1;
      if (uVar1 == 0) {
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = -(ulonglong)(param_2 == *(ushort *)uVar5) & uVar5;
          goto code_r0x8262e59c;
        }
        break;
      }
      uVar2 = uVar6 & 1;
      uVar6 = uVar1;
      if (uVar2 == 0) {
        uVar6 = uVar1 - 1;
      }
      uVar7 = uVar6 * 6 + uVar5;
      lVar4 = param_2 - *(ushort *)uVar7;
      if (lVar4 == 0) goto code_r0x8262e59c;
      uVar6 = uVar1;
      if ((int)lVar4 < 0) {
        uVar3 = uVar7 - 6;
        if (uVar2 == 0) {
          uVar6 = uVar1 - 1;
        }
      }
      else {
        uVar5 = uVar7 + 6;
      }
    }
    uVar7 = 0;
code_r0x8262e59c:
    if ((uVar7 & 0xffffffff) != 0) {
      return ((ulonglong)*(uint *)((int)uVar7 + 2) & 0x7fffffff) * 2 + (ulonglong)(uint)param_1[2];
    }
  }
  return -0x7de6f774;
}

