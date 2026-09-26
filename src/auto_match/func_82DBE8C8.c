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
extern int fn_82D98A88();
extern unsigned int lbl_8323B1A0;


int * fn_82DBE8C8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  do {
    switch(uVar1) {
    case 0:
    case 8:
    case 0xf:
      return param_1 + 0xc;
    case 1:
    case 2:
    case 6:
    case 7:
    case 9:
    case 0xe:
      return param_1 + 0x24;
    default:
      return (int *)&lbl_8323B1A0;
    case 0xc:
      param_1 = (int *)param_1[6];
      break;
    case 0xd:
      param_1 = (int *)fn_82D98A88(param_1);
    }
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  } while( true );
}

