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
extern unsigned int *__imp__XexExecutableModuleHandle;
extern unsigned int *auStack_210;
extern int fn_82A20D78();


bool fn_82A20E30(undefined8 param_1)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_210 [512];
  
  iVar3 = fn_82A20D78(0xffffffff82089270,0xc,param_1);
  if (iVar3 == 0) {
    iVar3 = *__imp__XexExecutableModuleHandle;
    uVar4 = 0;
    if (*(short *)(iVar3 + 0x2c) != 0) {
      uVar5 = 0;
      do {
        uVar1 = uVar5 + 1 & 0xffff;
        auStack_210[uVar5] = (char)*(undefined2 *)(uVar5 * 2 + *(int *)(iVar3 + 0x30));
        uVar4 = (uint)*(ushort *)(iVar3 + 0x2c);
        uVar5 = uVar1;
      } while (uVar1 < uVar4);
    }
    lVar2 = fn_82A20D78(auStack_210,uVar4,param_1);
    bVar6 = lVar2 != 0;
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}

