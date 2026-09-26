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
#define TBLr 0
extern int fn_82646E80();
extern int fn_82646F48();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_82643D58(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int in_r13;
  int aiStack_40 [3];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = (*(undefined4 **)(param_1 + 0x2a90))[1];
  uVar3 = param_3 - uVar1 & 3;
  if ((uVar3 != 0) && ((uVar3 != 1 || ((uVar1 & 0xfffffffc) < param_2)))) {
    aiStack_40[2] = **(undefined4 **)(param_1 + 0x2a90);
    aiStack_40[1] = 2;
    uStack_34 = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x58);
    uVar2 = TBLr;
    uStack_2c = (undefined4)uVar2;
    aiStack_40[0] = param_1;
    uStack_30 = uStack_34;
    while( true ) {
      iVar4 = fn_82646F48(aiStack_40);
      if (iVar4 == 0) break;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x2a90) + 4);
      uVar3 = param_3 - uVar1 & 3;
      if ((uVar3 == 0) || ((uVar3 == 1 && (param_2 <= (uVar1 & 0xfffffffc))))) break;
    }
    fn_82646E80(aiStack_40);
  }
  return;
}

