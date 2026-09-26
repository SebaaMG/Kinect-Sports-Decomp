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


double fn_8248FCA0(int param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_2 + 0x14)) {
    return (double)lbl_821CC160;
  }
  puVar4 = *(uint **)(param_2 + 4);
  puVar1 = *(uint **)(param_2 + 8);
  fVar2 = lbl_821CC160;
  puVar3 = puVar4;
  if (puVar4 != puVar1) {
    do {
      if (*puVar3 == *(uint *)(param_2 + 0x14)) break;
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar1);
    for (; (puVar4 != puVar1 && (*puVar4 != *(uint *)(param_1 + 0x38))); puVar4 = puVar4 + 2) {
    }
  }
  for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
    fVar2 = (float)((double)(float)puVar3[1] + (double)fVar2);
  }
  return (double)fVar2;
}

