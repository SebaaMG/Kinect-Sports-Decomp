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
extern unsigned int lbl_82155118;


undefined4 * fn_82E659E0(undefined4 *param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  piVar4 = param_1 + 3;
  param_1[4] = 0;
  puVar3 = param_1 + 4;
  param_1[5] = 0;
  *param_1 = &lbl_82155118;
  param_1[1] = 1;
  lVar2 = (**(code **)(*param_2 + 0xc))(param_2,piVar4,puVar3,0);
  if (-1 < lVar2) {
    if (*puVar3 < param_3) {
      lVar2 = -0x7ff8ffa9;
      pcVar1 = *(code **)(*param_2 + 0x10);
    }
    else {
      param_1[2] = param_2;
      *puVar3 = *puVar3 - param_3;
      *piVar4 = *piVar4 + param_3;
      pcVar1 = *(code **)(*param_2 + 4);
    }
    (*pcVar1)(param_2);
  }
  *param_4 = (int)lVar2;
  return param_1;
}

