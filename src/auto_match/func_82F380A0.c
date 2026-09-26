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
extern int fn_82F37588();
extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


undefined8 fn_82F380A0(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int *apiStack_30 [12];
  
  pbVar6 = (byte *)&lbl_8202E618;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar3 = param_1[0x1c];
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        fn_82F377E8(param_1 + 2,uVar7,apiStack_30);
        if ((int *)*apiStack_30[0] != (int *)0x0) {
          (**(code **)(*(int *)*apiStack_30[0] + 8))();
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (ulonglong)uVar3);
    }
    fn_82F37588(param_1 + 2,0);
    param_1[0x1c] = 0;
  }
  else {
    do {
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_2,0,0);
    } while (-1 < iVar4);
  }
  return 0;
}

