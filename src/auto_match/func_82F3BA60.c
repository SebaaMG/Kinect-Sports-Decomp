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
extern int fn_82E4FE40();
extern int fn_82E50BE8();


undefined8 fn_82F3BA60(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    if (((*(uint *)(param_1 + 0x4c) & 1) != 0) &&
       ((ulonglong)*(uint *)(param_1 + 0x6c) < (param_2 & 0xffffffff))) {
      if (*(int *)(param_1 + 0x70) != 0) {
        fn_82E4FE40();
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      iVar2 = fn_82E50BE8(param_2 * 6,0,0,0,0);
      *(int *)(param_1 + 0x70) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff8007000e;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

