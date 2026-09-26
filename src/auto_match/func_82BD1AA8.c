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


int * fn_82BD1AA8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  
  piVar1 = *(int **)(param_1 + 0x14);
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar4 = 0;
    pcVar5 = (char *)(*piVar1 * 0xc + param_3);
    iVar2 = param_2 - (int)pcVar5;
    do {
      if (*pcVar5 != pcVar5[iVar2]) {
        bVar3 = false;
        goto LAB_82bd1af0;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (iVar4 < 0xc);
    bVar3 = true;
LAB_82bd1af0:
    if (bVar3) {
      return piVar1;
    }
    piVar1 = (int *)piVar1[4];
  } while( true );
}

