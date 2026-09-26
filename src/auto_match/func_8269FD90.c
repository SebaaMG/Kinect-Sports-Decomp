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
extern unsigned int *auStack_30;
extern int fn_826944C8();
extern int fn_8269AEB8();
extern int fn_8269FB58();


undefined1 fn_8269FD90(int *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar3;
  char cVar4;
  longlong lVar2;
  undefined1 auStack_30 [4];
  int aiStack_2c [11];
  
  auStack_30[0] = 0xff;
  iVar3 = (**(code **)(*param_1 + 0xb0))();
  aiStack_2c[0] = *(int *)(iVar3 + 8);
  *(int *)(aiStack_2c[0] + 8) = *(int *)(aiStack_2c[0] + 8) + 1;
  cVar4 = fn_8269AEB8(param_2,aiStack_2c);
  iVar3 = aiStack_2c[0];
  if (cVar4 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    fn_8269FB58(lVar2 + 0x2a8,param_2,auStack_30,*(int *)(iVar3 + 0x10) == 0);
  }
  uVar1 = auStack_30[0];
  lVar2 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
  *(int *)(iVar3 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iVar3);
  }
  return uVar1;
}

