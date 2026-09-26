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
extern int fn_82817088();
extern int fn_8281FEB0();


void fn_828170D8(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int aiStack_20 [2];
  
  iVar1 = fn_8281FEB0();
  if (iVar1 == 0) {
LAB_82817100:
    uVar3 = 0;
  }
  else {
    do {
      if (*(int *)(param_1 + 0x70) < 1) goto LAB_82817100;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      cVar2 = fn_82817088(param_1,aiStack_20);
    } while (cVar2 == '\0');
    uVar3 = *(undefined4 *)(aiStack_20[0] + 4);
  }
  *param_2 = uVar3;
  return;
}

