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
extern unsigned int *auStack_22e;
extern int fn_82284B08();
extern int fn_822A21A8();
extern int fn_82476478();
extern int fn_82476CB8();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82478B70(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_22e [558];
  
  iVar1 = fn_822A21A8();
  if (iVar1 == 0) {
    fn_82476478(param_1,param_2 + 0x10);
    if (param_4 != 0) {
      if ((*(int *)(param_2 + 0x1a0) == 0) && (*(int *)(*(int *)(param_2 + 0x1b0) + 0x358) == 0)) {
        fn_82476CB8(param_2 + 0x10);
        *(undefined4 *)(param_2 + 0x1a0) = 1;
      }
      if (*(int *)(param_2 + 0x1bc) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_22e,0,0x1fe);
      }
    }
    if (*(int *)(param_2 + 0x1bc) != 0) {
      fn_82284B08(param_1);
    }
  }
  return;
}

