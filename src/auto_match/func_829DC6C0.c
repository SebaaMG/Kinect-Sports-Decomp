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
extern unsigned int lbl_832179FC;


void fn_829DC6C0(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = lbl_832179FC;
  if (*(uint *)(lbl_832179FC + 0x8f080) < param_1) {
    iVar4 = 0x8f06c;
    iVar3 = 0x8f070;
    uVar1 = *(undefined4 *)(lbl_832179FC + 0x8f068);
    iVar5 = 0x8f078;
  }
  else {
    iVar4 = 0x8f058;
    iVar3 = 0x8f05c;
    uVar1 = *(undefined4 *)(lbl_832179FC + 0x8f054);
    iVar5 = 0x8f064;
  }
  *param_2 = uVar1;
  *param_3 = *(undefined4 *)(iVar2 + iVar4);
  *param_4 = *(undefined4 *)(iVar2 + iVar3);
  *param_5 = *(undefined4 *)(iVar2 + iVar5);
  return;
}

