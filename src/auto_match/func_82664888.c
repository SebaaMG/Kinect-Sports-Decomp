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
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_64;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern int fn_8265CF50();
extern int fn_8265E148();
extern int fn_8265F570();
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_8265FA58();
extern int fn_8265FA90();
extern int fn_82665960();
extern int fn_82666230();
extern int fn_82666388();
extern int fn_82666500();
extern int fn_826666A0();
extern int fn_826666C8();
extern int fn_82667048();
extern int fn_826670A0();
extern int fn_82668760();
extern int fn_826688D8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_826697B8();
extern int fn_8266A808();
extern int fn_8266A888();
extern int fn_8266C340();
extern int fn_8266C438();
extern unsigned int iStack_1c;
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int iStack_ec;
extern unsigned int iStack_f8;
extern unsigned int lbl_831E7A18;
extern unsigned int uStack_100;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_fc;


void fn_82664888(void)

{
  undefined4 uVar1;
  undefined4 *puVar4;
  undefined8 uVar2;
  char cVar7;
  int iVar5;
  uint *puVar6;
  undefined8 uVar3;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int *piStack_f4;
  short asStack_f0 [2];
  int iStack_ec;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [88];
  int iStack_88;
  short asStack_84 [2];
  int iStack_80;
  undefined1 auStack_7c [4];
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int *piStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
  }
  else {
    thunk_FUN_82a2b748(0);
    fn_8266A808();
    fn_826688D8(0xffffffff831e7a70,1);
    puVar4 = (undefined4 *)fn_82668D40(auStack_64,0xffffffff831e7a60);
    uStack_100 = *puVar4;
    iStack_f8 = 0;
    while( true ) {
      uVar2 = fn_82668D80(auStack_5c,0xffffffff831e7a60);
      cVar7 = fn_82668EA0(&uStack_100,uVar2);
      if (cVar7 == '\0') break;
      puVar4 = (undefined4 *)fn_8265FA58(&uStack_100,0);
      piStack_f4 = (int *)*puVar4;
      iVar5 = (**(code **)(*piStack_f4 + 0x14))(piStack_f4);
      if (iVar5 != 0) {
        iStack_ec = 0;
        while( true ) {
          iStack_1c = iStack_ec;
          iVar5 = (**(code **)(*piStack_f4 + 4))(piStack_f4,iStack_ec,auStack_e0,0x55);
          iStack_ec = iStack_ec + 1;
          if (iVar5 < 1) break;
          iStack_88 = fn_82665960(auStack_e0);
          if ((-1 < iStack_88) &&
             (iVar5 = (**(code **)(*piStack_f4 + 0x10))(piStack_f4,auStack_e0,asStack_f0,auStack_e8)
             , iVar5 != 0)) {
            asStack_84[0] = 1;
            iStack_80 = fn_8265E148(auStack_e0,3,asStack_84,2);
            if (iStack_80 == 2) {
              if (asStack_f0[0] == asStack_84[0]) {
                uVar2 = fn_82667048(auStack_58,auStack_7c,&iStack_f8);
                puVar6 = (uint *)fn_8265CF50(0xffffffff831e7a74,iStack_88);
                fn_826670A0(auStack_50,(ulonglong)*puVar6 + 0x1c,uVar2);
              }
              else {
                fn_8266C438(0xffffffff820021d8,asStack_f0[0],auStack_e0);
              }
            }
            else {
              fn_8266C438(0xffffffff82002238,auStack_e0);
            }
          }
        }
      }
      fn_826666C8(auStack_60,&uStack_100,0);
      iStack_f8 = iStack_f8 + 1;
    }
    puVar4 = (undefined4 *)fn_82668D40(auStack_4c,0xffffffff831e7a88);
    uStack_fc = *puVar4;
    while( true ) {
      uVar2 = fn_82668D80(auStack_44,0xffffffff831e7a88);
      cVar7 = fn_82668EA0(&uStack_fc,uVar2);
      if (cVar7 == '\0') break;
      puVar6 = (uint *)fn_8265FA58(&uStack_fc,0);
      fn_82666500((ulonglong)*puVar6 + 0x38);
      puVar4 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,5);
      uVar1 = *puVar4;
      puVar6 = (uint *)fn_8265FA58(&uStack_fc,0);
      fn_82666388((ulonglong)*puVar6 + 0x38,uVar1);
      puVar4 = (undefined4 *)fn_82668D40(auStack_40,0xffffffff831e7a74);
      uStack_78 = *puVar4;
      iStack_74 = 0;
      while( true ) {
        uVar2 = fn_82668D80(auStack_38,0xffffffff831e7a74);
        cVar7 = fn_82668EA0(&uStack_78,uVar2);
        if (cVar7 == '\0') break;
        iStack_6c = 0;
        puVar6 = (uint *)fn_8265FA58(&uStack_78,0);
        puVar4 = (undefined4 *)fn_8265F888(auStack_34,(ulonglong)*puVar6 + 0x1c);
        uStack_70 = *puVar4;
        while (iStack_6c == 0) {
          puVar6 = (uint *)fn_8265FA58(&uStack_78,0);
          uVar2 = fn_8265F8D8(auStack_2c,(ulonglong)*puVar6 + 0x1c);
          cVar7 = fn_8265FA90(&uStack_70,uVar2);
          if (cVar7 == '\0') break;
          iVar5 = fn_826666A0(&uStack_70);
          piStack_68 = (int *)fn_8265CF50(0xffffffff831e7a60,*(undefined4 *)(iVar5 + 4));
          piStack_68 = (int *)*piStack_68;
          if (piStack_68 == (int *)0x0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x177,0xffffffff82001d90);
          }
          puVar4 = (undefined4 *)fn_8265FA58(&uStack_78,0);
          uVar2 = fn_8265F570(*puVar4);
          puVar6 = (uint *)fn_8265FA58(&uStack_fc,0);
          uVar3 = fn_8265F570((ulonglong)*puVar6 + 0x1c);
          iVar5 = (**(code **)(*piStack_68 + 8))(piStack_68,uVar3,uVar2);
          if (iVar5 != 0) {
            puVar4 = (undefined4 *)fn_826666A0(&uStack_70);
            uVar1 = *puVar4;
            iVar5 = fn_826666A0(&uStack_70);
            uVar2 = fn_82668760(auStack_28,iStack_74,*(undefined4 *)(iVar5 + 4),uVar1);
            puVar6 = (uint *)fn_8265FA58(&uStack_fc,0);
            fn_82666230((ulonglong)*puVar6 + 0x38,uVar2);
            iStack_6c = 1;
          }
          fn_826697B8(auStack_30,&uStack_70,0);
        }
        fn_826666C8(auStack_3c,&uStack_78,0);
        iStack_74 = iStack_74 + 1;
      }
      fn_826666C8(auStack_48,&uStack_fc,0);
    }
    fn_8266A888();
  }
  return;
}

