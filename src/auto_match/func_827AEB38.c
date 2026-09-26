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
extern int fn_8278FDC8();


void fn_827AEB38(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  param_1[5] = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    param_1[4] = *(int *)(param_2 + 0x30);
    iVar7 = fn_8278FDC8(param_2 + 0x14);
    param_1[5] = iVar7;
  }
  uVar8 = (ulonglong)(uint)param_1[1];
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  if (uVar8 != 0) {
    iVar7 = 0;
    do {
      puVar9 = (uint *)(iVar7 + *param_1);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      puVar9[3] = uVar1;
      puVar9[4] = uVar2;
      uVar3 = param_1[5];
      if (uVar3 != 0) {
        uVar4 = param_1[4];
        if (((uVar2 == 0) || (uVar4 < uVar1)) || (bVar6 = true, uVar2 + uVar1 <= uVar4)) {
          bVar6 = false;
        }
        if (bVar6) {
          uVar5 = puVar9[2];
          if ((int)uVar5 < 0) {
            puVar9[4] = uVar3 + uVar2;
          }
          else {
LAB_827aec14:
            puVar9[3] = uVar5 + uVar1;
          }
        }
        else {
          uVar5 = uVar3;
          if (uVar4 < uVar1) goto LAB_827aec14;
        }
      }
      iVar7 = iVar7 + 0x28;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

