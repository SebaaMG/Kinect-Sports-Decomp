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


undefined8 fn_822EB0E0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)puVar1[1];
  puStack_10 = puVar1;
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
    if ((int)puVar3[3] < *param_2) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      puStack_10 = puVar3;
    }
  }
  if ((puStack_10 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puStack_10[3])) {
    apuStack_c[0] = *(undefined4 **)(param_1 + 4);
    ppuVar4 = apuStack_c;
  }
  else {
    ppuVar4 = &puStack_10;
  }
  if (*ppuVar4 != puVar1) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    puVar2 = (undefined4 *)puVar1[1];
    apuStack_c[0] = puVar1;
    while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x11) == '\0') {
      if ((int)puVar3[3] < param_2[1]) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
        apuStack_c[0] = puVar3;
      }
    }
    if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x14)) || (param_2[1] < (int)apuStack_c[0][3]))
    {
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
        if ((int)puVar3[3] < param_2[2]) {
          puVar2 = (undefined4 *)puVar3[2];
        }
        else {
          puVar2 = (undefined4 *)*puVar3;
          apuStack_c[0] = puVar3;
        }
      }
      if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x24)) ||
         (param_2[2] < (int)apuStack_c[0][3])) {
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
          if ((int)puVar3[3] < param_2[3]) {
            puVar2 = (undefined4 *)puVar3[2];
          }
          else {
            puVar2 = (undefined4 *)*puVar3;
            apuStack_c[0] = puVar3;
          }
        }
        if ((apuStack_c[0] == *(undefined4 **)(param_1 + 0x34)) ||
           (param_2[3] < (int)apuStack_c[0][3])) {
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

