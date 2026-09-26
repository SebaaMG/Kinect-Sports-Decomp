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
extern int fn_82AB15D0();
extern int fn_82AB4A28();
extern int fn_82AB4B88();


void fn_82AB54D0(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820d68b0,0x477);
  }
  iVar1 = fn_82AB4A28(*param_1);
  if (iVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d68a4,0xffffffff820d68b0,0x47b);
  }
  *(uint *)(iVar1 + 0xc) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  if (param_1[4] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1[4] + 8);
    if (iVar3 != 0) goto LAB_82ab55b0;
  }
  uVar2 = 0x486;
  do {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69fc,0xffffffff820d68b0,uVar2);
LAB_82ab55b0:
    do {
      if ((iVar3 == param_1[4]) || (param_2 < *(uint *)(iVar3 + 0xc))) {
        fn_82AB4B88(iVar3,iVar1);
        if (param_1[5] == 0) {
          *(int *)(param_1[4] + 8) = iVar1;
        }
        param_1[5] = param_1[5] + 1;
        return;
      }
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != 0);
    uVar2 = 0x490;
  } while( true );
}

