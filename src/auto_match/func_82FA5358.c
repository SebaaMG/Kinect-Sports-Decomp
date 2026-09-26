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
extern unsigned int lbl_83264210;


undefined8 fn_82FA5358(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x50 + lbl_83264210;
  *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 4);
  *param_2 = 0;
  if (*(undefined4 **)(iVar1 + 0x14) == (undefined4 *)0x0) {
    *(undefined4 **)(iVar1 + 0x10) = param_2;
  }
  else {
    **(undefined4 **)(iVar1 + 0x14) = param_2;
  }
  *(undefined4 **)(iVar1 + 0x14) = param_2;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return 1;
}

