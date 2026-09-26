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
extern int fn_82522D98();
extern int fn_825C44A8();


undefined8 fn_825C40B0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((*(int *)(param_2 + 8) + 3) * 4 + param_1) == 0) {
    if ((ulonglong)*(uint *)(param_1 + 0x18) == 0) {
      return 0;
    }
    uVar1 = fn_825C44A8((ulonglong)*(uint *)(param_1 + 0x18) + 0xb90,
                            *(undefined4 *)(param_1 + 4),*(int *)(param_2 + 8),
                            *(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)((*(int *)(param_2 + 8) + 3) * 4 + param_1) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

