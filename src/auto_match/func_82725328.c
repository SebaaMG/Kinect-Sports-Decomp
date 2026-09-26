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
extern int fn_8267C4F0();
extern unsigned int lbl_82010E7C;


undefined4 * fn_82725328(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 1;
  *param_1 = &lbl_82010E7C;
  *(undefined1 *)(param_1 + 2) = 0xe;
  iVar1 = (**(code **)(param_1[-0x36] + 0x40))(param_1 + -0x36);
  iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xc))((int *)(iVar1 + 8),3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    }
    fn_8267C4F0();
  }
  return param_1;
}

