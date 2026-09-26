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


undefined8 fn_82E07698(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar1 = param_1[1];
  if (iVar1 != param_2[1]) {
    return 0;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    param_1 = (int *)*param_1;
    psVar4 = (short *)(*param_2 + 6);
    iVar2 = *param_2 - (int)param_1;
    do {
      if (*(short *)(param_1 + 1) != psVar4[-1]) {
        return 0;
      }
      if (*(short *)((int)param_1 + 6) != *psVar4) {
        return 0;
      }
      if (*param_1 != *(int *)(iVar2 + (int)param_1)) {
        return 0;
      }
      if (param_1[2] != *(int *)(psVar4 + 1)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 6;
      param_1 = param_1 + 3;
    } while (iVar3 < iVar1);
  }
  return 1;
}

