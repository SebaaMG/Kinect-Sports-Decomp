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
extern int fn_82FAF408();
extern int fn_82FEC2F0();
extern int fn_8300D940();
extern int fn_8300DEB0();
extern int fn_8300E3C0();
extern int fn_83013A98();
extern int fn_83036C30();


undefined8
fn_8300E110(int *param_1,uint param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  fn_82FEC2F0();
  uVar4 = (param_4 & 0xffff) << 0x10 | param_3;
  piVar1 = (int *)fn_8300E3C0(param_1 + ((param_2 & 0xff) + 1) * 3,uVar4);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      return 1;
    }
    iVar2 = fn_83013A98(param_3,param_4,0xffffffff832643b4,param_2,piVar1,param_5);
    if (iVar2 == 1) {
      iVar2 = *param_1;
      uVar3 = 1;
      if (iVar2 != param_1[1]) {
        while( true ) {
          uVar3 = (**(code **)(*(int *)*piVar1 + 0x38))();
          uVar3 = fn_83036C30(*(undefined4 *)(iVar2 + 4),param_2,uVar4,uVar3);
          if ((int)uVar3 != 1) break;
          iVar2 = iVar2 + 8;
          if (iVar2 == param_1[1]) {
            fn_8300D940(param_1);
            return uVar3;
          }
        }
        fn_8300DEB0(param_1,param_2,param_3,param_4);
      }
      fn_8300D940(param_1);
      return uVar3;
    }
    fn_82FAF408(param_1 + ((param_2 & 0xff) + 1) * 3,uVar4);
  }
  return 2;
}

