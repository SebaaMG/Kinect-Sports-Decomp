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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B4ABF8();
extern int fn_82B85298();
extern int fn_82B8AB60();


ulonglong fn_82B4B9A8(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  uVar1 = param_2[1];
  uVar2 = uVar1 & 3;
  if ((uVar1 & 3) == 0) {
    if ((*(uint *)(param_1 + 0x234) ==
         (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) ||
       (((*(uint *)((uVar1 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) == 0 &&
        ((*(uint *)(param_1 + 0x2c) & 2) == 0)))) {
      puVar4 = (uint *)fn_82B8AB60(auStack_18,param_1,param_2[1] >> 0x11,
                                         param_2[1] >> 2 & 0x3fff);
    }
    else {
      puVar4 = (uint *)fn_82B85298(auStack_20,param_1,*(uint *)(param_1 + 0x234),
                                         param_2[1] >> 0x11,param_2[1] >> 2 & 0x3fff);
    }
    return (ulonglong)*puVar4;
  }
  if (uVar2 == 1) {
    return (ulonglong)*param_2;
  }
  if (uVar2 < 3) {
    return (ulonglong)*(uint *)(*param_2 + 0xc);
  }
  if (uVar2 == 3) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      uVar3 = fn_82B4ABF8(param_1,(undefined8 *)*param_2,*(undefined8 *)*param_2,0);
      return uVar3;
    }
    uVar3 = ((int (*)())fn_82B4B9A8)();
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

