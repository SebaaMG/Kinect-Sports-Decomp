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
extern int fn_82C27AC8();
extern int fn_82C27B90();


undefined8 fn_82C27F48(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *apiStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_40[0] = (int *)0x0;
  if (((*(longlong *)(param_2 + 8) != *(longlong *)(iVar1 + 0x20)) && (*(int *)(iVar1 + 0x38) != 0))
     && (*(longlong *)(param_2 + 8) != *(longlong *)(iVar1 + 0x30))) {
    return 0xffffffff80500007;
  }
  uVar3 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x48),0x1d,0x10,apiStack_40);
  if (-1 < (int)uVar3) {
    *apiStack_40[0] = 0;
    apiStack_40[0][1] = 0;
    apiStack_40[0][2] = 0;
    apiStack_40[0][3] = 0;
    *apiStack_40[0] = param_2;
    if (*(uint *)(iVar1 + 0x5c) <= *(uint *)(param_2 + 4)) {
      apiStack_40[0][1] = apiStack_40[0][1] + 1;
    }
    if (*(longlong *)(param_2 + 8) == *(longlong *)(iVar1 + 0x20)) {
      uVar3 = fn_82C27AC8();
      if (-1 < (int)uVar3) {
        uVar2 = *(uint *)(iVar1 + 0x5c);
        uVar4 = (ulonglong)*(uint *)(param_2 + 4) + *(longlong *)(iVar1 + 0x20);
        *(ulonglong *)(iVar1 + 0x20) = uVar4;
        if (uVar2 == 0) {
          return uVar3;
        }
        uVar5 = *(ulonglong *)(iVar1 + 0x60);
        if (uVar4 <= uVar5) {
          return uVar3;
        }
        if (uVar2 <= *(uint *)(param_2 + 4)) {
          *(undefined4 *)(iVar1 + 0x5c) = 0;
          *(ulonglong *)(iVar1 + 0x60) = uVar2 + uVar5;
          return uVar3;
        }
        *(ulonglong *)(iVar1 + 0x60) = *(uint *)(param_2 + 4) + uVar5;
        *(uint *)(iVar1 + 0x5c) = uVar2 - *(int *)(param_2 + 4);
        return uVar3;
      }
    }
    else {
      uVar3 = fn_82C27B90(param_1,apiStack_40[0]);
      if (-1 < (int)uVar3) {
        *(ulonglong *)(iVar1 + 0x30) =
             (ulonglong)*(uint *)(param_2 + 4) + *(longlong *)(iVar1 + 0x30);
        return uVar3;
      }
    }
  }
  if (apiStack_40[0] != (int *)0x0) {
    fn_82C10B28(*(undefined4 *)(iVar1 + 0x48),0x1d,apiStack_40);
  }
  return uVar3;
}

