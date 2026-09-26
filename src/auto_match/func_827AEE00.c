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
extern int fn_827AEAC0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


int fn_827AEE00(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  uVar1 = fn_827AEAC0(param_1,0,param_1[1],&stack0x0000001c,0xffffffff827aea98);
  if (((uint)param_1[1] <= uVar1) ||
     (iVar2 = uVar1 * 0x28 + *param_1, *(int *)(iVar2 + 0x14) != param_2)) {
    iVar2 = 0;
  }
  return iVar2;
}

