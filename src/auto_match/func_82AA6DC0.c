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
extern int fn_828FCDD8();
extern int fn_82AA6940();
extern unsigned int iStack_1c;


int fn_82AA6DC0(int *param_1)

{
  int iVar1;
  int *piStack00000014;
  int iStack_1c;
  
  iVar1 = param_1[1];
  if ((*(uint *)(iVar1 + 0x28) & 0x10000000) != 0) {
    if (*param_1 != *(int *)(iVar1 + 0x34)) {
      *param_1 = *(int *)(iVar1 + 0x34);
      piStack00000014 = param_1;
      fn_82AA6940(iVar1,0xffffffff80004005);
      fn_828FCDD8(iVar1);
      piStack00000014[1] = 0;
      *(undefined1 *)(piStack00000014 + 2) = 0;
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x9b0) = 0x8000ffff;
  }
  iStack_1c = *(int *)(iVar1 + 0x9b0);
  if (-1 < iStack_1c) {
    iStack_1c = -0x7fff0001;
  }
  return iStack_1c;
}

