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


undefined8 fn_8227C118(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  
  iVar2 = 0;
  pfVar3 = (float *)(param_1 + 0xa94);
  fVar1 = *(float *)(param_2 * 0xdc + param_1 + 0xa94);
  uVar4 = 0;
  do {
    if ((pfVar3[-3] != 0.0) && (iVar2 = iVar2 + 1, param_2 != uVar4)) {
      if (*(int *)(param_1 + 0xa64) == 2) {
        if (*pfVar3 <= fVar1) {
          return 0;
        }
      }
      else if (fVar1 <= *pfVar3) {
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 0x37;
  } while (uVar4 < 8);
  if (((iVar2 != 1) && (*(int *)(param_1 + 0xa6c) != 0)) && (*(int *)(param_1 + 0xa70) != 0)) {
    return 1;
  }
  return 0;
}

