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
extern int fn_82471140();


void fn_824BF410(int *param_1,int *param_2,ulonglong param_3,undefined8 param_4,uint param_5,
                  uint param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = (int)param_3;
  iVar8 = *param_1;
  iVar1 = param_1[1];
  if (iVar8 == iVar1) {
    iVar8 = *param_2;
    iVar1 = param_2[1];
    if ((iVar8 != iVar1) && (0 < iVar6)) {
      do {
        iVar6 = 7;
        do {
          iVar6 = iVar6 - *(int *)(iVar8 + 0x10);
          fn_82471140(param_4,iVar8);
          iVar8 = iVar8 + 0x28;
          if (iVar8 == iVar1) {
            iVar8 = *param_2;
          }
        } while (0 < iVar6);
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    iVar7 = *param_2;
    if (iVar7 == param_2[1]) {
      if (0 < iVar6) {
        do {
          iVar6 = 7;
          do {
            iVar6 = iVar6 - *(int *)(iVar8 + 0x10);
            fn_82471140(param_4,iVar8);
            iVar8 = iVar8 + 0x28;
            if (iVar8 == iVar1) {
              iVar8 = *param_1;
            }
          } while (0 < iVar6);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
    else if (iVar6 != 0) {
      uVar3 = (ulonglong)param_5 / (param_3 & 0xffffffff);
      uVar2 = (ulonglong)param_6 / (param_3 & 0xffffffff);
      uVar4 = uVar3;
      uVar5 = uVar2;
      do {
        while ((uVar4 & 0xffffffff) != 0) {
LAB_824bf524:
          if (((uVar5 & 0xffffffff) == 0) || (*(uint *)(iVar8 + 8) < *(uint *)(iVar7 + 8))) {
            fn_82471140(param_4,iVar8);
            uVar4 = uVar4 - 1;
            iVar8 = iVar8 + 0x28;
          }
          else {
LAB_824bf554:
            fn_82471140(param_4,iVar7);
            iVar7 = iVar7 + 0x28;
            uVar5 = uVar5 - 1;
          }
          if (iVar7 == param_2[1]) {
            iVar7 = *param_2;
          }
          if (iVar8 == param_1[1]) {
            iVar8 = *param_1;
          }
        }
        if ((uVar5 & 0xffffffff) != 0) {
          if ((uVar4 & 0xffffffff) != 0) goto LAB_824bf524;
          goto LAB_824bf554;
        }
        param_3 = param_3 - 1;
        uVar4 = uVar3;
        uVar5 = uVar2;
      } while (param_3 != 0);
    }
  }
  return;
}

