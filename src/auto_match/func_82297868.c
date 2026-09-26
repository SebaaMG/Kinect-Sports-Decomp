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
extern int fn_82297488();
extern int fn_822975D8();
extern int fn_822977A8();
extern int fn_82F68CC0();


undefined4 * fn_82297868(undefined4 *param_1,undefined8 param_2,int param_3)

{
  char cVar2;
  undefined4 *puVar1;
  
  cVar2 = fn_82297488();
  if (cVar2 == '\0') {
    cVar2 = fn_822977A8(param_1,param_3,0);
    if (cVar2 != '\0') {
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      fn_82F68CC0(puVar1,param_2,param_3 * 2);
      param_1[4] = param_3;
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      *(undefined2 *)(param_3 * 2 + (int)puVar1) = 0;
    }
  }
  else {
    puVar1 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    param_1 = (undefined4 *)fn_822975D8(param_1,param_1,(int)param_2 - (int)puVar1 >> 1,param_3);
  }
  return param_1;
}

