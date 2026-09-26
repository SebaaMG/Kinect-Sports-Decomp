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
extern int fn_82C4E3B0();


longlong fn_830D8C00(longlong *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar9 + -10;
  *param_1 = *param_1 << 10;
  if (iVar9 < 10) {
    do {
      pbVar8 = *(byte **)((int)param_1 + 0xc);
      if (pbVar8 < (byte *)(*(int *)(param_1 + 2) - 4U)) {
        bVar1 = *pbVar8;
        bVar2 = pbVar8[1];
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        bVar5 = pbVar8[4];
        bVar6 = pbVar8[5];
        iVar9 = *(int *)(param_1 + 1);
        *(byte **)((int)param_1 + 0xc) = pbVar8 + 6;
        *(int *)(param_1 + 1) = iVar9 + 0x30;
        *param_1 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) *
                      0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                    (ulonglong)bVar6 << ((longlong)-iVar9 & 0x7fU)) + *param_1;
        break;
      }
      iVar9 = fn_82C4E3B0(param_1);
    } while (iVar9 == 1);
  }
  do {
    iVar9 = *(int *)(param_1 + 1);
    lVar10 = *param_1;
    *(int *)(param_1 + 1) = iVar9 + -1;
    *param_1 = lVar10 << 1;
    if (iVar9 < 1) {
      do {
        pbVar8 = *(byte **)((int)param_1 + 0xc);
        if (pbVar8 < (byte *)(*(int *)(param_1 + 2) - 4U)) {
          bVar1 = *pbVar8;
          bVar2 = pbVar8[1];
          bVar3 = pbVar8[2];
          bVar4 = pbVar8[3];
          bVar5 = pbVar8[4];
          bVar6 = pbVar8[5];
          iVar9 = *(int *)(param_1 + 1);
          *(byte **)((int)param_1 + 0xc) = pbVar8 + 6;
          *(int *)(param_1 + 1) = iVar9 + 0x30;
          *param_1 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) *
                        0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                      (ulonglong)bVar6 << ((longlong)-iVar9 & 0x7fU)) + *param_1;
          break;
        }
        iVar9 = fn_82C4E3B0(param_1);
      } while (iVar9 == 1);
    }
    sVar7 = *(short *)((int)(((param_4 - (lVar10 >> 0x3f)) + 0x8000U & 0xffffffff) << 1) + param_3);
    param_4 = (longlong)sVar7;
    if (-1 < sVar7) {
      return param_4;
    }
  } while( true );
}

