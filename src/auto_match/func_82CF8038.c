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
extern int fn_82CF7C08();
extern int fn_82CF85A0();
extern int fn_82CF8600();
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82CF8038(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 in_r0;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  iVar4 = param_1 + 0x18;
  RtlEnterCriticalSection(iVar4);
  iVar3 = (int)param_4;
  if ((param_3 & 0xffffffff) == 0) {
    if (iVar3 != 0) {
      (**(code **)(param_1 + 0x3c))(0xffffffff82133718,*(undefined4 *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
      RtlLeaveCriticalSection(iVar4);
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      (**(code **)(param_1 + 0x3c))(0xffffffff8213374c,*(undefined4 *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
      RtlLeaveCriticalSection(iVar4);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x44);
    uVar2 = fn_82CF85A0(iVar1,param_3);
    if (*(int *)(iVar1 + 8) < (int)uVar2) {
      (**(code **)(param_1 + 0x3c))(0xffffffff821336f0,*(undefined4 *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
    }
    iVar1 = (int)uVar2 * 0x10 + **(int **)(param_1 + 0x44);
    iStack_3c = *(int *)(iVar1 + 8);
    uStack_40 = *(undefined4 *)(iVar1 + 4);
    uStack_38 = *(undefined4 *)(iVar1 + 0xc);
    if (iStack_3c != iVar3) {
      fn_82CF7C08(param_1,0xffffffff821336d0,param_3,&uStack_40);
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CF8600(*(undefined4 *)(param_1 + 0x44),uVar2);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x2c))
                      (*(int **)(param_1 + 0x34),param_3,param_4);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar3;
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34),param_3,param_4);
  }
  RtlLeaveCriticalSection(iVar4);
  return;
}

