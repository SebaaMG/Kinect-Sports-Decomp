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
extern unsigned int *auStack_50;
extern int fn_82273CD8();
extern int fn_82526A70();
extern int fn_82528F60();
extern int fn_8265CA60();
extern int fn_8266F780();


void fn_826700E0(int *param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 auStack_50 [20];
  
  uVar6 = (uint)param_3;
  if ((uVar6 == 0) || (param_2 == 0)) {
    *param_1 = 0;
  }
  else {
    lVar2 = -1;
    uVar7 = (param_3 & 0xfffffff) << 4;
    if (0xfffffff < uVar6) {
      uVar7 = 0xffffffffffffffff;
    }
    if ((uVar7 & 0xffffffff) < 0xfffffff8) {
      lVar2 = uVar7 + 8;
    }
    puVar3 = (uint *)fn_8265CA60(lVar2);
    if (puVar3 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar6;
      puVar5 = puVar3 + 2;
      if (-1 < (longlong)(param_3 - 1)) {
        puVar3 = puVar3 + -1;
        uVar7 = param_3;
        do {
          puVar3[3] = 0;
          puVar3 = puVar3 + 4;
          *puVar3 = 0;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    *param_1 = (int)puVar5;
    if (uVar6 != 0) {
      puVar9 = (undefined4 *)(param_2 + 8);
      do {
        fn_8266F780((int)puVar9 + *param_1 + (-8 - param_2),puVar9 + -2);
        uVar6 = puVar9[-1] & 0x8f;
        if (uVar6 == 4) {
          auStack_50[0] = 0;
          if (((uint)puVar9[-1] >> 6 & 1) == 0) {
            uVar1 = *puVar9;
          }
          else {
            uVar1 = *(undefined4 *)*puVar9;
          }
          fn_82526A70(auStack_50,uVar1);
          uVar4 = 4;
LAB_826701f8:
          uVar1 = auStack_50[0];
          iVar8 = (int)puVar9 + *param_1 + (-8 - param_2);
          fn_82273CD8(iVar8,uVar4);
          *(undefined4 *)(iVar8 + 8) = uVar1;
        }
        else if (uVar6 == 5) {
          auStack_50[0] = 0;
          fn_82528F60(auStack_50,*puVar9);
          uVar4 = 5;
          goto LAB_826701f8;
        }
        param_3 = param_3 - 1;
        puVar9 = puVar9 + 4;
      } while (param_3 != 0);
    }
  }
  return;
}

