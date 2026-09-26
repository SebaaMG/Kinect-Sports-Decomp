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
extern int fn_82A83B30();


bool fn_82A83B90(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  pbVar3 = (byte *)*param_1;
  pbVar10 = (byte *)*param_2;
  if (pbVar3 == pbVar10) {
    bVar6 = true;
  }
  else {
    pbVar13 = pbVar3;
    pbVar11 = pbVar10;
    do {
      bVar1 = *pbVar13;
      bVar2 = *pbVar11;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar13 = pbVar13 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar13 != pbVar3 + 0x160);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      pbVar11 = pbVar3 + 0x300;
      pbVar13 = pbVar10 + 0x300;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar13;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar11 != pbVar3 + 0x380);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        uVar4 = fn_82A83B30(param_2);
        uVar5 = fn_82A83B30(param_1);
        if (uVar4 == uVar5) {
          uVar5 = 0;
          if (uVar4 != 0) {
            pbVar13 = pbVar10 + 0x160;
            do {
              uVar7 = 0;
              iVar9 = 0x160;
              do {
                pbVar12 = pbVar3 + iVar9;
                pbVar8 = pbVar12 + 0x20;
                pbVar11 = pbVar13;
                do {
                  bVar1 = *pbVar12;
                  bVar2 = *pbVar11;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar12 = pbVar12 + 1;
                  pbVar11 = pbVar11 + 1;
                } while (pbVar12 != pbVar8);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) break;
                uVar7 = uVar7 + 1;
                iVar9 = iVar9 + 0x20;
              } while (uVar7 < uVar4);
              if (uVar7 == uVar4) goto LAB_82a83bec;
              uVar5 = uVar5 + 1;
              pbVar13 = pbVar13 + 0x20;
            } while (uVar5 < uVar4);
          }
          pbVar11 = pbVar3 + 0x380;
          pbVar13 = pbVar10 + 0x380;
          do {
            bVar1 = *pbVar11;
            bVar2 = *pbVar13;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar11 = pbVar11 + 1;
            pbVar13 = pbVar13 + 1;
          } while (pbVar11 != pbVar3 + 0x388);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            pbVar13 = pbVar3 + 0x388;
            pbVar10 = pbVar10 + 0x388;
            do {
              bVar1 = *pbVar13;
              bVar2 = *pbVar10;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar13 = pbVar13 + 1;
              pbVar10 = pbVar10 + 1;
            } while (pbVar13 != pbVar3 + 0x38d);
            return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
          }
        }
      }
    }
LAB_82a83bec:
    bVar6 = false;
  }
  return bVar6;
}

