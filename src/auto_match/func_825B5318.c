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
extern int fn_82573EE0();
extern int fn_825B5718();
extern int fn_825B57D8();
extern unsigned int lbl_821C8470;


undefined4 * fn_825B5318(undefined4 *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = &lbl_821C8470;
  uVar1 = (**(code **)(*param_2 + 0x1c))(param_2);
  uVar2 = fn_82573EE0(uVar1,0);
  param_1[1] = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x3c))(param_2);
  param_1[2] = uVar2;
  param_1[3] = param_2 + 0x34;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_1[1] != 0) {
    uVar1 = (**(code **)(*param_2 + 0x1c))(param_2);
    fn_82573EE0(uVar1,0);
    iVar3 = fn_825B5718();
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + iVar3;
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + iVar3;
    fn_825B57D8(param_1);
  }
  return param_1;
}

