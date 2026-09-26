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
extern int fn_82F41740();
extern int fn_82F41770();
extern unsigned int uStack_3c;


undefined8 fn_82F40958(int param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint *puStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [14];
  
  puStack_40 = (uint *)(aiStack_38 + 1);
  uStack_3c = 0;
  aiStack_38[1] = 0;
  uVar1 = 0;
  if ((param_2 & 0x1ffff) != 0 || (param_2 & 0x10001) != 0) {
    if (((param_2 & 1) == 0) ||
       ((iVar2 = fn_82F41740(param_3,&uStack_3c,&puStack_40), iVar2 != 0 &&
        (puStack_40 != (uint *)0x0)))) {
      aiStack_38[0] = 0;
      param_1 = *(int *)(*(int *)(param_1 + -0x18) + 4) + param_1;
      uVar1 = (**(code **)(*(int *)(param_1 + -0x18) + 0x50))
                        (param_1 + -0x18,*(undefined4 *)(param_3 + 0x18),param_3 + 0x3c,
                         *(undefined4 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x44),uStack_3c,
                         puStack_40,aiStack_38);
      if (-1 < (int)uVar1) {
        if (aiStack_38[0] == 0) {
          uVar3 = *(uint *)(param_3 + 0x44);
          if (((param_2 & 1) != 0) &&
             (uVar1 = fn_82F41770(param_3,*(undefined4 *)(param_3 + 0x48)), (int)uVar1 < 0))
          goto LAB_82f40a58;
        }
        else {
          uVar3 = *puStack_40;
        }
        if (0xffff < uVar3) {
          *(undefined4 *)(param_3 + 8) = 1;
        }
      }
    }
    else {
      uVar1 = 0xffffffff80004005;
    }
  }
LAB_82f40a58:
  *(undefined4 *)(param_3 + 0x48) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  return uVar1;
}

