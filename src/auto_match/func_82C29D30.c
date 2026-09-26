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
extern int fn_82C27A68();
extern int fn_82C28FC8();
extern int fn_82C29268();
extern int fn_82C297F8();
extern int fn_82C29B90();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C29D30(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [14];
  
  iStack_40 = 0;
  aiStack_38[0] = 0;
  aiStack_38[2] = 0;
  iStack_3c = 0;
  aiStack_38[1] = 0;
  uVar2 = fn_82C27A68(param_1,param_2,&iStack_40);
  if (-1 < (int)uVar2) {
    if (iStack_40 == 0) {
      uVar2 = 0xffffffff80500009;
    }
    else {
      if (*(int *)((int)param_2 + 0x1c) != 0) {
        do {
          uVar2 = fn_82C29B90(param_1,param_2,aiStack_38 + 2,aiStack_38 + 1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        } while ((int)uVar2 != 0x500001);
      }
      uVar2 = fn_82C297F8(param_1,param_2[2],aiStack_38,&iStack_3c);
      if (-1 < (int)uVar2) {
        if (iStack_3c == 0) {
          uVar2 = 0xffffffff80500008;
        }
        else {
          *(int *)(aiStack_38[0] + 4) = *(int *)(aiStack_38[0] + 4) + -1;
          uVar1 = *(uint *)(param_2 + 3);
          lVar3 = *param_2;
          uVar2 = fn_82C28FC8(param_1,param_2);
          if (-1 < (int)uVar2) {
            uVar2 = fn_82C29268(param_1,(ulonglong)uVar1 + lVar3);
          }
        }
      }
    }
  }
  return uVar2;
}

