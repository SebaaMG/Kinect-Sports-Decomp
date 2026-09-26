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
extern int fn_82CEA950();


void fn_82CEA650(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] << 1) {
    fn_82CEA950(param_1,param_2,(param_1[2] + 1) * 2);
  }
  iVar1 = 1;
  uVar4 = ((uint)param_3 >> 4) * -0x61c8864f;
  do {
    iVar3 = (uVar4 & param_1[2]) * 0x10;
    lVar2 = *(longlong *)(*param_1 + iVar3);
    if (lVar2 == -1) {
LAB_82cea6d0:
      param_1[1] = iVar1 + param_1[1];
      *(longlong *)(*param_1 + iVar3) = param_3;
      *(undefined8 *)(iVar3 + *param_1 + 8) = param_4;
      return;
    }
    if (lVar2 == param_3) {
      iVar1 = 0;
      goto LAB_82cea6d0;
    }
    uVar4 = (uVar4 & param_1[2]) + 1;
  } while( true );
}

