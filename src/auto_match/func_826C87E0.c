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
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826C59F8();
extern int fn_826C84C8();


void fn_826C87E0(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = fn_826C59F8();
  if ((lVar2 != 0) && (3 < *(int *)(param_1 + 0x1c))) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar4 = (double)fn_826972E0(uVar3,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    dVar7 = (double)(float)dVar4;
    uVar3 = fn_826957D0(param_1,1);
    dVar4 = (double)fn_826972E0(uVar3,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    dVar6 = (double)(float)dVar4;
    uVar3 = fn_826957D0(param_1,2);
    dVar4 = (double)fn_826972E0(uVar3,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    dVar5 = (double)(float)dVar4;
    uVar3 = fn_826957D0(param_1,3);
    dVar4 = (double)fn_826972E0(uVar3,uVar1);
    fn_826C84C8(dVar7,dVar6,dVar5,(double)(float)dVar4,lVar2);
  }
  return;
}

