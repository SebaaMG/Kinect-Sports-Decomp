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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern char cRam832116e5;
extern char cRam832116e7;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866420();
extern int fn_8286E310();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern unsigned int uStack_17c;


void fn_8286ECF0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar6;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 ****appppuStack_190 [5];
  uint uStack_17c;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [236];
  
  if (param_2 == 1) {
    if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
      fn_8223CFC0(auStack_f0,2,1);
      fn_828648B8(auStack_170,param_4);
      puVar6 = (undefined4 *)fn_8223B688(auStack_130,auStack_170);
      if (0xf < (uint)puVar6[5]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      uVar1 = fn_828647D8(param_4);
      uVar2 = fn_82F62578(auStack_100,10);
      uVar3 = fn_82A1F2F8();
      uVar4 = fn_82F62578(auStack_110,8);
      uVar5 = fn_82240158(auStack_f0,0xffffffff820219f4);
      uVar4 = fn_8223FCD8(uVar5,uVar4);
      uVar3 = fn_82520AC8(uVar4,uVar3);
      uVar3 = fn_82240158(uVar3,0xffffffff820219f0);
      uVar3 = fn_82240158(uVar3,0xffffffff820219cc);
      uVar2 = fn_8223FCD8(uVar3,uVar2);
      uVar2 = fn_82520AC8(uVar2,param_1);
      uVar2 = fn_82240158(uVar2,0xffffffff820219c8);
      uVar2 = fn_82240158(uVar2,0xffffffff820219b4);
      uVar2 = fn_82240158(uVar2,puVar6);
      uVar2 = fn_82240158(uVar2,0xffffffff820219b0);
      uVar1 = fn_82520AC8(uVar2,uVar1);
      fn_82240158(uVar1,0xffffffff820219ac);
      fn_82230300(auStack_130,1,0);
      fn_82230300(auStack_170,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppuStack_190,auStack_ec);
        if (uStack_17c < 0x10) {
          appppuStack_190[0] = appppuStack_190;
        }
        fn_82230110(auStack_150,appppuStack_190[0]);
        uVar1 = fn_82865170();
        fn_82866420(uVar1,auStack_150,0);
        fn_82230300(auStack_150,1,0);
        fn_82230300(appppuStack_190,1,0);
      }
      fn_8223DCC8(auStack_f0);
    }
    fn_8286E310(param_4);
  }
  else {
    *(undefined1 *)(param_4 + 0x29) = 1;
  }
  return;
}

