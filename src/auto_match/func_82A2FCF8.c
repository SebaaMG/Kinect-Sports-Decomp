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
extern unsigned int *auStack_58;
extern int fn_82A2E058();
extern int fn_82A2E6A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82A2FCF8(int param_1,int param_2,longlong param_3,ulonglong param_4,ulonglong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [88];
  
  while( true ) {
    uVar4 = 0x1000 - (param_5 & 0xfff);
    if ((param_4 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      uVar4 = param_4;
    }
    if ((ulonglong)*(uint *)(param_2 + 0x1c) <= (param_5 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_3,0,uVar4);
    }
    uVar2 = fn_82A2E6A8(param_1,param_2,param_5,&uStack_60,auStack_58,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82A2E058(param_1,uStack_60,&uStack_5c);
    uVar3 = uStack_5c;
    if ((int)uVar2 < 0) break;
    fn_82F68CC0(param_3,(ulonglong)uStack_5c + (param_5 & 0xfff),uVar4);
    uVar3 = uVar3 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)uVar3 >> 0xc) + (uint)((int)uVar3 < 0 && (uVar3 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    param_4 = param_4 - uVar4;
    param_3 = uVar4 + param_3;
    param_5 = uVar4 + param_5;
    if (param_4 == 0) {
      return 0;
    }
  }
  return uVar2;
}

