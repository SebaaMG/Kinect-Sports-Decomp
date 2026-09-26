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


int fn_827A8350(double param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)(longlong)param_2[4];
  if (dVar3 <= param_1) {
    if (*param_2 < 0) {
      uVar1 = (uint)*(ushort *)((int)param_2 + 0x16);
      iVar2 = (int)*(char *)((int)param_2 + 0x1d);
    }
    else {
      uVar1 = param_2[6];
      iVar2 = (int)*(short *)(param_2 + 10);
    }
    if (param_1 < (double)(float)((double)((float)(longlong)iVar2 + (float)(longlong)(int)uVar1) +
                                 dVar3)) {
      return 0;
    }
  }
  return (int)(dVar3 - param_1);
}

