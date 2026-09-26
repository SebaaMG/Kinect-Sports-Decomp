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
extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


undefined8 fn_82F37E80(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  int *apiStack_60 [4];
  byte abStack_50 [16];
  byte abStack_40 [64];
  
  if (param_3 == (uint *)0x0) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x70);
    pbVar7 = (byte *)&lbl_8202E618;
    pbVar6 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_8202E628);
    uVar5 = 0;
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      *param_3 = uVar3;
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          fn_82F377E8(param_1 + 8,uVar9,apiStack_60);
          piVar4 = (int *)*apiStack_60[0];
          if (piVar4 == (int *)0x0) {
            uVar5 = 0xffffffff8000ffff;
            break;
          }
          uVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,abStack_50);
          if ((int)uVar5 < 0) break;
          pbVar7 = abStack_50;
          pbVar6 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar6;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar7 != abStack_40);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar8 = uVar8 + 1;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (ulonglong)uVar3);
      }
      *param_3 = uVar8;
    }
  }
  return uVar5;
}

