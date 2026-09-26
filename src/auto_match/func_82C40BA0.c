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


void fn_82C40BA0(int param_1,uint *param_2,longlong param_3,undefined4 *param_4,uint *param_5,
                  int *param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  uVar6 = *param_2;
  psVar1 = (short *)*param_4;
  uVar7 = (ulonglong)*param_5;
  if ((int)uVar6 < (int)param_3) {
    param_3 = param_3 - (ulonglong)uVar6;
    puVar8 = (uint *)(uVar6 * 4 + *param_6);
    uVar6 = (int)param_3 + uVar6;
    do {
      uVar2 = *puVar8;
      uVar5 = (ulonglong)(uint)(1 << (*(ushort *)(param_1 + 0x6e) - 1 & 0x3f)) - 1;
      uVar4 = ~uVar5;
      if (((int)uVar4 <= (int)uVar2) && (uVar4 = (ulonglong)uVar2, (int)uVar5 < (int)uVar2)) {
        uVar4 = uVar5;
      }
      (**(code **)(param_1 + 0x208))(uVar4,uVar7,param_1,0);
      param_3 = param_3 + -1;
      iVar3 = *(int *)(param_1 + 0x58);
      puVar8 = puVar8 + 1;
      *psVar1 = *psVar1 + 1;
      uVar7 = (longlong)iVar3 * (longlong)param_7 + uVar7;
    } while (param_3 != 0);
  }
  *param_2 = uVar6;
  *param_4 = psVar1;
  *param_5 = (uint)uVar7;
  return;
}

