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
extern int fn_82F681D0();
extern int fn_82F6F960();
extern unsigned int lbl_831BB648;
extern unsigned int lbl_831BB64C;


void fn_82F682B0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_82F6F960();
  puVar3 = (undefined4 *)&lbl_831BB648;
  puVar4 = &lbl_831BB64C;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)(iVar1 + 0xc);
  }
  *puVar4 = (int)param_1;
  iVar1 = fn_82F6F960();
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
  }
  uVar2 = fn_82F681D0(param_1);
  *puVar3 = uVar2;
  return;
}

