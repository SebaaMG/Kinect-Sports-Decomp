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


undefined8 fn_82D1F788(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 8);
  while (((iVar1 = *piVar3, *(float *)(iVar1 + 0x10) != *param_2 ||
          (*(float *)(iVar1 + 0x14) != param_2[1])) || (*(float *)(iVar1 + 0x18) != param_2[2]))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}

