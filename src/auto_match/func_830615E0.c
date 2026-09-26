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
extern int fn_8305DB40();
extern int fn_83065C40();
extern int fn_8306AB80();


longlong fn_830615E0(double param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  lVar2 = 0;
  iVar3 = *(int *)(param_2 + 4);
  while (iVar3 != 0) {
    dVar4 = (double)fn_8305DB40(iVar3);
    if (param_1 <= dVar4) {
      iVar3 = *(int *)(iVar3 + 4);
    }
    else {
      iVar1 = *(int *)(iVar3 + 4);
      fn_8306AB80(param_2 + 4,iVar3);
      *(undefined4 *)(iVar3 + 0x28) = 0;
      fn_83065C40(iVar3);
      lVar2 = lVar2 + 1;
      iVar3 = iVar1;
    }
  }
  return lVar2;
}

