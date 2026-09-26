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
extern int fn_828315F0();
extern int fn_82F6D000();


void fn_82835C00(int *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = fn_828315F0(*(undefined4 *)(param_1[1] + 4));
  uVar6 = (ulonglong)*(uint *)(*param_1 + 8);
  iVar1 = *(int *)(param_1[1] + 0x10);
  fn_82F6D000(param_2,0xffffffff8201f2c4,uVar6);
  uVar5 = 0;
  uVar3 = *(uint *)(*param_1 + 0xc);
  lVar4 = (ulonglong)*(uint *)(*(int *)(*param_1 + 0x10) * 4 + *(int *)(iVar2 + 0x124)) +
          (ulonglong)*(uint *)(iVar2 + 0x128);
  if (uVar3 != 0) {
    do {
      if (uVar3 == 1) {
        fn_82F6D000(param_2,0xffffffff8201f2cc,lVar4);
      }
      else {
        fn_82F6D000(param_2,0xffffffff8201f2d0,lVar4,uVar5);
      }
      (**(code **)(*(int *)param_1[1] + 4))
                ((int *)param_1[1],param_2,0,uVar6 + param_3,0,0,0xffffffffffffffff);
      uVar5 = uVar5 + 1;
      uVar6 = *(uint *)(iVar1 + 0x10) + uVar6;
      uVar3 = *(uint *)(*param_1 + 0xc);
    } while ((uVar5 & 0xffffffff) < (ulonglong)uVar3);
  }
  return;
}

