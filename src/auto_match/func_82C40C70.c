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
extern unsigned int uStack_30;


void fn_82C40C70(undefined8 param_1,uint *param_2,longlong param_3,undefined4 *param_4,
                  int *param_5,int *param_6,int param_7)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uStack_30;
  
  uVar3 = *param_2;
  psVar1 = (short *)*param_4;
  puVar4 = (undefined1 *)*param_5;
  if ((int)uVar3 < (int)param_3) {
    param_3 = param_3 - (ulonglong)uVar3;
    piVar2 = (int *)(uVar3 * 4 + *param_6);
    uVar3 = (int)param_3 + uVar3;
    do {
      uStack_30 = *piVar2;
      if (uStack_30 < -0x800000) {
        uStack_30 = -0x800000;
      }
      else if (0x7fffff < uStack_30) {
        uStack_30 = 0x7fffff;
      }
      piVar2 = piVar2 + 1;
      *puVar4 = (((U64)(uStack_30) >> 8) & 0xFF);
      puVar4[1] = (((U64)(uStack_30) >> 16) & 0xFF);
      puVar4[2] = (undefined1)uStack_30;
      puVar4 = puVar4 + param_7 * 3;
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_2 = uVar3;
  *param_4 = psVar1;
  *param_5 = (int)puVar4;
  return;
}

