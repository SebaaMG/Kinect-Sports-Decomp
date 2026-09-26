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
extern unsigned int lbl_820887D8;


void fn_82A1EB30(uint param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar2 = 0;
  puVar6 = (ushort *)&lbl_820887D8;
  do {
    uVar4 = (uint)*puVar6;
    puVar6 = puVar6 + 1;
    if (uVar2 == param_1) {
      uVar5 = 0;
      if (uVar4 != 0) {
        puVar3 = (ushort *)(param_2 + -2);
        do {
          if (param_3 - 1U <= uVar5) break;
          uVar1 = *puVar6;
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = uVar1;
        } while (uVar5 < uVar4);
      }
      *(undefined2 *)(uVar5 * 2 + param_2) = 0;
    }
    else {
      puVar6 = puVar6 + uVar4;
    }
    uVar2 = uVar2 + 1;
    if (param_1 < uVar2) {
      return;
    }
  } while( true );
}

