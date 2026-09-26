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
extern unsigned int lbl_82057AC0;
extern unsigned int lbl_821AAD20;


double fn_829E3BC0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  iVar1 = 0;
  dVar5 = (double)lbl_821AAD20;
  do {
    iVar3 = 0;
    lVar4 = 5;
    do {
      iVar2 = iVar1 + iVar3;
      iVar3 = iVar3 + 1;
      dVar5 = (double)(float)((double)(float)(&lbl_82057AC0)[iVar2] + dVar5);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar1 = iVar1 + 5;
  } while (iVar1 < 0x19);
  return dVar5;
}

