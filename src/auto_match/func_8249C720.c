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
extern unsigned int *auStack_21e;
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_82F691F0();
extern unsigned int lbl_8327F894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8249C720(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_21e [518];
  
  bVar2 = false;
  if (((*(int *)(param_1 + 0x70) != 0) &&
      (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x844) + 0x358), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x118) & 0x40) != 0)) {
    bVar2 = true;
  }
  if (bVar2 != (*(int *)(param_1 + 0x9c) != 0)) {
    if (bVar2 != false) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_21e,0,0x1fe);
    }
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    fn_82284B08((double)lbl_8327F894);
  }
  return;
}

