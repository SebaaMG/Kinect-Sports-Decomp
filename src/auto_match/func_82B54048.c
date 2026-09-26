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
extern int fn_82B52E60();
extern int fn_82B53DA8();


void fn_82B54048(int param_1,int param_2,undefined4 param_3,int param_4,ulonglong param_5,
                  undefined4 param_6)

{
  int iVar1;
  
  param_2 = param_2 * 0x28;
  if ((*(uint *)(param_2 + *(int *)(param_1 + 0xc) + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if ((*(uint *)(param_4 + 0x2c) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdac,0xffffffff820d8970);
  }
  if (0x3fff < *(uint *)(param_4 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdbf);
  }
  if (*(int *)(param_4 + 0x48) != 0) {
    fn_82B52E60(param_1);
  }
  *(uint *)(param_2 + *(int *)(param_1 + 0xc)) =
       (*(uint *)(param_4 + 0x14) & 0x3fff) << 3 |
       *(uint *)(param_2 + *(int *)(param_1 + 0xc)) & 0xfffe0007;
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0xc) + 0x14) = *(undefined4 *)(param_4 + 0x30);
  *(int *)(param_2 + *(int *)(param_1 + 0xc) + 0x10) = param_4;
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0xc) + 0xc) = param_3;
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0xc) + 0x20) = param_6;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x7ffff;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar1 + 8) =
       (uint)((param_5 & 0xffffffff) << 0x13) & 0x380000 | *(uint *)(iVar1 + 8) & 0xffc7ffff;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = param_2 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x70;
  if (*(int *)(param_4 + 0x30) != 0) {
    fn_82B53DA8(param_1,param_2 + *(int *)(param_1 + 0xc),*(undefined4 *)(param_4 + 0x2c),
                  *(int *)(param_4 + 0x30),param_5);
  }
  return;
}

