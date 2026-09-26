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
extern int fn_822CC748();
extern int fn_82517978();
extern int fn_8266F628();
extern int fn_8266F640();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822CBFB8(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = (ulonglong)*param_2;
  uVar3 = 0x6d;
  if (uVar6 == 0x6d) {
    uVar6 = 0x6d;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar6 == 0) goto LAB_822cc01c;
      param_5 = (ulonglong)pbVar2[(int)"markerIsDirty" - (int)param_2];
      uVar6 = (ulonglong)*pbVar2;
      uVar3 = param_5;
    } while (uVar6 == param_5);
  }
  if (uVar6 == uVar3) {
LAB_822cc01c:
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0,param_5);
    fn_822CC748(&uStack_30,param_1 + 4);
  }
  bVar8 = *param_2;
  bVar5 = 0x68;
  pcVar4 = "hasReachedHoldPosition";
  bVar7 = bVar8;
  if (bVar8 == 0x68) {
    bVar7 = 0x68;
    do {
      pcVar4 = pcVar4 + 1;
      if (bVar7 == 0) {
        return;
      }
      bVar5 = *pcVar4;
      bVar7 = (param_2 + 0x7de57a94)[(int)pcVar4];
    } while (bVar7 == bVar5);
  }
  if (bVar7 != bVar5) {
    bVar5 = 0x68;
    if (bVar8 == 0x68) {
      iVar1 = (int)"hasReachedEnd" - (int)param_2;
      bVar8 = 0x68;
      do {
        param_2 = param_2 + 1;
        if (bVar8 == 0) goto LAB_822cc0dc;
        bVar5 = param_2[iVar1];
        bVar8 = *param_2;
      } while (bVar8 == bVar5);
    }
    if (bVar8 == bVar5) {
LAB_822cc0dc:
      fn_8266F640(*param_1,1);
      fn_8266F628(*param_1,1);
      if (param_1[0x19] != 0) {
        param_1[0x18] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 1;
      }
    }
  }
  return;
}

