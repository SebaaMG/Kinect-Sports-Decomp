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
extern int fn_8256E1D8();


int fn_8266D3E0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    iVar1 = param_3 - (int)param_1;
    puVar3 = param_1 + 2;
    do {
      fn_8256E1D8(param_3,puVar3[-2],puVar3[-1]);
      param_3 = param_3 + 0xc;
      *(undefined4 *)((int)puVar3 + iVar1) = *puVar3;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 3;
    } while (puVar2 != param_2);
  }
  return param_3;
}

