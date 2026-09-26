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
extern unsigned int lbl_82017F00;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827CE6E8(int param_1,int param_2,int param_3,short *param_4,int param_5,int param_6,
                  ulonglong param_7)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  float afStack_140 [80];
  
  pcVar2 = *(code **)(*(int *)(param_1 + 0x158) + 0x1c);
  iVar3 = *(int *)((*(int *)(param_2 + 0x10) + 8) * 4 + *(int *)(param_1 + 0x158));
  if ((param_7 & 0xffffffff) != 0) {
    dVar9 = (double)lbl_82017F00;
    do {
      pfVar7 = afStack_140;
      piVar5 = (int *)(param_5 * 4 + param_3 + -4);
      lVar8 = 8;
      do {
        piVar5 = piVar5 + 1;
        iVar6 = *piVar5 + param_6;
        *pfVar7 = (float)(longlong)(int)(*(byte *)(*piVar5 + param_6) - 0x80);
        pfVar7[1] = (float)(longlong)(int)(*(byte *)(iVar6 + 1) - 0x80);
        pfVar7[2] = (float)(longlong)(int)(*(byte *)(iVar6 + 2) - 0x80);
        pfVar7[3] = (float)(longlong)(int)(*(byte *)(iVar6 + 3) - 0x80);
        pfVar7[4] = (float)(longlong)(int)(*(byte *)(iVar6 + 4) - 0x80);
        pfVar7[5] = (float)(longlong)(int)(*(byte *)(iVar6 + 5) - 0x80);
        pfVar7[6] = (float)(longlong)(int)(*(byte *)(iVar6 + 6) - 0x80);
        pfVar7[7] = (float)(longlong)(int)(*(byte *)(iVar6 + 7) - 0x80);
        pfVar7 = pfVar7 + 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      (*pcVar2)(afStack_140);
      pfVar7 = afStack_140;
      lVar8 = 0x40;
      do {
        pfVar4 = (float *)((iVar3 - (int)afStack_140) + (int)pfVar7);
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        *param_4 = (short)(int)((double)(*pfVar4 * fVar1) + dVar9) + -0x4000;
        param_4 = param_4 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      param_7 = param_7 - 1;
      param_6 = param_6 + 8;
    } while (param_7 != 0);
  }
  return;
}

