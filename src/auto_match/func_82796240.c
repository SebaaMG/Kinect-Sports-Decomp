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
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_8267C4F0();
extern int fn_8278E7B0();
extern int fn_82790678();
extern int fn_82791BD8();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern int fn_82794EE8();
extern int fn_82795918();
extern int fn_82795E00();
extern unsigned int iStack_54;
extern unsigned int iStack_64;
extern unsigned int iStack_80;
extern unsigned int uStack_50;


void fn_82796240(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4,longlong param_5,
                  ulonglong param_6)

{
  uint uVar1;
  int iVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [8];
  int iStack_80;
  undefined1 auStack_70 [12];
  int iStack_64;
  int iStack_54;
  uint uStack_50;
  
  if ((param_6 & 0xffffffff) != 0) {
    fn_82795E00(param_1,param_2,(param_4 & 0x7fffffff) * 2 + (ulonglong)*param_3,param_5,param_6,0
                 );
    fn_82791BD8(auStack_70,param_3 + 4,param_3,param_4);
    while( true ) {
      if ((*(uint *)(iStack_54 + 4) <= uStack_50) || ((param_6 & 0xffffffff) == 0)) break;
      iVar4 = fn_82791CF0(auStack_70);
      uVar1 = *(uint *)(iVar4 + 4);
      if ((int)uVar1 < (int)param_4) {
        lVar5 = 0;
        uVar6 = (*(uint *)(iVar4 + 8) - param_4) + (ulonglong)uVar1;
      }
      else {
        uVar6 = (ulonglong)*(uint *)(iVar4 + 8);
        lVar5 = uVar1 - param_4;
      }
      if ((param_6 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
        uVar6 = param_6;
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        uVar2 = fn_8278E7B0(param_2);
        auStack_90[0] = (undefined4)uVar2;
        uVar3 = fn_82790678(auStack_88,lVar5 + param_5,uVar6,auStack_90);
        fn_82794EE8(param_1 + 0x10,uVar3);
        if (iStack_80 != 0) {
          fn_8267C4F0();
        }
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
      }
      param_6 = param_6 - uVar6;
      fn_82791DF0(auStack_70);
    }
    fn_82795918(param_1);
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    if (iStack_64 != 0) {
      fn_8267C4F0();
    }
  }
  return;
}

