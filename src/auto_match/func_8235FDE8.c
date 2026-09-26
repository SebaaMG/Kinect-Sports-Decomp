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
extern int fn_82529508();
extern int fn_825296E8();
extern int fn_82529A38();
extern int fn_82587AC0();
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();


void fn_8235FDE8(void)

{
  undefined4 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  fn_82529508(uVar3 - 0x5f0);
  uVar1 = storeVectorElementWordIndexed(in_vs32,0,uVar3 - 0x558);
  *(undefined4 *)(uVar3 - 0x558) = uVar1;
  storeVectorElementWordIndexed(in_vs45,uVar3 - 0x558,4);
  storeVectorElementWordIndexed(in_vs44,uVar3 - 0x558,8);
  fn_825296E8(uVar3 - 0x5f0,uVar3 + 0x40);
  uVar4 = fn_82587AC0(uVar3 - 0x5a5);
  iVar5 = fn_82529A38(uVar4,uVar3 - 0x5f0,0);
  puVar6 = (uint *)(iVar5 + 0x1dc);
  lVar7 = 2;
  do {
    puVar2 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar2 | 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

