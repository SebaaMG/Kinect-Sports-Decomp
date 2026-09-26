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
extern unsigned int fStack00000024;
extern int fn_827A8630();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000024;


undefined4 * fn_827A9328(double param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fStack00000024;
  
  fStack00000024 = (float)param_1;
  if (param_3[1] != 0) {
    iVar4 = fn_827A8630(param_3,0,param_3[1],&stack0x00000024,0xffffffff827a83f8);
    if (iVar4 == param_3[1]) {
      iVar4 = iVar4 + -1;
    }
    piVar2 = *(int **)(iVar4 * 4 + *param_3);
    if ((double)(longlong)piVar2[4] <= param_1) {
      if (*piVar2 < 0) {
        uVar5 = (uint)*(ushort *)((int)piVar2 + 0x16);
        iVar6 = (int)*(char *)((int)piVar2 + 0x1d);
      }
      else {
        uVar5 = piVar2[6];
        iVar6 = (int)*(short *)(piVar2 + 10);
      }
      if (param_1 < (double)(longlong)(int)(iVar6 + uVar5 + piVar2[4])) {
        bVar1 = *(byte *)(param_3 + 0x1d);
        param_2[2] = iVar4;
        *param_2 = param_3;
        param_2[1] = 0;
        *(byte *)(param_2 + 4) = bVar1 >> 2 & 1;
        uVar3 = lbl_821AAD20;
        goto LAB_827a944c;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = lbl_821AAD20;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_827a944c:
  param_2[3] = uVar3;
  return param_2;
}

