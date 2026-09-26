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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_828B9180();


void fn_828B6B60(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  undefined4 auStack_60 [24];
  
  uVar6 = param_2 - 1;
  iVar2 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (param_3 < param_2) {
    uVar5 = *param_4;
    puVar7 = (undefined4 *)(iVar2 * 8 + param_1);
    dVar8 = (double)fn_828B9180(*(undefined4 *)(iVar2 * 8 + param_1));
    dVar9 = (double)fn_828B9180(uVar5);
    if (dVar8 <= dVar9) break;
    puVar3 = (undefined4 *)(param_2 * 8 + param_1);
    uVar4 = 0;
    uVar5 = 0;
    if (auStack_60 != puVar7) {
      uVar5 = puVar7[1];
      puVar7[1] = 0;
      uVar4 = *puVar7;
      *puVar7 = 0;
    }
    iVar1 = puVar3[1];
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    uVar6 = iVar2 - 1;
    param_2 = iVar2;
    iVar2 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  }
  puVar7 = (undefined4 *)(param_2 * 8 + param_1);
  uVar4 = 0;
  uVar5 = 0;
  if (auStack_60 != param_4) {
    uVar5 = param_4[1];
    param_4[1] = 0;
    uVar4 = *param_4;
    *param_4 = 0;
  }
  iVar2 = puVar7[1];
  puVar7[1] = uVar5;
  *puVar7 = uVar4;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  return;
}

