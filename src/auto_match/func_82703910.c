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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826CD3B0();
extern int fn_826CECC8();


void fn_82703910(int param_1,undefined4 *param_2)

{
  param_2[1] = 0;
  if (param_2[3] != 0) {
    fn_8267C498();
  }
  param_2[3] = 0;
  if (param_2[2] != 0) {
    fn_8267C498();
  }
  param_2[2] = 0;
  if (((*(byte *)(param_2 + 10) & 2) == 0) && (param_2[8] != 0)) {
    fn_826824B0();
  }
  param_2[8] = 0;
  if (((*(byte *)(param_2 + 10) & 1) == 0) && (param_2[9] != 0)) {
    fn_826824B0();
  }
  param_2[9] = 0;
  fn_826CD3B0(param_2 + 0xc,0);
  if (*(uint *)(param_1 + 0x54) < 0x32) {
    *param_2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 **)(param_1 + 0x4c) = param_2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    fn_826CECC8(param_2);
    fn_8267BE38(param_2);
  }
  return;
}

