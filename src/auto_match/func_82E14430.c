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
extern int fn_82CFBBF0();


undefined4 fn_82E14430(int *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    if ((param_3 == 0) || (param_1[1] <= (int)uVar4)) break;
    uVar4 = uVar4 + 1;
    iVar2 = iVar3 + *param_1;
    iVar3 = iVar3 + 0xc;
  } while (*(int *)(iVar2 + 8) != param_3);
  if ((int)uVar4 < param_1[1]) {
    lVar5 = (uVar4 + (uVar4 & 0x7fffffff) * 2 & 0x3fffffff) << 2;
    do {
      uVar1 = *(uint *)((int)lVar5 + *param_1);
      if (((uVar1 & 0xfffffffe) != 0) &&
         (iVar3 = fn_82CFBBF0(param_2,uVar1 & 0xfffffffe), iVar3 == 0)) {
        return *(undefined4 *)
                ((int)((uVar4 + (uVar4 & 0x7fffffff) * 2 & 0xffffffff) << 2) + *param_1 + 8);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((int)uVar4 < param_1[1]);
  }
  return 0;
}

