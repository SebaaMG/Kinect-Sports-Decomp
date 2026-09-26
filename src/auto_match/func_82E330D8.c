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
extern unsigned int lbl_8208DD70;


void fn_82E330D8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = lbl_8208DD70;
  iVar1 = *param_1;
  iVar6 = 0;
  if (*(int *)(iVar1 + 0x100) < 1) {
    return;
  }
  pfVar5 = (float *)(param_2 + -4);
  do {
    iVar6 = iVar6 + 1;
    iVar2 = *(int *)(iVar1 + 0x21c);
    iVar4 = *(int *)(iVar1 + 0x220) * 0x19660d + 0x3c6ef35f;
    *(int *)(iVar1 + 0x220) = iVar4;
    iVar4 = (iVar4 >> 4) + (iVar4 >> 2);
    *(int *)(iVar1 + 0x21c) = iVar4;
    pfVar5 = pfVar5 + 1;
    *pfVar5 = (float)(longlong)(iVar4 - iVar2) * *(float *)(iVar1 + 0x124) * fVar3;
  } while (iVar6 < *(int *)(iVar1 + 0x100));
  return;
}

