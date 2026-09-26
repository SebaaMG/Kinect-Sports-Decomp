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
extern int fn_8278FED0();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined4 * fn_827A9228(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uStack00000024;
  
  if (param_2[1] != 0) {
    uStack00000024 = param_3;
    iVar4 = fn_8278FED0(param_2,0,param_2[1],&stack0x00000024,0xffffffff827a8328);
    if (iVar4 == param_2[1]) {
      iVar4 = iVar4 + -1;
    }
    piVar2 = *(int **)(iVar4 * 4 + *param_2);
    uVar5 = piVar2[2];
    if ((*piVar2 < 0) && (uVar5 = uVar5 & 0xffffff, uVar5 == 0xffffff)) {
      uVar5 = 0xffffffff;
    }
    if (uVar5 <= param_3) {
      if (*piVar2 < 0) {
        uVar6 = (uint)*(byte *)(piVar2 + 2);
      }
      else {
        uVar6 = piVar2[8];
      }
      if (param_3 <= uVar6 + uVar5) {
        bVar1 = *(byte *)(param_2 + 0x1d);
        param_1[2] = iVar4;
        *param_1 = param_2;
        param_1[1] = 0;
        *(byte *)(param_1 + 4) = bVar1 >> 2 & 1;
        uVar3 = lbl_821AAD20;
        goto LAB_827a9318;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = lbl_821AAD20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
LAB_827a9318:
  param_1[3] = uVar3;
  return param_1;
}

