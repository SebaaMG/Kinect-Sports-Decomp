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
extern unsigned int lbl_8324DBB0;


longlong fn_82F07F68(int param_1,short *param_2,short *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  
  uVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x5b4);
  if (*(int *)(param_1 + 0x594) == 0) {
    param_4 = param_4 - (int)param_2;
    sVar4 = 1;
    lVar7 = 0x3f;
    do {
      param_2 = param_2 + 1;
      sVar6 = *(short *)(param_4 + (int)param_2);
      *param_2 = 0;
      uVar3 = (int)sVar6 >> 0x1f;
      iVar5 = ((int)sVar6 ^ uVar3) - uVar3;
      if (iVar1 << 4 <= iVar5) {
        sVar4 = sVar4 + 1;
        if (*(ushort *)(param_4 + (int)param_2) < 0x8000) {
          *param_2 = 1;
          if (iVar1 << 5 <= iVar5) {
            sVar6 = (short)(*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12);
            *param_2 = sVar6;
            iVar5 = *(int *)(param_1 + 0x6f84);
            if (iVar5 <= sVar6) {
LAB_82f080f0:
              *param_2 = (short)iVar5;
            }
          }
        }
        else {
          *param_2 = -1;
          if (iVar1 << 5 <= iVar5) {
            sVar6 = -(short)(*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12);
            *param_2 = sVar6;
            iVar5 = -*(int *)(param_1 + 0x6f84);
            if (sVar6 <= iVar5) goto LAB_82f080f0;
          }
        }
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *param_3 = sVar4;
  }
  else {
    *param_3 = 1;
    do {
      sVar4 = *(short *)(uVar3 * 2 + param_4);
      uVar2 = (int)sVar4 >> 0x1f;
      iVar5 = (((int)sVar4 ^ uVar2) - uVar2) + iVar1 * 8;
      if (iVar5 < iVar1 << 4) {
        param_2[uVar3] = 0;
      }
      else {
        sVar6 = *(short *)(&lbl_8324DBB0 + (*(int *)(param_1 + 0x5bc) * iVar5 >> 0x12) * 2);
        if (sVar4 < 0) {
          sVar6 = -sVar6;
        }
        param_2[uVar3] = sVar6;
        if (sVar6 != 0) {
          *param_3 = *param_3 + 1;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x40);
    sVar4 = *param_3;
  }
  return (longlong)sVar4 + -1;
}

