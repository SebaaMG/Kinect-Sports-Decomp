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
extern int fn_82F68B78();


void fn_8228F800(int param_1,byte *param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  uVar1 = (ulonglong)*param_2;
  uVar4 = 0x6f;
  uVar5 = uVar1;
  if (uVar1 == 0x6f) {
    uVar5 = 0x6f;
    pbVar3 = param_2;
    do {
      pbVar3 = pbVar3 + 1;
      if (uVar5 == 0) goto code_r0x8228f850;
      param_4 = (ulonglong)pbVar3[(int)"onFullIntro" - (int)param_2];
      uVar5 = (ulonglong)*pbVar3;
      uVar4 = param_4;
    } while (uVar5 == param_4);
  }
  if (uVar5 == uVar4) {
code_r0x8228f850:
    uVar6 = 3;
  }
  else {
    uVar4 = 0x6f;
    uVar5 = uVar1;
    if (uVar1 == 0x6f) {
      uVar5 = 0x6f;
      pbVar3 = param_2;
      do {
        pbVar3 = pbVar3 + 1;
        if (uVar5 == 0) goto code_r0x8228f8a4;
        param_4 = (ulonglong)pbVar3[(int)"onFinishedIntro" - (int)param_2];
        uVar5 = (ulonglong)*pbVar3;
        uVar4 = param_4;
      } while (uVar5 == param_4);
    }
    if (uVar5 == uVar4) {
code_r0x8228f8a4:
      uVar6 = 5;
    }
    else {
      uVar4 = 0x6f;
      uVar5 = uVar1;
      if (uVar1 == 0x6f) {
        uVar5 = 0x6f;
        pbVar3 = param_2;
        do {
          pbVar3 = pbVar3 + 1;
          if (uVar5 == 0) goto code_r0x8228f8f8;
          param_4 = (ulonglong)pbVar3[(int)"onFinishedVideo" - (int)param_2];
          uVar5 = (ulonglong)*pbVar3;
          uVar4 = param_4;
        } while (uVar5 == param_4);
      }
      if (uVar5 == uVar4) {
code_r0x8228f8f8:
        *(undefined4 *)(param_1 + 0x84) = 1;
        return;
      }
      uVar4 = 0x6f;
      uVar5 = uVar1;
      if (uVar1 == 0x6f) {
        uVar5 = 0x6f;
        pbVar3 = param_2;
        do {
          pbVar3 = pbVar3 + 1;
          if (uVar5 == 0) goto code_r0x8228f950;
          param_4 = (ulonglong)pbVar3[(int)"onFullOuttro" - (int)param_2];
          uVar5 = (ulonglong)*pbVar3;
          uVar4 = param_4;
        } while (uVar5 == param_4);
      }
      if (uVar5 == uVar4) {
code_r0x8228f950:
        uVar6 = 7;
      }
      else {
        uVar4 = 0x6f;
        uVar5 = uVar1;
        if (uVar1 == 0x6f) {
          uVar5 = 0x6f;
          pbVar3 = param_2;
          do {
            pbVar3 = pbVar3 + 1;
            if (uVar5 == 0) goto code_r0x8228f9a4;
            param_4 = (ulonglong)pbVar3[(int)"onFinishedOuttro" - (int)param_2];
            uVar5 = (ulonglong)*pbVar3;
            uVar4 = param_4;
          } while (uVar5 == param_4);
        }
        if (uVar5 != uVar4) {
          uVar4 = 0x74;
          uVar5 = uVar1;
          if (uVar1 == 0x74) {
            iVar2 = (int)"triggerAudioCue" - (int)param_2;
            uVar5 = 0x74;
            do {
              param_2 = param_2 + 1;
              if (uVar5 == 0) goto code_r0x8228f9fc;
              uVar1 = (ulonglong)param_2[iVar2];
              uVar5 = (ulonglong)*param_2;
              uVar4 = uVar1;
            } while (uVar5 == uVar1);
          }
          if (uVar5 != uVar4) {
            return;
          }
code_r0x8228f9fc:
          if ((*(uint *)(param_3 + 4) >> 6 & 1) == 0) {
            uVar6 = *(undefined4 *)(param_3 + 8);
          }
          else {
            uVar6 = **(undefined4 **)(param_3 + 8);
          }
          fn_82F68B78(param_1,uVar6,param_3,param_4,uVar1);
          return;
        }
code_r0x8228f9a4:
        uVar6 = 9;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar6;
  return;
}

