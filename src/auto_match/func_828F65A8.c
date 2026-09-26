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
extern int fn_828F5390();
extern int fn_828F59D0();


undefined8 fn_828F65A8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = fn_828F5390();
  lVar6 = (lVar4 + 0x1eU & 0x3fffffff) * 4;
  lVar4 = lVar6 + param_1;
  iVar7 = *(int *)((int)lVar6 + (int)param_1);
  do {
    if (iVar7 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)*(int *)lVar4;
    pbVar5 = (byte *)*puVar1;
    lVar6 = param_2;
    do {
      uVar3 = (uint)*pbVar5;
      uVar2 = (uint)*(byte *)lVar6;
      if (*(byte *)lVar6 == 0) break;
      lVar6 = lVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar2 == uVar3);
    if ((int)(uVar2 - uVar3) < 0) {
      return 0;
    }
    iVar7 = puVar1[3];
    if (uVar2 == uVar3) {
      *(int *)lVar4 = iVar7;
      puVar1[3] = 0;
      fn_828F59D0(ZEXT48(puVar1),1);
      return 0;
    }
    lVar4 = ZEXT48(puVar1) + 0xc;
  } while( true );
}

