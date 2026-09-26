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
extern int fn_82BF6E50();
extern int fn_82BF6EE8();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined8 fn_82BF6FC0(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((param_3 & 0xffffffff) == 0) || ((int)param_4 == 0)) {
LAB_82bf702c:
    uVar1 = 0;
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0xc) + param_4;
    if ((*(int *)(param_1 + 8) == 0) || (*(uint *)(param_1 + 0x10) == 0)) {
      if ((uVar3 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x14)) {
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x14);
      }
      iVar2 = fn_82BF6E50(param_1,uVar3);
LAB_82bf7024:
      if (iVar2 == 0) goto LAB_82bf702c;
    }
    else if ((ulonglong)*(uint *)(param_1 + 0x10) < (uVar3 & 0xffffffff)) {
      iVar2 = fn_82BF6EE8(param_1);
      goto LAB_82bf7024;
    }
    if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc)) {
      lVar4 = *(uint *)(param_1 + 8) + param_2;
      fn_82F63CA0(lVar4 + param_4,lVar4,*(uint *)(param_1 + 0xc) - param_2);
    }
    fn_82F68CC0(*(uint *)(param_1 + 8) + param_2,param_3,param_4);
    uVar1 = 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_4;
  }
  return uVar1;
}

