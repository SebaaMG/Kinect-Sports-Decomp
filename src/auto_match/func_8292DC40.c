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
extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;


void fn_8292DC40(int param_1,int param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar4;
  longlong lVar3;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = lbl_82002AE0;
  uVar5 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) * 8 + uVar5;
  if (uVar5 < uVar4) {
    puVar6 = (undefined4 *)(uVar5 - 4);
    lVar3 = (ulonglong)((uVar4 - uVar5) - 1 >> 3) + 1;
    do {
      puVar2 = (undefined4 *)param_4;
      *puVar2 = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar2[1] = *puVar6;
      puVar2[3] = uVar1;
      puVar2[2] = uVar1;
      param_4 = param_4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

