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
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


void fn_82F59488(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  
  uStack00000020 = param_2;
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  uStack00000050 = param_8;
  uStack00000048 = param_7;
  puVar2 = (undefined8 *)(param_1 + -8);
  uStack00000028 = param_3;
  uStack00000038 = param_5;
  lVar6 = 8;
  puVar4 = (undefined8 *)0x83262818;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = 0;
  do {
    iVar5 = 0;
    lVar6 = 3;
    do {
      iVar1 = (iVar3 + iVar5) * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar1 + param_1) = *(undefined4 *)((int)&stack0x00000020 + iVar1);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xc);
  return;
}

