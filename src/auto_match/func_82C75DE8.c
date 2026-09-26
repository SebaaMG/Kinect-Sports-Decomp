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


void fn_82C75DE8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  iVar6 = uVar1 * param_2;
  pbVar3 = (byte *)(*(int *)(param_1 + 0x3d68) + iVar6 * 2);
  pbVar11 = (byte *)(*(int *)(param_1 + 0x3d6c) + iVar6 * 2);
  pbVar8 = (byte *)(iVar6 * 6 + *(int *)(param_1 + 0xf84));
  if (param_2 < param_3) {
    pbVar9 = (byte *)(*(int *)(param_1 + 0x3d74) + iVar6 + -1);
    pbVar10 = (byte *)(*(int *)(param_1 + 0x3d70) + iVar6 + -1);
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar12 = (ulonglong)uVar1 - 1;
        uVar13 = (ulonglong)uVar1;
        do {
          bVar4 = (char)pbVar8[5] >> 2 & 0x30U | pbVar8[4] & 0xc0;
          bVar5 = (((pbVar8[2] & 0xfc) << 2 | pbVar8[3] & 0xf) & 0x3c) << 2;
          if (param_2 != *(int *)(param_1 + 0x8c) - 1U) {
            pbVar7 = pbVar8 + *(int *)(param_1 + 0x88) * 6;
            bVar5 = (byte)((int)(pbVar7[1] & 0xc) >> 2) | *pbVar7 & 0xc | bVar5;
            bVar4 = (byte)((int)(pbVar7[5] & 0xc) >> 2) | pbVar7[4] & 0xc | bVar4;
          }
          *pbVar3 = *pbVar8 & 0xc0 |
                    (char)pbVar8[2] >> 4 & 0xcU |
                    (char)pbVar8[3] >> 6 & 3U | (char)pbVar8[1] >> 2 & 0x30U;
          pbVar3[1] = bVar5;
          pbVar10 = pbVar10 + 1;
          *pbVar10 = bVar4;
          pbVar3 = pbVar3 + 2;
          bVar5 = ((pbVar8[1] & 3) << 2 | pbVar8[3] & 3) << 4;
          if ((uVar2 & 0xffffffff) < (uVar12 & 0xffffffff)) {
            bVar5 = (pbVar8[6] & 3) << 2 | pbVar8[8] & 3 | bVar5;
          }
          bVar4 = (pbVar8[4] & 0xf0) << 2 | pbVar8[5] & 0x30;
          if ((uVar2 & 0xffffffff) < (uVar12 & 0xffffffff)) {
            bVar4 = (pbVar8[10] & 3) << 2 | pbVar8[0xb] & 3 | bVar4;
          }
          *pbVar11 = (char)((byte)((int)(pbVar8[3] & 0x30) >> 2) | pbVar8[1] & 0x30) >> 2 |
                     (*pbVar8 & 0x30) << 2 | pbVar8[2] & 0x30;
          pbVar8 = pbVar8 + 6;
          pbVar11[1] = bVar5;
          uVar2 = uVar2 + 1;
          pbVar9 = pbVar9 + 1;
          *pbVar9 = bVar4;
          pbVar11 = pbVar11 + 2;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

