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
extern int fn_82E50F00();
extern int fn_82E51028();


longlong fn_82E52208(int param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  fn_82E50F00(param_1 + 4,1);
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((-1 < lVar1) && (uVar2 = 0, *(int *)(param_1 + 0x48) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x40) + lVar3;
      lVar1 = (**(code **)(*param_2 + 0x48))(param_2,lVar1,lVar1 + 0x10);
      if (lVar1 < 0) break;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar2 < *(uint *)(param_1 + 0x48));
  }
  fn_82E51028(param_1 + 4,1);
  return lVar1;
}

