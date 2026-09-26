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
extern int fn_82ADDE40();
extern int fn_82ADE7E8();
extern int fn_82ADEE50();
extern int fn_82ADF288();
extern int fn_82ADF598();
extern int fn_82AE5AC8();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82ADF780(int param_1,int param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar4;
  undefined8 uVar2;
  int iVar3;
  uint uVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  int aiStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar6 = *(uint *)(param_2 + 0xc0);
  uVar5 = (ulonglong)uVar6 & 7;
  uVar7 = 0;
  if ((uVar6 & 7) != 0) {
    do {
      cVar4 = fn_82ADF598(param_1,param_2,param_3,param_4,uVar7);
      if (cVar4 != '\0') goto LAB_82adf8f8;
      uVar6 = *(uint *)(param_2 + 0xc0);
      uVar7 = uVar7 + 1;
      uVar5 = (ulonglong)uVar6 & 7;
    } while ((uVar7 & 0xffffffff) < uVar5);
  }
  if (uVar5 == 4) {
    uVar2 = 0;
  }
  else {
    if ((uVar6 & 0x40000000) != 0) {
      uVar6 = 0;
      do {
        if (*(longlong *)((param_4 * 5 + uVar6 + 1) * 8 + *(int *)(param_1 + 0x2a4)) != 0) {
          bVar1 = true;
          goto LAB_82adf830;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
      bVar1 = false;
LAB_82adf830:
      if (bVar1) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x318);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        if (uVar5 == 0) {
          uVar5 = 0x20;
        }
        aiStack_60[0] = param_1;
        if (uVar5 < 0x40) {
          fn_82AE5AC8(aiStack_60,uVar5,0x40 - uVar5);
        }
        uVar2 = fn_82ADE7E8(param_1);
        fn_82ADEE50(param_1,uVar2,param_3,param_4,1);
        uVar6 = *(uint *)(param_2 + 0xc0) & 7;
        iVar3 = fn_82ADF288(param_1,param_2,uVar2,uVar6,uVar6 + 1,0,0,aiStack_60);
        fn_82ADDE40(param_1,uVar2);
        if (iVar3 == -1) {
          return 0;
        }
      }
    }
LAB_82adf8f8:
    uVar2 = 1;
  }
  return uVar2;
}

