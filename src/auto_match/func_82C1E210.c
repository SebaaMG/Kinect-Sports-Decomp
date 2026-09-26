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
extern int fn_82C10F40();


undefined8 fn_82C1E210(int param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int aiStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  aiStack_30[0] = 0;
  if (*(short *)(iVar1 + 0x98) != 0) {
    uVar3 = fn_82C10F40(*(undefined4 *)(iVar1 + 0x94),param_2,aiStack_30);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((*(int *)(aiStack_30[0] + 4) == 0) || (*(int *)(aiStack_30[0] + 4) == 2)) {
      return 0xffffffff805000bc;
    }
    if (*(int *)(aiStack_30[0] + 0x30) == 2) {
      uVar2 = *(uint *)(iVar1 + 0xdc);
      if (param_4 == 0) {
        if (uVar2 < *(uint *)(*(int *)(aiStack_30[0] + 0x48) + 0xc)) {
          uVar4 = uVar2 + 1;
        }
      }
      else if (uVar2 != 0) {
        uVar4 = uVar2 - 1;
      }
      if (uVar4 <= *(uint *)(*(int *)(aiStack_30[0] + 0x48) + 0xc)) {
        uVar2 = *(uint *)(*(int *)(*(int *)(aiStack_30[0] + 0x48) + 0x10) + uVar4 * 8);
        if (uVar2 <= *(uint *)(*(int *)(iVar1 + 4) + 0xc)) {
          *param_3 = ((longlong)*(int *)(*(int *)(iVar1 + 4) + 8) * (longlong)(int)uVar2 &
                     0xffffffffU) + *(longlong *)(iVar1 + 0x10);
          *(uint *)(iVar1 + 0xdc) = uVar4;
          return uVar3;
        }
      }
      return 0xffffffff80070057;
    }
  }
  return 0xffffffff805000bb;
}

