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


void fn_822CBE50(int param_1,byte *param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
                  )

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar5 = (ulonglong)*param_2;
  uVar3 = 0x6d;
  if (uVar5 == 0x6d) {
    uVar5 = 0x6d;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar5 == 0) goto LAB_822cbeb4;
      param_5 = (ulonglong)pbVar2[(int)"markerIsDirty" - (int)param_2];
      uVar5 = (ulonglong)*pbVar2;
      uVar3 = param_5;
    } while (uVar5 == param_5);
  }
  if (uVar5 == uVar3) {
LAB_822cbeb4:
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),0,
                      param_5);
    fn_822CC748(&uStack_30,param_1 + 0x30);
  }
  bVar7 = *param_2;
  bVar4 = 0x68;
  bVar6 = bVar7;
  if (bVar7 == 0x68) {
    bVar6 = 0x68;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (bVar6 == 0) {
        return;
      }
      bVar4 = pbVar2[(int)"hasReachedHoldPosition" - (int)param_2];
      bVar6 = *pbVar2;
    } while (bVar6 == bVar4);
  }
  if (bVar6 != bVar4) {
    bVar6 = 0x68;
    if (bVar7 == 0x68) {
      iVar1 = (int)"hasReachedEnd" - (int)param_2;
      bVar7 = 0x68;
      do {
        param_2 = param_2 + 1;
        if (bVar7 == 0) goto LAB_822cbf78;
        bVar6 = param_2[iVar1];
        bVar7 = *param_2;
      } while (bVar7 == bVar6);
    }
    if (bVar7 == bVar6) {
LAB_822cbf78:
      fn_8266F640(*(undefined4 *)(param_1 + 0x24),1);
      fn_8266F628(*(undefined4 *)(param_1 + 0x24),1);
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 1;
      }
    }
  }
  return;
}

