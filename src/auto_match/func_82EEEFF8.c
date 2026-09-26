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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEDD00();
extern int fn_82EEE070();
extern int fn_82EEE258();
extern int fn_82F41728();
extern int fn_82F41758();
extern int fn_82F41920();
extern unsigned int uStack_50;


longlong fn_82EEEFF8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uStack_50;
  int aiStack_4c [19];
  
  uVar1 = param_1[0x1c];
  lVar4 = 0;
  aiStack_4c[0] = 0;
  uStack_50 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    while (lVar4 = fn_82EEDD00(param_1,uVar3,aiStack_4c), iVar5 = aiStack_4c[0], -1 < lVar4) {
      if (aiStack_4c[0] == 0) goto LAB_82eef1f0;
      fn_82F41920(aiStack_4c[0]);
      uStack_50 = 0;
      fn_82F41728(iVar5,0,&uStack_50);
      lVar4 = (**(code **)(*param_1 + 0x24))(param_1,0x20201,iVar5);
      fn_82F41920(iVar5);
      if ((int)lVar4 < 0) break;
      uVar2 = fn_82E50BE8(uStack_50,0,0,0,0);
      if (uVar2 == 0) {
        lVar4 = -0x7ff8fff2;
LAB_82eef1a8:
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar2);
        }
        break;
      }
      fn_82F41728(iVar5,uVar2,&uStack_50);
      lVar4 = (**(code **)(*param_1 + 0x24))(param_1,0x20201,iVar5);
      fn_82F41920(iVar5);
      fn_82F41758(iVar5);
      if ((int)lVar4 < 0) goto LAB_82eef1a8;
      lVar4 = (**(code **)(*param_1 + 0x24))(param_1,0x20800,iVar5);
      if ((int)lVar4 == -0x3ff2c172) {
        lVar4 = 0;
      }
      else if ((((int)lVar4 < 0) || (lVar4 = fn_82EEE258(param_1,iVar5), lVar4 < 0)) ||
              (lVar4 = fn_82EEE070(param_1,iVar5,uVar2,uStack_50,0,0,1), lVar4 < 0))
      goto LAB_82eef1a8;
      fn_82E4FE40(uVar2);
      uVar3 = uVar3 + 1;
      if ((ulonglong)uVar1 <= (uVar3 & 0xffffffff)) break;
    }
    iVar5 = (int)lVar4;
    if (((iVar5 == -0x7ff8ffa9) || (iVar5 == -0x3ff2c94f)) ||
       ((iVar5 == -0x3ff2c172 || (iVar5 == -0x3ff2c171)))) {
LAB_82eef1f0:
      lVar4 = -0x7fff0001;
    }
  }
  return lVar4;
}

