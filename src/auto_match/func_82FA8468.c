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
extern int fn_82FEF488();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_82FEFF98();


void fn_82FA8468(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -0x188;
  fn_82FEFC98(iVar1);
  if ((*(uint *)(param_1 + 0xc) == 0xffffffff) || (param_2 < *(uint *)(param_1 + 0xc))) {
    *(uint *)(param_1 + 0xc) = param_2;
  }
  if (((*(byte *)(param_1 + -0xae) & 0x80) == 0) &&
     ((*(int *)(param_1 + -300) == 0 || ((*(byte *)(param_1 + -0x128) & 0x40) == 0)))) {
    *(byte *)(param_1 + -0xaf) = *(byte *)(param_1 + -0xaf) | 2;
    if (param_2 == 0xffffffff) {
      fn_82FEF488(iVar1);
    }
  }
  else {
    fn_82FEFF98(param_1 + -0x184,0,0);
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  fn_82FEFCC8(iVar1);
  return;
}

