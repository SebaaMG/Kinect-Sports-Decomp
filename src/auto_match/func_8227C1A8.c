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
extern int fn_8227CBB0();


void fn_8227C1A8(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  uint uVar6;
  
  uVar6 = 0;
  piVar1 = (int *)(param_1 + 0xa88);
  for (piVar4 = piVar1; piVar4 != (int *)(param_1 + 0x1168); piVar4 = piVar4 + 0x37) {
    if (*piVar4 != 0) {
      uVar6 = uVar6 + 1;
    }
  }
  iVar2 = uVar6 * 0xdc + param_1 + 0xa88;
  fn_8227CBB0(piVar1,iVar2,(iVar2 - (int)piVar1) / 0xdc,param_1);
  fVar3 = 0.0;
  *(undefined4 *)(param_1 + 0xa8c) = 0;
  if (1 < uVar6) {
    iVar2 = uVar6 - 1;
    pfVar5 = (float *)(param_1 + 0xa94);
    do {
      if (pfVar5[0x37] != *pfVar5) {
        fVar3 = (float)((int)fVar3 + 1);
      }
      pfVar5[0x35] = fVar3;
      iVar2 = iVar2 + -1;
      pfVar5 = pfVar5 + 0x37;
    } while (iVar2 != 0);
  }
  return;
}

