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
extern unsigned int *auStack_cec;
extern int fn_8264D6C0();
extern int fn_82F691F0();


undefined8
fn_82650AB0(int param_1,ulonglong param_2,uint *param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_cec [3308];
  
  *(int *)(param_1 + 0x5c0c) = *(int *)(param_1 + 0x5c0c) + 1;
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x5608,0,0x600);
  }
  lVar2 = ((((ulonglong)*param_3 + param_5 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) +
          ((ulonglong)*param_3 + param_5 & 0x1fffffff);
  iVar1 = (int)lVar2;
  if ((*(int *)(iVar1 + -0x3ffffffc) == 0) && (*(uint *)(iVar1 + -0x3ffffff8) < 3)) {
    if ((*(uint *)(iVar1 + -0x3ffffff0) <= *(uint *)(param_1 + 0x558c)) &&
       (*(uint *)(iVar1 + -0x3fffffec) <= *(uint *)(param_1 + 0x5590))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_cec,0,0x34);
    }
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
  }
  fn_8264D6C0(lVar2 + -0x40000000,lVar2 + -0x3ffff9dc,0);
  *(int *)(param_1 + 0x5c0c) = *(int *)(param_1 + 0x5c0c) + -1;
  return uVar3;
}

