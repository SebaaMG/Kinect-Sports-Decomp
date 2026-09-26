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
extern int fn_829E9F88();
extern int fn_82A28E60();
extern unsigned int lbl_832179FC;


void fn_829EABB8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[2];
  for (uVar2 = (ulonglong)(uint)param_1[1]; (uVar2 & 0xffffffff) != (ulonglong)uVar1;
      uVar2 = uVar2 + 0x24) {
    fn_829E9F88(uVar2,0);
  }
  if (*param_1 != 0) {
    fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

