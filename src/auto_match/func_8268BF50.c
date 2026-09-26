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
extern int fn_8267BE38();
extern int fn_8268B120();
extern int fn_8268B1F0();
extern int fn_8268BB68();
extern int fn_826BD078();
extern unsigned int lbl_831E7E64;
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8268BF50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uStack00000014;
  int aiStack_50 [4];
  undefined1 uStack_40;
  undefined4 uStack_3c;
  
  aiStack_50[1] = 0;
  aiStack_50[2] = 0;
  aiStack_50[0] = 0;
  aiStack_50[3] = 0x200;
  uStack_40 = 0;
  uStack_3c = lbl_831E7E64;
  uStack00000014 = param_1;
  uVar1 = fn_826BD078(&stack0x00000014);
  iVar4 = 0;
  if ((uVar1 & 0xffffffff) != 0) {
    do {
      uVar2 = 0xffffffff82005c40;
      if ((uVar1 & 0xffffffff) == 0x3c) {
LAB_8268bfe4:
        uVar3 = 4;
LAB_8268c020:
        fn_8268B1F0(aiStack_50,uVar2,uVar3);
      }
      else {
        if ((uVar1 & 0xffffffff) == 0x3e) {
          uVar2 = 0xffffffff82005c48;
          goto LAB_8268bfe4;
        }
        uVar2 = 0xffffffff82005c50;
        if ((uVar1 & 0xffffffff) == 0x22) {
LAB_8268c008:
          uVar3 = 6;
          goto LAB_8268c020;
        }
        if ((uVar1 & 0xffffffff) == 0x27) {
          uVar2 = 0xffffffff82005c58;
          goto LAB_8268c008;
        }
        if ((uVar1 & 0xffffffff) == 0x26) {
          uVar3 = 5;
          uVar2 = 0xffffffff82005c60;
          goto LAB_8268c020;
        }
        fn_8268B120(aiStack_50,uVar1);
      }
      uVar1 = fn_826BD078(&stack0x00000014);
      iVar4 = aiStack_50[0];
    } while ((uVar1 & 0xffffffff) != 0);
  }
  fn_8268BB68(param_3,aiStack_50);
  if (iVar4 != 0) {
    fn_8267BE38(iVar4);
  }
  return;
}

