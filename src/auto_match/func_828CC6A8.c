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
extern int fn_82897CE0();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CC6A8(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  fn_82897CE0(*(undefined4 *)(param_1 + 0x6c),param_2,param_1 + 0x98,
                    (undefined4 *)(param_1 + 0x80));
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 < 8) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828E9FF8(param_2,8);
  }
  piVar1 = *(int **)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0xac) = uVar4;
  (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_1 + 0x6c),param_2,param_1 + 0x88);
  return;
}

