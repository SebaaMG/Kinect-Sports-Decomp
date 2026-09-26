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
extern int fn_82F35400();
extern unsigned int uStack_60;


undefined8 fn_82F35BF0(int param_1,ulonglong *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uStack_60;
  int *piStack_5c;
  longlong alStack_58 [11];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    uVar2 = ((ulonglong)*(uint *)(param_1 + 0x130) & 0x3fffffff) * 4 + 0x22 & 0xffffffff;
    if (*(int *)(param_1 + 0xc4) != 0) {
      do {
        fn_82F35400(param_1 + 0x5c,uVar4,&piStack_5c);
        piVar1 = (int *)*piStack_5c;
        if (piVar1 != (int *)0x0) {
          uStack_60 = 0;
          (**(code **)(*piVar1 + 0x10))(piVar1,&uStack_60);
          (**(code **)(*piVar1 + 0xc))(piVar1,uStack_60 | 1);
          alStack_58[0] = 0;
          (**(code **)(*piVar1 + 0x18))(piVar1,alStack_58);
          lVar5 = alStack_58[0] + lVar5;
          (**(code **)(*piVar1 + 0xc))(piVar1,uStack_60);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc4));
    }
    *(ulonglong *)(param_1 + 0x20) = lVar5 + uVar2;
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = uVar2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = 0;
  }
  return uVar3;
}

