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
extern int fn_8279C838();


void fn_8279C8A8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *param_1 + 0x28) == param_2) {
        fn_8279C838(param_1,uVar3);
      }
      else {
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x30;
      }
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar1);
  }
  return;
}

