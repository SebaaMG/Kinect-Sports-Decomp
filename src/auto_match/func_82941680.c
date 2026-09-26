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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82941680(int *param_1,undefined8 param_2,uint param_3,int param_4,int param_5,ulonglong param_6
             )

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  if ((param_3 != 0) && (uVar4 = 0, param_1[0x1c6] != 0)) {
    do {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      fn_828F6FA8(auStack_b0,0x20,0xffffffff820347dc,uVar4);
      fn_828F6FA8(auStack_d0,0x20,param_2,uVar4,uVar4);
      uVar1 = 0xffffffff820347e8;
      if (param_4 == 0) {
        uVar1 = 0xffffffff820347d0;
      }
      fn_828F6FA8(auStack_f0,0x20,uVar1,uVar4);
      puVar2 = auStack_b0;
      if (param_5 == 0) {
        puVar2 = auStack_d0;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,puVar2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((param_6 & 0xffffffff) == 0) {
        puVar2 = auStack_b0;
      }
      else {
        fn_828F6FA8(auStack_90,0x20,param_6,uVar4,uVar4);
        puVar2 = auStack_90;
      }
      if ((param_3 & 0xd000000) == 0) {
        puVar3 = auStack_d0;
      }
      else {
        puVar3 = puVar2;
        puVar2 = auStack_d0;
      }
      uVar1 = (**(code **)(*param_1 + 400))(param_1,puVar3,puVar2,auStack_f0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}

