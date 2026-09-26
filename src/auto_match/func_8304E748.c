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
extern unsigned int lbl_8217DC98;
extern unsigned int lbl_8217DCB8;


undefined8 fn_8304E748(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    pbVar9 = (byte *)(param_1 + 2);
    do {
      uVar5 = (ulonglong)*pbVar9;
      param_3 = param_3 + -1;
      iVar6 = (int)*(short *)(pbVar9 + -2);
      pbVar4 = pbVar9 + 2;
      *param_2 = *(short *)(pbVar9 + -2);
      lVar10 = 0x1f;
      param_2 = param_2 + param_5;
      uVar3 = uVar5;
      do {
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)(uVar3 << 1)) * ((bVar2 & 7) * 2 + 1);
        iVar7 = ((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0);
        if ((bVar2 & 8) != 0) {
          iVar7 = -iVar7;
        }
        iVar7 = iVar7 + iVar6;
        if (((short)iVar7 != iVar7) && (bVar1 = -0x8001 < iVar7, iVar7 = -0x8000, bVar1)) {
          iVar7 = 0x7fff;
        }
        uVar5 = (longlong)*(short *)(&lbl_8217DC98 + (bVar2 & 0xf) * 2) + uVar5;
        if ((longlong)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0x58 < (int)uVar5) {
          uVar5 = 0x58;
        }
        *param_2 = (short)iVar7;
        uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)((uVar5 & 0xffffffff) << 1)) *
                ((bVar2 >> 3 & 0xe) + 1);
        iVar6 = ((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0);
        if ((bVar2 >> 4 & 8) != 0) {
          iVar6 = -iVar6;
        }
        iVar6 = iVar6 + iVar7;
        if (((short)iVar6 != iVar6) && (bVar1 = -0x8001 < iVar6, iVar6 = -0x8000, bVar1)) {
          iVar6 = 0x7fff;
        }
        uVar5 = (longlong)*(short *)(&lbl_8217DC98 + (uint)(bVar2 >> 4) * 2) + uVar5;
        if ((longlong)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0x58 < (int)uVar5) {
          uVar5 = 0x58;
        }
        param_2[param_5] = (short)iVar6;
        param_2 = param_2 + param_5 + param_5;
        uVar3 = uVar5 & 0x7fffffff;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)((uVar5 & 0xffffffff) << 1)) *
              ((*pbVar4 & 7) * 2 + 1);
      iVar7 = ((int)uVar8 >> 3) + (uint)((int)uVar8 < 0 && (uVar8 & 7) != 0);
      if ((*pbVar4 & 8) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = iVar7 + iVar6;
      if (((short)iVar7 != iVar7) && (bVar1 = -0x8001 < iVar7, iVar7 = -0x8000, bVar1)) {
        iVar7 = 0x7fff;
      }
      *param_2 = (short)iVar7;
      pbVar9 = pbVar9 + param_4;
      param_2 = param_2 + param_5;
    } while (param_3 != 0);
  }
  return 1;
}

