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
extern int fn_82BE5240();
extern int fn_82F65AC0();


bool fn_82BE1BB8(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0xca;
    uVar3 = 0xffffffff820e89d4;
  }
  else {
    if (((char *)*param_2 == (char *)0x0) || (*(char *)*param_2 == '\0')) {
      uVar2 = 0xcb;
    }
    else if (((char *)param_2[1] == (char *)0x0) || (*(char *)param_2[1] == '\0')) {
      uVar2 = 0xcc;
    }
    else {
      if ((param_2[6] != 0) && (iVar1 = fn_82F65AC0(0xffffffff821c6554), iVar1 == 0)) {
        return true;
      }
      uVar2 = 0xd7;
    }
    uVar3 = 0xffffffff82196582;
  }
  iVar1 = fn_82BE5240(param_1,uVar2,uVar3);
  return iVar1 == 0;
}

