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


void fn_82C40DC8(undefined8 param_1,uint *param_2,longlong param_3,undefined4 *param_4,
                  int *param_5,int *param_6,int param_7)

{
  short *psVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_2;
  psVar1 = (short *)*param_4;
  puVar2 = (undefined2 *)*param_5;
  if ((int)uVar4 < (int)param_3) {
    param_3 = param_3 - (ulonglong)uVar4;
    piVar3 = (int *)(uVar4 * 4 + *param_6);
    uVar4 = (int)param_3 + uVar4;
    do {
      iVar5 = *piVar3;
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
      else if (0x7fff < iVar5) {
        iVar5 = 0x7fff;
      }
      *puVar2 = (short)iVar5;
      piVar3 = piVar3 + 1;
      puVar2 = puVar2 + param_7;
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_2 = uVar4;
  *param_4 = psVar1;
  *param_5 = (int)puVar2;
  return;
}

