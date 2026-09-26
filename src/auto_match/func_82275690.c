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
extern unsigned int iStack_c;


void fn_82275690(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *in_r11;
  byte in_cr6;
  int iStack_c;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    uVar2 = *in_r11;
    iStack_c = (int)uVar2;
    puVar3 = in_r11;
    if (iStack_c < *(int *)((int)param_1 + 4)) {
      while (param_1 != puVar3) {
        *(undefined4 *)puVar3 = *(undefined4 *)(puVar3 + -1);
        *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar3 + -4);
        puVar3 = puVar3 + -1;
      }
      *param_1 = uVar2;
    }
    else {
      iVar1 = *(int *)((int)in_r11 + -4);
      while (iStack_c < iVar1) {
        *(undefined4 *)puVar3 = *(undefined4 *)(puVar3 + -1);
        *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar3 + -4);
        iVar1 = *(int *)((int)puVar3 + -0xc);
        puVar3 = puVar3 + -1;
      }
      *puVar3 = uVar2;
    }
    in_r11 = in_r11 + 1;
    in_cr6 = (in_r11 == param_2) << 1;
  }
  return;
}

