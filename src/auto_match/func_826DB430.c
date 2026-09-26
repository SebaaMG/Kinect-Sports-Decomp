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
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826BCE08();
extern int fn_826D9828();
extern unsigned int iStack_24;
extern U64 storeWordConditionalIndexed();


undefined8 fn_826DB430(undefined8 param_1,byte *param_2,int *param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  bool bVar5;
  byte *pbVar7;
  ulonglong uVar6;
  byte bVar8;
  char in_RESERVE;
  byte bVar9;
  double dVar10;
  byte *pbStack_30;
  uint auStack_2c [2];
  int iStack_24;
  
  if ((param_2 != (byte *)0x0) && (bVar8 = *param_2, bVar8 != 0)) {
    bVar9 = (param_4 == '\0') << 1;
    if (param_4 == '\0') {
LAB_826db500:
      pbStack_30 = (byte *)fn_8268C510(auStack_2c,param_2);
      uVar2 = fn_826D9828(param_1,&pbStack_30,param_3);
      lVar3 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
      do {
        puVar4 = (uint *)lVar3;
        uVar6 = (ulonglong)*puVar4;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar3);
          *puVar4 = uVar1;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar6 != 1) {
        return uVar2;
      }
      fn_8267BE38();
      return uVar2;
    }
    bVar5 = false;
    pbVar7 = param_2;
    do {
      if ((bVar8 < 0x30) || (0x39 < bVar8)) {
        if ((((bVar8 != 0x2b) && (bVar8 != 0x2d)) || (bVar9 = !bVar5 << 1, bVar5)) &&
           ((bVar8 != 0x20 && (bVar8 != 9)))) goto LAB_826db500;
      }
      else {
        bVar5 = true;
      }
      pbVar7 = pbVar7 + 1;
      bVar8 = *pbVar7;
      bVar9 = (bVar8 == 0) << 1;
    } while (bVar8 != 0);
    pbStack_30 = (byte *)0x0;
    dVar10 = (double)fn_826BCE08(param_2,&pbStack_30);
    iStack_24 = (int)(longlong)dVar10;
    if ((pbStack_30 != param_2) && (*pbStack_30 == 0)) {
      *param_3 = iStack_24 + -1;
      return 1;
    }
  }
  return 0;
}

