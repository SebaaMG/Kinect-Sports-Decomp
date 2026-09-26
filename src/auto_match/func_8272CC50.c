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
extern int fn_82722B00();
extern int fn_827912D8();
extern int fn_827A5000();


void fn_8272CC50(int *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(param_1[0x28] + 0x114) == 0) {
    fn_82722B00();
  }
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    param_2 = ((param_2 & 0xffffffff) >> 0x1f) - 1 & param_2;
    param_3 = ((param_3 & 0xffffffff) >> 0x1f) - 1 & param_3;
    uVar1 = fn_827912D8(*(undefined4 *)(param_1[0x28] + 8));
    if ((int)uVar1 < (int)param_2) {
      param_2 = uVar1;
    }
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    fn_827A5000(*(undefined4 *)(param_1[0x28] + 0x114),param_2,param_3);
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
    }
  }
  return;
}

