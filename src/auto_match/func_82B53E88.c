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
extern int fn_82AA66A8();
extern int fn_82B53DA8();


void fn_82B53E88(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if ((*(uint *)(*(uint *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (0x3fff < *(uint *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdbf);
    }
    iVar1 = *(int *)(param_2 + 0x10) * 0x28;
    *(uint *)(iVar1 + *(int *)(param_1 + 0xc)) =
         (*(uint *)(param_2 + 0x14) & 0x3fff) << 3 |
         *(uint *)(iVar1 + *(int *)(param_1 + 0xc)) & 0xfffe0007;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28;
    *(uint *)(iVar1 + *(int *)(param_1 + 0xc)) =
         param_3 & 7 | *(uint *)(iVar1 + *(int *)(param_1 + 0xc)) & 0xfffffff8;
    *(undefined4 *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0x14) =
         *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc) + 0xc) = param_4;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x8000000;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x70;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xffc7ffff | 0x100000;
    iVar1 = *(int *)(param_2 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
    fn_82B53DA8(param_1,(ulonglong)*(uint *)(param_2 + 0x10) * 0x28 +
                          (ulonglong)*(uint *)(param_1 + 0xc),0x20,*(undefined4 *)(param_2 + 0x28),2
                 );
  }
  return;
}

