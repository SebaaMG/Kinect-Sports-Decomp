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
extern unsigned int *auStack_60;
extern int fn_82A1E6A0();
extern int fn_82FA5060();
extern int fn_82FE7220();
extern int fn_82FE7320();
extern int fn_82FE7A60();
extern int fn_82FE8948();
extern unsigned int lbl_831BC768;


undefined8 fn_82FE9750(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [8];
  int *piStack_48;
  int aiStack_44 [17];
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0x1f;
  }
  else if ((param_3 & 0xffffffff) == 1) {
    auStack_60[0] = fn_82FE8948(*param_2);
    uVar1 = fn_82FE7A60(param_1,auStack_60,1);
  }
  else {
    puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC768,(param_3 & 0x3fffffff) << 2);
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0x34;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        uVar4 = param_3;
        puVar5 = puVar2;
        do {
          uVar3 = fn_82FE8948(*(undefined4 *)((int)param_2 + ((int)puVar5 - (int)puVar2)));
          *puVar5 = uVar3;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      aiStack_44[0] = fn_82A1E6A0(0,0,0,0);
      if (aiStack_44[0] == 0) {
        uVar1 = 2;
      }
      else {
        piStack_48 = aiStack_44;
        uVar1 = fn_82FE7320(param_1,0xffffffff82fe72a0,auStack_50,puVar2,param_3,0);
        uVar1 = fn_82FE7220(auStack_50,uVar1);
      }
    }
  }
  return uVar1;
}

