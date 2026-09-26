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
extern int fn_825A27B8();
extern int fn_825D2E40();
extern int fn_825F6A70();


undefined8 fn_825F6DA8(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar1 = fn_825A27B8();
  if (((lVar1 == 0) || (param_4 = *(uint *)(param_1 + 0x8ac) & param_4, param_4 == 0)) ||
     (iVar3 = fn_825F6A70(param_1,param_2,param_3), iVar3 != 0)) {
    uVar2 = 0;
  }
  else {
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x8c0) + 0x144;
    if ((ulonglong)*(uint *)(param_1 + 0x8c0) == 0) {
      lVar5 = 0;
    }
    if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)
               ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0));
    }
    uVar2 = fn_825D2E40(lVar1,param_1 + 0xf0,param_1 + 0x130,uVar4,param_2,param_3,param_4,lVar5
                           );
  }
  return uVar2;
}

