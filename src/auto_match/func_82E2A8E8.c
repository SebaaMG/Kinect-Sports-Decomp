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
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F691F0();


undefined8 fn_82E2A8E8(void)

{
  int iVar1;
  ulonglong uVar2;
  int *in_r6;
  
  uVar2 = fn_82E4FE08(0x48);
  *in_r6 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    iVar1 = *in_r6;
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x3c) + 8))();
        *(undefined4 *)(iVar1 + 0x3c) = 0;
      }
      if (*(int *)(iVar1 + 0x44) != 0) {
        fn_82E4FE40();
        *(undefined4 *)(iVar1 + 0x44) = 0;
      }
      fn_82E4FE40(*in_r6);
    }
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,0x48);
}

