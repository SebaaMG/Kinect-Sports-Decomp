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
extern int fn_822AAF60();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B3784;


void fn_8236F4E0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined ***pppuStack_30;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar3 = 0;
  if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
    iVar2 = 0;
    do {
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B3784;
      iStack_3c = param_1;
      fn_822AAF60(*(undefined4 *)(*piVar1 + iVar2),&ppuStack_40);
      piVar1 = *(int **)(param_1 + 8);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < piVar1[1] - *piVar1 >> 2);
  }
  return;
}

