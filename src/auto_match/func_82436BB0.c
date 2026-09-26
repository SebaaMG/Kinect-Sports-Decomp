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


undefined8 fn_82436BB0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x40);
  iVar3 = *(int *)(iVar2 + 0xa0);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x40) == 1)) &&
      (iVar2 = *(int *)(iVar2 + 0xa0), iVar2 != 0)) &&
     ((fVar1 = *(float *)(iVar2 + 0x148), lbl_821CC160 < fVar1 &&
      (fVar1 < (float)(*(int **)(param_1 + 0x40))[0x62])))) {
    return 1;
  }
  return 0;
}

