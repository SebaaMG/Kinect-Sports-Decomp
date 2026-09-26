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
extern unsigned int lbl_821CC160;


undefined8 fn_8248C060(double param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 8) == 0)) {
    for (iVar5 = *(int *)(param_2 + 0x18); iVar5 != *(int *)(param_2 + 0x1c); iVar5 = iVar5 + 0x68)
    {
      if (*(int *)(iVar5 + 0x2c) == param_4) {
        iVar4 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 4) = param_3;
        *(undefined4 *)(iVar5 + 0x28) = 0;
        *(undefined4 *)(iVar5 + 0x44) = 0;
        fVar1 = lbl_821CC160;
        *(float *)(iVar5 + 0x3c) = lbl_821CC160;
        if (iVar4 != iVar2) goto code_r0x8248c0d4;
        goto code_r0x8248c114;
      }
    }
  }
  return 0;
  while( true ) {
    pfVar3 = (float *)(iVar4 + 8);
    iVar4 = iVar4 + 0xc;
    fVar1 = (float)((double)*pfVar3 + (double)fVar1);
    *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
    if (iVar4 == iVar2) break;
code_r0x8248c0d4:
    if (param_1 <= (double)fVar1) break;
  }
  if (iVar4 != iVar2) {
    *(undefined4 *)(iVar5 + 0x1c) = 1;
  }
code_r0x8248c114:
  *(undefined4 *)(iVar5 + 0x48) = 1;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  return 1;
}

