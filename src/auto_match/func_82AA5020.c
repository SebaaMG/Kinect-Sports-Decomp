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
extern int fn_82AA1C90();
extern int fn_82AA1F00();
extern int fn_82AA4498();


undefined8
fn_82AA5020(undefined4 *param_1,int param_2,uint param_3,undefined8 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  
  uVar3 = 0;
  if (param_2 == param_1[2]) {
    uVar1 = *param_1;
    if (param_3 == 0) {
      fn_82AA4498(uVar1,0xffffffff82029ad0);
      if (*param_5 == 0) {
        uVar2 = 0xffffffff82196f10;
      }
      else {
        uVar2 = 0xffffffff82196f18;
      }
      fn_82AA1C90(uVar1,0xffffffff820d3c18,param_4,uVar2);
    }
    else if (param_3 == 1) {
      fn_82AA4498(uVar1,0xffffffff820294c0);
      fn_82AA1C90(uVar1,0xffffffff820d3c24,param_4);
      pfVar4 = (float *)(param_5 + -1);
      lVar5 = 4;
      do {
        fn_82AA1C90(uVar1,0xffffffff82196824);
        pfVar4 = pfVar4 + 1;
        fn_82AA1F00((double)*pfVar4,uVar1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    else if (param_3 < 3) {
      fn_82AA4498(uVar1,0xffffffff82029ad8);
      fn_82AA1C90(uVar1,0xffffffff820d3c2c,param_4,*param_5,param_5[1],param_5[2],param_5[3]);
    }
    else {
      uVar3 = 0xffffffff80004005;
    }
    fn_82AA1C90(uVar1,0xffffffff821cc86c);
  }
  return uVar3;
}

