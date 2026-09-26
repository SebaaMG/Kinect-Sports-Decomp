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
extern unsigned int lbl_821B9BC8;


int * fn_8241CEF8(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5
                   ,int param_6,undefined8 param_7,int *param_8)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *in_r11;
  int *piVar6;
  int iVar7;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    if ((*in_r11 != param_2) || (bVar4 = true, in_r11[3] != param_3)) {
      bVar4 = false;
    }
    if (bVar4) break;
    in_r11 = in_r11 + 6;
    in_cr6 = (in_r11 == param_8) << 1;
  }
  if (in_r11 != param_8) {
    piVar1 = *(int **)(param_6 + 4);
    piVar5 = in_r11 + 6;
    if (piVar5 != piVar1) {
      piVar6 = in_r11 + -1;
      do {
        iVar7 = *piVar5;
        piVar5 = piVar5 + 6;
        piVar6[1] = iVar7;
        piVar6[3] = piVar6[9];
        piVar6[4] = piVar6[10];
        piVar6[5] = piVar6[0xb];
        piVar3 = piVar6 + 0xc;
        piVar6 = piVar6 + 6;
        *piVar6 = *piVar3;
      } while (piVar5 != piVar1);
    }
    iVar2 = *(int *)(param_6 + 4);
    for (iVar7 = iVar2 + -0x18; iVar7 != iVar2; iVar7 = iVar7 + 0x18) {
      *(undefined ***)(iVar7 + 4) = &lbl_821B9BC8;
    }
    *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + -0x18;
    return in_r11 + 1;
  }
  return (int *)0x0;
}

