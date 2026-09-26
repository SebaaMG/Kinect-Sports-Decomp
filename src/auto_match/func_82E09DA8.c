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
extern int fn_82CEAC20();
extern int fn_82CFBBF0();


undefined8 fn_82E09DA8(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_82CEAC20();
  iVar2 = fn_82CFBBF0(uVar1,0xffffffff82130870);
  if ((((iVar2 != 0) && (iVar2 = fn_82CFBBF0(uVar1,0xffffffff82130d70), iVar2 != 0)) &&
      (iVar2 = fn_82CFBBF0(uVar1,0xffffffff821308dc), iVar2 != 0)) &&
     (iVar2 = fn_82CFBBF0(uVar1,0xffffffff821308cc), iVar2 != 0)) {
    return 1;
  }
  return 0;
}

