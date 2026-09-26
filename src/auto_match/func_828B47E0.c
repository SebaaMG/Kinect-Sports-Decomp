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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_828B30E8();
extern int fn_828B39D8();
extern int fn_828B3DF8();
extern int fn_828B3F68();
extern int fn_828BE250();
extern int fn_828DC6D0();


void fn_828B47E0(int param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int aiStack_40 [16];
  
  puVar4 = (undefined8 *)(param_2 + 0x30);
  iVar5 = param_1 + 0x44;
  fn_828B3DF8(aiStack_40,iVar5,puVar4);
  if (aiStack_40[0] == *(int *)(param_1 + 0x48)) {
    if (param_3 == '\x01') {
      iVar3 = *(int *)(**(int **)(param_2 + 0x20) + 8);
      uVar1 = fn_8265C9E0(0x90);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_828DC6D0(uVar1,1,param_1 + 0x30);
      }
      fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
      fn_828BE250(*(undefined4 *)(iVar3 + 0x10),uVar2,iVar3);
      iVar3 = fn_828B39D8(iVar5);
      if ((undefined8 *)(iVar3 + 0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(iVar3 + 0x10) = *puVar4;
      }
      fn_828B3F68(aiStack_40,iVar5,iVar3,0);
    }
  }
  else if (param_3 == '\0') {
    iVar3 = *(int *)(**(int **)(param_2 + 0x20) + 8);
    uVar1 = fn_8265C9E0(0x90);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828DC6D0(uVar1,0,param_1 + 0x30);
    }
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    fn_828BE250(*(undefined4 *)(iVar3 + 0x10),uVar2,iVar3);
    iVar3 = fn_828B39D8(iVar5);
    if ((undefined8 *)(iVar3 + 0x10) != (undefined8 *)0x0) {
      *(undefined8 *)(iVar3 + 0x10) = *puVar4;
    }
    fn_828B3F68(aiStack_40,iVar5,iVar3,0);
    fn_828B30E8(aiStack_40,iVar5,aiStack_40[0]);
  }
  return;
}

