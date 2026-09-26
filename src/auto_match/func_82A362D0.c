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
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82F691F0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_82A362D0(undefined4 *param_1)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined2 auStack_50 [2];
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [3];
  byte bStack_31;
  undefined1 auStack_30 [48];
  
  auStack_50[0] = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  iVar1 = ExGetXConfigSetting(3,1,&uStack_44,4,auStack_50);
  if (-1 < iVar1) {
    *param_1 = uStack_44;
    iVar1 = ExGetXConfigSetting(3,2,auStack_34,4,auStack_50);
    if (-1 < iVar1) {
      pbVar3 = (byte *)((int)&uStack_38 + 3);
      puVar2 = (ushort *)((int)param_1 + 2);
      lVar4 = 4;
      do {
        pbVar3 = pbVar3 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = (ushort)*pbVar3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(undefined2 *)(param_1 + 3) = 0;
      iVar1 = ExGetXConfigSetting(3,3,auStack_30,4,auStack_50);
      if (-1 < iVar1) {
        pbVar3 = &bStack_31;
        puVar2 = (ushort *)((int)param_1 + 0x56);
        lVar4 = 4;
        do {
          pbVar3 = pbVar3 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = (ushort)*pbVar3;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        *(undefined2 *)(param_1 + 0x18) = 0;
        iVar1 = ExGetXConfigSetting(3,4,auStack_4c,4,auStack_50);
        if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_1 + 0x11,0,0x10);
        }
      }
    }
  }
  RtlNtStatusToDosError();
  return;
}

