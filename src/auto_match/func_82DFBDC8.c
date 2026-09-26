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


void fn_82DFBDC8(double param_1,int param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_5[4];
  param_5[4] = (float)((double)fVar1 - param_1);
  if ((*(char *)((int)param_5 + 0xf) != '\0') && ((float)((double)fVar1 - param_1) <= lbl_821AAD20))
  {
    *(undefined1 *)((int)param_5 + 0xf) = 0;
  }
  if (*(char *)((int)param_5 + 0xd) != '\0') {
    return;
  }
  if ((*param_5 < *(float *)(param_2 + 8)) && ('\0' < *(char *)((int)param_5 + 0xe))) {
    *(char *)((int)param_5 + 0xe) = *(char *)((int)param_5 + 0xe) + -1;
    param_5[4] = *(float *)(param_2 + 0x14);
    *(undefined1 *)((int)param_5 + 0xf) = 1;
  }
  if (*param_5 <= *(float *)(param_2 + 0xc)) {
    return;
  }
  iVar2 = *(char *)((int)param_5 + 0xe) + 1;
  if (*(int *)(param_2 + 0x20) <= iVar2) {
    return;
  }
  *(char *)((int)param_5 + 0xe) = (char)iVar2;
  param_5[4] = *(float *)(param_2 + 0x14);
  *(undefined1 *)((int)param_5 + 0xf) = 1;
  return;
}

