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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82CE50D8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern U64 storeVectorElementWordIndexed();


void fn_82DFB860(int param_1,undefined8 param_2,int param_3,int param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  undefined1 in_vs44 [16];
  undefined4 uStack_40;
  
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar2 = *(uint *)(param_3 + 0x1c);
  *param_5 = *(float *)(param_4 + 8) * *(float *)(param_1 + 8);
  fn_82CE50D8(ZEXT48(&stack0x00000000) - 0x30,(ulonglong)uVar1 + 0xf0,(ulonglong)uVar2 + 0x40);
  lVar5 = ZEXT48(&stack0x00000000) - 0x40;
  uVar3 = storeVectorElementWordIndexed(in_vs44,0,lVar5);
  *(undefined4 *)lVar5 = uVar3;
  if (*(float *)(param_1 + 0xc) < uStack_40) {
    fVar4 = *(float *)(param_1 + 0xc) / uStack_40;
    *param_5 = *param_5 * fVar4 * fVar4;
  }
  return;
}

