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


void fn_8250FBF0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fStack_10;
  
  puVar1 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar6 = puVar1 + 4, puVar6 != param_2) {
    uVar5 = *puVar6;
    uVar4 = puVar1[5];
    uVar3 = puVar1[6];
    uVar2 = puVar1[7];
    fStack_10 = (float)((ulonglong)uVar3 >> 0x20);
    puVar1 = puVar6;
    if (*(float *)(param_1 + 2) <= fStack_10) {
      while (fStack_10 < *(float *)(puVar6 + -2)) {
        *puVar6 = puVar6[-4];
        puVar6[1] = puVar6[-3];
        puVar6[2] = puVar6[-2];
        puVar6[3] = puVar6[-1];
        puVar6 = puVar6 + -4;
      }
      *puVar6 = uVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6[3] = uVar2;
    }
    else {
      while (param_1 != puVar6) {
        *puVar6 = puVar6[-4];
        puVar6[1] = puVar6[-3];
        puVar6[2] = puVar6[-2];
        puVar6[3] = puVar6[-1];
        puVar6 = puVar6 + -4;
      }
      *param_1 = uVar5;
      param_1[1] = uVar4;
      param_1[2] = uVar3;
      param_1[3] = uVar2;
    }
  }
  return;
}

