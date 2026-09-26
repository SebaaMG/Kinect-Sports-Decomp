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
extern int fn_82414950();
extern int fn_8241F138();


void fn_824937A8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x194);
  *(undefined4 *)(iVar2 + 0x200) = 1;
  *(undefined4 *)(iVar2 + 0x2a4) = 1;
  fn_82414950(*(undefined4 *)(iVar1 + 0x2b50),0,0x1d);
  *(undefined4 *)(iVar1 + 0x2b40) = 0;
  fn_8241F138(*(undefined4 *)(iVar1 + 0x2b20));
  return;
}

