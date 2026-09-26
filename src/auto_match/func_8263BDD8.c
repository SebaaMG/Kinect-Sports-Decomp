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
extern unsigned int *auStack_44;
extern int fn_8262F8D8();
extern int fn_8263AB38();
extern int fn_8263B958();
extern unsigned int uStack_50;


void fn_8263BDD8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5,int *param_6,undefined8 param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_50;
  int aiStack_4c [2];
  undefined1 auStack_44 [68];
  
  fn_8263B958();
  uVar1 = *(uint *)(param_1 + 0x20);
  fn_8263AB38(uVar1 & 0x3f,auStack_44,aiStack_4c);
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar3 = *param_5;
  uVar4 = *param_8;
  *param_6 = *param_6 * aiStack_4c[0];
                    /* WARNING: Subroutine does not return */
  fn_8262F8D8(param_1,0xe,param_3,uVar1 & 0xfffff000,uVar2 & 0xfffff000,
                    (ulonglong)uVar3 - (ulonglong)uVar4,uStack_50,param_4);
}

