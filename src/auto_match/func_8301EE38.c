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
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83264658;
extern unsigned int lbl_8326465C;
extern unsigned int lbl_83264660;


undefined8 fn_8301EE38(uint param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (7 < param_1) {
    return 0x1f;
  }
  iVar2 = param_1 * 0x90;
  (&lbl_83264660)[iVar2] = param_2;
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_3 + -4);
    puVar3 = (undefined4 *)(iVar2 + -0x7cd9b9c4);
    lVar5 = 6;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      uVar1 = lbl_821AAD20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(undefined4 *)(&lbl_83264658 + iVar2) = lbl_821AAD20;
    *(undefined4 *)(&lbl_8326465C + iVar2) = uVar1;
  }
  return 1;
}

