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


undefined8 fn_8229DB00(int *param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = (ulonglong)*param_2;
  uVar3 = 0x68;
  uVar4 = uVar1;
  if (uVar1 == 0x68) {
    uVar4 = 0x68;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar4 == 0) goto LAB_8229db60;
      param_3 = (ulonglong)pbVar2[(int)"hasStartedCurrentAnimation" - (int)param_2];
      uVar4 = (ulonglong)*pbVar2;
      uVar3 = param_3;
    } while (uVar4 == param_3);
  }
  if (uVar4 == uVar3) {
LAB_8229db60:
    param_1[6] = 1;
  }
  else {
    uVar3 = 0x68;
    uVar4 = uVar1;
    if (uVar1 == 0x68) {
      uVar4 = 0x68;
      pbVar2 = param_2;
      do {
        pbVar2 = pbVar2 + 1;
        if (uVar4 == 0) goto LAB_8229dbbc;
        param_3 = (ulonglong)pbVar2[(int)"hasFinishedCurrentAnimation" - (int)param_2];
        uVar4 = (ulonglong)*pbVar2;
        uVar3 = param_3;
      } while (uVar4 == param_3);
    }
    if (uVar4 == uVar3) {
LAB_8229dbbc:
      param_1[6] = 0;
      (**(code **)(*param_1 + 8))(param_1,1,param_3);
    }
    else {
      uVar3 = 0x61;
      uVar4 = uVar1;
      if (uVar1 == 0x61) {
        uVar4 = 0x61;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          if (uVar4 == 0) goto LAB_8229dc30;
          uVar3 = (ulonglong)pbVar2[(int)"advertisingIsReadyForDisplay" - (int)param_2];
          uVar4 = (ulonglong)*pbVar2;
        } while (uVar4 == uVar3);
      }
      if (uVar4 == uVar3) {
LAB_8229dc30:
        iVar5 = 1;
      }
      else {
        uVar4 = 0x61;
        if (uVar1 == 0x61) {
          iVar5 = (int)"advertisingHasBecomeInvalid" - (int)param_2;
          uVar1 = 0x61;
          do {
            param_2 = param_2 + 1;
            if (uVar1 == 0) goto LAB_8229dc8c;
            uVar4 = (ulonglong)param_2[iVar5];
            uVar1 = (ulonglong)*param_2;
          } while (uVar1 == uVar4);
        }
        if (uVar1 != uVar4) {
          return 0;
        }
LAB_8229dc8c:
        iVar5 = 0;
      }
      param_1[8] = iVar5;
    }
  }
  return 1;
}

