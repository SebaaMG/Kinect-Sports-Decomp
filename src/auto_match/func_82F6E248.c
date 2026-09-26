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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68BF0();


uint fn_82F6E248(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 - 1 & param_2) == 0) {
    if (param_2 < 5) {
      param_2 = 4;
    }
    uVar3 = param_2 + 3 + param_1;
    if (uVar3 < param_1) {
      puVar1 = (undefined4 *)fn_82F68240();
      *puVar1 = 0xc;
      return 0;
    }
    iVar2 = fn_82F68BF0(uVar3);
    if (iVar2 != 0) {
      uVar3 = iVar2 + param_2 + 3 & ~(param_2 - 1);
      *(int *)(uVar3 - 4) = iVar2;
      return uVar3;
    }
  }
  else {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

