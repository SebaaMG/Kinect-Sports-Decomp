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
extern int fn_82F02410();
extern int fn_82F2A028();


void fn_82F2A338(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  uVar4 = (ulonglong)((int)param_4 >> 0x1f);
  uVar4 = (param_4 ^ uVar4) - uVar4;
  if ((ulonglong)*(uint *)(param_1 + 0x4e84) < (param_3 & 0xffffffff)) {
    if (((ulonglong)*(uint *)(param_1 + 0x4e88) < (uVar4 & 0xffffffff)) ||
       (uVar2 = *(uint *)(*(int *)(param_1 + 0x4e90) + (int)((uVar4 & 0xffffffff) << 2)),
       ((ulonglong)uVar2 & 0x7fffffff) << 1 < (param_3 & 0xffffffff))) {
      iVar1 = *(int *)(param_1 + 0x4e9c);
LAB_82f2a470:
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x4e98) * 8 + iVar1);
      fn_82F02410(param_2,*puVar5,puVar5[1]);
      fn_82F02410(param_2,0,2);
      fn_82F02410(param_2,1,1);
      if (*(int *)(param_1 + 0x608) != 0) {
        fn_82F2A028(param_1);
        *(undefined4 *)(param_1 + 0x608) = 0;
      }
      fn_82F02410(param_2,param_3,*(undefined4 *)(param_1 + 0x610));
      fn_82F02410(param_2,(int)param_4 < 0,1);
      fn_82F02410(param_2,uVar4,*(undefined4 *)(param_1 + 0x60c));
      return;
    }
    iVar1 = *(int *)(param_1 + 0x4e98) * 8;
    param_3 = (param_3 - uVar2) - 1;
    fn_82F02410(param_2,*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x4e9c)),
                      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x4e9c) + 4));
    uVar3 = 2;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x4e8c) + (int)((param_3 & 0xffffffff) << 2));
    if ((uVar4 & 0xffffffff) <= (ulonglong)uVar2) goto LAB_82f2a414;
    iVar1 = *(int *)(param_1 + 0x4e9c);
    if (((ulonglong)uVar2 & 0x7fffffff) << 1 < (uVar4 & 0xffffffff)) goto LAB_82f2a470;
    uVar4 = uVar4 - uVar2;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x4e98) * 8 + iVar1);
    fn_82F02410(param_2,*puVar5,puVar5[1]);
    uVar3 = 1;
  }
  fn_82F02410(param_2,1,uVar3);
LAB_82f2a414:
  puVar5 = (undefined4 *)
           (*(int *)(param_1 + 0x4e9c) +
           (int)(((ulonglong)
                  *(uint *)(*(int *)(param_1 + 0x4e94) + (int)((param_3 & 0xffffffff) << 2)) +
                  (ulonglong)*(uint *)(param_1 + 0x4ea0) + uVar4 & 0xffffffff) << 3));
  fn_82F02410(param_2,*puVar5,puVar5[1]);
  fn_82F02410(param_2,((param_4 | ~-param_4) & 0xffffffff) >> 0x1f,1);
  return;
}

