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
extern int fn_82F664B0();
extern int fn_82F6D460();


undefined8 fn_82BFA920(ulonglong param_1,ulonglong param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 & 0xffffffff) != 0) && ((param_2 & 0xffffffff) != 0)) {
    iVar2 = fn_82F6D460(param_1,0x104);
    iVar3 = fn_82F6D460(param_2,0x104);
    if ((uint)(iVar3 + iVar2) < 0x103) {
      fn_82F664B0(param_3,0x104,param_1);
      puVar1 = (undefined1 *)(iVar2 + param_3);
      if (puVar1[-1] != '\\') {
        iVar2 = iVar2 + 1;
        *puVar1 = 0x5c;
      }
      fn_82F664B0(iVar2 + param_3,0x104 - iVar2,param_2);
      return 1;
    }
  }
  return 0;
}

