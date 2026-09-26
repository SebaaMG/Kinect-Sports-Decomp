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
extern int fn_82EDB498();
extern int fn_82EDC690();
extern int fn_82EDC950();
extern int fn_82EDCD00();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8
fn_82EDD388(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,ulonglong param_5,
             ulonglong param_6,int *param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int aiStack_44 [17];
  
  if ((((param_4 != (int *)0x0) && (param_7 != (int *)0x0)) && (param_1 != 0)) &&
     (((param_2 & 0xffffffff) != 0 && ((param_5 & 0xffffffff) != 0)))) {
    if (*(int *)(param_1 + 0x158) == 0) {
      uVar3 = fn_82EDC690();
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    iStack_50 = 0;
    iStack_4c = 0;
    iStack_48 = 0;
    aiStack_44[0] = 0;
    iVar4 = fn_82EDC950(param_1,param_2,0,*(undefined4 *)(param_1 + 0x38));
    if (iVar4 != 0) {
      uVar1 = (param_6 & 0xffffffff) >> 1;
      uVar2 = (param_3 & 0xffffffff) >> 1;
      uVar3 = fn_82EDB498(param_1,*(undefined4 *)(param_1 + 0x160),uVar2,&iStack_50,
                              *(undefined4 *)(param_1 + 0x164),uVar1,&iStack_48);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar4 = fn_82EDCD00(param_1,param_5,0,*(undefined4 *)(param_1 + 0x3c));
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xa8) = 1;
        *(undefined4 *)(param_1 + 300) = 1;
        iVar4 = fn_82EDC950(param_1,param_2,1,*(undefined4 *)(param_1 + 0x38));
        if (iVar4 != 0) {
          uVar3 = fn_82EDB498(param_1,*(undefined4 *)(param_1 + 0x160),uVar2,&iStack_4c,
                                  *(undefined4 *)(param_1 + 0x164),uVar1,aiStack_44);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar4 = fn_82EDCD00(param_1,param_5,1,*(undefined4 *)(param_1 + 0x3c));
          if (iVar4 != 0) {
            *param_4 = iStack_4c + iStack_50;
            *param_7 = aiStack_44[0] + iStack_48;
            return uVar3;
          }
        }
      }
    }
  }
  return 1;
}

