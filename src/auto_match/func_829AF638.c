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
extern unsigned int *auStack_20;


void fn_829AF638(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint auStack_20 [4];
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 != 3) {
    iVar4 = *param_1;
    bVar7 = false;
    if ((bVar1 & 2) == 0) {
      uVar11 = 1;
      auStack_20[0] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
    }
    else {
      bVar2 = *(byte *)((int)param_1 + 9);
      uVar11 = 3;
      auStack_20[0] = (uint)bVar2 - (uint)*param_3;
      auStack_20[1] = (uint)bVar2 - (uint)param_3[1];
      auStack_20[2] = (uint)bVar2 - (uint)param_3[2];
    }
    if ((bVar1 & 4) != 0) {
      lVar8 = uVar11 << 2;
      uVar11 = uVar11 + 1;
      *(uint *)((int)auStack_20 + (int)lVar8) = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4]
      ;
    }
    iVar12 = (int)uVar11;
    if (iVar12 != 0) {
      puVar10 = auStack_20;
      uVar13 = uVar11;
      do {
        if ((int)*puVar10 < 1) {
          *puVar10 = 0;
        }
        else {
          bVar7 = true;
        }
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (bVar7) {
      cVar3 = *(char *)((int)param_1 + 9);
      if (cVar3 == '\x02') {
        uVar11 = (ulonglong)(uint)param_1[1];
        if (uVar11 != 0) {
          param_2 = param_2 + -1;
          do {
            pbVar6 = param_2 + 1;
            param_2 = param_2 + 1;
            *param_2 = *pbVar6 >> 1 & 0x55;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else if (cVar3 == '\x04') {
        uVar11 = (ulonglong)(uint)param_1[1];
        if (uVar11 != 0) {
          param_2 = param_2 + -1;
          do {
            pbVar6 = param_2 + 1;
            param_2 = param_2 + 1;
            *param_2 = *pbVar6 >> (auStack_20[0] & 0x3f) &
                       ((byte)(0xf0 >> (auStack_20[0] & 0x3f)) & 0xf0 |
                       (byte)(0xf >> (auStack_20[0] & 0x3f)));
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else if (cVar3 == '\b') {
        lVar8 = (longlong)iVar4 * (longlong)iVar12;
        uVar13 = 0;
        if (lVar8 != 0) {
          param_2 = param_2 + -1;
          do {
            pbVar6 = param_2 + 1;
            uVar9 = uVar13 - (longlong)(int)((uVar13 & 0xffffffff) / uVar11) * (longlong)iVar12;
            trapWord(6,uVar11,0);
            uVar13 = uVar13 + 1;
            param_2 = param_2 + 1;
            *param_2 = *pbVar6 >>
                       (*(uint *)((int)auStack_20 + (int)((uVar9 & 0xffffffff) << 2)) & 0x3f);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else if (cVar3 == '\x10') {
        uVar13 = 0;
        for (lVar8 = (longlong)iVar4 * (longlong)iVar12; lVar8 != 0; lVar8 = lVar8 + -1) {
          uVar9 = uVar13 - (longlong)(int)((uVar13 & 0xffffffff) / uVar11) * (longlong)iVar12;
          trapWord(6,uVar11,0);
          uVar13 = uVar13 + 1;
          uVar5 = (uint)*param_2 * 0x100 + (uint)param_2[1] >>
                  (*(uint *)((int)auStack_20 + (int)((uVar9 & 0xffffffff) << 2)) & 0x3f);
          *param_2 = (byte)(uVar5 >> 8);
          param_2[1] = (byte)uVar5;
          param_2 = param_2 + 2;
        }
      }
    }
  }
  return;
}

