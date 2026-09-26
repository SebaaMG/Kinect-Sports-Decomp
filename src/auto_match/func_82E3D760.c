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
extern unsigned int *auStack_50;
extern unsigned int *auStack_78;
extern int fn_82E3ACD8();
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E6EEC0();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


undefined8
fn_82E3D760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  int *apiStack_80 [2];
  undefined1 auStack_78 [8];
  byte abStack_70 [4];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  byte abStack_60 [16];
  undefined1 auStack_50 [80];
  
  uVar7 = 1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  fn_82E3ACD8(abStack_60,param_1,&stack0x00000020);
  param_1 = param_1 + 0x1ac;
  apiStack_80[0] = (int *)0x0;
  fn_82E3BDF8(param_1,auStack_78);
  iVar4 = fn_82E3C690(param_1,auStack_78,auStack_50,apiStack_80);
  if (iVar4 != 0) {
    uVar7 = 0;
    do {
      piVar3 = apiStack_80[0];
      pbVar6 = abStack_70;
      pbVar5 = abStack_60;
      iStack_6c = apiStack_80[0][8];
      iStack_68 = apiStack_80[0][9];
      iStack_64 = apiStack_80[0][10];
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != abStack_60);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        if (param_4 != (undefined4 *)0x0) {
          (**(code **)(*apiStack_80[0] + 0xc))(apiStack_80[0],param_4);
        }
        if (param_5 == (undefined4 *)0x0) {
          return 0;
        }
        fn_82E6EEC0(piVar3,param_5,0);
        return 0;
      }
      iVar4 = fn_82E3C690(param_1,auStack_78,auStack_50,apiStack_80);
    } while (iVar4 != 0);
  }
  return uVar7;
}

