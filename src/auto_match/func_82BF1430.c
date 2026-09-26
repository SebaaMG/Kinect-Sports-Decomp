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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BF1318();


void fn_82BF1430(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x3c;
  fn_82BE5340(iVar2);
  do {
    if (*(int *)(param_1 + 0x44) == 0) {
LAB_82bf1490:
      fn_82BF1318(param_1,param_2);
      return;
    }
    iVar1 = fn_82BE5378(iVar2);
    if ((ulonglong)*(uint *)(iVar1 + 0x18) == (param_2 & 0xffffffff)) {
      iVar2 = fn_82BE5378(iVar2);
      *(undefined4 *)(iVar2 + 0x50) = 0;
      *(undefined4 *)(iVar2 + 0xb0) = 0;
      goto LAB_82bf1490;
    }
    fn_82BE5350();
  } while( true );
}

