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


void fn_828345FC(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *in_r11;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    uVar1 = in_r11[1];
    uVar2 = *in_r11;
    uVar3 = in_r11[2];
    puVar4 = in_r11;
    if (uVar1 < (uint)param_1[1]) {
      while (param_1 != puVar4) {
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        puVar4 = puVar4 + -3;
      }
      *param_1 = uVar2;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
    }
    else {
      uVar5 = in_r11[-2];
      while (uVar1 < uVar5) {
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        uVar5 = puVar4[-5];
        puVar4 = puVar4 + -3;
      }
      *puVar4 = uVar2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar3;
    }
    in_r11 = in_r11 + 3;
    in_cr6 = (in_r11 == param_2) << 1;
  }
  return;
}

