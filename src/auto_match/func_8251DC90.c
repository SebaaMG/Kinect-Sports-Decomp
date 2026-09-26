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
extern int fn_825269D0();


void fn_8251DC90(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x8ac);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar1 = (undefined4 *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x8ac) = 0;
  puVar2 = (undefined4 *)(param_2 + -4);
  lVar3 = 5;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_825269D0(0x54,param_1);
  return;
}

