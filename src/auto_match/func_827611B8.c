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
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_268;
extern unsigned int *auStack_270;
extern unsigned int *auStack_a0;
extern unsigned int fStack_294;
extern unsigned int fStack_298;
extern unsigned int fStack_29c;
extern unsigned int fStack_2a0;
extern int fn_8275D2B8();
extern int fn_8275E130();
extern int fn_8275E498();
extern int fn_8275FD58();
extern int fn_8275FDB0();
extern int fn_82760648();
extern unsigned int iStack_230;
extern unsigned int iStack_250;
extern unsigned int iStack_2b4;
extern unsigned int iStack_2b8;
extern unsigned int iStack_2bc;
extern unsigned int iStack_2c0;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;


undefined8 fn_827611B8(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int aiStack_2b0 [2];
  int aiStack_2a8 [2];
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  byte abStack_284 [4];
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  byte abStack_260 [16];
  int iStack_250;
  byte abStack_240 [16];
  int iStack_230;
  undefined1 auStack_220 [20];
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  char cStack_200;
  undefined1 auStack_1a0 [20];
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  char cStack_180;
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [160];
  
  iStack_2b8 = 0;
  iStack_2bc = 0;
  (**(code **)(*param_1 + 0x44))(param_1,&iStack_2b8,&iStack_2bc);
  iStack_2c0 = 0;
  iStack_2b4 = 0;
  (**(code **)(*param_2 + 0x44))(param_2,&iStack_2c0,&iStack_2b4);
  if ((iStack_2b8 == iStack_2c0) && (iStack_2bc == iStack_2b4)) {
    fn_82760648(auStack_220,param_1);
    fn_82760648(auStack_1a0,param_2);
    while (cStack_200 != '\x01') {
      if (cStack_180 == '\x01') goto LAB_82761438;
      pbVar10 = (byte *)&uStack_290;
      pbVar8 = (byte *)&uStack_280;
      uStack_290 = uStack_20c;
      uStack_28c = uStack_208;
      uStack_288 = uStack_204;
      uStack_280 = uStack_18c;
      uStack_27c = uStack_188;
      uStack_278 = uStack_184;
      do {
        bVar1 = *pbVar10;
        bVar2 = *pbVar8;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar10 = pbVar10 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar10 != abStack_284);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82761438;
      fn_8275FD58(aiStack_2a8,auStack_220);
      fn_8275FD58(aiStack_2b0,auStack_1a0);
      fn_8275E130(aiStack_2a8,&fStack_294,&fStack_29c);
      fn_8275E130(aiStack_2b0,&fStack_298,&fStack_2a0);
      iVar12 = aiStack_2a8[0];
      if ((fStack_294 != fStack_298) || (fStack_29c != fStack_2a0)) goto LAB_82761438;
      fn_8275D2B8(auStack_120,aiStack_2a8[0]);
      fn_8275FD58(auStack_270,auStack_120);
      iVar5 = fn_8275FDB0(auStack_270);
      iVar11 = aiStack_2b0[0];
      fn_8275D2B8(auStack_a0,aiStack_2b0[0]);
      fn_8275FD58(auStack_268,auStack_a0);
      iVar6 = fn_8275FDB0(auStack_268);
      if (iVar5 != iVar6) goto LAB_82761438;
      while( true ) {
        if ((*(byte *)(iVar12 + 0x20) == 1) ||
           (bVar3 = false, (*(byte *)(iVar12 + 0x20) & 0x80) == 0)) {
          bVar3 = true;
        }
        if (bVar3) break;
        if ((*(byte *)(iVar11 + 0x20) == 1) ||
           (bVar3 = false, (*(byte *)(iVar11 + 0x20) & 0x80) == 0)) {
          bVar3 = true;
        }
        if (bVar3) goto LAB_82761438;
        fn_8275E498(aiStack_2a8,abStack_260);
        fn_8275E498(aiStack_2b0,abStack_240);
        if (iStack_250 != iStack_230) goto LAB_82761438;
        pbVar8 = abStack_240;
        pbVar10 = abStack_260;
        lVar7 = 0;
        if (iStack_250 * 4 != 0) {
          pbVar9 = pbVar10 + iStack_250 * 4;
          do {
            lVar7 = (ulonglong)*pbVar10 - (ulonglong)*pbVar8;
            if (lVar7 != 0) break;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar10 != pbVar9);
        }
        iVar12 = aiStack_2a8[0];
        iVar11 = aiStack_2b0[0];
        if ((int)lVar7 != 0) goto LAB_82761438;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_82761438:
    uVar4 = 0;
  }
  return uVar4;
}

