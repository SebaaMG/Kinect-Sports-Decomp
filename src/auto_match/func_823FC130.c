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
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B72C4;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_823FC130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  struct { undefined4 first; int second; } stack_pair_40;

  struct { undefined4 first; int second; } stack_pair_38;


  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    stack_pair_38.first = *param_3;
    iVar1 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    stack_pair_40.first = *param_2;
    iVar2 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_1[4] = 0;
    param_1[3] = &lbl_821B72C4;
    stack_pair_40.second = iVar2;
    stack_pair_38.second = iVar1;
    fn_82365BD8(param_1 + 7,&stack_pair_40.first);
    fn_82365BD8(param_1 + 9,&stack_pair_38.first);
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return param_1;
}
