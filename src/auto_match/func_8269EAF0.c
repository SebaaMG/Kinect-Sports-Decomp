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
extern int fn_8269D9C0();
extern int fn_826AEA50();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_44;


undefined8 fn_8269EAF0(ulonglong param_1,int param_2,int *param_3)

{
  int iVar2;
  undefined8 uVar1;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  
  iStack_50 = *param_3;
  if ((iStack_50 == 0x40) || (iStack_50 == 0x80)) {
    iStack_4c = 0;
    iStack_48 = 0xff;
    uStack_44 = ((((U64)(uStack_44)) & (~(((U64)0xFFFFFF) << 8))) | ((((U64)((((U64)(uStack_44) >> 8) & 0xFFFFFF) & 0xffff)) & ((U64)0xFFFFFF)) << 8));
    uStack_44 = (uint)(((U64)(uStack_44) >> 8) & 0xFFFFFF);
  }
  else {
    iStack_4c = param_3[1];
    iStack_48 = param_3[2];
    uStack_44 = param_3[3];
  }
  iVar2 = fn_8269D9C0(param_1 + 0x88,&iStack_50);
  puVar4 = (uint *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
  if (puVar4 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar5 = (ulonglong)puVar4[1];
    if (uVar5 != 0) {
      lVar6 = 0;
      do {
        lVar3 = param_1 + 0x68;
        if ((param_1 & 0xffffffff) == 0) {
          lVar3 = 0;
        }
        fn_826AEA50((ulonglong)*puVar4 + lVar6,0,lVar3,param_2,0,
                          (longlong)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4) +
                          ((ulonglong)*(uint *)(param_2 + 0x1c) & 0x7ffffff) * 0x20 + -0x1f,0);
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar5 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

