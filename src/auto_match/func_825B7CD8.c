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
extern int fn_82522D98();
extern int fn_825269D0();
extern int fn_82540308();
extern int fn_82547D90();
extern int fn_8260D738();
extern int fn_8263C7F0();
extern int fn_82811400();
extern int fn_828141C8();
extern int fn_82837B28();
extern int fn_82837B90();
extern int fn_828800C8();
extern int fn_828EFF10();
extern int fn_82A1E228();
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;
extern unsigned int lbl_8327F888;
extern unsigned int lbl_8327F890;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_8327F898;
extern unsigned int lbl_8327F89C;
extern unsigned int lbl_8327F8A0;
extern unsigned int *lbl_832823E0;
extern unsigned int uRam83274914;
extern unsigned int uRam83274918;
extern unsigned int uRam8327491c;
extern unsigned int uRam83274920;
extern unsigned int uRam83281148;
extern unsigned int uRam83282200;
extern unsigned int uRam83282204;
extern unsigned int uRam8328220c;
extern unsigned int uRam83282228;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_825B7CD8(void)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  
  piVar2 = lbl_832823E0;
  iVar4 = *lbl_832823E0;
  uVar3 = fn_82811400(&uStack_c0,8);
  iVar4 = (**(code **)(iVar4 + 0xc))(piVar2,0xe0,uVar3);
  if (iVar4 == 0) {
    uRam83281148 = 0;
  }
  else {
    uRam83281148 = fn_828141C8();
  }
  fn_825269D0(3,0);
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0xd07ffffffffffff;
  fn_828800C8(&uStack_c0);
  fn_828EFF10();
  fn_82837B28();
  fn_82837B90();
  uRam83282200 = fn_8263C7F0(0x80,0x80,6,1,0,0x28280186,0,0x12);
  uRam83282204 = fn_82547D90();
  uRam8328220c = 0;
  uRam83282228 = 0;
  puVar6 = (undefined4 *)0x8328220c;
  lVar7 = 6;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = &lbl_8327F8A0;
  do {
    uVar5 = fn_82540308(lbl_8320A898);
    *puVar6 = uVar5;
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < -0x7cd80754);
  uRam83274914 = 0;
  uRam83274918 = 0;
  uRam8327491c = 0;
  uRam83274920 = 0;
  fn_82A1E228(&uStack_c0);
  lbl_83265A28 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  fn_8260D738();
  lbl_8327F888 = 0;
  if ((lbl_8326F968 == 0) || (bVar1 = 1, lbl_8326F96C != 0)) {
    bVar1 = 0;
  }
  lbl_8327F890 = lbl_821CA460 / (float)(longlong)(int)((-(uint)bVar1 & 0xfffffff6) + 0x3c);
  lbl_8327F898 = (int)(lbl_8327F890 * lbl_821955AC);
  uStack_c0 = (longlong)lbl_8327F898;
  lbl_8327F89C = lbl_8327F890 * lbl_821955AC - (float)uStack_c0;
  lbl_8327F894 = lbl_8327F890;
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x400);
}

