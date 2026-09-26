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
extern int fn_8265CA20();
extern int fn_828D53C0();
extern unsigned int lbl_82026D6C;
extern unsigned int uStack_30;


void fn_828D74B0(undefined4 *param_1)

{
  int *piVar1;
  undefined1 uStack_30;
  
  *param_1 = &lbl_82026D6C;
  if (0xf < (uint)param_1[0xc]) {
    fn_8265CA20(param_1[7]);
  }
  piVar1 = param_1 + 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*piVar1 != 0) {
    fn_828D53C0(*piVar1,param_1[4],param_1 + 6,uStack_30);
    fn_8265CA20(*piVar1);
  }
  *piVar1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

