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


void fn_829AFB90(uint *param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  uVar8 = (ulonglong)*param_1;
  if (((bVar1 < 9) && (param_3 != 0)) || ((bVar1 == 0x10 && (param_4 != 0)))) {
    cVar2 = *(char *)(param_1 + 2);
    if (cVar2 == '\0') {
      if ((bVar1 == 2) && (uVar8 != 0)) {
        pbVar7 = param_2 + -1;
        lVar5 = ((uVar8 - 1 & 0xffffffff) >> 2) + 1;
        do {
          bVar1 = pbVar7[1];
          uVar6 = (ulonglong)bVar1;
          uVar4 = uVar6 & 3;
          uVar10 = bVar1 & 0x30;
          uVar11 = (uint)(uVar6 & 0xc);
          uVar9 = bVar1 & 0xffffffc0;
          pbVar7 = pbVar7 + 1;
          *pbVar7 = (byte)((((ulonglong)
                             *(byte *)(((uint)(((uVar6 & 0xc) << 2 | uVar6 & 0xc) << 2) |
                                        (int)uVar11 >> 2 | uVar11) + param_3) & 0xcf |
                            (ulonglong)
                            (*(byte *)(((uint)((((uVar6 & 3) << 2 | uVar4) << 2 | uVar4) << 2) |
                                       (uint)uVar4) + param_3) >> 2)) >> 2 |
                           (ulonglong)
                           *(byte *)(((int)((int)uVar10 >> 2 | uVar10) >> 2 | (bVar1 & 0x30) << 2 |
                                     uVar10) + param_3) & 0xc3) >> 2) |
                    *(byte *)(((int)((int)((int)uVar9 >> 2 | uVar9) >> 2 | uVar9) >> 2 | uVar9) +
                             param_3) & 0xc0;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (uVar8 != 0) {
          param_2 = param_2 + -1;
          lVar5 = ((uVar8 - 1 & 0xffffffff) >> 1) + 1;
          do {
            bVar1 = param_2[1];
            param_2 = param_2 + 1;
            *param_2 = *(byte *)(((bVar1 & 0xf) << 4 | bVar1 & 0xf) + param_3) >> 4 |
                       *(byte *)(((int)(uint)bVar1 >> 4 | bVar1 & 0xfffffff0) + param_3) & 0xf0;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
      else if (cVar2 == '\b') {
        if (uVar8 != 0) {
          param_2 = param_2 + -1;
          do {
            pbVar7 = param_2 + 1;
            param_2 = param_2 + 1;
            *param_2 = *(byte *)((uint)*pbVar7 + param_3);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else if ((cVar2 == '\x10') && (uVar8 != 0)) {
        param_2 = param_2 + -1;
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[2] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[1] * 2);
          param_2[1] = (byte)((ushort)uVar3 >> 8);
          param_2 = param_2 + 2;
          *param_2 = (byte)uVar3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (cVar2 == '\x02') {
      if (bVar1 == 8) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *param_2 = *(byte *)((uint)*param_2 + param_3);
          param_2[1] = *(byte *)((uint)param_2[1] + param_3);
          param_2[2] = *(byte *)((uint)param_2[2] + param_3);
          param_2 = param_2 + 3;
        }
      }
      else {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[1] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[3] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[2] * 2);
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          param_2[3] = (byte)uVar3;
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[5] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 6;
        }
      }
    }
    else if (cVar2 == '\x04') {
      if (bVar1 == 8) {
        if (uVar8 != 0) {
          param_2 = param_2 + -2;
          do {
            pbVar7 = param_2 + 2;
            param_2 = param_2 + 2;
            *param_2 = *(byte *)((uint)*pbVar7 + param_3);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else if (uVar8 != 0) {
        param_2 = param_2 + -3;
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[4] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[3] * 2);
          param_2[3] = (byte)((ushort)uVar3 >> 8);
          param_2 = param_2 + 4;
          *param_2 = (byte)uVar3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (cVar2 == '\x06') {
      if (bVar1 == 8) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *param_2 = *(byte *)((uint)*param_2 + param_3);
          param_2[1] = *(byte *)((uint)param_2[1] + param_3);
          param_2[2] = *(byte *)((uint)param_2[2] + param_3);
          param_2 = param_2 + 4;
        }
      }
      else {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[1] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[3] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[2] * 2);
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          param_2[3] = (byte)uVar3;
          uVar3 = *(undefined2 *)
                   (*(int *)((uint)(param_2[5] >> (param_5 & 0x3f)) * 4 + param_4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 8;
        }
      }
    }
  }
  return;
}

