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


undefined8
fn_822EB114(int param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5,int param_6
             ,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_r11;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  while (param_5 == 0) {
    if ((int)in_r11[3] < param_6) {
      puVar1 = (undefined4 *)in_r11[2];
    }
    else {
      puVar1 = (undefined4 *)*in_r11;
      param_8 = in_r11;
    }
    in_r11 = puVar1;
    param_5 = (uint)*(byte *)((int)puVar1 + 0x11);
  }
  puStack_10 = param_8;
  if ((param_8 == *(undefined4 **)(param_1 + 4)) || (param_6 < (int)param_8[3])) {
    apuStack_c[0] = *(undefined4 **)(param_1 + 4);
    ppuVar4 = apuStack_c;
  }
  else {
    ppuVar4 = &puStack_10;
  }
  if (*ppuVar4 != param_7) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    puVar2 = (undefined4 *)puVar1[1];
    apuStack_c[0] = puVar1;
    while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
      if ((int)puVar3[3] < *(int *)(param_2 + 4)) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
        apuStack_c[0] = puVar3;
      }
    }
    if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x14)) ||
       (*(int *)(param_2 + 4) < (int)apuStack_c[0][3])) {
      puStack_10 = *(undefined4 **)(param_1 + 0x14);
      ppuVar4 = &puStack_10;
    }
    else {
      ppuVar4 = apuStack_c;
    }
    if (*ppuVar4 != puVar1) {
      puVar1 = *(undefined4 **)(param_1 + 0x24);
      puVar2 = (undefined4 *)puVar1[1];
      apuStack_c[0] = puVar1;
      while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
        if ((int)puVar3[3] < *(int *)(param_2 + 8)) {
          puVar2 = (undefined4 *)puVar3[2];
        }
        else {
          puVar2 = (undefined4 *)*puVar3;
          apuStack_c[0] = puVar3;
        }
      }
      if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x24)) ||
         (*(int *)(param_2 + 8) < (int)apuStack_c[0][3])) {
        puStack_10 = *(undefined4 **)(param_1 + 0x24);
        ppuVar4 = &puStack_10;
      }
      else {
        ppuVar4 = apuStack_c;
      }
      if (*ppuVar4 != puVar1) {
        puVar1 = *(undefined4 **)(param_1 + 0x34);
        puVar2 = (undefined4 *)puVar1[1];
        apuStack_c[0] = puVar1;
        while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
          if ((int)puVar3[3] < *(int *)(param_2 + 0xc)) {
            puVar2 = (undefined4 *)puVar3[2];
          }
          else {
            puVar2 = (undefined4 *)*puVar3;
            apuStack_c[0] = puVar3;
          }
        }
        if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x34)) ||
           (*(int *)(param_2 + 0xc) < (int)apuStack_c[0][3])) {
          puStack_10 = *(undefined4 **)(param_1 + 0x34);
          ppuVar4 = &puStack_10;
        }
        else {
          ppuVar4 = apuStack_c;
        }
        if (*ppuVar4 != puVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}

