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
extern unsigned int *auStack_40;
extern int fn_82647308();
extern int fn_82647578();
extern int fn_82648AF0();
extern int fn_8264B7E0();
extern int fn_829F5478();
extern int fn_829F5C40();
extern int fn_829F62C8();
extern int fn_82A0D598();
extern int fn_82A0D628();
extern int fn_82D7E470();
extern unsigned int *lbl_83218C34;


ulonglong fn_829F6448(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 auStack_40 [16];
  
  puVar4 = param_2 + -1;
  lVar5 = 7;
  puVar3 = param_1 + 0x41a7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  auStack_40[0] = 0;
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[0x4190] = uVar1;
  fn_82648AF0(uVar1,auStack_40);
  puVar4 = param_1 + 0x4191;
  uVar2 = fn_82647308(0,2,0,0,0,puVar4);
  if ((-1 < (int)uVar2) && (uVar2 = fn_829F5478(param_1 + 4), (uVar2 & 0xffffffff) == 0)) {
    uVar2 = fn_82A0D598(param_1 + 0x2c,*puVar4,param_2[2],(ulonglong)*param_1 - 2);
    if (((uVar2 & 0xffffffff) == 0) &&
       (uVar2 = fn_82D7E470(param_1 + 0x34), (uVar2 & 0xffffffff) == 0)) {
      if (lbl_83218C34 != (int *)0x0) {
        (**(code **)(*lbl_83218C34 + 0x74))(lbl_83218C34,param_2[1]);
      }
      fn_8264B7E0(*puVar4,*(undefined4 *)param_2[6],0,0,0,0,0);
      fn_829F5C40(*puVar4,1);
      fn_829F62C8(param_1,*puVar4);
      fn_82A0D628(param_1 + 0x2c,param_2[6],param_2[4],param_2[5],(ulonglong)*param_1 - 2);
      fn_82647578(*puVar4);
    }
  }
  return uVar2;
}

