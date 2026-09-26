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
extern int fn_82B7BD28();


int * fn_82BD1CA0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1[2] < param_1[1]) {
    return (int *)*param_1;
  }
  piVar5 = *(int **)(*param_1 + 0x14);
  piVar10 = (int *)0x0;
  do {
    piVar1 = piVar5;
    iVar9 = *piVar1;
    iVar7 = 0;
    pcVar8 = (char *)(iVar9 * 0xc + param_2);
    iVar6 = (param_1[1] * 0xc + param_2) - (int)pcVar8;
    do {
      if (*pcVar8 != pcVar8[iVar6]) {
        bVar3 = false;
        goto LAB_82bd1d18;
      }
      iVar7 = iVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar7 < 0xc);
    bVar3 = true;
LAB_82bd1d18:
    if (bVar3) {
      uVar2 = *(undefined4 *)(param_1[3] + 0x5b0);
      puVar4 = (undefined4 *)fn_82B7BD28(uVar2,0x28);
      piVar5 = puVar4 + 1;
      *puVar4 = uVar2;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        puVar4[3] = 0;
        puVar4[7] = 0;
        puVar4[2] = 0x40000000;
        puVar4[8] = 0;
      }
      *piVar5 = iVar9;
      iVar9 = (iVar9 - param_1[1]) + param_1[2];
      piVar5[1] = iVar9;
      piVar5[4] = piVar1[4];
      piVar5[8] = 0;
      piVar5[5] = (int)piVar1;
      *piVar1 = iVar9 + 1;
      piVar1[4] = 0;
      if (piVar10 == (int *)0x0) {
        *(int **)(*param_1 + 0x14) = piVar5;
        return piVar5;
      }
      piVar10[4] = (int)piVar5;
      return piVar5;
    }
    piVar5 = (int *)piVar1[4];
    piVar10 = piVar1;
  } while( true );
}

