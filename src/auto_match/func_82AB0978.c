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
extern int fn_82A29A38();
extern int fn_82AB0600();


void fn_82AB0978(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar5;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (0xffff01ff < param_1) {
    fn_82A29A38();
  }
  uVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      if ((*(uint *)(param_2 + 0xc) >> (uVar5 & 0x3f) & 1) != 0) {
        puVar2 = (uint *)*param_3;
        if (0xf < uVar5) {
          fn_82A29A38();
        }
        *puVar2 = (uVar5 & 0xff) << 0x10 | 0x8000019;
        *param_3 = (int)(puVar2 + 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  uVar4 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    do {
      if ((*(uint *)(iVar1 + 0xc4) >> ((uint)uVar4 & 0x3f) & 1) != 0) {
        fn_82AB0600(uVar4 + 2,5,uVar4,0,0xffffffff83160558,0xf0000,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 4));
  }
  uVar5 = 0;
  do {
    if (*(int *)((uVar5 + 4) * 8 + iVar1) != 0) {
      uVar3 = 0xffffffff83160538;
      if (uVar5 != 0) {
        uVar3 = 0xffffffff83160548;
      }
      fn_82AB0600(uVar5,10,uVar5,1,uVar3,0xf0000,param_2,param_3);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

