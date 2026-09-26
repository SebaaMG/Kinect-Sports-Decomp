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
extern int fn_82278950();
extern int fn_82289670();
extern int fn_8229E090();


void fn_8228AE00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    *(undefined4 *)(param_2 + 0x11f8) = 0;
    return;
  }
  if (param_1 == 0) {
    fn_82289670(param_2,1);
    *(undefined4 *)(param_2 + 0x6e8) = 4;
    iVar1 = *(int *)(param_2 + 0x634);
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    fn_82278950(*(undefined4 *)(iVar1 + 0xb0));
    uVar2 = 7;
    if (*(int *)(param_2 + 0x600) == 5) goto LAB_8228ae70;
  }
  uVar2 = 3;
LAB_8228ae70:
  *(undefined4 *)(param_2 + 0x604) = uVar2;
  fn_8229E090(*(undefined4 *)(param_2 + 0x11f8),0,1);
  *(undefined4 *)(param_2 + 0x11f8) = 0;
  return;
}

