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
extern int fn_823737B8();
extern int fn_82375CA8();
extern int fn_823815D0();
extern int fn_82381948();
extern int fn_82381B20();


void fn_82381060(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  bVar2 = (int)param_2 == 0;
  fn_823815D0(param_1,bVar2,param_3,4);
  uVar1 = *(undefined4 *)(param_1 + 4);
  lVar3 = fn_823737B8(uVar1,param_2);
  if (lVar3 == 0) {
    iVar5 = fn_82381948(param_1,param_2,bVar2,param_3,1);
    if (iVar5 != 0) {
      return;
    }
    uVar6 = 2;
    lVar4 = -1;
  }
  else {
    lVar4 = fn_82381B20(param_1,param_2,param_3);
    if (((int)lVar4 != *(int *)((int)lVar3 + 0x28)) &&
       (iVar5 = fn_82375CA8(uVar1,*(undefined4 *)((int)lVar3 + 0x2c),1), iVar5 != 0)) {
      lVar4 = 1 - lVar4;
    }
    uVar6 = 0xd;
  }
  fn_823815D0(param_1,param_2,lVar4,uVar6);
  return;
}

