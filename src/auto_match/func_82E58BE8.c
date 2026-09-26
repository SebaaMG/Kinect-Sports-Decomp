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


undefined8 fn_82E58BE8(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)param_1[0x38], puVar1 != (undefined4 *)0x0)) {
    *param_2 = *puVar1;
    iVar2 = puVar1[1];
    param_1[0x38] = iVar2;
    if (iVar2 == 0) {
      param_1[0x39] = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    puVar1[1] = *param_1;
    *param_1 = (int)puVar1;
    param_1[0x3a] = param_1[0x3a] + -1;
    return 1;
  }
  return 0;
}

