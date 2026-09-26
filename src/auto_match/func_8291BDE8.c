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
extern int fn_82631D68();
extern int fn_8265C940();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_8291BDE8(int param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 0xc) = (int)param_3;
  uVar2 = fn_8265C940(param_3,0x24810000);
  *(int *)(param_1 + 8) = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    if (param_4 == '\0') {
      fn_82F68CC0(uVar2,param_2,*(undefined4 *)(param_1 + 0xc));
    }
    else {
      fn_82631D68(param_2,uVar2);
    }
    puVar1 = *(uint **)(param_1 + 8);
    *(uint **)(param_1 + 0x10) = puVar1;
    if (*puVar1 < 0x1c) {
      return 0xffffffff88760b59;
    }
    uVar2 = fn_8265C940(puVar1[3] << 2,0x24810000);
    *(int *)(param_1 + 0x14) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,*(int *)(*(int *)(param_1 + 0x10) + 0xc) << 2);
    }
  }
  return 0xffffffff8007000e;
}

