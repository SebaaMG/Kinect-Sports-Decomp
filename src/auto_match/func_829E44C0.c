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
extern int fn_829E5870();
extern int fn_829E59A8();
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82057B5C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829E44C0(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else if (*(int *)(param_1 + 0xac) == 0) {
    uVar2 = fn_829E5870(param_1 + 8,param_2,0);
    if ((-1 < (int)uVar2) && (uVar2 = fn_829E59A8(param_1 + 0x24,param_1 + 8), -1 < (int)uVar2))
    {
      *(int *)(param_1 + 4) = (int)param_2;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0xac) = 1;
      uVar1 = lbl_82057B5C;
      *(undefined4 *)(param_1 + 0xe0) = lbl_82015BD8;
      *(undefined4 *)(param_1 + 0xe8) = uVar1;
    }
  }
  else {
    uVar2 = 0xffffffff8000ffff;
  }
  return uVar2;
}

