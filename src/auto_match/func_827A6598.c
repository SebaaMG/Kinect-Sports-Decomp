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
extern int fn_82790270();


void fn_827A6598(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = 0;
  if ((*(int *)*param_3 != 2) || (iVar1 = 1, 1 < (uint)param_3[1])) {
    piVar4 = (int *)*param_3 + iVar1 * 3;
    iVar1 = *piVar4;
    if ((iVar1 == 0) || ((iVar1 == 1 && (2 < (uint)piVar4[2])))) {
      uVar5 = (ulonglong)(uint)piVar4[1];
      uVar6 = (ulonglong)(uint)piVar4[2];
      if (iVar1 == 1) {
        uVar5 = uVar5 + 2;
        uVar6 = uVar6 - 2;
      }
      uVar2 = uVar6;
      if (3 < (uVar6 & 0xffffffff)) {
        uVar2 = 4;
      }
      iVar1 = fn_82790270(uVar5,0xffffffff821adae0,uVar2);
      if (iVar1 == 0) {
        uVar3 = 0;
        if (param_2[1] != 0) {
          iVar1 = 0;
          do {
            uVar3 = uVar3 + 1;
            piVar4 = (int *)(iVar1 + *param_2);
            iVar1 = iVar1 + 4;
            *(ushort *)(*piVar4 + 0x42) = *(ushort *)(*piVar4 + 0x42) & 0xf9fe | 1;
          } while (uVar3 < (uint)param_2[1]);
        }
      }
      else {
        uVar2 = uVar6;
        if (5 < (uVar6 & 0xffffffff)) {
          uVar2 = 6;
        }
        iVar1 = fn_82790270(uVar5,0xffffffff820116c4,uVar2);
        if (iVar1 == 0) {
          uVar3 = 0;
          if (param_2[1] != 0) {
            iVar1 = 0;
            do {
              uVar3 = uVar3 + 1;
              piVar4 = (int *)(iVar1 + *param_2);
              iVar1 = iVar1 + 4;
              *(ushort *)(*piVar4 + 0x42) = *(ushort *)(*piVar4 + 0x42) | 0x601;
            } while (uVar3 < (uint)param_2[1]);
          }
        }
        else {
          uVar2 = uVar6;
          if (4 < (uVar6 & 0xffffffff)) {
            uVar2 = 5;
          }
          iVar1 = fn_82790270(uVar5,0xffffffff821adae8,uVar2);
          if (iVar1 == 0) {
            uVar3 = 0;
            if (param_2[1] != 0) {
              iVar1 = 0;
              do {
                uVar3 = uVar3 + 1;
                piVar4 = (int *)(iVar1 + *param_2);
                iVar1 = iVar1 + 4;
                *(ushort *)(*piVar4 + 0x42) = *(ushort *)(*piVar4 + 0x42) & 0xf9fe | 0x201;
              } while (uVar3 < (uint)param_2[1]);
            }
          }
          else {
            if (6 < (uVar6 & 0xffffffff)) {
              uVar6 = 7;
            }
            iVar1 = fn_82790270(uVar5,0xffffffff820117a0,uVar6);
            if ((iVar1 == 0) && (uVar3 = 0, param_2[1] != 0)) {
              iVar1 = 0;
              do {
                uVar3 = uVar3 + 1;
                piVar4 = (int *)(iVar1 + *param_2);
                iVar1 = iVar1 + 4;
                *(ushort *)(*piVar4 + 0x42) = *(ushort *)(*piVar4 + 0x42) & 0xf9fe | 0x401;
              } while (uVar3 < (uint)param_2[1]);
            }
          }
        }
      }
    }
  }
  return;
}

