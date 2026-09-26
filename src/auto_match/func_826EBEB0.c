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
extern int fn_826EBAF0();


void fn_826EBEB0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  fn_826EBAF0(param_1,param_1,(ulonglong)(uint)param_1[1] + 1);
  iVar2 = param_1[1] * 0x14 + *param_1;
  if (iVar2 != 0x14) {
    puVar1 = (undefined4 *)(param_2 + -4);
    puVar3 = (undefined4 *)(iVar2 + -0x18);
    lVar4 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

