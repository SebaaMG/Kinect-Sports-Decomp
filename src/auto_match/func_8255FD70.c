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
extern unsigned int *auStack_60;
extern int fn_8239DD40();
extern int fn_82536690();
extern int fn_82F65390();


undefined4 * fn_8255FD70(undefined4 *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint auStack_60 [24];
  
  uVar4 = (ulonglong)(uint)param_2[1];
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = (*param_2 * 0x5c) / 0x5c;
  uVar8 = (longlong)iVar2;
  while (0 < iVar2) {
    uVar7 = (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    lVar5 = uVar7 * 0x5c + uVar4;
    iVar2 = fn_82F65390(lVar5,param_3,pcVar3 + (-1 - (int)param_3));
    if (iVar2 < 0) {
      uVar4 = lVar5 + 0x5c;
      uVar7 = (uVar8 - uVar7) - 1;
    }
    uVar8 = uVar7;
    iVar2 = (int)uVar7;
  }
  uVar8 = (ulonglong)(uint)param_2[1];
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = (*param_2 * 0x5c) / 0x5c;
  uVar7 = (longlong)iVar2;
  while (0 < iVar2) {
    uVar6 = (longlong)((int)uVar7 >> 1) + (ulonglong)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    lVar5 = uVar6 * 0x5c + uVar8;
    iVar2 = fn_82F65390(param_3,lVar5,pcVar3 + (-1 - (int)param_3));
    if (-1 < iVar2) {
      uVar8 = lVar5 + 0x5c;
      uVar6 = (uVar7 - uVar6) - 1;
    }
    uVar7 = uVar6;
    iVar2 = (int)uVar6;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8239DD40(param_1,(int)((int)uVar8 - (uint)uVar4) / 0x5c);
  auStack_60[0] = (uint)uVar4;
  if ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
    do {
      fn_82536690(param_1,auStack_60);
      auStack_60[0] = auStack_60[0] + 0x5c;
    } while ((ulonglong)auStack_60[0] < (uVar8 & 0xffffffff));
  }
  return param_1;
}

