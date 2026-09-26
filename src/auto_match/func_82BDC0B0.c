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
extern int fn_82BD7AE8();


void fn_82BDC0B0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_3;
  iVar2 = fn_82BD7AE8(*(undefined4 *)((param_2 + 0x14) * 4 + param_1),2,puVar1);
  if (iVar2 < 0) {
    *puVar1 = 0;
    puVar1[1] = puVar1[3];
  }
  param_3[1] = 0;
  param_1 = param_2 * 8 + param_1;
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined4 **)(param_1 + 100) = param_3;
  }
  else {
    *(undefined4 **)(*(int *)(param_1 + 0x68) + 4) = param_3;
  }
  *(undefined4 **)(param_1 + 0x68) = param_3;
  return;
}

