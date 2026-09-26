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
extern int fn_82F6AC80();
extern int fn_82F6BF90();
extern int fn_82F6C114();
extern unsigned int uStack00000014;


ulonglong fn_82F6C060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  uint uVar3;
  int iVar4;
  undefined4 uStack00000014;
  
  uStack00000014 = (undefined4)param_1;
  if ((param_1 == 0) || (((iVar4 = (int)param_3, iVar4 != 0 && (iVar4 != 1)) && (iVar4 != 2)))) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F6AC80(param_1);
    uVar3 = fn_82F6BF90(param_1,param_2,param_3,param_4,param_5,param_6);
    fn_82F6C114();
    uVar1 = (ulonglong)uVar3;
  }
  return uVar1;
}

