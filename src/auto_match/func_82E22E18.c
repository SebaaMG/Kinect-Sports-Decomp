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
extern int fn_82A1E650();
extern int fn_82A1E658();


void fn_82E22E18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(undefined4 *)(param_1 + 0x1f8) = 1;
    fn_82A1E650(iVar1,0xffffffffffffffff);
    fn_82A1E658(*(undefined4 *)(param_1 + 0x1fc));
  }
  if ((*(int *)(param_1 + 0x200) != 0) && (*(int *)(param_1 + 0x200) != -1)) {
    fn_82A1E658();
  }
  return;
}

