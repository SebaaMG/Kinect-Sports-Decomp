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
extern unsigned int lbl_820E7F9F;


bool fn_82BC27A0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 + 0x3a) * 4 + param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)((param_2 + 0x14) * 4 + param_1);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x50);
  }
  if ((&lbl_820E7F9F)[iVar1 * 0xc] != '\x01') {
    return (&lbl_820E7F9F)[iVar1 * 0xc] == '\x02';
  }
  return (bool)2;
}

