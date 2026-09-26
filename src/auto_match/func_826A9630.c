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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8269B790();
extern unsigned int lbl_82007284;


undefined4 * fn_826A9630(undefined4 *param_1,int *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte bVar10;
  ulonglong uVar9;
  
  *param_1 = &lbl_82007284;
  piVar4 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
  *(byte *)(param_1 + 2) = (byte)((uint)piVar4[0x2c0] >> 2) & 1;
  uVar3 = piVar4[0x2c0];
  param_1[3] = param_3;
  *(byte *)((int)param_1 + 9) = (byte)((~(ulonglong)uVar3 & 0xffffffff) >> 6) & 1;
  if (param_3 == (char *)0x0) {
    bVar10 = 0;
  }
  else {
    piVar5 = (int *)(**(code **)(*piVar4 + 4))(piVar4);
    pcVar8 = (char *)param_1[3];
    pcVar6 = (char *)(**(code **)(*piVar5 + 0x30))();
    do {
      cVar2 = *pcVar6;
      cVar1 = *pcVar8;
      if (cVar2 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 == cVar1);
    if (cVar2 == cVar1) {
      bVar10 = (byte)((uint)piVar4[0x2c0] >> 3) & 1;
    }
    else {
      bVar10 = (byte)((uint)piVar4[0x2c0] >> 4) & 1;
    }
  }
  *(byte *)((int)param_1 + 10) = bVar10;
  uVar7 = fn_8269B790(piVar4);
  param_1[1] = uVar7;
  if ((*(char *)((int)param_1 + 10) != '\0') &&
     (pcVar8 = param_3, ((uint)piVar4[0x2c0] >> 5 & 1) == 0)) {
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar9 = ZEXT48(pcVar8 + (-1 - (int)param_3));
    if (uVar9 != 0) {
      do {
        cVar2 = *(char *)(param_1[3] + (int)uVar9);
        if ((cVar2 == '/') || (cVar2 == '\\')) {
          param_1[3] = param_1[3] + (int)uVar9 + 1;
          return param_1;
        }
        uVar9 = uVar9 - 1;
      } while (0 < (longlong)uVar9);
    }
  }
  return param_1;
}

