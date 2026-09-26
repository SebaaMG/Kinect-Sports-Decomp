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
extern int fn_8265C940();
extern int fn_82E23C70();
extern int fn_82E25638();
extern int fn_82E25660();
extern int fn_82E25BC8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E23D00(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar3 = (int *)(param_1 + 0x18);
    fn_82F68CC0(piVar3,param_2,0x30);
    fn_82E23C70(param_1,piVar3);
    iVar1 = fn_82E25BC8(0x57564331);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      fn_82E25638();
      iVar1 = *piVar3 * *(int *)(param_1 + 0x1c) * 4;
      iVar2 = fn_82E25660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 4),5);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x14) = iVar1;
        iVar1 = fn_8265C940(iVar1,0x208c804d);
        *(int *)(param_1 + 0x10) = iVar1;
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1 + 0x5c,0,0x58);
        }
      }
    }
    uVar4 = 0xffffffff80004005;
  }
  else {
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}

