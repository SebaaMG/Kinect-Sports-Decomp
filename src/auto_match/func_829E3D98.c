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
extern unsigned int lbl_821AAD20;


double fn_829E3D98(int param_1,uint param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xff;
  fVar1 = lbl_821AAD20;
  if (param_2 < 0x100) {
    iVar3 = 0x100 - param_2;
    iVar4 = (param_2 + 0x19) * 4;
    do {
      puVar2 = (uint *)(iVar4 + *(int *)(param_1 + 0xc));
      iVar4 = iVar4 + 4;
      fVar1 = (float)*puVar2 + fVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x78);
  return (double)(fVar1 / (float)(longlong)
                                 (int)(((int)uVar5 >> 1) +
                                      (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0)));
}

