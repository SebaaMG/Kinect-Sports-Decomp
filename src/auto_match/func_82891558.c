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
extern unsigned int *auStack_40;
extern int fn_8223C478();
extern int fn_82897B18();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_82891558(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [64];
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = fn_82897B18(param_5);
  if (0 < iVar1) {
    fn_8223C478(param_3,iVar1,0);
    fn_828E9DB8(param_3,uVar2,iVar1);
  }
  fn_828B5580(auStack_40,param_4 + 8);
  fn_828B5C88(auStack_40,param_2,param_3);
  fn_828B55B0(auStack_40);
  return;
}

