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


longlong fn_82526AF8(longlong param_1,int param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*param_3;
  if (uVar7 != 0) {
    param_1 = param_1 + -1;
    lVar3 = 0;
    if (-1 < param_1) {
      do {
        iVar1 = (int)lVar3 + (int)param_1 >> 1;
        lVar2 = (longlong)iVar1;
        pbVar6 = *(byte **)(iVar1 * 4 + param_2);
        uVar4 = (ulonglong)*pbVar6;
        uVar5 = uVar7;
        if (uVar4 == uVar7) {
          iVar1 = (int)param_3 - (int)pbVar6;
          do {
            pbVar6 = pbVar6 + 1;
            if (uVar4 == 0) {
              return lVar2;
            }
            uVar4 = (ulonglong)*pbVar6;
            uVar5 = (ulonglong)pbVar6[iVar1];
          } while (uVar4 == uVar5);
        }
        if ((longlong)(uVar4 - uVar5) < 0) {
          lVar3 = lVar2 + 1;
        }
        else {
          if ((int)(uVar4 - uVar5) < 1) {
            return lVar2;
          }
          param_1 = lVar2 + -1;
        }
      } while ((int)lVar3 <= (int)param_1);
    }
  }
  return -1;
}

