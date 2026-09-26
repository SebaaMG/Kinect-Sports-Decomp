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
extern int fn_83058758();
extern int fn_83059948();
extern int fn_8305B068();
extern int fn_8305B2D0();


void fn_8305B698(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 3) {
    uVar2 = fn_8305B2D0(param_1 + 0x28,0);
    fn_83058758(*(undefined4 *)(param_1 + 0xc),uVar2,param_2,param_2);
  }
  else if (iVar1 == 4) {
    uVar2 = fn_8305B2D0(param_1 + 0x14,0);
    fn_83059948(*(undefined4 *)(param_1 + 8),uVar2,param_2,param_2);
  }
  else if (iVar1 == 0x3f) {
    uVar2 = fn_8305B2D0(param_1 + 0x3c,0);
    fn_8305B068(*(undefined4 *)(param_1 + 0x10),uVar2,param_2,param_2);
  }
  return;
}

