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
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C2A750();


undefined8 fn_82C2AE10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int *apiStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_40[0] = (int *)0x0;
  if (*(longlong *)(param_2 + 8) == *(longlong *)(iVar1 + 0x20)) {
    uVar5 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x30),0x1f,0xc,apiStack_40);
    if (-1 < (int)uVar5) {
      *apiStack_40[0] = 0;
      apiStack_40[0][1] = 0;
      apiStack_40[0][2] = 0;
      *apiStack_40[0] = param_2;
      uVar5 = fn_82C2A750(param_1,apiStack_40[0]);
      if (-1 < (int)uVar5) {
        uVar2 = *(uint *)(iVar1 + 0x44);
        uVar3 = (ulonglong)*(uint *)(param_2 + 4) + *(longlong *)(iVar1 + 0x20);
        *(ulonglong *)(iVar1 + 0x20) = uVar3;
        if (uVar2 == 0) {
          return uVar5;
        }
        uVar4 = *(ulonglong *)(iVar1 + 0x48);
        if (uVar3 <= uVar4) {
          return uVar5;
        }
        if (uVar2 <= *(uint *)(param_2 + 4)) {
          *(undefined4 *)(iVar1 + 0x44) = 0;
          *(ulonglong *)(iVar1 + 0x48) = uVar2 + uVar4;
          return uVar5;
        }
        *(ulonglong *)(iVar1 + 0x48) = *(uint *)(param_2 + 4) + uVar4;
        *(uint *)(iVar1 + 0x44) = uVar2 - *(int *)(param_2 + 4);
        return uVar5;
      }
    }
  }
  else {
    uVar5 = 0xffffffff80500007;
  }
  fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,apiStack_40);
  return uVar5;
}

