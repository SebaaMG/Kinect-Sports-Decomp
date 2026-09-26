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
extern int iRam8315d820;
extern unsigned int uRam8315d810;
extern unsigned int uRam8315d814;
extern unsigned int uRam8315d818;
extern unsigned int uRam8315d81c;
extern unsigned int uRam8315d824;
extern unsigned int uRam8315d828;
extern unsigned int uRam8315d82c;


longlong fn_82A35C88(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  pbVar6 = param_1;
  if (param_2 == -1) {
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    param_2 = (int)pbVar6 - (int)param_1;
  }
  lVar4 = 0;
  if (0 < param_2) {
    iVar9 = 0;
    psVar5 = (short *)(param_3 + -2);
    lVar3 = 0;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      iVar7 = 0;
      uVar2 = (int)*(char *)(bVar1 + 0x8315d848) & 0xffff;
      lVar4 = lVar3;
      if (param_2 < (int)(pbVar6 + (uVar2 - (int)param_1))) break;
      if (uVar2 == 0) {
LAB_82a35db0:
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        iVar9 = iVar9 + 1;
        iVar7 = (uint)bVar1 + iVar7;
      }
      else {
        if (uVar2 == 1) {
LAB_82a35d9c:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = ((uint)bVar1 + iVar7) * 0x40;
          goto LAB_82a35db0;
        }
        if (uVar2 < 3) {
LAB_82a35d88:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = ((uint)bVar1 + iVar7) * 0x40;
          goto LAB_82a35d9c;
        }
        if (uVar2 == 3) {
LAB_82a35d74:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = ((uint)bVar1 + iVar7) * 0x40;
          goto LAB_82a35d88;
        }
        if (uVar2 < 5) {
LAB_82a35d60:
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = ((uint)bVar1 + iVar7) * 0x40;
          goto LAB_82a35d74;
        }
        if (uVar2 == 5) {
          pbVar6 = pbVar6 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = (uint)bVar1 << 6;
          goto LAB_82a35d60;
        }
      }
      uVar8 = iVar7 - *(int *)(uVar2 * 4 + -0x7cea27d0);
      uVar2 = uVar8;
      if ((uRam8315d814 < uVar8) && (uVar2 = uRam8315d810, uVar8 <= uRam8315d818)) {
        uVar8 = uVar8 - iRam8315d820;
        if ((int)lVar3 + 1 <= param_4) {
          psVar5[1] = (short)(uVar8 >> (uRam8315d81c & 0x3f)) + (short)uRam8315d828;
          psVar5 = psVar5 + 1;
        }
        lVar4 = lVar3 + 2;
        if ((int)lVar4 <= param_4) {
          psVar5 = psVar5 + 1;
          *psVar5 = ((ushort)uRam8315d824 & (ushort)uVar8) + (short)uRam8315d82c;
        }
      }
      else {
        lVar4 = lVar3 + 1;
        if ((int)lVar3 + 1 <= param_4) {
          lVar4 = lVar3 + 1;
          psVar5[1] = (short)uVar2;
          psVar5 = psVar5 + 1;
        }
      }
      lVar3 = lVar4;
    } while (iVar9 < param_2);
  }
  if ((param_4 != 0) && (param_4 < (int)lVar4)) {
    thunk_FUN_82a2b748(0x7a);
    lVar4 = 0;
  }
  return lVar4;
}

