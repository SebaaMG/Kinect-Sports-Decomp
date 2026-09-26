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
extern int fn_82564720();
extern unsigned int lbl_821CA460;
extern V16 loadVectorLeftIndexed128();


void fn_8234D950(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_2 + 0x40) == 0) ||
     ((*(int *)(param_2 + 0xd0) == 0 &&
      ((*(int *)(param_2 + 200) != 0 || (*(int *)(param_2 + 0xcc) != 0)))))) {
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined4 *)(param_2 + 0xd4) = lbl_821CA460;
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 0x44) = 1;
    puVar1 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  loadVectorLeftIndexed128((ulonglong)*(uint *)(param_2 + 0x48),0x8bc);
  fn_82564720(param_1,(double)*(float *)(param_2 + 0xd4));
  return;
}

