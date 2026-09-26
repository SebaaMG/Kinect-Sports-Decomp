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
extern int fn_82FF6060();


undefined8 fn_82FF8108(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    puVar1 = puVar3;
    if (puVar1 == (undefined4 *)0x0) {
      return 2;
    }
    if (puVar1[1] == param_2) break;
    puVar3 = (undefined4 *)*puVar1;
    puVar2 = puVar1;
  }
  fn_82FF6060(param_1,puVar1,puVar2);
  return 1;
}

