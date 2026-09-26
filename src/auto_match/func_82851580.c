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
extern int fn_828514C0();
extern int fn_82860A40();
extern int fn_82F65390();


undefined8 fn_82851580(undefined8 param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82F65390(param_2 + 0xc,0xffffffff8201f5b0,0xe);
  if (iVar2 == 0) {
    fn_828514C0(*(undefined4 *)(param_2 + 0x130));
    if (*(int *)(param_2 + 0x120) != 0) {
      fn_82860A40();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

