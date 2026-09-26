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
extern unsigned int uStack_2e;
extern unsigned int uStack_30;


void fn_82C40D20(undefined8 param_1,uint *param_2,longlong param_3,undefined4 *param_4,
                  int *param_5,int *param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  
  uVar2 = *param_2;
  psVar1 = (short *)*param_4;
  puVar4 = (undefined2 *)*param_5;
  if ((int)uVar2 < (int)param_3) {
    param_3 = param_3 - (ulonglong)uVar2;
    iVar5 = uVar2 * 4;
    uVar2 = (int)param_3 + uVar2;
    piVar3 = (int *)(iVar5 + *param_6);
    do {
      iVar5 = *piVar3;
      if (iVar5 < -0x80000) {
        iVar5 = -0x80000;
      }
      else if (0x7ffff < iVar5) {
        iVar5 = 0x7ffff;
      }
      piVar3 = piVar3 + 1;
      uStack_2e = (undefined1)((uint)(iVar5 << 4) >> 8);
      uStack_30 = (undefined2)((uint)(iVar5 << 4) >> 0x10);
      *puVar4 = uStack_30;
      *(undefined1 *)(puVar4 + 1) = uStack_2e;
      puVar4 = (undefined2 *)(param_7 * 3 + (int)puVar4);
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_2 = uVar2;
  *param_4 = psVar1;
  *param_5 = (int)puVar4;
  return;
}

