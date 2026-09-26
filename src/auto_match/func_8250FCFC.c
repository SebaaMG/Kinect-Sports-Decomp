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
extern unsigned int fStack_10;


void fn_8250FCFC(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *in_r11;
  byte in_cr6;
  float fStack_10;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    uVar4 = *in_r11;
    uVar3 = in_r11[1];
    uVar2 = in_r11[2];
    uVar1 = in_r11[3];
    fStack_10 = (float)((ulonglong)uVar2 >> 0x20);
    puVar5 = in_r11;
    if (*(float *)(param_1 + 2) <= fStack_10) {
      while (fStack_10 < *(float *)(puVar5 + -2)) {
        *puVar5 = puVar5[-4];
        puVar5[1] = puVar5[-3];
        puVar5[2] = puVar5[-2];
        puVar5[3] = puVar5[-1];
        puVar5 = puVar5 + -4;
      }
      *puVar5 = uVar4;
      puVar5[1] = uVar3;
      puVar5[2] = uVar2;
      puVar5[3] = uVar1;
    }
    else {
      while (param_1 != puVar5) {
        *puVar5 = puVar5[-4];
        puVar5[1] = puVar5[-3];
        puVar5[2] = puVar5[-2];
        puVar5[3] = puVar5[-1];
        puVar5 = puVar5 + -4;
      }
      *param_1 = uVar4;
      param_1[1] = uVar3;
      param_1[2] = uVar2;
      param_1[3] = uVar1;
    }
    in_r11 = in_r11 + 4;
    in_cr6 = (in_r11 == param_2) << 1;
  }
  return;
}

