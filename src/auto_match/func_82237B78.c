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
extern int fn_82237BF8();
extern int fn_82237E40();


void fn_82237B78(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  do {
    if (puVar3[3] == 0) {
      cVar2 = fn_82237E40(puVar3);
      bVar1 = true;
      if (cVar2 == '\0') goto LAB_82237bbc;
    }
    else {
LAB_82237bbc:
      bVar1 = false;
    }
    if (bVar1) {
      fn_82237BF8(puVar3,param_1);
      return;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

