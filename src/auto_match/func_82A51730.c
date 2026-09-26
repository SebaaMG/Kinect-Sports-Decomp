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
extern int fn_82A42E20();
extern int fn_82A50190();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A51730(int *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar8;
  char in_RESERVE;
  
  iVar7 = fn_82A50190();
  bVar3 = iVar7 == 0;
  if (!bVar3) {
    puVar8 = (uint *)param_1[0x1e];
    if (ZEXT48(puVar8) != 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 - 1,0,ZEXT48(puVar8));
        *puVar8 = uVar2;
      }
      param_1[0x1e] = 0;
    }
  }
  iVar7 = param_1[0x10];
  iVar1 = param_1[0xf];
  uVar2 = param_1[0xc];
  uVar5 = (**(code **)(*param_1 + 0x6c))(param_1);
  lVar6 = fn_82A42E20((ulonglong)uVar2 + 0x250,bVar3,iVar1,uVar5,iVar7);
  puVar8 = (uint *)lVar6;
  param_1[0x1e] = (int)puVar8;
  if (lVar6 == 0) {
    uVar5 = 0xffffffff8007000e;
  }
  else {
    uVar5 = 0;
    bVar4 = false;
    while (!bVar3) {
      bVar3 = bVar4;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,lVar6);
        *puVar8 = uVar2;
        bVar4 = true;
        bVar3 = bVar4;
      }
    }
  }
  return uVar5;
}

