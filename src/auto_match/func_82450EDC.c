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


void fn_82450EDC(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong in_r11;
  uint uVar5;
  ulonglong uVar4;
  bool bVar6;
  byte in_cr6;
  
  while ((bool)(in_cr6 >> 3 & 1)) {
    iVar1 = (int)((in_r11 & 0xffffffff) << 3) + param_1;
    uVar4 = in_r11;
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + -4)) {
      uVar4 = in_r11 - 1;
    }
    puVar2 = (undefined4 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    in_r11 = (uVar4 + 1 & 0x7fffffff) << 1;
    puVar3 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    param_2 = uVar4;
    in_cr6 = ((int)in_r11 < (int)param_3) << 3 | ((int)in_r11 == (int)param_3) << 1;
  }
  if ((bool)(in_cr6 >> 1 & 1)) {
    iVar1 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar3 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    param_2 = param_3 - 1;
    *puVar3 = *(undefined4 *)(iVar1 + -8);
    puVar3[1] = *(undefined4 *)(iVar1 + -4);
  }
  iVar1 = (int)param_2;
  uVar5 = iVar1 - 1;
  bVar6 = (int)uVar5 < 0 && (uVar5 & 1) != 0;
  while ((uVar4 = (longlong)((int)uVar5 >> 1) + (ulonglong)bVar6, param_5 < iVar1 &&
         (iVar1 = (int)uVar4, puVar3 = (undefined4 *)(iVar1 * 8 + param_1),
         (int)puVar3[1] < (int)param_4[1]))) {
    uVar5 = iVar1 - 1;
    puVar2 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    bVar6 = (int)uVar5 < 0 && (uVar5 & 1) != 0;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    param_2 = uVar4;
  }
  puVar3 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
  *puVar3 = *param_4;
  puVar3[1] = param_4[1];
  return;
}

