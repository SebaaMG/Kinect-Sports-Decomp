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


void fn_82CEA4B8(int *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (ulonglong)(uint)param_1[2] + 1;
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *param_1) = 0xffffffff;
      iVar3 = iVar3 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 & 0x80000000;
  if ((uVar1 & 0x80000000) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82cea518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,*param_1,((ulonglong)(uint)param_1[2] + 1 & 0x1fffffff) << 3);
  return;
}

