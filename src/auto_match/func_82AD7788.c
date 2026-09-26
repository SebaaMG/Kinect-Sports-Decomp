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
extern int fn_82ABE0E8();
extern int fn_82AD6090();


void fn_82AD7788(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if (((((uVar3 == 0x56) || (uVar3 == 0x57)) || (uVar3 == 0x59)) ||
      ((uVar3 == 0x5a || (uVar3 == 0x54)))) || (bVar2 = false, uVar3 == 0x55)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar4 = fn_82ABE0E8(param_2,param_1);
    if (iVar4 == 8) {
      return;
    }
    if (iVar4 == 9) {
      return;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000000;
  if ((param_3[1] & 1) == 0) {
    uVar3 = *param_3 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(uint *)(uVar3 + 8))) goto LAB_82ad7858;
  }
  iVar4 = fn_82AD6090(param_3,1);
LAB_82ad7858:
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(int *)((iVar1 + 4) * 4 + iVar4) = param_2;
  return;
}

