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
extern int fn_8267B6F8();
extern int fn_826AAB70();
extern int fn_8278E4C0();
extern int fn_8278E638();


void fn_826F6DD0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x11c);
  if (iVar1 != 0) {
    fn_8278E4C0(iVar1,1);
    fn_8278E638(*(undefined4 *)(*(int *)(param_1 + 4) + 0x11c),1);
  }
  fn_826AAB70((ulonglong)*(uint *)(param_1 + 4) + 0x18);
  uVar2 = fn_8267B6F8(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

