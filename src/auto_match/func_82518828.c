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
extern unsigned int *auStack_30;
extern int fn_825188C8();
extern int fn_82518F80();
extern int fn_8265CA20();
extern int iRam83297928;
extern unsigned int uRam8329792c;


void fn_82518828(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_30 [48];
  
  cVar1 = *(char *)((int)*(int **)(iRam83297928 + 4) + 0x21);
  piVar3 = *(int **)(iRam83297928 + 4);
  while (cVar1 == '\0') {
    fn_82518F80(0xffffffff83297924,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_825188C8(auStack_30,piVar3 + 4,*(undefined4 *)piVar3[5]);
    fn_8265CA20(piVar3[5]);
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  *(int *)(iRam83297928 + 4) = iRam83297928;
  *(int *)iRam83297928 = iRam83297928;
  *(int *)(iRam83297928 + 8) = iRam83297928;
  uRam8329792c = 0;
  fn_8265CA20(iRam83297928);
  return;
}

