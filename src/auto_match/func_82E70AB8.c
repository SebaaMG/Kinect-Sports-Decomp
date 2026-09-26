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
extern int fn_82E6F498();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int uStack_58;


undefined8
fn_82E70AB8(int *param_1,ulonglong param_2,int param_3,longlong param_4,longlong *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  int aiStack_60 [2];
  undefined8 uStack_58;
  byte abStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_4c = param_1[4];
  iStack_48 = param_1[5];
  iStack_44 = param_1[6];
  pbVar5 = (byte *)&lbl_8202E618;
  uStack_58 = 0;
  uVar3 = 0;
  aiStack_60[0] = 0;
  pbVar4 = abStack_50;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_2 - uVar6,&uStack_58,0);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_82E6F498(param_1,uStack_58,aiStack_60);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (aiStack_60[0] != param_3) {
          param_4 = (param_2 - uVar6) * param_4;
          goto LAB_82e70bc4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
  }
  else {
    param_4 = -1;
    uVar3 = 0;
LAB_82e70bc4:
    *param_5 = param_4;
  }
  return uVar3;
}

