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
extern int fn_82560100();
extern int fn_82575DF0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;


void fn_8237C400(uint *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  double dVar6;
  
  puVar5 = param_1 + 0x74;
  lVar3 = 3;
  uVar1 = *(undefined4 *)(*param_1 + 0x4c);
  puVar4 = puVar5;
  do {
    if (*puVar4 != 0) {
      fn_82575DF0(*(undefined4 *)(*(int *)(*param_1 + 0x4c) + 0x93c));
      *puVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar3 != 0);
  lVar3 = 3;
  dVar6 = (double)lbl_82192734;
  do {
    if (*param_2 != 0) {
      uVar2 = fn_82560100(dVar6,uVar1,param_2,(ulonglong)*param_1 + 0x50);
      *puVar5 = uVar2;
    }
    lVar3 = lVar3 + -1;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  } while (lVar3 != 0);
  if (*param_3 != 0) {
    fn_82560100((double)lbl_821CA460,uVar1,param_3,(ulonglong)*param_1 + 0x50,
                      0xffffffff821ca45c,0,0,0,0);
  }
  return;
}

