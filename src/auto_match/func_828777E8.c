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
extern int fn_828647C0();
extern unsigned int lbl_821AAD20;


double fn_828777E8(int param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  while ((iVar4 != iVar2 && (cVar3 = fn_828647C0(iVar4 + 4,param_2), cVar3 == '\0'))) {
    iVar4 = iVar4 + 0x30;
  }
  fVar1 = lbl_821AAD20;
  if (iVar4 != *(int *)(param_1 + 8)) {
    fVar1 = *(float *)(iVar4 + 0x2c);
  }
  return (double)fVar1;
}

