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
extern int fn_8281FCC8();
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8281FEC0(int param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uStack_50;
  undefined4 uStack_4c;
  char cStack_44;
  
  uVar3 = fn_8281FCC8();
  uVar4 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x28);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x44);
    lVar5 = 0;
    do {
      fn_82F68CC0(&uStack_50,lVar5 + (ulonglong)uVar2,0xe);
      if ((uStack_50 == uVar3) && (cStack_44 == *(char *)(param_1 + 0x78))) {
        *param_3 = uStack_4c;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xe;
    } while (uVar4 < uVar1);
  }
  return;
}

