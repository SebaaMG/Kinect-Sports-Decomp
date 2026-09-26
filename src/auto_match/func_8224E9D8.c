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
extern unsigned int *auStack_30;
extern int fn_8224EA58();
extern int fn_82F68CC0();
extern unsigned int lbl_821961E8;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_8224E9D8(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint auStack_30 [4];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_30[0] = param_2[4];
  uStack_20 = 0;
  uStack_18 = 0;
  if (auStack_30[0] < 0x10) {
    puVar1 = auStack_30;
  }
  else {
    puVar1 = &lbl_821961E8;
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  fn_82F68CC0(&uStack_20,param_2,*puVar1);
  fn_8224EA58(param_1,&uStack_20);
  return;
}

