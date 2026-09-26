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
extern int fn_8267BE38();
extern int fn_8278BCF0();


void fn_8278C0A8(int param_1,int *param_2)

{
  ushort uVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    fn_8267BE38(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = *(ushort *)(param_1 + 0x16) & 0xffbf;
  }
  else {
    fn_8278BCF0();
    uVar1 = *(ushort *)(param_1 + 0x16) | 0x40;
  }
  *(ushort *)(param_1 + 0x16) = uVar1;
  return;
}

