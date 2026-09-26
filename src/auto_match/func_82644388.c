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


uint fn_82644388(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int in_r13;
  uint uVar4;
  int aiStack_40 [3];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = param_2 + param_3 & *(uint *)(param_1 + 0x3b08);
  uVar1 = (*(undefined4 **)(param_1 + 0x2a90))[0xf];
  if (param_2 < uVar4) {
    if (uVar1 <= param_2) {
      return uVar4;
    }
  }
  else if (param_2 < uVar1) goto LAB_826443d4;
  if (uVar4 < uVar1) {
    return uVar4;
  }
LAB_826443d4:
  aiStack_40[2] = **(undefined4 **)(param_1 + 0x2a90);
  aiStack_40[1] = 1;
  uStack_34 = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x58);
  uVar2 = TBLr;
  uStack_2c = (undefined4)uVar2;
  aiStack_40[0] = param_1;
  uStack_30 = uStack_34;
LAB_82644400:
  do {
    iVar3 = fn_82646F48(aiStack_40);
    if (iVar3 == 0) goto LAB_8264443c;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x2a90) + 0x3c);
    if (param_2 < uVar4) {
      if (uVar1 <= param_2) goto LAB_8264443c;
    }
    else if (param_2 < uVar1) goto LAB_82644400;
    if (uVar4 < uVar1) {
LAB_8264443c:
      fn_82646E80(aiStack_40);
      return uVar4;
    }
  } while( true );
}

