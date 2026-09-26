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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82F691F0();


longlong fn_82E6FC88(int param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 auStack_40 [4];
  ulonglong auStack_38 [7];
  
  auStack_38[0] = 0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_38);
  if ((-1 < lVar1) && (auStack_38[0] < param_2)) {
    auStack_40[0] = 0;
    lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x30))(*(int **)(param_1 + 0x58),auStack_40);
    if (-1 < lVar1) {
      lVar2 = (param_2 & 0xffffffff) - (auStack_38[0] & 0xffffffff);
      lVar1 = fn_82E50BE8(lVar2,0,0,0,0);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar1,0,lVar2);
      }
      lVar1 = -0x7ff8fff2;
    }
  }
  return lVar1;
}

