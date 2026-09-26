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
extern unsigned int *auStack_30;
extern int fn_82FA4F18();
extern int fn_82FA4F60();
extern int fn_82FA5060();
extern int fn_82FA52E8();
extern int fn_82FA5538();
extern int fn_82FF86F0();


undefined8 fn_82FF9548(longlong param_1,ulonglong param_2,int param_3)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  uint auStack_30 [12];
  
  if ((param_2 & 0xffffffff) == 0) {
    return 1;
  }
  if (*(int *)(param_3 + 0x18) == -1) {
    iVar3 = fn_82FA5538(0,param_2,param_2,0xb,0x800);
    *(int *)(param_3 + 0x18) = iVar3;
    if (iVar3 == -1) {
      return 2;
    }
    *(undefined1 *)(param_3 + 0x1c) = 1;
  }
  uVar1 = fn_82FA4F60();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar2 = fn_82FA4F18(*(undefined4 *)(param_3 + 0x18));
  if ((uVar2 & 8) == 0) {
    iVar3 = fn_82FA5060(*(undefined4 *)(param_3 + 0x18),param_2);
  }
  else {
    iVar3 = fn_82FA52E8();
  }
  *(int *)(param_3 + 0x10) = iVar3;
  if (iVar3 == 0) {
    return 2;
  }
  *(int *)(param_3 + 0x14) = (int)param_2;
  auStack_30[0] = 0;
  uVar1 = fn_82FF86F0(param_1 + 4,iVar3,param_2,auStack_30);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  if ((ulonglong)auStack_30[0] != (param_2 & 0xffffffff)) {
    return 7;
  }
  return uVar1;
}

