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
extern int fn_82C7F978();
extern int fn_82C80930();
extern int fn_82C80BA0();
extern int fn_82C80FF0();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


undefined8
fn_82C81730(int param_1,ulonglong param_2,uint param_3,int *param_4,ulonglong param_5,uint param_6
             ,int *param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int aiStack_54 [21];
  
  if ((((param_4 != (int *)0x0) && (param_7 != (int *)0x0)) && (param_1 != 0)) &&
     (((param_2 & 0xffffffff) != 0 && ((param_5 & 0xffffffff) != 0)))) {
    if (*(int *)(param_1 + 0x128) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      uVar1 = fn_82C80930();
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x80) = 1;
    iStack_60 = 0;
    iStack_5c = 0;
    iStack_58 = 0;
    aiStack_54[0] = 0;
    iVar2 = fn_82C80BA0(param_1,param_2,0);
    if (iVar2 != 0) {
      lVar3 = (longlong)((int)param_6 >> 1) + (ulonglong)((int)param_6 < 0 && (param_6 & 1) != 0);
      lVar4 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0);
      uVar1 = fn_82C7F978(param_1,*(undefined4 *)(param_1 + 0x130),lVar4,&iStack_60,
                            *(undefined4 *)(param_1 + 0x134),lVar3,&iStack_58);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = fn_82C80FF0(param_1,param_5,0);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 1;
        *(undefined4 *)(param_1 + 0xfc) = 1;
        iVar2 = fn_82C80BA0(param_1,param_2,1);
        if (iVar2 != 0) {
          uVar1 = fn_82C7F978(param_1,*(undefined4 *)(param_1 + 0x130),lVar4,&iStack_5c,
                                *(undefined4 *)(param_1 + 0x134),lVar3,aiStack_54);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar2 = fn_82C80FF0(param_1,param_5,1);
          if (iVar2 != 0) {
            *param_4 = iStack_5c + iStack_60;
            *param_7 = aiStack_54[0] + iStack_58;
            return uVar1;
          }
        }
      }
    }
  }
  return 1;
}

