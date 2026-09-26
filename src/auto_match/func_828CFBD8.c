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
extern int fn_828AC4E8();
extern int fn_82CE0730();


void fn_828CFBD8(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  iVar1 = fn_82CE0730(param_2,0,0,0,1);
  puVar3 = (undefined1 *)(param_2 + -1);
  puVar2 = (undefined1 *)(param_1 + -1);
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  fn_828AC4E8(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(bool *)(param_1 + 0xc) = iVar1 == 0;
  return;
}

