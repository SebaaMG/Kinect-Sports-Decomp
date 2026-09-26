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
extern int fn_829AB140();
extern int fn_829AB188();
extern int fn_829AB308();
extern int fn_829B0F38();
extern int fn_829B8FB8();


undefined8 fn_829B9B60(int param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5a0);
  for (; (ulonglong)uVar1 < (param_2 & 0xffffffff); param_2 = param_2 - uVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x5a0);
    uVar3 = *(undefined4 *)(param_1 + 0x59c);
    fn_829B0F38(param_1,uVar3,uVar2);
    fn_829AB308(param_1,uVar3,uVar2);
  }
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x59c);
    fn_829B0F38(param_1,uVar2,param_2);
    fn_829AB308(param_1,uVar2,param_2);
  }
  iVar5 = fn_829B8FB8(param_1);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    if ((((*(byte *)(param_1 + 0x60c) & 0x20) == 0) || ((*(uint *)(param_1 + 0x55c) & 0x200) != 0))
       && (((*(byte *)(param_1 + 0x60c) & 0x20) != 0 || ((*(uint *)(param_1 + 0x55c) & 0x400) == 0))
          )) {
      fn_829AB140(param_1,0xffffffff82054bf8);
    }
    else {
      fn_829AB188(param_1,0xffffffff82054bf8);
    }
    uVar4 = 1;
  }
  return uVar4;
}

