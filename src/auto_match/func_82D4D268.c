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


void fn_82D4D268(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(undefined4 **)(param_2 + 0x10))[1];
  if (0 < iVar1) {
    piVar2 = (int *)**(undefined4 **)(param_2 + 0x10);
    do {
      if (*piVar2 == param_3) goto LAB_82d4d2a0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = -1;
LAB_82d4d2a0:
  *param_1 = (byte)((uint)iVar3 >> 0x1f) ^ 1;
  return;
}

