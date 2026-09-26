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
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int lbl_821CAB38;


void fn_825BC908(int param_1)

{
  short sVar1;
  int iVar2;
  
  do {
    if ((param_1 == 0) || (sVar1 = *(short *)(param_1 + 0xc), sVar1 == 0)) {
      return;
    }
    if ((sVar1 == 4) || (sVar1 == 0x10)) {
      iVar2 = param_1 + 0x10;
LAB_825bc978:
      iVar2 = fn_8251F720(iVar2,0);
      if (iVar2 != 0) {
        fn_8251FA58();
      }
    }
    else if ((((sVar1 == 0x11) || (sVar1 == 0x12)) || (sVar1 == 0x13)) || (sVar1 == 0x14)) {
      iVar2 = param_1 + 0x14;
      goto LAB_825bc978;
    }
    param_1 = *(int *)(&lbl_821CAB38 + (uint)*(ushort *)(param_1 + 0xc) * 4) + param_1;
  } while( true );
}

