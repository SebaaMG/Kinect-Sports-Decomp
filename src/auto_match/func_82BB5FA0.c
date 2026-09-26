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


undefined8 fn_82BB5FA0(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 8);
  do {
    cVar1 = (**(code **)(*(int *)*puVar3 + 4))((int *)*puVar3,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 2);
  return 1;
}

