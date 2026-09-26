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
extern int fn_8306CD18();
extern unsigned int lbl_8322344C;


undefined8 fn_8306CEA0(ulonglong param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_20 [4];
  
  iVar3 = 0;
  aiStack_20[0] = 0;
  if (lbl_8322344C == '\0') {
    uVar2 = 0xffffffff8000ffff;
  }
  else if (((param_3 == (int *)0x0) || ((param_1 & 0xffffffff) == 0)) ||
          ((uVar1 = param_2 & 0xff, uVar1 != 1 && ((uVar1 != 2 && (uVar1 != 0)))))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_8306CD18(param_1,param_2,aiStack_20);
    iVar3 = aiStack_20[0];
  }
  if (param_3 != (int *)0x0) {
    iVar4 = iVar3 + 8;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return uVar2;
}

