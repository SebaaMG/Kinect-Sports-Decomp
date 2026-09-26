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
extern unsigned int lbl_8202C578;
extern unsigned int lbl_8202C57A;
extern unsigned int lbl_8202C57C;
extern unsigned int lbl_8202C57E;
extern unsigned int lbl_8202C580;
extern unsigned int lbl_8202C582;


ulonglong fn_828FC870(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar6 = &lbl_8202C580;
  pbVar9 = *(byte **)*param_1;
  pbVar5 = pbVar6;
  pbVar4 = pbVar9;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8202C582);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar7 = &lbl_8202C57C;
    pbVar5 = pbVar7;
    pbVar4 = pbVar9;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != &lbl_8202C57E);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar8 = &lbl_8202C578;
      pbVar5 = pbVar8;
      pbVar4 = pbVar9;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != &lbl_8202C57A);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar5 = *(byte **)*param_2;
        pbVar4 = pbVar5;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar6 != &lbl_8202C582);
        pbVar4 = pbVar5;
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar4;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar7 != &lbl_8202C57E);
          pbVar4 = pbVar5;
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar4;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar4 = pbVar4 + 1;
            } while (pbVar8 != &lbl_8202C57A);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
              pbVar4 = pbVar5 + 2;
              pbVar6 = pbVar9 + 2;
              do {
                uVar3 = (ulonglong)*pbVar6 - (ulonglong)*pbVar4;
                if (*pbVar6 == 0) break;
                pbVar6 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
              } while ((int)uVar3 == 0);
              if ((uVar3 & 0xffffffff) != 0) {
                return uVar3;
              }
              pbVar4 = pbVar9 + 2;
              do {
                if ((ulonglong)*pbVar9 - (ulonglong)*pbVar5 != 0) {
                  return (ulonglong)*pbVar9 - (ulonglong)*pbVar5;
                }
                pbVar9 = pbVar9 + 1;
                pbVar5 = pbVar5 + 1;
              } while (pbVar9 != pbVar4);
              return 0;
            }
          }
        }
      }
    }
  }
  pbVar5 = *(byte **)*param_2;
  do {
    uVar3 = (ulonglong)*pbVar9 - (ulonglong)*pbVar5;
    if (*pbVar9 == 0) {
      return uVar3;
    }
    pbVar9 = pbVar9 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((int)uVar3 == 0);
  return uVar3;
}

