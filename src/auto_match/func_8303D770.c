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
extern int fn_82FA5060();
extern int fn_8304CC68();
extern int fn_8304CCB8();
extern unsigned int lbl_8217D5E0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


int * fn_8303D770(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82FA5060(lbl_831BC768,0x38);
  if (piVar1 != (int *)0x0) {
    fn_8304CC68(piVar1,param_1,param_2);
    *piVar1 = (int)&lbl_8217D5E0;
    iVar2 = lbl_821AAD20;
    piVar1[10] = lbl_821AAD20;
    piVar1[0xb] = iVar2;
    piVar1[0xc] = iVar2;
    piVar1[0xd] = 2;
    iVar2 = fn_8304CCB8(piVar1);
    if (iVar2 == 1) {
      return piVar1;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return (int *)0x0;
}

