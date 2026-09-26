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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEDD60();
extern int fn_82F41728();
extern int fn_82F41758();
extern int fn_82F41920();
extern int fn_82F41938();
extern int fn_82F41B20();
extern int fn_82F41DF8();


longlong fn_82EEE8D8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5,undefined4 *param_6,undefined2 *param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 *puStack_60;
  int aiStack_5c [23];
  
  puStack_60 = (undefined4 *)0x0;
  aiStack_5c[0] = 0;
  if (param_1[0x1d] == 0) {
    lVar4 = -0x7fff0001;
  }
  else {
    lVar4 = fn_82EEDD60(param_1,param_2,param_3,&puStack_60,0,aiStack_5c,in_stack_0000005c);
    puVar1 = puStack_60;
    if (-1 < lVar4) {
      if ((param_5 & 0xffffffff) != 0) {
        if (aiStack_5c[0] == 0) {
          if ((in_stack_0000005c != 0) || (iVar2 = puStack_60[8], iVar2 == 0)) {
            iVar2 = puStack_60[6];
          }
        }
        else {
          iVar2 = puStack_60[0xe];
        }
        lVar4 = fn_82F41DF8(iVar2,param_4,param_5);
        if ((int)lVar4 < 0) {
          return lVar4;
        }
      }
      if (param_7 != (undefined2 *)0x0) {
        *param_7 = *(undefined2 *)(puVar1 + 0x10);
      }
      iVar2 = fn_82E50BE8(0x68,0,0,0,0);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)fn_82F41938();
      }
      if (puVar3 == (undefined4 *)0x0) {
        lVar4 = -0x7ff8fff2;
      }
      else {
        *puVar3 = *puVar1;
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar1 + 1);
        if (in_stack_00000054 != 0) {
          fn_82F41728(puVar3,param_8,in_stack_00000054);
        }
        fn_82F41920(puVar3);
        puVar3[0x13] = in_stack_00000064;
        lVar4 = (**(code **)(*param_1 + 0x24))
                          (param_1,(ulonglong)(in_stack_00000054 != 0) |
                                   -(ulonglong)(in_stack_0000005c != 0) & 0x20000 | 0x200,puVar3);
        fn_82F41920(puVar3);
        if (-1 < (int)lVar4) {
          fn_82F41758(puVar3);
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = puVar3[0xf];
          }
          fn_82F41B20(puVar3);
          fn_82E4FE40(puVar3);
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 != (undefined4 *)0x0) {
          fn_82F41B20(puVar3);
          fn_82E4FE40(puVar3);
        }
      }
    }
  }
  return lVar4;
}

