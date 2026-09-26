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
extern int fn_827F9DF0();
extern int fn_827F9F98();
extern int fn_827FA120();
extern int fn_827FED00();
extern int fn_82809CB0();
extern unsigned int lbl_821AAD20;


void fn_827F6210(double param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_2 + 0x24;
  fn_82809CB0();
  fn_827FA120(iVar1);
  fn_827F9DF0(iVar1,param_1 < (double)lbl_821AAD20);
  if (*(int *)(param_2 + 0x124) != 0) {
    uVar2 = fn_827F9F98(iVar1);
    fn_827FED00(param_1,uVar2,(int *)(param_2 + 0x124));
  }
  return;
}

