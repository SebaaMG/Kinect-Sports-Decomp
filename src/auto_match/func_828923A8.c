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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82890120();
extern unsigned int iStack_2c;
extern unsigned int uStack_4c;


undefined2 * fn_828923A8(undefined2 *param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined4 auStack_60 [5];
  uint uStack_4c;
  int iStack_2c;
  
  uVar1 = *param_2;
  uVar2 = fn_82890120(auStack_60,param_3);
  *param_1 = uVar1;
  fn_82890120(param_1 + 2,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_4c) {
    fn_8265CA20(auStack_60[0]);
  }
  return param_1;
}

