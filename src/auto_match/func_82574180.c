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
extern int fn_822315A0();
extern int fn_825B4F08();
extern int fn_827D5070();


void fn_82574180(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = fn_827D5070(*param_1);
  if (*(int *)(*(int *)(iVar1 + 0x10) + 0x48) != 0) {
    uVar2 = fn_825B4F08(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x48),
                              *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x50));
    *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x5c) = uVar2;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

