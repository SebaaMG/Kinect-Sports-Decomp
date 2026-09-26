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
extern int fn_82F339C0();
extern int fn_82F33B70();
extern int fn_82F691F0();


undefined8 fn_82F33E60(undefined2 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined2 *)0x0) {
    if (*(int *)(param_1 + 4) != 0) {
      return 0xffffffff8002000d;
    }
    iVar1 = *(int *)(param_1 + 6);
    if (iVar1 != 0) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 2);
      uVar2 = fn_82F33B70(*param_1,uVar3,param_1 + 8);
      if ((param_2 != 0) &&
         (fn_82F339C0(param_1,iVar1,uVar2,param_1[1],uVar3), (param_1[1] & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 6),0,uVar2);
      }
      if (((param_1[1] & 7) == 0) || ((param_1[1] & 0x1000) != 0)) {
        fn_82E4FE40(*(undefined4 *)(param_1 + 6));
        *(undefined4 *)(param_1 + 6) = 0;
      }
    }
  }
  return 0;
}

