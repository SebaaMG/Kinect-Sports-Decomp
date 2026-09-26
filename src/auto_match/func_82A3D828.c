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
extern int fn_82A3D700();


void fn_82A3D828(int param_1,longlong param_2,undefined2 *param_3,int param_4,int param_5,
                  char param_6)

{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  short sVar5;
  short *psVar4;
  int iVar6;
  longlong lVar7;
  short asStack_60 [48];
  
  while( true ) {
    iVar6 = (int)param_2;
    *(int *)(param_1 + 0x2518) = iVar6;
    *(undefined2 **)(param_1 + 0x990) = param_3;
    *(int *)(param_1 + 0x998) = param_4;
    *(undefined1 *)(param_1 + 0x251e) = 0;
    *(undefined2 *)(param_1 + 0x251c) = 0;
    *(undefined2 *)(param_1 + 0x99e) = 0;
    if (0 < iVar6) {
      iVar2 = 0;
      do {
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x998)) = 0;
        if (param_3[iVar2] != 0) {
          sVar5 = *(short *)(param_1 + 0x251c) + 1;
          *(short *)(param_1 + 0x251c) = sVar5;
          *(short *)((sVar5 + 0x4ce) * 2 + param_1) = (short)iVar2;
        }
        sVar5 = (short)iVar2 + 1;
        iVar2 = (int)sVar5;
      } while (sVar5 < iVar6);
    }
    if (1 < *(short *)(param_1 + 0x251c)) break;
    if (*(short *)(param_1 + 0x251c) == 0) {
      *(undefined2 *)(*(short *)(param_1 + 0x99e) * 2 + param_5) = 0;
      return;
    }
    if (*(short *)(param_1 + 0x99e) == 0) {
      param_3[1] = 1;
    }
    else {
      *param_3 = 1;
    }
  }
  fn_82A3D700(param_1,(short)param_2,param_3,param_5);
  if (param_6 == '\0') {
    return;
  }
  asStack_60[0] = 0;
  psVar4 = asStack_60 + 1;
  asStack_60[1] = 0;
  psVar3 = (short *)(param_1 + 0x24f4);
  lVar7 = 0x10;
  do {
    sVar5 = *psVar4;
    psVar3 = psVar3 + 1;
    psVar4 = psVar4 + 1;
    *psVar4 = (*psVar3 + sVar5) * 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = 0;
  if (iVar6 < 1) {
    return;
  }
  psVar3 = (short *)(param_5 + -2);
  do {
    psVar3 = psVar3 + 1;
    *psVar3 = asStack_60[*(char *)(iVar2 + param_4)];
    pcVar1 = (char *)(iVar2 + param_4);
    iVar2 = iVar2 + 1;
    asStack_60[*pcVar1] = asStack_60[*pcVar1] + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

