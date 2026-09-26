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


void fn_82675868(int *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar6 = *param_1 >> 1;
  uVar7 = (ulonglong)iVar6;
  iVar5 = *param_2 >> 1;
  if (iVar6 < 1) {
    uVar7 = 1;
  }
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if ((((int)((uVar7 & 0xffffffff) << 1) == *param_1) && (iVar5 << 1 == *param_2)) &&
     (iVar6 = 0, lVar4 = param_3, 0 < iVar5)) {
    do {
      lVar3 = (longlong)(iVar6 << 1) * (longlong)*param_1 + param_3;
      if (0 < (int)uVar7) {
        lVar2 = lVar4 + -1;
        uVar8 = uVar7;
        do {
          pbVar1 = (byte *)lVar3;
          lVar3 = lVar3 + 2;
          lVar2 = lVar2 + 1;
          *(undefined1 *)lVar2 =
               (char)((int)((uint)(pbVar1 + *param_1)[1] + (uint)pbVar1[1] + (uint)pbVar1[*param_1]
                           + (uint)*pbVar1) >> 2);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + uVar7;
    } while (iVar6 < iVar5);
  }
  *param_1 = (int)uVar7;
  *param_2 = iVar5;
  return;
}

