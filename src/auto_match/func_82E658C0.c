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
extern unsigned int lbl_821550CC;
extern unsigned int lbl_821550E0;
extern unsigned int lbl_821550F4;


undefined4 * fn_82E658C0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1[1] = &lbl_821550CC;
  *param_1 = &lbl_821550F4;
  param_1[4] = param_3;
  param_1[1] = &lbl_821550E0;
  param_1[2] = 1;
  puVar3 = param_1 + 5;
  param_1[3] = 0;
  lVar1 = (**(code **)(*param_2 + 0x14))(param_2,puVar3);
  if (-1 < lVar1) {
    if (*puVar3 < (uint)param_1[4]) {
      lVar1 = -0x7ff8ffa9;
    }
    else {
      uVar2 = *puVar3 - param_1[4];
      param_1[3] = param_2;
      *puVar3 = uVar2;
      param_1[6] = uVar2;
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  *param_4 = (int)lVar1;
  return param_1;
}

