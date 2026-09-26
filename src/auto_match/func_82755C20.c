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
extern int fn_827AECA8();


void fn_82755C20(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  param_1[4] = *param_2;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar3 + *param_1) + 0x154);
      if (iVar1 != 0) {
        fn_827AECA8(iVar1,param_1 + 4);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}

