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
extern unsigned int *auStack_50;
extern int fn_82682D30();
extern int fn_82693410();
extern int fn_82696330();
extern int fn_826C7870();
extern int fn_82700C78();
extern int fn_82704A98();


ulonglong fn_82705390(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar1 = fn_82693410();
    auStack_50[0] = 0;
    *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + 1;
    if ((*(int *)(param_1 + 0xa00) == 0) || (lVar2 = fn_82704A98(param_1,param_2), lVar2 == 0)) {
      uVar3 = fn_826C7870(*(undefined4 *)(param_1 + 0x68),param_2,auStack_50,param_4,param_5);
    }
    else {
      uVar3 = fn_82700C78(param_1,param_2,lVar2,auStack_50,param_4,param_5);
    }
    if (((uVar3 & 0xff) != 0) && ((param_3 & 0xffffffff) != 0)) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
      fn_82682D30(param_1,uVar4,auStack_50,param_3);
    }
    fn_82696330(auStack_50);
    lVar2 = fn_82693410();
    *(longlong *)(param_1 + 0xb58) = *(longlong *)(param_1 + 0xb58) + (lVar2 - lVar1);
    return uVar3;
  }
  return 0;
}

