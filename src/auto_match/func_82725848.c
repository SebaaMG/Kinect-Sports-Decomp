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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_827249B8();


int * fn_82725848(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int *apiStack_20 [2];
  
  if (*(short *)(param_1[0x27] + 0x1a) == 0) {
    return (int *)0x0;
  }
  fn_827249B8(apiStack_20,param_1[0x29],param_1[0x27] + 0x10);
  if (apiStack_20[0] == (int *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x94))(param_1);
    if (lVar1 == 0) goto LAB_82725934;
    fn_8267C4C8(lVar1);
    uVar3 = 0xffffffff82010f08;
  }
  else {
    uVar2 = (**(code **)(*apiStack_20[0] + 8))();
    if ((uVar2 & 0xff00) == 0x200) {
      if (apiStack_20[0] != (int *)0x0) {
        fn_82687270();
        return apiStack_20[0];
      }
      return (int *)0x0;
    }
    lVar1 = (**(code **)(*param_1 + 0x94))(param_1);
    if (lVar1 == 0) goto LAB_82725934;
    fn_8267C4C8(lVar1);
    uVar3 = 0xffffffff82010ea8;
  }
  fn_82683F88(lVar1 + 0xc,uVar3,*(undefined2 *)(param_1[0x27] + 0x1a),
                    *(undefined2 *)((int)param_1 + 0x12),
                    ((ulonglong)*(uint *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8);
  fn_8267C4F0(lVar1);
LAB_82725934:
  if (apiStack_20[0] != (int *)0x0) {
    fn_82687270();
  }
  return (int *)0x0;
}

