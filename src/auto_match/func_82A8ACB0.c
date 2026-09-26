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
extern unsigned int *auStack_260;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_320;
extern unsigned int *auStack_360;
extern int fn_82A862C8();
extern int fn_82A86818();
extern int fn_82A86CB0();
extern int fn_82A86E00();
extern int fn_82A87EC8();
extern int fn_82A8A9F8();
extern int fn_82A8C620();
extern int fn_82A8CF10();
extern int fn_82F68CC0();
extern unsigned int iStack_37c;
extern unsigned int lbl_821CB794;
extern unsigned int uStack_2fc;
extern unsigned int uStack_300;
extern unsigned int uStack_380;
extern unsigned int uStack_60;


bool fn_82A8ACB0(uint *param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_380;
  int iStack_37c;
  int aiStack_378 [2];
  int aiStack_370 [2];
  int aiStack_368 [2];
  undefined1 auStack_360 [48];
  undefined **appuStack_330 [4];
  undefined1 auStack_320 [8];
  undefined **appuStack_318 [6];
  uint uStack_300;
  uint uStack_2fc;
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [512];
  uint uStack_60;
  
  if ((((param_1[7] != 0) && (param_1[8] != 0)) &&
      (cVar1 = (**(code **)(*param_2 + 4))(param_2), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_290,0x30,&uStack_380), cVar1 != '\0'))
  {
    fn_82F68CC0(&uStack_300,param_1,0x34);
    fn_82A86CB0(auStack_360,auStack_290,0x30);
    fn_82A8C620(auStack_360,0,0x20,param_1);
    fn_82A8C620(auStack_360,0x20,0x20,param_1 + 1);
    fn_82A8C620(auStack_360,0x40,0x20,param_1 + 2);
    fn_82A8C620(auStack_360,0x60,0x20,param_1 + 3);
    fn_82A8C620(auStack_360,0x80,0x20,param_1 + 4);
    puVar5 = param_1 + 5;
    fn_82A8C620(auStack_360,0xa0,0x20,puVar5);
    puVar2 = param_1 + 6;
    fn_82A8C620(auStack_360,0xc0,0x20,puVar2);
    fn_82A8C620(auStack_360,0xe0,0x20,aiStack_368);
    fn_82A8C620(auStack_360,0x100,0x20,aiStack_370);
    fn_82A8C620(auStack_360,0x120,0x20,aiStack_378);
    fn_82A8C620(auStack_360,0x140,0x20,&iStack_37c);
    fn_82A8C620(auStack_360,0x160,0x20,&uStack_380);
    param_1[9] = param_1[8] + aiStack_368[0];
    param_1[10] = param_1[8] + aiStack_370[0];
    param_1[0xb] = param_1[7] + aiStack_378[0];
    param_1[0xc] = param_1[7] + iStack_37c;
    if ((ulonglong)uStack_380 <= (param_3 & 0xffffffff)) {
      if ((*param_1 <= uStack_300) && (param_1[1] <= uStack_2fc)) {
        uVar4 = 0;
        if (*puVar5 != 0) {
          lVar3 = 0;
          do {
            uStack_60 = param_1[8];
            fn_82A8CF10(appuStack_330,param_2);
            cVar1 = fn_82A8A9F8(auStack_260,appuStack_330);
            if (cVar1 == '\0') {
              return false;
            }
            fn_82F68CC0(lVar3 + (ulonglong)param_1[0xb],auStack_260,0x200);
            uVar4 = uVar4 + 1;
            appuStack_330[0] = &lbl_821CB794;
            lVar3 = lVar3 + 0x200;
          } while (uVar4 < *puVar5);
        }
        uVar4 = 0;
        if (*puVar2 != 0) {
          lVar3 = 0;
          do {
            cVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_320,8,aiStack_378);
            if (cVar1 == '\0') {
              return false;
            }
            fn_82A86E00(aiStack_370,auStack_320,8);
            fn_82A8C620(aiStack_370,0,0x20,&uStack_380);
            fn_82A8C620(aiStack_370,0x20,0x20,&iStack_37c);
            fn_82A862C8(auStack_2c0,iStack_37c,(ulonglong)uStack_380 + (ulonglong)param_1[8]);
            fn_82A8CF10(appuStack_318,param_2);
            cVar1 = fn_82A86818(auStack_2c0,appuStack_318,param_3,param_4);
            if (cVar1 == '\0') {
              return false;
            }
            fn_82F68CC0(lVar3 + (ulonglong)param_1[0xc],auStack_2c0,0x2c);
            uVar4 = uVar4 + 1;
            appuStack_318[0] = &lbl_821CB794;
            lVar3 = lVar3 + 0x2c;
          } while (uVar4 < *puVar2);
        }
        cVar1 = fn_82A87EC8(param_1,param_2);
        return cVar1 != '\0';
      }
      fn_82F68CC0(param_1,&uStack_300,0x34);
    }
  }
  return false;
}

