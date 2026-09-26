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
extern U64 storeWordConditionalIndexed();


void fn_8264C9D0(ulonglong param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char in_RESERVE;
  
  if (param_3 == 0) {
    param_3 = 0xffffffff;
  }
  do {
    puVar8 = param_2;
    for (uVar10 = (ulonglong)param_2[1]; uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar5 = puVar8 + 2;
      lVar6 = ((ulonglong)*puVar5 & 0x3fffffff) * 4;
      if ((*puVar5 & 0x3fffffff) != 0) {
        bVar1 = (puVar8[3] & param_3) == 0;
        if (!bVar1) {
          lVar7 = lVar6 + 8;
          do {
            puVar8 = (uint *)lVar7;
            uVar3 = *puVar8;
            uVar11 = (ulonglong)uVar3;
            uVar9 = param_1;
            if (uVar11 != 0) {
              if ((int)param_1 == 0) break;
              bVar1 = param_1 == uVar11;
              if ((longlong)(param_1 - uVar11) < 1) {
                uVar9 = uVar11;
              }
            }
            if ((uVar9 & 0xffffffff) == uVar11) break;
            do {
              uVar2 = *puVar8;
              if (uVar2 != uVar3) {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((ulonglong)uVar2,0,lVar7);
                  *puVar8 = uVar4;
                  bVar1 = true;
                }
                break;
              }
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed(uVar9,0,lVar7);
                *puVar8 = uVar4;
                bVar1 = true;
              }
            } while (!bVar1);
          } while (uVar3 != uVar2);
        }
        bVar1 = (*puVar5 & 0x40000000) == 0;
        if (!bVar1) {
          lVar6 = lVar6 + 0xc;
          do {
            puVar8 = (uint *)lVar6;
            uVar3 = *puVar8;
            uVar11 = (ulonglong)uVar3;
            uVar9 = param_1;
            if (uVar11 != 0) {
              if ((int)param_1 == 0) break;
              bVar1 = param_1 == uVar11;
              if ((longlong)(param_1 - uVar11) < 1) {
                uVar9 = uVar11;
              }
            }
            if ((uVar9 & 0xffffffff) == uVar11) break;
            do {
              uVar2 = *puVar8;
              if (uVar2 != uVar3) {
                if (in_RESERVE != '\0') {
                  uVar4 = storeWordConditionalIndexed((ulonglong)uVar2,0,lVar6);
                  *puVar8 = uVar4;
                  bVar1 = true;
                }
                break;
              }
              if (in_RESERVE != '\0') {
                uVar4 = storeWordConditionalIndexed(uVar9,0,lVar6);
                *puVar8 = uVar4;
                bVar1 = true;
              }
            } while (!bVar1);
          } while (uVar3 != uVar2);
        }
      }
      puVar8 = puVar5;
    }
    param_2 = (uint *)*param_2;
    if (param_2 == (uint *)0x0) {
      return;
    }
  } while( true );
}

