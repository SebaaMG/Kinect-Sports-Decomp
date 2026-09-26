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
extern int fn_82F68CC0();
extern int fn_82FA5F18();
extern int fn_82FA6028();
extern int fn_82FA64D8();
extern int fn_82FA6668();


int fn_82FA66E8(undefined8 param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar3 = 0;
  if (param_2 == 0) {
    iVar3 = fn_82FA64D8(param_1,param_3);
    return iVar3;
  }
  if ((param_3 & 0xffffffff) != 0) {
    iVar3 = param_2 + -8;
    uVar4 = (ulonglong)*(uint *)(param_2 + -4) & 0xfffffffc;
    uVar5 = 0;
    uVar1 = *(uint *)((*(uint *)(param_2 + -4) & 0xfffffffc) + iVar3 + 8);
    if (((param_3 & 0xffffffff) < 0x40000000) && (uVar5 = param_3 + 3 & 0xfffffffc, uVar5 < 0xd)) {
      uVar5 = 0xc;
    }
    if (((uVar1 & 1) != 0) && (uVar5 < (((ulonglong)uVar1 & 0xfffffffc) + uVar4 + 4 & 0xffffffff)))
    {
      if (uVar4 < uVar5) {
        fn_82FA5F18(param_1,iVar3);
        iVar2 = (*(uint *)(param_2 + -4) & 0xfffffffc) + iVar3;
        *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffd;
        *(uint *)(param_2 + -4) = *(uint *)(param_2 + -4) & 0xfffffffe;
      }
      fn_82FA6028(param_1,iVar3,uVar5);
      return param_2;
    }
    iVar3 = fn_82FA64D8(param_1,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    if ((param_3 & 0xffffffff) <= uVar4) {
      uVar4 = param_3;
    }
    fn_82F68CC0(iVar3,param_2,uVar4);
  }
  fn_82FA6668(param_1,param_2);
  return iVar3;
}

