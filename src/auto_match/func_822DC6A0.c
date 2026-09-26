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
extern int fn_822DCD18();
extern int fn_822DD580();
extern int fn_82F63CA0();


void fn_822DC6A0(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar8;
  longlong lVar7;
  char acStack_40 [8];
  char *pcStack_38;
  char *pcStack_34;
  
  uVar6 = (int)param_2 - (int)param_1;
  if (0x20 < (int)uVar6) {
    do {
      iVar8 = (int)param_3;
      if (iVar8 < 1) break;
      fn_822DCD18(&pcStack_38,param_1,param_2);
      pcVar3 = pcStack_34;
      pcVar2 = pcStack_38;
      param_3 = (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if ((int)pcStack_38 - (int)param_1 < (int)param_2 - (int)pcStack_34) {
        fn_822DC6A0(param_1,pcStack_38,param_3);
        param_1 = pcVar3;
      }
      else {
        fn_822DC6A0(pcStack_34,param_2,param_3);
        param_2 = pcVar2;
      }
      uVar6 = (int)param_2 - (int)param_1;
    } while (0x20 < (int)uVar6);
    if (0x20 < (int)uVar6) {
      if ((int)uVar6 < 2) {
        return;
      }
      lVar7 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      if (0 < lVar7) {
        do {
          lVar7 = lVar7 + -1;
          acStack_40[0] = param_1[(int)lVar7];
          fn_822DD580(param_1,lVar7,uVar6,acStack_40);
        } while (0 < (int)lVar7);
      }
      while (1 < (int)uVar6) {
        acStack_40[0] = param_1[uVar6 - 1];
        param_1[uVar6 - 1] = *param_1;
        fn_822DD580(param_1,0,uVar6 - 1,acStack_40);
        uVar6 = uVar6 - 1;
      }
      return;
    }
  }
  if ((1 < (int)uVar6) && (pcVar2 = param_1, param_1 != param_2)) {
    while (pcVar2 = pcVar2 + 1, pcVar2 != param_2) {
      cVar1 = *pcVar2;
      if (cVar1 < *param_1) {
        fn_82F63CA0(param_1 + 1,param_1);
        *param_1 = cVar1;
      }
      else {
        cVar4 = pcVar2[-1];
        pcVar3 = pcVar2;
        pcVar5 = pcVar2 + -1;
        while (cVar1 < cVar4) {
          *pcVar3 = cVar4;
          cVar4 = pcVar5[-1];
          pcVar3 = pcVar5;
          pcVar5 = pcVar5 + -1;
        }
        *pcVar3 = cVar1;
      }
    }
  }
  return;
}

