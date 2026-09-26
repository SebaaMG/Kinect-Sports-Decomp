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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_82139204;


undefined4 *
fn_82D60868(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_1[2] = param_5;
  *param_1 = &lbl_82139204;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = param_1 + 6;
  param_1[5] = 0x80000004;
  param_1[4] = 0;
  uVar1 = *(uint *)(*param_2 + 0x14);
  uVar4 = (ulonglong)uVar1;
  iVar2 = fn_82CE5410();
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((ulonglong)(uint)param_1[5] & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 3,uVar3,2);
  }
  param_1[4] = uVar1;
  if (0 < (int)uVar1) {
    iVar2 = 0;
    do {
      *(undefined2 *)(iVar2 + param_1[3]) = 0xffff;
      iVar2 = iVar2 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_1;
}

