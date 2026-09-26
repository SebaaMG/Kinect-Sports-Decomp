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
extern int fn_82ABDD90();
extern int fn_82B83B68();


void fn_82B840F8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ushort uVar4;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  
  fn_82B83B68(param_1,param_2,param_4,param_3,(int)param_3 == 0x68,in_stack_00000054);
  uVar1 = *(uint *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_2,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  puVar3 = (uint *)(iVar2 + param_1 + -8);
  *puVar3 = param_5 & 0x7fff |
            ((in_stack_0000005c & 3) << 0xe | param_6 & 0x3fff) << 0xf | *puVar3 & 0x80000000;
  puVar3[1] = param_7 & 0xf | puVar3[1] & 0xfffffff0 | 0x100000;
  if (in_stack_0000005c == 1) {
    if ((*(uint *)(param_1 + 0xc) & 0xeeee) == 0xeeee) {
      return;
    }
    uVar4 = (ushort)*(uint *)(param_1 + 0xc) | 0xeeee;
  }
  else if (in_stack_0000005c == 2) {
    if ((*(uint *)(param_1 + 0xc) & 0x4444) == 0x4444) {
      return;
    }
    uVar4 = (ushort)*(uint *)(param_1 + 0xc) | 0x4444;
  }
  else {
    if (in_stack_0000005c != 3) {
      return;
    }
    if ((*(uint *)(param_1 + 0xc) & 0x6666) == 0x6666) {
      return;
    }
    uVar4 = (ushort)*(uint *)(param_1 + 0xc) | 0x6666;
  }
  *(ushort *)(param_1 + 0xe) = uVar4;
  return;
}

