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
extern int fn_822304F8();
extern int fn_82F622A8();
extern int fn_82F622E0();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined4 *
fn_823367B8(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar2 = param_1[4];
  if ((uVar2 < param_2) || ((uint)param_3[4] < param_4)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar3 = param_3[4] - param_4;
  if (uVar3 < param_5) {
    param_5 = uVar3;
  }
  if (-uVar2 - 1 <= param_5) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196214);
  }
  if (param_5 != 0) {
    iVar6 = uVar2 + param_5;
    cVar1 = fn_822304F8(param_1,iVar6,0);
    if (cVar1 != '\0') {
      puVar4 = param_1;
      puVar5 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar4 = (undefined4 *)*param_1;
        puVar5 = (undefined4 *)*param_1;
      }
      fn_82F63CA0((int)puVar4 + param_5 + param_2,(int)puVar5 + param_2,param_1[4] - param_2);
      if (param_1 == param_3) {
        uVar2 = param_4 + param_5;
        if (param_4 <= param_2) {
          uVar2 = param_4;
        }
        puVar4 = param_1;
        puVar5 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar4 = (undefined4 *)*param_1;
          puVar5 = (undefined4 *)*param_1;
        }
        fn_82F63CA0((int)puVar4 + param_2,(int)puVar5 + uVar2,param_5);
      }
      else {
        if (0xf < (uint)param_3[5]) {
          param_3 = (undefined4 *)*param_3;
        }
        puVar5 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        fn_82F68CC0((int)puVar5 + param_2,(int)param_3 + param_4,param_5);
      }
      param_1[4] = iVar6;
      puVar5 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar5 + iVar6) = 0;
    }
  }
  return param_1;
}

