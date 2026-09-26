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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int INFINITY;
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_138;
extern unsigned int *auStack_140;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_2b8;
extern unsigned int *auStack_350;
extern unsigned int *auStack_370;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3c0;
extern unsigned int *auStack_634;
extern unsigned int *auStack_688;
extern unsigned int *auStack_f0;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDBA0();
extern int fn_82ABDBE8();
extern int fn_82ABE058();
extern int fn_82ABE0A0();
extern int fn_82ABE190();
extern int fn_82ABE2E0();
extern int fn_82ABE870();
extern int fn_82ABF768();
extern int fn_82AC65F0();
extern int fn_82AC69C8();
extern int fn_82AC9EE0();
extern int fn_82ACA598();
extern int fn_82ACA5E0();
extern int fn_82ACA920();
extern int fn_82ACB180();
extern int fn_82AD1228();
extern int fn_82AD1270();
extern int fn_82AD1670();
extern int fn_82AD16B8();
extern int fn_82AD1708();
extern int fn_82AD17B0();
extern int fn_82AD1870();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD35A8();
extern int fn_82AE53B0();
extern int fn_82AEFAD0();
extern int fn_82AEFB18();
extern int fn_82AEFB68();
extern int fn_82AEFBB8();
extern int fn_82AF0548();
extern int fn_82AF0618();
extern int fn_82AF06E8();
extern int fn_82AF49A8();
extern int fn_82AF4A50();
extern int fn_82AF76C8();
extern int fn_82AF7710();
extern int fn_82AF7980();
extern int fn_82AF7A50();
extern int fn_82AF7B20();
extern int fn_82AF7C20();
extern int fn_82AF7D20();
extern int fn_82B102D0();
extern int fn_82B166D8();
extern int fn_82B16720();
extern int fn_82B16770();
extern int fn_82B167E0();
extern int fn_82B16910();
extern int fn_82B16950();
extern int fn_82B169D0();
extern int fn_82B16A18();
extern int fn_82B16AB0();
extern int fn_82B16B00();
extern int fn_82B16B50();
extern int fn_82B16DD0();
extern int fn_82B17200();
extern int fn_82B176C0();
extern int fn_82B17758();
extern int fn_82B18128();
extern int fn_82B1A7E8();
extern int fn_82B1A9A8();
extern int fn_82B1AA48();
extern int fn_82B1AAE8();
extern int fn_82B1AF98();
extern int fn_82B1B020();
extern int fn_82B1B0A8();
extern int fn_82B1B130();
extern int fn_82B1B260();
extern int fn_82B1B2E8();
extern int fn_82B1B370();
extern int fn_82B1B560();
extern int fn_82B1B848();
extern int fn_82B1B8C0();
extern int fn_82B1BAD8();
extern int fn_82B1BB88();
extern int fn_82B1BC68();
extern int fn_82B1BD10();
extern int fn_82B1E978();
extern int fn_82B22F90();
extern int fn_82B24D00();
extern int fn_82B25248();
extern int fn_82B252E0();
extern int fn_82B25328();
extern int fn_82B255B0();
extern int fn_82B25A70();
extern int fn_82B271F8();
extern int fn_82B27340();
extern int fn_82B27568();
extern int fn_82B27D10();
extern int fn_82B28130();
extern int fn_82B28428();
extern int fn_82B28530();
extern int fn_82B2A0D8();
extern int fn_82B2A568();
extern int fn_82B2AF18();
extern int fn_82B2B690();
extern int fn_82B471E8();
extern int fn_82B80EF8();
extern int fn_82B810A8();
extern int fn_82B82208();
extern int fn_82B82378();
extern int fn_82B82580();
extern int fn_82B82D28();
extern int fn_82B837F8();
extern int fn_82B841E8();
extern int fn_82B843F0();
extern int fn_82B86570();
extern int fn_82B86A10();
extern int fn_82B86B80();
extern int fn_82B86C90();
extern int fn_82B8A2E0();
extern int fn_82B8A3A0();
extern int fn_82B8A3E8();
extern int fn_82B8AC10();
extern int fn_82B8CB58();
extern int fn_82B8D038();
extern int fn_82B8E280();
extern int fn_82B8E778();
extern int fn_82B8F3D8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_82F6DF80();
extern int fn_82F6FC80();
extern unsigned int iStack_400;
extern unsigned int iStack_404;
extern unsigned int iStack_40c;
extern unsigned int iStack_42c;
extern unsigned int iStack_434;
extern unsigned int iStack_438;
extern unsigned int iStack_450;
extern unsigned int iStack_474;
extern unsigned int iStack_478;
extern unsigned int iStack_47c;
extern unsigned int iStack_488;
extern unsigned int iStack_48c;
extern unsigned int iStack_494;
extern unsigned int iStack_498;
extern unsigned int iStack_49c;
extern unsigned int iStack_4a0;
extern unsigned int iStack_4ac;
extern unsigned int iStack_4c4;
extern unsigned int iStack_4c8;
extern unsigned int iStack_4cc;
extern unsigned int iStack_4d8;
extern unsigned int iStack_4f0;
extern unsigned int iStack_508;
extern unsigned int iStack_51c;
extern unsigned int iStack_524;
extern unsigned int iStack_528;
extern unsigned int iStack_534;
extern unsigned int iStack_53c;
extern unsigned int iStack_540;
extern unsigned int iStack_54c;
extern unsigned int iStack_550;
extern unsigned int iStack_554;
extern unsigned int iStack_560;
extern unsigned int iStack_564;
extern unsigned int iStack_56c;
extern unsigned int iStack_57c;
extern unsigned int iStack_584;
extern unsigned int iStack_5a0;
extern unsigned int iStack_5a8;
extern unsigned int iStack_5b4;
extern unsigned int iStack_5b8;
extern unsigned int iStack_5bc;
extern unsigned int iStack_5c4;
extern unsigned int iStack_5c8;
extern unsigned int iStack_5d8;
extern unsigned int iStack_5e0;
extern unsigned int iStack_5e8;
extern unsigned int iStack_5fc;
extern unsigned int iStack_608;
extern unsigned int iStack_610;
extern unsigned int iStack_618;
extern unsigned int iStack_638;
extern unsigned int iStack_640;
extern unsigned int iStack_648;
extern unsigned int iStack_650;
extern unsigned int iStack_664;
extern unsigned int iStack_668;
extern unsigned int iStack_66c;
extern unsigned int iStack_670;
extern unsigned int iStack_690;
extern unsigned int iStack_698;
extern unsigned int iStack_6a4;
extern unsigned int iStack_6bc;
extern unsigned int iStack_6c4;
extern unsigned int iStack_6cc;
extern unsigned int iStack_6d0;
extern unsigned int iStack_6d8;
extern unsigned int iStack_6e8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8201DFE0;
extern unsigned int lbl_820288D0;
extern unsigned int lbl_8202DAB8;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_8202DCE8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_188;
extern unsigned int uStack_1a8;
extern unsigned int uStack_210;
extern unsigned int uStack_220;
extern unsigned int uStack_228;
extern unsigned int uStack_238;
extern unsigned int uStack_308;
extern unsigned int uStack_318;
extern unsigned int uStack_358;
extern unsigned int uStack_360;
extern unsigned int uStack_378;
extern unsigned int uStack_380;
extern unsigned int uStack_388;
extern unsigned int uStack_398;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3a8;
extern unsigned int uStack_3c8;
extern unsigned int uStack_3e0;
extern unsigned int uStack_3f0;
extern unsigned int uStack_408;
extern unsigned int uStack_410;
extern unsigned int uStack_414;
extern unsigned int uStack_418;
extern unsigned int uStack_41c;
extern unsigned int uStack_420;
extern unsigned int uStack_424;
extern unsigned int uStack_428;
extern unsigned int uStack_430;
extern unsigned int uStack_44c;
extern unsigned int uStack_454;
extern unsigned int uStack_458;
extern unsigned int uStack_45c;
extern unsigned int uStack_460;
extern unsigned int uStack_464;
extern unsigned int uStack_468;
extern unsigned int uStack_46c;
extern unsigned int uStack_470;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_490;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4b0;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4b8;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e0;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4e8;
extern unsigned int uStack_4ec;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;
extern unsigned int uStack_4fc;
extern unsigned int uStack_500;
extern unsigned int uStack_504;
extern unsigned int uStack_50c;
extern unsigned int uStack_510;
extern unsigned int uStack_514;
extern unsigned int uStack_518;
extern unsigned int uStack_520;
extern unsigned int uStack_52c;
extern unsigned int uStack_530;
extern unsigned int uStack_538;
extern unsigned int uStack_544;
extern unsigned int uStack_548;
extern unsigned int uStack_558;
extern unsigned int uStack_55c;
extern unsigned int uStack_568;
extern unsigned int uStack_570;
extern unsigned int uStack_574;
extern unsigned int uStack_578;
extern unsigned int uStack_580;
extern unsigned int uStack_588;
extern unsigned int uStack_58c;
extern unsigned int uStack_590;
extern unsigned int uStack_594;
extern unsigned int uStack_598;
extern unsigned int uStack_59c;
extern unsigned int uStack_5a4;
extern unsigned int uStack_5c0;
extern unsigned int uStack_5cc;
extern unsigned int uStack_5d0;
extern unsigned int uStack_5d4;
extern unsigned int uStack_5dc;
extern unsigned int uStack_5e4;
extern unsigned int uStack_5ec;
extern unsigned int uStack_5f0;
extern unsigned int uStack_5f4;
extern unsigned int uStack_5f8;
extern unsigned int uStack_600;
extern unsigned int uStack_604;
extern unsigned int uStack_60c;
extern unsigned int uStack_614;
extern unsigned int uStack_61c;
extern unsigned int uStack_620;
extern unsigned int uStack_63c;
extern unsigned int uStack_644;
extern unsigned int uStack_64c;
extern unsigned int uStack_654;
extern unsigned int uStack_658;
extern unsigned int uStack_65c;
extern unsigned int uStack_660;
extern unsigned int uStack_674;
extern unsigned int uStack_678;
extern unsigned int uStack_68c;
extern unsigned int uStack_694;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6b0;
extern unsigned int uStack_6c0;
extern unsigned int uStack_6c8;
extern unsigned int uStack_6d4;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned int uStack_6e4;
extern unsigned int uStack_6ec;


/* WARNING: Type propagation algorithm not settling */

void fn_82B2B908(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  ushort uVar12;
  int iVar18;
  char cVar36;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  char cVar37;
  int *piVar33;
  int iVar34;
  int iVar35;
  longlong lVar17;
  byte *pbVar38;
  undefined1 *puVar39;
  undefined8 uVar40;
  uint uVar42;
  undefined8 uVar41;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  undefined8 *puVar46;
  double *pdVar47;
  uint *puVar48;
  ulonglong uVar49;
  uint uVar50;
  uint *puVar51;
  ulonglong *puVar52;
  int iVar53;
  int iVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  bool bVar65;
  longlong lVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  uint uStack_6ec;
  int iStack_6e8;
  uint uStack_6e4;
  uint uStack_6e0;
  uint uStack_6dc;
  int iStack_6d8;
  uint uStack_6d4;
  int iStack_6d0;
  int iStack_6cc;
  uint uStack_6c8;
  int iStack_6c4;
  uint uStack_6c0;
  int iStack_6bc;
  int aiStack_6b8 [2];
  ulonglong uStack_6b0;
  undefined4 uStack_6a8;
  int iStack_6a4;
  double dStack_6a0;
  int iStack_698;
  undefined4 uStack_694;
  int iStack_690;
  undefined4 uStack_68c;
  uint auStack_688 [4];
  uint uStack_678;
  uint uStack_674;
  int iStack_670;
  int iStack_66c;
  int iStack_668;
  int iStack_664;
  uint uStack_660;
  undefined4 uStack_65c;
  uint uStack_658;
  uint uStack_654;
  int iStack_650;
  uint uStack_64c;
  int iStack_648;
  uint uStack_644;
  int iStack_640;
  uint uStack_63c;
  int iStack_638;
  uint auStack_634 [5];
  uint uStack_620;
  undefined4 uStack_61c;
  int iStack_618;
  uint uStack_614;
  int iStack_610;
  uint uStack_60c;
  int iStack_608;
  undefined4 uStack_604;
  uint uStack_600;
  int iStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  int iStack_5e8;
  uint uStack_5e4;
  int iStack_5e0;
  undefined4 uStack_5dc;
  int iStack_5d8;
  uint uStack_5d4;
  undefined4 uStack_5d0;
  uint uStack_5cc;
  int iStack_5c8;
  int iStack_5c4;
  undefined4 uStack_5c0;
  int iStack_5bc;
  int iStack_5b8;
  int iStack_5b4;
  double dStack_5b0;
  int iStack_5a8;
  uint uStack_5a4;
  int iStack_5a0;
  uint uStack_59c;
  uint uStack_598;
  undefined4 uStack_594;
  uint uStack_590;
  undefined4 uStack_58c;
  uint uStack_588;
  int iStack_584;
  uint uStack_580;
  int iStack_57c;
  uint uStack_578;
  undefined4 uStack_574;
  uint uStack_570;
  int iStack_56c;
  uint uStack_568;
  int iStack_564;
  int iStack_560;
  undefined4 uStack_55c;
  uint uStack_558;
  int iStack_554;
  int iStack_550;
  int iStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  int iStack_540;
  int iStack_53c;
  uint uStack_538;
  int iStack_534;
  uint uStack_530;
  undefined4 uStack_52c;
  int iStack_528;
  int iStack_524;
  undefined4 uStack_520;
  int iStack_51c;
  uint uStack_518;
  uint uStack_514;
  uint uStack_510;
  uint uStack_50c;
  int iStack_508;
  uint uStack_504;
  undefined4 uStack_500;
  uint uStack_4fc;
  undefined4 uStack_4f8;
  uint uStack_4f4;
  int iStack_4f0;
  uint uStack_4ec;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  int iStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  int iStack_4cc;
  int iStack_4c8;
  int iStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  uint uStack_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  int iStack_4ac;
  uint uStack_4a8;
  uint uStack_4a4;
  int iStack_4a0;
  int iStack_49c;
  int iStack_498;
  int iStack_494;
  uint uStack_490;
  int iStack_48c;
  int iStack_488;
  undefined4 uStack_484;
  uint uStack_480;
  int iStack_47c;
  int iStack_478;
  int iStack_474;
  uint uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint uStack_458;
  undefined4 uStack_454;
  int iStack_450;
  uint uStack_44c;
  int aiStack_448 [2];
  double dStack_440;
  int iStack_438;
  int iStack_434;
  undefined4 uStack_430;
  int iStack_42c;
  undefined4 uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  undefined4 uStack_410;
  int iStack_40c;
  undefined4 uStack_408;
  int iStack_404;
  int iStack_400;
  byte bStack_3f9;
  double dStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e8;
  undefined8 uStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  undefined8 uStack_3c8;
  undefined8 auStack_3c0 [2];
  uint auStack_3b0 [2];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  int aiStack_390 [2];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  uint auStack_370 [2];
  double dStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [8];
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  undefined8 uStack_318;
  double dStack_310;
  undefined8 uStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  undefined1 auStack_2b8 [8];
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  undefined8 uStack_238;
  double dStack_230;
  ulonglong uStack_228;
  undefined8 uStack_220;
  double dStack_218;
  undefined8 uStack_210;
  double dStack_208;
  double dStack_200;
  undefined1 auStack_1f8 [8];
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined1 auStack_1d0 [8];
  double dStack_1c8;
  undefined1 auStack_1c0 [8];
  double dStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  double dStack_198;
  uint auStack_190 [2];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  double adStack_160 [4];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  uint auStack_130 [2];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [8];
  undefined1 auStack_f0 [240];
  
  iVar18 = fn_82F6A540();
  piVar8 = (int *)param_2;
  pbVar38 = (byte *)param_3;
  if ((*(uint *)(piVar8[7] + 0x4c) & 0x80000) != 0) goto LAB_82b2bd90;
  uVar4 = *(undefined4 *)(iVar18 + 0x28c);
  cVar36 = fn_82ABE2E0(param_2);
  if (cVar36 != '\0') goto LAB_82b2b960;
  if (((piVar8[2] & 0x3f80U) == 16000) ||
     (uVar14 = fn_82B86C90(param_2,adStack_160,&uStack_600), uVar14 == 0)) {
LAB_82b2c108:
    dVar68 = lbl_82005758;
    dVar69 = lbl_82005710;
    for (puVar51 = (uint *)*piVar8; puVar51 != (uint *)0x0; puVar51 = (uint *)puVar51[1]) {
      if (((*puVar51 & 0xe000000) != 0) && ((*puVar51 & 1) != 0)) {
        uVar22 = puVar51[3];
        if (((*(uint *)(uVar22 + 8) >> 5 & 1) == 0) || ((*(uint *)(uVar22 + 8) & 0x3f80) != 0x180))
        {
LAB_82b2c1dc:
          cVar36 = fn_82ABE190(puVar51);
          if (cVar36 != '\0') {
            fn_82B8E778(puVar51,&iStack_5c4,&uStack_678,&uStack_500,param_2);
            uVar22 = *(uint *)(iStack_5c4 + 8) >> 7 & 0x7f;
            if ((uVar22 == 3) || (uVar22 == 4)) {
              uVar22 = 0;
              uStack_6c0 = 0xff800000;
              puVar20 = *(uint **)(iStack_5c4 + 0x2c);
              puVar29 = *(uint **)(iStack_5c4 + 0x30);
              dVar73 = -INFINITY;
              dVar72 = INFINITY;
              dStack_6a0 = (double)CONCAT44(0x7f800000,(((U64)(dStack_6a0) >> 32) & 0xFFFFFFFF));
              dVar70 = INFINITY;
              dVar71 = -INFINITY;
              if ((*puVar51 & 0xe000000) != 0) {
                uVar21 = 0;
                do {
                  uVar45 = uStack_678 >> (uVar21 & 0x3f) & 3;
                  fn_82B82580(puVar20,uVar45,&dStack_1d8,&dStack_338);
                  if (dStack_1d8 < dVar72) {
                    dVar72 = dStack_1d8;
                  }
                  if (dVar73 < dStack_338) {
                    dVar73 = dStack_338;
                  }
                  fn_82B82580(puVar29,uVar45,&dStack_248,&dStack_328);
                  if (dStack_248 < dVar70) {
                    dVar70 = dStack_248;
                  }
                  if (dVar71 < dStack_328) {
                    dVar71 = dStack_328;
                  }
                  uVar22 = uVar22 + 1;
                  uVar21 = uVar21 + 2;
                } while (uVar22 < (*puVar51 >> 0x19 & 7));
              }
              uVar26 = uStack_500;
              uVar22 = *(uint *)(iStack_5c4 + 8) >> 7 & 0x7f;
              if (((uVar22 == 3) && (dVar73 <= dVar69)) || ((uVar22 == 4 && (dVar68 <= dVar72)))) {
                uVar21 = *puVar29;
                cVar36 = fn_82AEFAD0(uVar21 & 0x1f,uStack_500);
                if (cVar36 != '\0') {
                  uVar13 = fn_82AD1228(uVar21 & 0x1f,uVar26);
                  cVar36 = fn_82AEFAD0(uVar13,1);
                  if (cVar36 != '\0') {
                    dVar70 = dVar72;
                    dVar71 = dVar73;
                    puVar20 = puVar29;
                  }
                }
              }
              if (((uVar22 == 3) && (dVar71 <= dVar69)) || ((uVar22 == 4 && (dVar68 <= dVar70)))) {
                uVar22 = *puVar20;
                cVar36 = fn_82AEFAD0(uVar22 & 0x1f,uVar26);
                if (cVar36 != '\0') {
                  uVar13 = fn_82AD1228(uVar22 & 0x1f,uVar26);
                  cVar36 = fn_82AEFAD0(uVar13,1);
                  if (cVar36 != '\0') {
                    fn_82B25248(iVar18,puVar51[3],uVar4);
                    fn_82B25248(iVar18,param_2,uVar4);
                    uVar21 = fn_82AD1228(uVar13,1);
                    uVar45 = *puVar20 >> 5 & 0xff;
                    uVar22 = uVar45 >> ((uStack_678 & 3) << 1);
                    uStack_678 = (((uVar45 >> (uStack_678 >> 5 & 6) & 3) << 2 |
                                  uVar45 >> (uStack_678 >> 3 & 6) & 3) << 2 |
                                 uVar45 >> (uStack_678 >> 1 & 6) & 3) << 2 | uVar22 & 3;
                    if ((((piVar8[2] & 0x3f80U) == 0x3800) &&
                        (uVar45 = *(uint *)(puVar51[3] + 0x1c),
                        uVar45 != (-(uint)((*(uint *)(iVar18 + 4) & 1) == 0) & *(uint *)(iVar18 + 4)
                                  ))) && (*(uint *)(puVar20[3] + 0x1c) != uVar45)) {
                      uVar22 = fn_82B102D0(iVar18,uVar45,puVar20[3],uVar22 & 3,uVar21 & 1);
                      puVar29 = (uint *)(puVar51[3] + 4);
                      for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                          puVar20 = (uint *)puVar20[2]) {
                        puVar29 = puVar20 + 2;
                      }
                      *puVar29 = puVar51[2];
                      puVar51[2] = *(uint *)(uVar22 + 4);
                      *(uint **)(uVar22 + 4) = puVar51;
                      puVar51[3] = uVar22;
                      *puVar51 = uVar21 & 0x1e | *puVar51 & 0xffffe000 | 0x1c80;
                      goto LAB_82b2c1cc;
                    }
                    uVar22 = puVar20[3];
                    puVar29 = (uint *)(puVar51[3] + 4);
                    for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                        puVar20 = (uint *)puVar20[2]) {
                      puVar29 = puVar20 + 2;
                    }
                    *puVar29 = puVar51[2];
                    puVar51[2] = *(uint *)(uVar22 + 4);
                    *(uint **)(uVar22 + 4) = puVar51;
                    puVar51[3] = uVar22;
                    uVar22 = *puVar51;
                    *puVar51 = uVar21 & 0x1f | uVar22 & 0xffffffe0;
                    *puVar51 = uStack_678 << 5 | uVar21 & 0x1f | uVar22 & 0xffffe000;
                  }
                }
              }
            }
          }
        }
        else {
          uVar26 = *(undefined4 *)(uVar22 + 0x2c);
          uVar5 = *(undefined4 *)(uVar22 + 0x30);
          cVar36 = fn_82ABDBE8(uVar26,uVar5);
          if (cVar36 != '\0') {
            cVar36 = fn_82AEFB68(uVar26,1);
            if ((cVar36 == '\0') || (cVar36 = fn_82AEFB68(uVar5,1), cVar36 == '\0'))
            goto LAB_82b2c1dc;
            fn_82AD1270(uVar26,1);
            fn_82AD1270(uVar5,1);
            *puVar51 = *puVar51 & 0xffffffe0 | *puVar51 - 1 & 0x1f;
            uVar22 = puVar51[3];
LAB_82b2c1cc:
            fn_82B25248(iVar18,uVar22,uVar4);
          }
        }
      }
    }
    if ((((uint)piVar8[2] >> 0x19 & 1) == 0) && (((uint)piVar8[2] >> 5 & 1) == 0)) {
      cVar36 = fn_82ABE2E0(param_2);
      if (cVar36 == '\0') {
        cVar36 = fn_82ABDA10(param_2);
        if (cVar36 == '\0') {
          for (iVar19 = *piVar8; iVar19 != 0; iVar19 = *(int *)(iVar19 + 4)) {
            if ((((ulonglong)*(uint *)(iVar19 + 0xc) != (param_2 & 0xffffffff)) &&
                (cVar36 = fn_82B25A70(iVar18,(ulonglong)*(uint *)(iVar19 + 0xc),param_2,uVar4,
                                        param_3), cVar36 != '\0')) &&
               (((uint)piVar8[2] >> 0x1a & 1) != 0)) goto LAB_82b2b96c;
          }
        }
        uVar22 = (uint)piVar8[2] >> 7 & 0x7f;
        if ((uVar22 == 0) || (bVar65 = true, 4 < uVar22)) {
          bVar65 = false;
        }
        if (bVar65) {
          fn_82B2A568(iVar18,param_2);
        }
        cVar36 = fn_82ABE2E0(param_2);
        if (cVar36 == '\0') {
          cVar36 = fn_82B166D8(param_2);
          dVar70 = (double)lbl_821AAD20;
          if (cVar36 != '\0') {
            puVar51 = (uint *)piVar8[0xb];
            puVar29 = (uint *)0x0;
            puVar20 = (uint *)piVar8[0xc];
            if (0x100000 < (piVar8[2] & 0x380000U)) {
              puVar29 = (uint *)piVar8[0xd];
            }
            uVar45 = 0;
            uVar62 = 0;
            uVar22 = *puVar51 >> 0x19;
            uVar14 = (ulonglong)uVar22 & 7;
            uVar27 = 0;
            uVar21 = 0;
            uVar57 = 0;
            uVar59 = 0;
            if ((uVar22 & 7) != 0) {
              uVar50 = 0;
              uVar61 = 0;
              do {
                fn_82B82D28(puVar51,uVar59,auStack_1f8,auStack_350,&uStack_458,0,param_2,0);
                fn_82B82D28(puVar20,uVar59,auStack_1c0,auStack_1d0,&uStack_44c,0,param_2,0);
                cVar36 = fn_82AF4A50(puVar51,uVar59);
                uVar64 = (uint)uVar59;
                if ((cVar36 == '\0') && (cVar36 = fn_82AF4A50(puVar20,uVar59), cVar36 == '\0')
                   ) {
                  iVar19 = (int)uVar57;
                  uVar57 = uVar57 + 1;
                  uVar21 = uVar21 & ~(3 << (uVar61 & 0x3f)) | iVar19 << (uVar61 & 0x3f);
                }
                else {
                  uVar45 = 1 << (uVar64 & 0x3f) | uVar45;
                }
                if ((uStack_458 & 4) != 0) {
                  uVar62 = 1 << (uVar64 & 0x3f) | uVar62;
                }
                if ((uStack_44c & 4) != 0) {
                  uVar27 = 1 << (uVar64 & 0x3f) | uVar27;
                }
                cVar36 = fn_82ACA5E0(param_2);
                if ((cVar36 != '\0') && (puVar29 == (uint *)0x0)) {
                  cVar36 = fn_82ABDBE8(puVar51,puVar20);
                  if (cVar36 == '\0') {
                    uVar23 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                          (((*puVar51 >> 5 & 0xff) >> (uVar61 & 0x3f) & 3) << 2) &
                                          0xf,*puVar51 & 0x1f);
                    uVar24 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >>
                                          (((*puVar20 >> 5 & 0xff) >> (uVar61 & 0x3f) & 3) << 2) &
                                          0xf,*puVar20 & 0x1f);
                    uVar64 = piVar8[3];
                    uVar60 = uVar23 & 3;
                    uVar42 = (uVar64 & 0xffff) >> (uVar50 & 0x3f) & 4;
                    if (uVar60 == (uVar24 & 3)) {
                      if (uVar60 != 0) {
                        if (uVar60 == 3) {
                          uVar42 = uVar42 | 3;
                        }
                        else {
                          uVar42 = uVar42 | 2;
                        }
                      }
                    }
                    else if ((uVar60 != 0) && ((uVar24 & 3) != 0)) {
                      uVar42 = uVar42 | 1;
                    }
                    uVar60 = (uVar24 & uVar23 & 0xfffffffc | uVar42) << (uVar50 & 0x3f);
                    bVar65 = (uVar60 & uVar64 & 0xffff) != uVar60;
                    if (bVar65) {
                      *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar60 | (ushort)uVar64;
                    }
                    bVar65 = !bVar65;
                  }
                  else {
                    cVar36 = fn_82B169D0(param_2,uVar59);
                    bVar65 = cVar36 == '\0';
                  }
                  if (!bVar65) {
                    fn_82B252E0(iVar18,param_2,uVar4);
                  }
                  fn_82B82580(puVar51,uVar59,auStack_3c0,&uStack_3e0);
                  fn_82B82580(puVar20,uVar59,&uStack_3f0,&uStack_3c8);
                  dVar71 = (double)fn_82B810A8(auStack_3c0[0],uStack_3f0);
                  dStack_368 = (double)fn_82B810A8(auStack_3c0[0],uStack_3c8);
                  uStack_360 = fn_82B810A8(uStack_3e0,uStack_3f0);
                  uStack_358 = fn_82B810A8(uStack_3e0,uStack_3c8);
                  pdVar47 = &dStack_368;
                  lVar56 = 3;
                  dVar72 = dVar71;
                  do {
                    dVar73 = *pdVar47;
                    if (dVar73 < dVar71) {
                      dVar71 = dVar73;
                    }
                    if (dVar72 < dVar73) {
                      dVar72 = dVar73;
                    }
                    pdVar47 = pdVar47 + 1;
                    lVar56 = lVar56 + -1;
                  } while (lVar56 != 0);
                  cVar36 = fn_82B82378(param_2,uVar59);
                  if (cVar36 != '\0') {
                    fn_82B252E0(iVar18,param_2,uVar4);
                  }
                }
                uVar59 = uVar59 + 1;
                uVar61 = uVar61 + 2;
                uVar50 = uVar50 + 4;
              } while ((uVar59 & 0xffffffff) < uVar14);
            }
            iVar19 = 1 << (int)uVar14;
            if (uVar45 != 0) {
              uVar50 = (iVar19 + -1) - uVar45;
              if ((uVar57 & 0xffffffff) == 0) {
                if (puVar29 == (uint *)0x0) {
                  uVar49 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
LAB_82b2cd68:
                  uVar21 = 0;
                  goto LAB_82b2cd6c;
                }
                uVar49 = (ulonglong)puVar29[3];
                uVar45 = *puVar29 & 0x1f;
                uVar21 = *puVar29 >> 5 & 0xff;
              }
              else {
                if ((uVar57 & 0xffffffff) == 1) {
                  lVar56 = 0x1f - LZCOUNT(uVar50);
                  if (puVar29 == (uint *)0x0) {
                    uVar13 = fn_82B18128(iVar18,puVar20,lVar56);
                    uVar15 = fn_82B18128(iVar18,puVar51,lVar56);
                    uVar59 = fn_82B1A7E8(iVar18,0,param_2,uVar15,uVar13);
                  }
                  else {
                    puVar28 = puVar29;
                    if ((piVar8[2] & 0x3f80U) == 0x600) {
                      puVar28 = (uint *)fn_82B18128(iVar18,puVar29,lVar56);
                    }
                    uVar13 = fn_82B18128(iVar18,puVar20,lVar56);
                    uVar15 = fn_82B18128(iVar18,puVar51,lVar56);
                    uVar59 = fn_82AF06E8(iVar18,0,param_2,uVar15,uVar13,puVar28);
                  }
                }
                else {
                  uVar13 = fn_82AF76C8(iVar18,0,param_2,uVar57);
                  uVar15 = fn_82AF76C8(iVar18,0,param_2,uVar57);
                  lVar56 = 0;
                  uVar61 = 0;
                  if (uVar50 != 0) {
                    uVar64 = 0;
                    do {
                      uVar60 = uVar50 & ~(uVar50 - 1);
                      uVar50 = uVar50 - uVar60;
                      uVar59 = 0x1f - LZCOUNT(uVar60);
                      uVar16 = fn_82B18128(iVar18,puVar51,uVar59);
                      fn_82AC9EE0(uVar13,lVar56,uVar16);
                      uVar16 = fn_82B18128(iVar18,puVar20,uVar59);
                      fn_82AC9EE0(uVar15,lVar56,uVar16);
                      if (puVar29 != (uint *)0x0) {
                        uVar61 = ((*puVar29 >> 5 & 0xff) >>
                                  ((uint)((uVar59 & 0xffffffff) << 1) & 0x3e) & 3) <<
                                 (uVar64 & 0x3f) | uVar61 & ~(3 << (uVar64 & 0x3f));
                      }
                      lVar56 = lVar56 + 1;
                      uVar64 = uVar64 + 2;
                    } while (uVar50 != 0);
                  }
                  uVar50 = (uint)piVar8[2] >> 7 & 0x7f;
                  if (uVar50 == 2) {
                    uVar59 = fn_82B1BAD8(iVar18,0,param_2,uVar13,uVar15);
                  }
                  else if (uVar50 == 0xc) {
                    puVar28 = (uint *)fn_82ACA920(iVar18,puVar29,puVar29[3]);
                    fn_82AEFB18(puVar28,uVar61);
                    *puVar28 = (uint)((uVar57 & 0xffffffff) << 0x19) & 0xe000000 |
                               *puVar28 & 0xf1ffffff;
                    fn_82B25248(iVar18,puVar28[3],uVar4);
                    uVar59 = fn_82B1BB88(iVar18,0,param_2,uVar13,uVar15,puVar28);
                  }
                  else {
                    if (uVar50 == 0x10) {
                      if ((uVar57 & 0xffffffff) == 3) {
                        uVar59 = fn_82B1BC68(iVar18,0,param_2,uVar13,uVar15);
                        goto LAB_82b2cc68;
                      }
                    }
                    else if (uVar50 != 0x11) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(iVar18,0x12c0);
                    }
                    uVar16 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                    uVar16 = fn_82AD18C0(iVar18,uVar16,0);
                    uVar59 = fn_82B1BD10(iVar18,0,param_2,uVar13,uVar15,uVar16);
                  }
                }
LAB_82b2cc68:
                cVar36 = fn_82ACA5E0(param_2);
                uVar49 = uVar59;
                if (cVar36 == '\0') goto LAB_82b2cd68;
                for (; uVar45 != 0; uVar45 = uVar45 - (uVar45 & ~(uVar45 - 1))) {
                  uVar50 = (uint)((0x1fU - LZCOUNT(uVar45 & ~(uVar45 - 1)) & 0xffffffff) << 1);
                  uVar21 = uVar21 & ~(3 << (uVar50 & 0x3e)) | (int)uVar57 << (uVar50 & 0x3e);
                }
                uVar49 = fn_82AF76C8(iVar18,1,uVar59,uVar57 + 1);
                uVar55 = 0;
                if ((uVar57 & 0xffffffff) != 0) {
                  do {
                    uVar13 = fn_82AD18C0(iVar18,uVar59,uVar55);
                    fn_82AC9EE0(uVar49,uVar55,uVar13);
                    uVar55 = uVar55 + 1;
                  } while ((uVar55 & 0xffffffff) < (uVar57 & 0xffffffff));
                }
                uVar13 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                uVar13 = fn_82AD18C0(iVar18,uVar13,0);
                fn_82AC9EE0(uVar49,uVar57,uVar13);
LAB_82b2cd6c:
                uVar45 = 0;
              }
              fn_82B8CB58(iVar18,param_2,uVar49,uVar21,uVar45,uVar4,pbVar38);
            }
            if (((uVar22 & 7) != 0) && (cVar36 = fn_82ABE2E0(param_2), cVar36 == '\0')) {
              if ((uVar62 == 0) || (uVar62 == iVar19 - 1U)) {
                bVar65 = true;
              }
              else {
                bVar65 = false;
              }
              if ((uVar27 == 0) || (bVar11 = false, uVar27 == iVar19 - 1U)) {
                bVar11 = true;
              }
              if ((!bVar65) || (!bVar11)) {
                uVar21 = 0;
                bVar65 = false;
                uVar57 = 0;
                uStack_388 = 0;
                uStack_188 = 0;
                uStack_3a8 = 0;
                uStack_128 = 0;
                dStack_368 = 0.0;
                uStack_380 = 0;
                uStack_180 = 0;
                uStack_3a0 = 0;
                uStack_120 = 0;
                uStack_360 = 0;
                uStack_378 = 0;
                uStack_178 = 0;
                uStack_398 = 0;
                uStack_118 = 0;
                uStack_358 = 0;
                if ((uVar22 & 7) != 0) {
                  iVar19 = 0;
                  do {
                    fn_82B82D28(puVar51,uVar57,(int)aiStack_390 + iVar19,
                                      (int)auStack_190 + iVar19,(int)auStack_3b0 + iVar19,0,param_2,
                                      0);
                    fn_82B82D28(puVar20,uVar57,(int)&uStack_380 + iVar19,
                                      (int)&uStack_180 + iVar19,(int)&uStack_3a0 + iVar19,0,param_2,
                                      0);
                    uVar57 = uVar57 + 1;
                    iVar19 = iVar19 + 4;
                  } while ((uVar57 & 0xffffffff) < uVar14);
                }
                uVar27 = 0;
                uVar45 = 0;
                do {
                  iVar19 = *(int *)((int)aiStack_390 + uVar45);
                  if ((iVar19 != 0) && ((*(uint *)(iVar19 + 8) & 0x3f80) == 16000)) {
                    uVar21 = 1 << (uVar27 & 0x3f) | uVar21;
                  }
                  uVar62 = *(uint *)((int)auStack_3b0 + uVar45);
                  if ((uVar62 & 4) != 0) {
                    *(uint *)((int)auStack_370 + uVar45) =
                         1 << (uVar27 & 0x3f) | *(uint *)((int)auStack_370 + uVar45);
                  }
                  uVar50 = uVar27 & 4;
                  if (uVar50 < uVar27) {
                    piVar33 = aiStack_390 + (uVar27 & 4);
                    do {
                      if (iVar19 == *piVar33) {
                        uVar61 = 1 << (uVar27 & 0x3f);
                        auStack_130[uVar50] = 1 << (uVar50 & 0x3f) | auStack_130[uVar50] | uVar61;
                        if ((uVar62 & 4) != 0) {
                          auStack_370[uVar50] = auStack_370[uVar50] | uVar61;
                        }
                        break;
                      }
                      uVar50 = uVar50 + 1;
                      piVar33 = piVar33 + 1;
                    } while (uVar50 < uVar27);
                  }
                  uVar45 = uVar45 + 4;
                  uVar27 = uVar27 + 1;
                } while (uVar45 < 0x20);
                for (uVar45 = ~uVar21 & 0xff; uVar45 != 0;
                    uVar45 = uVar45 - (uVar45 & ~(uVar45 - 1))) {
                  uVar57 = 0x1f - LZCOUNT(uVar45 & ~(uVar45 - 1));
                  iVar19 = (int)((uVar57 & 0x3fffffff) << 2);
                  uVar27 = *(uint *)((int)auStack_130 + iVar19);
                  uVar62 = uVar27 & *(uint *)((int)auStack_370 + iVar19);
                  if ((uVar62 != 0) && (uVar62 != uVar27)) {
                    uVar50 = uVar21 >> (4 - ((uint)uVar57 & 4) & 0x3f) & 0xf;
                    if ((uVar50 & uVar62) == uVar62) {
                      for (; uVar62 != 0; uVar62 = uVar62 - (uVar62 & ~(uVar62 - 1))) {
                        uVar57 = 0x1f - LZCOUNT(uVar62 & ~(uVar62 - 1));
                        uVar27 = (uint)((uVar57 & 0xffffffff) << 2) ^ 0x10;
                        iVar30 = (int)((uVar57 & 0xffffffff) << 2);
                        *(uint *)((int)auStack_3b0 + uVar27) =
                             *(uint *)((int)auStack_3b0 + uVar27) ^ 4;
                        *(int *)((int)auStack_3b0 + iVar30) =
                             *(int *)((int)auStack_3b0 + iVar30) + -4;
                      }
                      *(undefined4 *)((int)auStack_370 + iVar19) = 0;
                    }
                    else {
                      uVar62 = uVar27 - *(uint *)((int)auStack_370 + iVar19);
                      if ((uVar62 & uVar50) != uVar62) goto LAB_82b2d0d8;
                      for (; uVar62 != 0; uVar62 = uVar62 - (uVar62 & ~(uVar62 - 1))) {
                        uVar57 = 0x1f - LZCOUNT(uVar62 & ~(uVar62 - 1));
                        uVar50 = (uint)((uVar57 & 0xffffffff) << 2) ^ 0x10;
                        iVar30 = (int)((uVar57 & 0xffffffff) << 2);
                        *(uint *)((int)auStack_3b0 + uVar50) =
                             *(uint *)((int)auStack_3b0 + uVar50) ^ 4;
                        *(uint *)((int)auStack_3b0 + iVar30) =
                             *(uint *)((int)auStack_3b0 + iVar30) | 4;
                      }
                      *(uint *)((int)auStack_370 + iVar19) = uVar27;
                    }
                    bVar65 = true;
                  }
LAB_82b2d0d8:;}
                if (bVar65) {
                  puVar46 = &uStack_118;
                  lVar56 = 8;
                  do {
                    puVar46 = puVar46 + 1;
                    *puVar46 = 0;
                    lVar56 = lVar56 + -1;
                    uVar45 = uVar21;
                  } while (lVar56 != 0);
                  for (; uVar45 != 0; uVar45 = uVar45 - (uVar45 & ~(uVar45 - 1))) {
                    uVar57 = 0x1f - LZCOUNT(uVar45 & ~(uVar45 - 1));
                    iVar19 = (int)((uVar57 & 0x3fffffff) << 2);
                    puVar25 = (undefined4 *)
                              fn_82B86B80(auStack_140,
                                                *(undefined4 *)((int)aiStack_390 + iVar19),
                                                *(undefined4 *)((int)auStack_190 + iVar19),
                                                *(undefined4 *)((int)auStack_3b0 + iVar19));
                    iVar30 = (int)((uVar57 & 0x1fffffff) << 3);
                    *(undefined4 *)((int)auStack_110 + iVar30) = *puVar25;
                    uVar26 = puVar25[1];
                    *(undefined4 *)((int)auStack_3b0 + iVar19) = 0;
                    *(undefined4 *)((int)auStack_110 + iVar30 + 4) = uVar26;
                  }
                  uVar45 = uVar21 & 0xf;
                  if (uVar45 != 0) {
                    uVar26 = fn_82B86A10(iVar18,uVar14,auStack_110);
                    for (; uVar45 != 0; uVar45 = uVar45 - (uVar45 & ~(uVar45 - 1))) {
                      uVar57 = 0x1f - LZCOUNT(uVar45 & ~(uVar45 - 1));
                      iVar19 = (int)((uVar57 & 0xffffffff) << 2);
                      *(undefined4 *)((int)aiStack_390 + iVar19) = uVar26;
                      *(int *)((int)auStack_190 + iVar19) = (int)uVar57;
                    }
                  }
                  uVar21 = uVar21 & 0xf0;
                  if (uVar21 != 0) {
                    uVar26 = fn_82B86A10(iVar18,uVar14,auStack_f0);
                    for (; uVar21 != 0; uVar21 = uVar21 - (uVar21 & ~(uVar21 - 1))) {
                      uVar57 = 0x1f - LZCOUNT(uVar21 & ~(uVar21 - 1));
                      iVar19 = (int)((uVar57 & 0xffffffff) << 2);
                      *(undefined4 *)((int)aiStack_390 + iVar19) = uVar26;
                      *(uint *)((int)auStack_190 + iVar19) = (uint)uVar57 & 3;
                    }
                  }
                  uVar13 = fn_82AF76C8(iVar18,0,param_2,uVar14);
                  fn_82B25248(iVar18,uVar13,uVar4);
                  uVar15 = fn_82AF76C8(iVar18,0,param_2,uVar14);
                  fn_82B25248(iVar18,uVar15,uVar4);
                  uVar57 = 0;
                  if ((uVar22 & 7) != 0) {
                    iVar19 = 0;
                    do {
                      uVar16 = fn_82AD1918(iVar18,*(undefined4 *)((int)aiStack_390 + iVar19),
                                                 *(undefined4 *)((int)auStack_190 + iVar19),
                                                 *(undefined4 *)((int)auStack_3b0 + iVar19));
                      fn_82AC9EE0(uVar13,uVar57,uVar16);
                      uVar16 = fn_82AD1918(iVar18,*(undefined4 *)((int)&uStack_380 + iVar19),
                                                 *(undefined4 *)((int)&uStack_180 + iVar19),
                                                 *(undefined4 *)((int)&uStack_3a0 + iVar19));
                      fn_82AC9EE0(uVar15,uVar57,uVar16);
                      uVar57 = uVar57 + 1;
                      iVar19 = iVar19 + 4;
                    } while ((uVar57 & 0xffffffff) < uVar14);
                  }
                  uVar22 = fn_82B841E8(iVar18,piVar8[7],0,(uint)piVar8[2] >> 7 & 0x7f,
                                             (puVar29 != (uint *)0x0) + '\x02',uVar14);
                  uVar13 = fn_82AD17B0(iVar18,uVar13);
                  fn_82AC9EE0(uVar22,0,uVar13);
                  uVar13 = fn_82AD17B0(iVar18,uVar15);
                  fn_82AC9EE0(uVar22,1,uVar13);
                  if (puVar29 != (uint *)0x0) {
                    fn_82AC9EE0(uVar22,2,puVar29);
                  }
                  uVar21 = uVar22 & 0xfffffffe;
                  puVar51 = (uint *)(((uint)piVar8 & 0xfffffffe) + 0x24);
                  *(short *)(uVar22 + 0xe) = (short)piVar8[3];
                  *(uint *)(uVar21 + 0x24) = *puVar51;
                  *(uint *)(*puVar51 & 0xfffffffe) = uVar21;
                  *(uint *)(uVar21 + 0x28) = (uint)piVar8 & 0xfffffffe;
                  *puVar51 = uVar21 + 0x28;
                  fn_82B8CB58(iVar18,param_2,uVar22,0xe4,0,uVar4,pbVar38);
                }
              }
            }
          }
          cVar36 = fn_82ABE2E0(param_2);
          if ((cVar36 == '\0') && (cVar36 = fn_82ABE2E0(param_2), cVar36 == '\0')) {
            cVar36 = fn_82ACA5E0(param_2);
            if (cVar36 == '\0') {
              uVar22 = piVar8[2];
              uVar21 = uVar22 >> 7 & 0x7f;
              if (uVar21 < 0x61) {
                if (uVar21 == 0x60) {
                  if ((((uVar22 & 0x380000) != 0) &&
                      (fn_82B82D28(piVar8[0xb],0,auStack_688 + 3,&uStack_65c,&iStack_668,0,
                                         param_2,0),
                      (*(uint *)(auStack_688[3] + 8) & 0x3f80) == 0x500)) && (iStack_668 == 0)) {
                    fn_82B25248(iVar18,auStack_688[3],uVar4);
                    fn_82B82D28(*(undefined4 *)(auStack_688[3] + 0x2c),uStack_65c,
                                      auStack_688 + 3,&uStack_65c,&iStack_668,0,param_2,0);
                    uVar13 = fn_82AD1918(iVar18,auStack_688[3],uStack_65c,iStack_668);
                    fn_82AD35A8(param_2,0,uVar13,iVar18);
                  }
LAB_82b31af0:
                  lVar56 = param_2 + 4;
                  uVar14 = 0;
                  bVar65 = false;
                  bVar11 = false;
                  for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0;
                      puVar51 = (uint *)puVar51[2]) {
                    if ((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) {
                      uVar57 = fn_82ABDBA0(puVar51);
                      uVar14 = uVar57 | uVar14;
                      if ((((int *)puVar51[4])[2] & 0x3f80U) == 0x3700) {
                        for (iVar19 = *(int *)puVar51[4]; iVar19 != 0; iVar19 = *(int *)(iVar19 + 4)
                            ) {
                          if ((*(uint *)(*(int *)(iVar19 + 0xc) + 8) & 0x3f80) == 16000) {
                            dVar70 = (double)fn_82B16A18(iVar19,0);
                            bVar65 = (bool)(bVar65 | dVar70 == dVar69);
                            bVar11 = (bool)(bVar11 | dVar70 == dVar68);
                          }
                        }
                      }
                    }
                  }
                  if ((piVar8[2] & 0x3f80U) == 0x3080) {
                    iVar19 = fn_82AD1708();
                    uVar22 = *(uint *)(iVar19 + 0xc);
                    uVar57 = CONCAT44(uVar22,uVar22);
                    uVar22 = uVar22 >> 4;
                  }
                  else {
                    iVar19 = fn_82ABE058(param_2,iVar18);
                    uVar57 = (ulonglong)(*(uint *)(iVar19 + 0xc) >> 8);
                    uVar22 = *(uint *)(iVar19 + 0xc) >> 0xc;
                  }
                  uVar59 = uVar57 & 0xf & uVar14;
                  uVar57 = (ulonglong)uVar22 & 0xf & uVar14;
                  uVar14 = ~uVar14 & 0xf;
                  if ((bVar65) || (bVar11)) {
                    if ((bVar65) && (uVar59 == 0)) {
                      if (uVar14 == 0) {
                        bVar65 = false;
                      }
                      else {
                        uVar59 = uVar14 & ~(uVar14 - 1);
                        uVar14 = uVar14 - uVar59;
                      }
                    }
                    if ((bVar11) && (uVar57 == 0)) {
                      if ((uVar14 & 0xffffffff) == 0) {
                        bVar11 = false;
                      }
                      else {
                        uVar57 = uVar14 & ~(uVar14 - 1);
                        uVar14 = uVar14 - uVar57;
                      }
                    }
                    lVar66 = lVar56;
                    if ((bVar65) || (bVar11)) {
                      while( true ) {
                        puVar51 = (uint *)*(uint *)lVar66;
                        uVar49 = ZEXT48(puVar51);
                        if (uVar49 == 0) break;
                        if (((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) &&
                           ((((int *)puVar51[4])[2] & 0x3f80U) == 0x3700)) {
                          for (puVar51 = *(uint **)puVar51[4]; puVar51 != (uint *)0x0;
                              puVar51 = (uint *)puVar51[1]) {
                            if ((*(uint *)(puVar51[3] + 8) & 0x3f80) == 16000) {
                              dVar70 = (double)fn_82B16A18(puVar51,0);
                              if ((uVar59 == 0) || (dVar70 != dVar69)) {
                                if (((uVar57 & 0xffffffff) == 0) || (dVar70 != dVar68))
                                goto LAB_82b31d8c;
                                puVar29 = (uint *)(puVar51[3] + 4);
                                for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                                    puVar20 = (uint *)puVar20[2]) {
                                  puVar29 = puVar20 + 2;
                                }
                                uVar26 = (undefined4)uVar57;
                              }
                              else {
                                puVar29 = (uint *)(puVar51[3] + 4);
                                for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                                    puVar20 = (uint *)puVar20[2]) {
                                  puVar29 = puVar20 + 2;
                                }
                                uVar26 = (undefined4)uVar59;
                              }
                              *puVar29 = puVar51[2];
                              puVar51[2] = *(uint *)lVar56;
                              *(uint *)lVar56 = (uint)puVar51;
                              puVar51[3] = (uint)piVar8;
                              *puVar51 = (uint)((-LZCOUNT(uVar26) - 1U & 0xffffffff) << 5) & 0x360 |
                                         0x1c80 | *puVar51 & 0xfffffc80;
                            }
LAB_82b31d8c:;}
                        }
                        if (*(uint *)lVar66 == uVar49) {
                          lVar66 = uVar49 + 8;
                        }
                      }
                    }
                  }
                  if ((piVar8[2] & 0x3f80U) == 0x3080) {
                    iVar19 = fn_82AD1708();
                    *(uint *)(iVar19 + 0xc) =
                         *(uint *)(iVar19 + 0xc) & 0xffffff00 |
                         (uint)((uVar57 & 0xffffffff) << 4) & 0xf0 | (uint)uVar59;
                  }
                  else {
                    iVar19 = fn_82ABE058(param_2,iVar18);
                    *(uint *)(iVar19 + 0xc) =
                         (uint)(((uVar57 & 0xf) << 4 | uVar59) << 8) |
                         *(uint *)(iVar19 + 0xc) & 0xffff00ff;
                  }
                  if (uVar59 != 0) {
                    uVar22 = 0xf << ((uint)((0x1fU - LZCOUNT((uint)uVar59) & 0xffffffff) << 2) &
                                    0x3c);
                    if ((uVar22 & piVar8[3] & 0xffff) != uVar22) {
                      *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar22 | (ushort)piVar8[3];
                    }
                  }
                  if ((uVar57 & 0xffffffff) != 0) {
                    uVar22 = 0xe << ((uint)((0x1fU - LZCOUNT((int)uVar57) & 0xffffffff) << 2) & 0x3c
                                    );
                    if ((uVar22 & piVar8[3] & 0xffff) != uVar22) {
                      *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar22 | (ushort)piVar8[3];
                    }
                  }
                  uVar14 = ~uVar14 & 0xf;
                  piVar8[2] = (uint)((((0x8da691691448U >> uVar14) >> uVar14) >> uVar14 & 0xffffffff
                                     ) << 0xe) & 0x1c000 | piVar8[2] & 0xfffe3fffU;
                }
                else if (uVar21 < 0x3e) {
                  if (uVar21 == 0x3d) {
                    uVar22 = *(uint *)piVar8[0xb];
                    uVar21 = ((uint *)piVar8[0xb])[3];
                    if (((uVar22 & 0x1d) == 0) &&
                       (cVar36 = fn_82B176C0(iVar18,uVar21), cVar36 != '\0')) {
                      uVar13 = fn_82AD18C0(iVar18,uVar21,uVar22 >> 5 & 3);
                      uVar22 = fn_82B1B130(iVar18,0,param_2,uVar13);
LAB_82b30fdc:
                      uStack_424 = 0xe4;
LAB_82b30fe4:
                      uVar14 = 0;
                      goto LAB_82b32c08;
                    }
                  }
                  else if (uVar21 == 0x2e) {
                    fn_82B82D28(piVar8[0xb],0,&iStack_638,&uStack_604,aiStack_448,0,param_2,0)
                    ;
                    uVar22 = *(uint *)(iStack_638 + 8) >> 7 & 0x7f;
                    if ((uVar22 == 0x2f) || (bVar65 = false, uVar22 == 0x30)) {
                      bVar65 = true;
                    }
                    if ((bVar65) && (aiStack_448[0] == 0)) {
                      fn_82B82D28(*(undefined4 *)(iStack_638 + 0x2c),0,&uStack_414,&uStack_4a8
                                        ,&uStack_4b0,0,param_2,0);
                      uVar14 = (ulonglong)uStack_4b0;
                      uStack_424 = uStack_4a8;
                      uVar22 = uStack_414;
LAB_82b30b10:
                      uStack_424 = uStack_424 | 0xe4;
                      goto LAB_82b32c08;
                    }
                    if (((uVar22 == 2) || (uVar22 == 1)) && (aiStack_448[0] == 0)) {
                      fn_82B82D28(*(undefined4 *)(iStack_638 + 0x2c),uStack_604,&iStack_5fc,
                                        &iStack_550,&iStack_438,0,param_2,0);
                      fn_82B82D28(*(undefined4 *)(iStack_638 + 0x30),uStack_604,&iStack_498,
                                        &iStack_40c,&iStack_4a0,0,param_2,0);
                      if ((((*(uint *)(iStack_5fc + 8) & 0x3f80) == 0x1800) && (iStack_438 == 0)) &&
                         (((uVar22 = *(uint *)(iStack_638 + 8) >> 7 & 0x7f, uVar22 == 2 &&
                           ((*(uint *)(iStack_498 + 8) & 0x3f80) == 16000)) ||
                          ((((uVar22 == 1 && (iStack_5fc == iStack_498)) && (iStack_4a0 == 0)) &&
                           (iStack_550 == iStack_40c)))))) {
                        dVar68 = lbl_82002C40;
                        if ((*(uint *)(iStack_498 + 8) & 0x3f80) == 16000) {
                          dVar68 = (double)fn_82B80EF8();
                        }
                        if (dVar68 == lbl_82005730) {
                          uVar26 = *(undefined4 *)(iStack_5fc + 0x2c);
                          goto LAB_82b30a7c;
                        }
                        if (dVar68 == lbl_8202DCE0) {
                          uVar13 = fn_82B1B370(iVar18,0,param_2,
                                                     *(undefined4 *)(iStack_5fc + 0x2c));
                          uVar22 = fn_82B1B8C0(iVar18,0,param_2,uVar13);
                          goto LAB_82b30a90;
                        }
                        uVar21 = (uint)dVar68;
                        uVar14 = (ulonglong)uVar21;
                        uStack_6b0 = (ulonglong)(int)uVar21;
                        if ((((double)(longlong)uStack_6b0 == dVar68) &&
                            ((uVar21 == 8 || (((int)uVar21 < 7 && (-5 < (int)uVar21)))))) &&
                           (((int)uVar21 < -1 || (1 < (int)uVar21)))) {
                          if ((int)uVar21 < 0) {
                            uVar14 = -uVar14;
                          }
                          auStack_634[1] = *(int *)(iStack_5fc + 0x2c);
                          uVar57 = 0x20U - (LZCOUNT((int)uVar14) + 1) & 0x1f;
                          uVar57 = 0x100000001 << uVar57 | 0x100000001U >> 0x40 - uVar57;
                          lVar56 = -LZCOUNT((int)uVar57);
                          uVar59 = lVar56 + 0x1f;
                          if (1 < (uVar59 & 0xffffffff)) {
                            puVar51 = auStack_634 + 1;
                            lVar56 = lVar56 + 0x1e;
                            do {
                              uVar13 = fn_82B1A7E8(iVar18,0,param_2,*puVar51,*puVar51);
                              uVar22 = fn_82AD17B0(iVar18,uVar13);
                              lVar56 = lVar56 + -1;
                              puVar51 = puVar51 + 1;
                              *puVar51 = uVar22;
                            } while (lVar56 != 0);
                          }
                          uVar26 = *(undefined4 *)
                                    ((int)auStack_634 + (int)((uVar59 & 0xffffffff) << 2));
                          uVar22 = fn_82B1A7E8(iVar18,0,param_2,uVar26,uVar26);
                          for (uVar14 = uVar14 - (uVar57 & 0xffffffff); (uVar14 & 0xffffffff) != 0;
                              uVar14 = uVar14 - (uVar14 & ~(uVar14 - 1))) {
                            uVar22 = fn_82B1B560(iVar18,0,param_2,uVar22,
                                                       *(undefined4 *)
                                                        ((int)auStack_634 +
                                                        (int)((0x1fU - LZCOUNT((uint)uVar14 &
                                                                               ~((uint)uVar14 - 1))
                                                              & 0xffffffff) << 2) + 4U));
                          }
                          if ((int)uVar21 < 0) {
                            uVar22 = fn_82B1B848(iVar18,0,param_2,uVar22);
                          }
                          uVar14 = 0;
                          uStack_424 = 0xe4;
                          goto LAB_82b32c08;
                        }
                      }
                    }
                  }
                  else if (0x2e < uVar21) {
                    if (uVar21 < 0x31) {
                      puVar51 = (uint *)piVar8[0xb];
                      fn_82B82D28(puVar51,0,&iStack_4c8,auStack_1a0,&iStack_450,0,param_2,0);
                      if (((*(uint *)(iStack_4c8 + 8) & 0x3f80) == 0x1700) && (iStack_450 == 0)) {
                        fn_82B82D28(*(undefined4 *)(iStack_4c8 + 0x2c),0,&uStack_41c,
                                          &uStack_4b8,&uStack_4c0,0,param_2);
                        uVar14 = (ulonglong)uStack_4c0;
                        uStack_424 = uStack_4b8;
                        uVar22 = uStack_41c;
                        goto LAB_82b30b10;
                      }
                      dVar68 = dVar70;
                      uVar14 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >> (*puVar51 >> 3 & 0xc) &
                                            0xf,*puVar51 & 0x1f);
                      if ((uVar14 & 3) == 3) {
                        uStack_6b0 = CONCAT44(0xff800000,(((U64)(uStack_6b0) >> 32) & 0xFFFFFFFF));
                        dVar70 = -INFINITY;
                        goto LAB_82b30c2c;
                      }
                    }
                    else if (uVar21 == 0x33) {
                      puVar51 = (uint *)piVar8[0xb];
                      fn_82B82D28(puVar51,0,&iStack_42c,auStack_1b0,&iStack_4d8,0,param_2,0);
                      uVar22 = *(uint *)(iStack_42c + 8) >> 7 & 0x7f;
                      if ((uVar22 == 0x36) && (iStack_4d8 == 0)) {
                        uVar26 = *(undefined4 *)(iStack_42c + 0x2c);
LAB_82b30a7c:
                        uVar22 = fn_82B1B370(iVar18,0,param_2,uVar26);
                        goto LAB_82b30a90;
                      }
                      if ((uVar22 == 0x48) && (iStack_4d8 == 0)) {
                        uVar22 = fn_82B1AF98(iVar18,0,param_2,
                                                   *(undefined4 *)(iStack_42c + 0x2c));
                        goto LAB_82b30a90;
                      }
                      if ((uVar22 == 0x33) && (iStack_4d8 == 0)) {
                        fn_82B82D28(*(undefined4 *)(iStack_42c + 0x2c),0,&uStack_4d0,
                                          &uStack_424,&uStack_59c,0,param_2,0);
                        uVar14 = (ulonglong)uStack_59c;
                        uVar22 = uStack_4d0;
                        goto LAB_82b30b10;
                      }
                      uVar14 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >> (*puVar51 >> 3 & 0xc) &
                                            0xf,*puVar51 & 0x1f);
                      if ((uVar14 & 3) == 3) {
                        fn_82AA65B0(iVar18,0xfa1);
                      }
                      fn_82B28428(iVar18,param_2,0,uVar14 & 0xb,uVar4);
                    }
                    else if (uVar21 == 0x37) {
                      puVar51 = (uint *)piVar8[0xb];
                      if (((*puVar51 >> 2 ^ *puVar51) & 0x60) == 0) {
                        fn_82B82D28(puVar51,0,&uStack_620,auStack_688 + 1,&iStack_5e8,0,
                                          param_2,0);
                        iVar19 = iStack_5e8;
                        uVar21 = uStack_620;
                        uVar22 = *(uint *)(uStack_620 + 8) >> 7 & 0x7f;
                        if ((uVar22 == 0x67) &&
                           ((iVar30 = fn_82B17200(uStack_620,iVar18), iVar30 == 2 ||
                            (iVar30 == 5)))) {
                          puVar20 = *(uint **)(uVar21 + 0x2c);
                          uVar45 = *puVar20;
                          cVar36 = fn_82AEFAD0(uVar45 & 0x1f,iVar19);
                          if (cVar36 != '\0') {
                            auStack_688[1] =
                                 (uVar45 >> 5 & 0xff) >> ((auStack_688[1] & 0x1f) << 1) & 3;
                            puVar28 = (uint *)(puVar51[3] + 4);
                            uVar22 = puVar20[3];
                            for (puVar29 = (uint *)*puVar28; puVar29 != puVar51;
                                puVar29 = (uint *)puVar29[2]) {
                              puVar28 = puVar29 + 2;
                            }
                            *puVar28 = puVar51[2];
                            puVar51[2] = *(uint *)(uVar22 + 4);
                            *(uint **)(uVar22 + 4) = puVar51;
                            puVar51[3] = uVar22;
                            uVar22 = *puVar51;
                            uVar21 = (auStack_688[1] << 2 | 0xe0 | auStack_688[1]) << 5;
                            *puVar51 = uVar21 | uVar22 & 0xfffffc1f;
                            uVar45 = fn_82AD1228(*puVar20 & 0x1f,iStack_5e8);
                            *puVar51 = uVar21 | uVar22 & 0xfffffc00 | uVar45 & 0x1f;
                            fn_82B25248(iVar18,param_2,uVar4);
                            uVar22 = uStack_620;
                            goto LAB_82b32270;
                          }
                        }
                        if (((((iVar19 == 0) && (uVar22 == 0xb)) &&
                             (fn_82B82D28(*(undefined4 *)(uVar21 + 0x2c),auStack_688[1],
                                                &uStack_658,&uStack_61c,&iStack_4f0,0,param_2,0),
                             iStack_4f0 == 0)) &&
                            (((*(uint *)(uStack_658 + 8) & 0x3f80) == 0x80 &&
                             (fn_82B82D28(*(undefined4 *)(uStack_658 + 0x30),uStack_61c,
                                                &iStack_434,&uStack_614,&uStack_4e8,0,param_2,0),
                             (*(uint *)(iStack_434 + 8) & 0x3f80) == 16000)))) &&
                           (dVar68 = (double)fn_82B80EF8(iStack_434,uStack_614,uStack_4e8),
                           dVar68 == lbl_82005730)) {
                          fn_82B82D28(*(undefined4 *)(uStack_658 + 0x2c),uStack_61c,
                                            &uStack_60c,&uStack_460,&uStack_4e0,0,param_2,0);
                          puVar29 = (uint *)(puVar51[3] + 4);
                          for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                              puVar20 = (uint *)puVar20[2]) {
                            puVar29 = puVar20 + 2;
                          }
                          *puVar29 = puVar51[2];
                          puVar51[2] = *(uint *)(uStack_60c + 4);
                          *(uint **)(uStack_60c + 4) = puVar51;
                          puVar51[3] = uStack_60c;
                          uVar22 = *puVar51;
                          uVar21 = ((uStack_614 & 7) << 2 | 0xe0 | uStack_460 & 0x1f) << 5;
                          *puVar51 = uVar21 | uVar22 & 0xfffffc1f;
                          *puVar51 = uStack_4e0 & 0x1f | uVar21 | uVar22 & 0xfffffc00;
                          fn_82B25248(iVar18,param_2,uVar4);
                          fn_82B25248(iVar18,uStack_60c,uVar4);
                          uVar22 = uStack_658;
                          goto LAB_82b32270;
                        }
                      }
                      fn_82B252E0(iVar18,param_2,uVar4);
                    }
                    else if (uVar21 == 0x3c) {
                      uVar22 = *(uint *)piVar8[0xb];
                      uVar21 = ((uint *)piVar8[0xb])[3];
                      uVar45 = uVar22 >> 5 & 3;
                      if ((((uVar22 & 0x1e) == 0) &&
                          (((uVar22 = *(uint *)(uVar21 + 8) >> 7 & 0x7f, uVar22 == 8 ||
                            (uVar22 == 5)) || ((uVar22 == 6 || (uVar22 == 7)))))) &&
                         (cVar36 = fn_82AF4A50(*(undefined4 *)(uVar21 + 0x30),uVar45),
                         cVar36 != '\0')) {
                        fn_82B82D28(*(undefined4 *)(uVar21 + 0x2c),uVar45,&uStack_468,
                                          &uStack_4f8,&uStack_410,0,param_2,0);
                        uVar13 = fn_82AD1918(iVar18,uStack_468,uStack_4f8,uStack_410);
                        uVar22 = *(uint *)(uVar21 + 8) >> 7 & 0x7f;
                        if (uVar22 == 5) {
                          uVar22 = fn_82B1B0A8(iVar18,0,param_2,uVar13);
                        }
                        else if (uVar22 == 6) {
                          uVar22 = fn_82B1B260(iVar18,0,param_2);
                        }
                        else if (uVar22 == 7) {
                          uVar22 = fn_82B1B2E8(iVar18,0,param_2);
                        }
                        else {
                          if (uVar22 != 8) {
                    /* WARNING: Subroutine does not return */
                            fn_82AA66A8(iVar18,0x12c0);
                          }
                          uVar22 = fn_82B1B130(iVar18,0,param_2);
                        }
                        uVar14 = 0;
                        uStack_424 = 0xe4;
                        goto LAB_82b32c08;
                      }
                    }
                  }
                }
                else if (uVar21 == 0x3e) {
                  uVar22 = *(uint *)piVar8[0xb];
                  uVar21 = ((uint *)piVar8[0xb])[3];
                  if (((uVar22 & 0x1f) == 4) &&
                     (cVar36 = fn_82B176C0(iVar18,uVar21), cVar36 != '\0')) {
                    uVar13 = fn_82AD18C0(iVar18,uVar21,uVar22 >> 5 & 3);
                    uVar22 = fn_82B1B0A8(iVar18,0,param_2,uVar13);
                    goto LAB_82b30fdc;
                  }
                }
                else if (uVar21 == 0x48) {
                  uVar22 = *(uint *)piVar8[0xb];
                  uVar14 = fn_82AF49A8(*(ushort *)(((uint *)piVar8[0xb])[3] + 0xe) >>
                                        (uVar22 >> 3 & 0xc) & 0xf,uVar22 & 0x1f);
                  dVar68 = dVar70;
                  if ((uVar14 & 3) == 3) {
LAB_82b30c2c:
                    uVar22 = fn_82B8A3A0(dVar70,dVar68,dVar68,dVar68,iVar18,1);
LAB_82b30a90:
                    uVar14 = 0;
                    uStack_424 = 0xe4;
                    goto LAB_82b32c08;
                  }
                }
                else if ((0x4f < uVar21) && (uVar21 < 0x52)) {
                  puVar51 = (uint *)piVar8[0xb];
                  uVar22 = puVar51[3];
                  if (((*puVar51 & 0x1f) == 0) &&
                     ((((((*(uint *)(uVar22 + 8) & 0x3f80) == 0x80 &&
                         (fn_82B82D28(*(undefined4 *)(uVar22 + 0x2c),*puVar51 >> 5 & 3,
                                            &iStack_650,&uStack_544,&iStack_54c,0,0,0),
                         iStack_54c == 0)) && ((*(uint *)(iStack_650 + 8) & 0x3f80) == 0x100)) &&
                       ((dVar70 = lbl_8202DAB8,
                        cVar36 = fn_82ABF768(lbl_8202DAB8,*(undefined4 *)(uVar22 + 0x30)),
                        cVar36 != '\0' &&
                        (fn_82B82D28(*(undefined4 *)(iStack_650 + 0x2c),uStack_544,&iStack_534
                                           ,&uStack_52c,&iStack_53c,0,0,0), iStack_53c == 0)))) &&
                      (cVar36 = fn_82ABF768(lbl_8201DFE0,*(undefined4 *)(iStack_650 + 0x30)),
                      cVar36 != '\0')))) {
                    iStack_690 = iStack_534;
                    uStack_5f4 = uStack_52c;
                    uVar21 = *(uint *)(iStack_534 + 8) >> 7 & 0x7f;
                    if (uVar21 == 9) {
                      fn_82B82D28(*(undefined4 *)(iStack_534 + 0x2c),uStack_52c,&iStack_690,
                                        &uStack_5f4,&iStack_524,0,0,0);
                      if (iStack_524 != 0) {
LAB_82b31130:
                        iStack_690 = 0;
                      }
LAB_82b31178:
                      if ((((iStack_690 != 0) && ((*(uint *)(iStack_690 + 8) & 0x3f80) == 0x80)) &&
                          (cVar36 = fn_82ABF768(lbl_82005730,
                                                      *(undefined4 *)(iStack_690 + 0x30)),
                          cVar36 != '\0')) &&
                         (((fn_82B82D28(*(undefined4 *)(iStack_690 + 0x2c),uStack_5f4,
                                              &iStack_640,&uStack_5ec,&iStack_51c,0,0,0),
                           iStack_51c == 0 && ((*(uint *)(iStack_640 + 8) & 0x3f80) == 0x100)) &&
                          ((cVar36 = fn_82ABF768(lbl_8202DCE8,
                                                       *(undefined4 *)(iStack_640 + 0x30)),
                           cVar36 != '\0' &&
                           ((fn_82B82580(*(undefined4 *)(iStack_640 + 0x2c),uStack_5ec,
                                               &dStack_250,&dStack_240), dVar70 <= dStack_250 &&
                            (dStack_240 <= lbl_820288D0)))))))) {
                        fn_82B82D28(*(undefined4 *)(iStack_640 + 0x2c),uStack_5ec,&uStack_514,
                                          &uStack_50c,&uStack_504,0,0,0);
                        puVar29 = (uint *)(puVar51[3] + 4);
                        for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                            puVar20 = (uint *)puVar20[2]) {
                          puVar29 = puVar20 + 2;
                        }
                        *puVar29 = puVar51[2];
                        puVar51[2] = *(uint *)(uStack_514 + 4);
                        *(uint **)(uStack_514 + 4) = puVar51;
                        puVar51[3] = uStack_514;
                        uVar21 = *puVar51;
                        uVar45 = (uStack_50c & 0x1b) << 5 | 0x1c80;
                        *puVar51 = uVar45 | uVar21 & 0xfffffc9f;
                        *puVar51 = uStack_504 & 0x1f | uVar45 | uVar21 & 0xfffffc80;
LAB_82b32270:
                        fn_82B25248(iVar18,uVar22,uVar4);
                      }
                    }
                    else {
                      if (uVar21 != 1) goto LAB_82b31130;
                      fn_82B82208(iStack_534,uStack_52c,&dStack_270,&dStack_260);
                      if ((dVar69 <= dStack_270) && (dStack_260 < dVar68)) goto LAB_82b31178;
                      iStack_690 = 0;
                    }
                  }
                }
              }
              else if (uVar21 < 0x6c) {
                if (uVar21 == 0x6b) {
                  puVar51 = (uint *)piVar8[0xb];
                  cVar36 = fn_82ABF768(dVar68,piVar8[0xc]);
                  if (cVar36 != '\0') {
                    uVar21 = *puVar51;
                    uVar22 = puVar51[3];
                    uVar14 = (ulonglong)uVar21 & 0x1f;
                    uStack_424 = uVar21 >> 5 & 0xff;
                    goto LAB_82b32c08;
                  }
                }
                else {
                  if (uVar21 == 0x61) goto LAB_82b31af0;
                  if (uVar21 == 0x62) {
                    cVar36 = fn_82AF4A50(piVar8[0xb],0);
                    if (cVar36 != '\0') {
                      lVar56 = param_2 + 4;
                      while( true ) {
                        puVar51 = (uint *)*(uint *)lVar56;
                        uVar14 = ZEXT48(puVar51);
                        if (uVar14 == 0) break;
                        if (puVar51[4] != 0) {
                          if (((*puVar51 & 0x40000000) == 0) ||
                             (bVar65 = true, (*puVar51 & 0xe000000) != 0)) {
                            bVar65 = false;
                          }
                          if (bVar65) {
                            uVar22 = puVar51[4];
                            uVar21 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                            if (((uVar21 == 0x61) || (uVar21 == 99)) ||
                               (bVar65 = false, uVar21 == 100)) {
                              bVar65 = true;
                            }
                            if (bVar65) {
                              iVar19 = fn_82AD1708(uVar22,iVar18);
                              if ((*(uint *)(iVar19 + 4) & 0x10000000) == 0) {
                                *(uint *)(iVar19 + 4) = *(uint *)(iVar19 + 4) & 0xdfffffff;
                                fn_82AD20C0(uVar22,uVar14,iVar18);
                              }
                            }
                          }
                        }
                        if (*(uint *)lVar56 == uVar14) {
                          lVar56 = uVar14 + 8;
                        }
                      }
                    }
                  }
                  else if (uVar21 == 100) {
                    uVar14 = 0;
                    for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0;
                        puVar51 = (uint *)puVar51[2]) {
                      if ((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) {
                        uVar57 = fn_82ABDBA0(puVar51);
                        uVar14 = uVar57 | uVar14;
                      }
                    }
                    if ((uVar14 & 3) == 0) {
                      uVar22 = fn_82B843F0(iVar18,param_2);
                      fn_82AC9EE0(uVar22,0,piVar8[0xb]);
                      uVar13 = fn_82B471E8(iVar18,piVar8[0xc],1);
                      fn_82AC9EE0(uVar22,1,uVar13);
                      uVar21 = uVar22 & 0xfffffffe;
                      puVar51 = (uint *)(((uint)piVar8 & 0xfffffffe) + 0x24);
                      *(uint *)(uVar21 + 0x24) = *puVar51;
                      *(uint *)(*puVar51 & 0xfffffffe) = uVar21;
                      *(uint *)(uVar21 + 0x28) = (uint)piVar8 & 0xfffffffe;
                      *puVar51 = uVar21 + 0x28;
                      for (puVar51 = (uint *)*piVar8; puVar51 != (uint *)0x0;
                          puVar51 = (uint *)puVar51[1]) {
                        if (((*puVar51 & 0x40000000) == 0) ||
                           (bVar65 = true, (*puVar51 & 0xe000000) != 0)) {
                          bVar65 = false;
                        }
                        if (bVar65) {
                          fn_82AD1978(uVar22,puVar51);
                        }
                      }
                      uStack_424 = 0x44;
                      goto LAB_82b30fe4;
                    }
                    if ((uVar14 & 0xc) != 0) {
                      uVar13 = fn_82B843F0(iVar18,param_2);
                      fn_82AC9EE0(uVar13,0,piVar8[0xb]);
                      uVar15 = fn_82B471E8(iVar18,piVar8[0xc],0);
                      fn_82AC9EE0(uVar13,1,uVar15);
                      uVar21 = (uint)piVar8 & 0xfffffffe;
                      uVar22 = (uint)uVar13 & 0xfffffffe;
                      puVar20 = (uint *)(uVar21 + 0x24);
                      *(uint *)(uVar22 + 0x24) = *puVar20;
                      *(uint *)(*puVar20 & 0xfffffffe) = uVar22;
                      *(uint *)(uVar22 + 0x28) = uVar21;
                      *puVar20 = uVar22 + 0x28;
                      for (puVar51 = (uint *)*piVar8; puVar51 != (uint *)0x0;
                          puVar51 = (uint *)puVar51[1]) {
                        if (((*puVar51 & 0x40000000) == 0) ||
                           (bVar65 = true, (*puVar51 & 0xe000000) != 0)) {
                          bVar65 = false;
                        }
                        if (bVar65) {
                          fn_82AD1978(uVar13,puVar51);
                        }
                      }
                      uVar15 = fn_82B843F0(iVar18,param_2);
                      fn_82AC9EE0(uVar15,0,piVar8[0xb]);
                      uVar16 = fn_82B471E8(iVar18,piVar8[0xc],1);
                      fn_82AC9EE0(uVar15,1,uVar16);
                      uVar22 = (uint)uVar15 & 0xfffffffe;
                      *(uint *)(uVar22 + 0x24) = *puVar20;
                      *(uint *)(*puVar20 & 0xfffffffe) = uVar22;
                      *(uint *)(uVar22 + 0x28) = uVar21;
                      *puVar20 = uVar22 + 0x28;
                      for (puVar51 = (uint *)*piVar8; puVar51 != (uint *)0x0;
                          puVar51 = (uint *)puVar51[1]) {
                        if (((*puVar51 & 0x40000000) == 0) ||
                           (bVar65 = true, (*puVar51 & 0xe000000) != 0)) {
                          bVar65 = false;
                        }
                        if (bVar65) {
                          fn_82AD1978(uVar15,puVar51);
                        }
                      }
                      uVar22 = fn_82AF76C8(iVar18,0,param_2,4);
                      uVar16 = fn_82AD18C0(iVar18,uVar13,0);
                      fn_82AC9EE0(uVar22,0,uVar16);
                      uVar13 = fn_82AD18C0(iVar18,uVar13,1);
                      fn_82AC9EE0(uVar22,1,uVar13);
                      uVar13 = fn_82AD18C0(iVar18,uVar15,0);
                      fn_82AC9EE0(uVar22,2,uVar13);
                      uVar13 = fn_82AD18C0(iVar18,uVar15,1);
                      fn_82AC9EE0(uVar22,3,uVar13);
                      uVar14 = 0;
                      uStack_424 = 0xe4;
                      goto LAB_82b32c08;
                    }
                  }
                  else if (uVar21 == 0x67) {
                    lVar56 = fn_82B17200(param_2,iVar18);
                    if (-1 < lVar56) {
                      iVar19 = (int)lVar56;
                      if (iVar19 < 2) {
                        fn_82B82D28(piVar8[0xb],0,&iStack_4cc,&uStack_5e4,&uStack_5dc,0,
                                          param_2,0);
                        if (((*(uint *)(iStack_4cc + 8) & 0x3f80) == 0x3e00) ||
                           ((uVar22 = *(uint *)piVar8[0xb],
                            uVar14 = fn_82AF49A8(*(ushort *)(((uint *)piVar8[0xb])[3] + 0xe) >>
                                                  (uVar22 >> 3 & 0xc) & 0xf,uVar22 & 0x1f),
                            (uVar14 & 4) != 0 && ((iVar19 == 0 || ((uVar14 & 2) != 0)))))) {
                          fn_82B17758(iVar18,param_2,iStack_4cc,uStack_5e4 | 0xe4,uStack_5dc,
                                            uVar4,pbVar38);
                        }
                      }
                      else if (iVar19 == 2) {
                        fn_82B82D28(piVar8[0xb],0,&uStack_4d4,&uStack_4e4,&uStack_4dc,0,
                                          param_2,0);
                        fn_82B82580(piVar8[0xb],0,&dStack_230,auStack_138);
                        if (dVar69 <= dStack_230) {
                          uVar14 = (ulonglong)uStack_4dc;
                          uStack_424 = uStack_4e4 | 0xe4;
                          uVar22 = uStack_4d4;
LAB_82b32c08:
                          fn_82B8CB58(iVar18,param_2,uVar22,uStack_424,uVar14,uVar4,pbVar38);
                        }
                      }
                      else if ((3 < iVar19) && (iVar19 < 6)) {
                        puVar51 = (uint *)piVar8[0xb];
                        uVar14 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >> (*puVar51 >> 3 & 0xc)
                                              & 0xf,*puVar51 & 0x1f);
                        if (((uVar14 & 4) != 0) && ((iVar19 == 4 || ((uVar14 & 2) != 0)))) {
                          fn_82B82D28(puVar51,0,&uStack_4f4,&uStack_4ec,&uStack_4fc,0,param_2,
                                            0);
                          uVar14 = (ulonglong)uStack_4fc;
                          uStack_424 = uStack_4ec | 0xe4;
                          uVar22 = uStack_4f4;
                          goto LAB_82b32c08;
                        }
                      }
                    }
                  }
                  else if (((uVar21 == 0x68) &&
                           (iVar19 = fn_82AD1670(param_2,iVar18),
                           (*(uint *)(iVar19 + 4) & 0x200000) != 0)) &&
                          (puVar51 = (uint *)piVar8[0xb],
                          (*(uint *)(puVar51[3] + 8) & 0x3f80) == 16000)) {
                    lVar56 = param_2 + 4;
                    while( true ) {
                      puVar20 = (uint *)*(uint *)lVar56;
                      uVar14 = ZEXT48(puVar20);
                      if (uVar14 == 0) break;
                      if (puVar20[4] != 0) {
                        if (((*puVar20 & 0x40000000) != 0) ||
                           (bVar65 = false, (*puVar20 & 0xe000000) != 0)) {
                          bVar65 = true;
                        }
                        if (bVar65) {
                          uVar22 = puVar20[4];
                          uVar21 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                          if ((uVar21 == 0) || (bVar65 = true, 0x52 < uVar21)) {
                            bVar65 = false;
                          }
                          if (bVar65) {
                            fn_82B837F8(iVar18,param_2,uVar14,puVar51[3],*puVar51 >> 5 & 0xff,
                                              *puVar51 & 0x1f);
                            fn_82B25248(iVar18,uVar22,uVar4);
                          }
                        }
                      }
                      if (*(uint *)lVar56 == uVar14) {
                        lVar56 = uVar14 + 8;
                      }
                    }
                  }
                }
              }
              else if (uVar21 == 0x6e) {
                if ((uVar22 & 0x380000) == 0x80000) {
                  uVar21 = *(uint *)piVar8[0xb];
                  uVar22 = ((uint *)piVar8[0xb])[3];
                  uVar14 = (ulonglong)uVar21 & 0x1f;
                  uStack_424 = uVar21 >> 5 & 0xff;
                  goto LAB_82b32c08;
                }
                iVar19 = fn_82B255B0(iVar18,param_2,uVar4);
                if (iVar19 == 0) {
                  lVar66 = param_2 + 0x2c;
                  uVar14 = (ulonglong)((uint)piVar8[2] >> 0x13) & 7;
                  lVar56 = lVar66;
                  for (uVar57 = 0; (uVar57 & 0xffffffff) < uVar14; uVar57 = uVar57 + 1) {
                    puVar51 = (uint *)*(int *)lVar56;
                    uVar59 = 0;
                    uVar22 = puVar51[3];
                    for (lVar17 = lVar66;
                        ((uVar59 & 0xffffffff) < uVar14 &&
                        (puVar20 = (uint *)*(int *)lVar17, puVar20 != puVar51)); lVar17 = lVar17 + 4
                        ) {
                      uVar21 = *puVar20;
                      uVar45 = *puVar51;
                      if (((uVar45 ^ uVar21) & 0x1f) == 0) {
                        uVar27 = puVar20[3];
                        if ((uVar22 == uVar27) && (((uVar45 ^ uVar21) & 0x1fe0) == 0)) {
LAB_82b32d84:
                          fn_82B25248(iVar18,uVar27,uVar4);
                          uVar22 = fn_82B1E978(iVar18,param_2,uVar59,uVar57,&uStack_6b0);
                          uVar14 = 0;
                          uStack_424 = (((U64)(uStack_6b0) >> 0) & 0xFFFFFFFF);
                          goto LAB_82b32c08;
                        }
                        if (((*(uint *)(uVar22 + 8) >> 7 & 0x7f) == 0x76) &&
                           (((*(uint *)(uVar27 + 8) & 0x3f80) == 0x3b00 &&
                            (*(int *)(*(int *)(uVar22 + 0x30) + 0xc) ==
                             *(int *)(*(int *)(uVar27 + 0x30) + 0xc))))) {
                          if (((*(uint **)(uVar22 + 0x2c))[3] == (*(uint **)(uVar27 + 0x2c))[3]) &&
                             ((((uVar45 ^ uVar21) & 0x1fe0) == 0 &&
                              (((**(uint **)(uVar27 + 0x2c) ^ **(uint **)(uVar22 + 0x2c)) & 0x1fe0)
                               == 0)))) goto LAB_82b32d84;
                        }
                      }
                      uVar59 = uVar59 + 1;
                    }
                    lVar56 = lVar56 + 4;
                  }
                  uVar14 = 1;
                  lVar56 = param_2 + 4;
                  while( true ) {
                    puVar51 = (uint *)*(uint *)lVar56;
                    uVar57 = ZEXT48(puVar51);
                    if (uVar57 == 0) break;
                    if (puVar51[4] != 0) {
                      uVar22 = puVar51[4];
                      if ((*puVar51 >> 0x19 & 7) == 1) {
                        uVar22 = *(uint *)piVar8[(*puVar51 >> 5 & 3) + 0xb];
                        uVar59 = (ulonglong)(uVar22 >> 5) & 3;
                        uVar59 = fn_82B837F8(iVar18,param_2,uVar57,
                                                   ((uint *)piVar8[(*puVar51 >> 5 & 3) + 0xb])[3],
                                                   (((ulonglong)(uVar22 >> 3) & 0xc | uVar59) << 2 |
                                                   uVar59) << 2 | uVar59,uVar22 & 0x1f);
                        uVar14 = uVar59 & 0xff & uVar14;
                      }
                      else {
                        cVar36 = fn_82ACA5E0(uVar22);
                        if ((cVar36 == '\0') || (uVar59 = 1, (*(uint *)(uVar22 + 8) >> 5 & 1) != 0))
                        {
                          uVar59 = 0;
                        }
                        uVar14 = uVar14 & uVar59;
                      }
                    }
                    if (*(uint *)lVar56 == uVar57) {
                      lVar56 = uVar57 + 8;
                    }
                  }
                  if (uVar14 != 0) {
LAB_82b32e98:
                    puVar51 = (uint *)*(int *)(param_2 + 4);
                    do {
                      if (puVar51 == (uint *)0x0) break;
                      if (puVar51[4] != 0) {
                        uVar22 = *puVar51;
                        uVar21 = puVar51[4];
                        uVar14 = (ulonglong)(uVar22 >> 0x19) & 7;
                        if (((uVar14 != 1) && (cVar36 = fn_82ABE2E0(uVar21), cVar36 == '\0')) &&
                           ((*(uint *)(uVar21 + 8) >> 0x19 & 1) == 0)) goto LAB_82b32ee8;
                      }
                      puVar51 = (uint *)puVar51[2];
                    } while( true );
                  }
                  uVar22 = 0;
                  for (uVar14 = 0;
                      (uVar14 & 0xffffffff) < ((ulonglong)((uint)piVar8[2] >> 0x13) & 7);
                      uVar14 = uVar14 + 1) {
                    puVar51 = *(uint **)((int)lVar66 + uVar22);
                    iVar19 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >> (*puVar51 >> 3 & 0xc) &
                                          0xf,*puVar51 & 0x1f);
                    uVar21 = iVar19 << (uVar22 & 0x3f);
                    if ((uVar21 & piVar8[3] & 0xffff) != uVar21) {
                      *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar21 | (ushort)piVar8[3];
                      fn_82B252E0(iVar18,param_2,uVar4);
                    }
                    fn_82B82580(puVar51,0,&uStack_210,&uStack_220);
                    cVar36 = fn_82B82378(uStack_210,uStack_220,param_2,uVar14);
                    if (cVar36 != '\0') {
                      fn_82B252E0(iVar18,param_2,uVar4);
                    }
                    uVar22 = uVar22 + 4;
                  }
                }
              }
              else if (uVar21 == 0x70) {
                puVar51 = (uint *)*piVar8;
                if (puVar51 != (uint *)0x0) {
                  uVar22 = 0xf;
                  for (puVar20 = puVar51; puVar20 != (uint *)0x0; puVar20 = (uint *)puVar20[1]) {
                    uVar21 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >> (*puVar20 >> 3 & 0xc) &
                                          0xf,*puVar20 & 0x1f);
                    uVar22 = uVar21 & uVar22;
                  }
                  fn_82B28428(iVar18,param_2,0,piVar8[3] & 0xcU | uVar22,uVar4);
                  if ((*pbVar38 == 0) && ((*(uint *)(piVar8[7] + 0x30) >> 0x15 & 1) == 0)) {
                    cVar36 = fn_82B8D038(iVar18,param_2,&uStack_590,&uStack_588,&uStack_580,
                                               param_2,0);
                    if ((cVar36 != '\0') &&
                       ((uStack_590 != 0 &&
                        (uVar14 = (ulonglong)*(uint *)(*(int *)(uStack_590 + 0x1c) + 0x30) & 0x7ffff
                        , (*(uint *)(((int)(uVar14 >> 5) + 1) * 4 + *(int *)(piVar8[7] + 0x28)) &
                          1 << ((uint)uVar14 & 0x1f)) != 0)))) {
                      uVar14 = (ulonglong)uStack_580;
                      uStack_424 = uStack_588 | 0xe4;
                      uVar22 = uStack_590;
                      goto LAB_82b32c08;
                    }
                    uVar22 = *(uint *)(piVar8[7] + 0x30);
                    if (((((uVar22 >> 0x13 & 1) == 0) &&
                         (puVar20 = (uint *)puVar51[1], puVar20 != (uint *)0x0)) &&
                        (puVar20[1] == 0)) && ((*(uint *)(iVar18 + 0x2c) & 0x40000) != 0)) {
                      iVar30 = *(int *)(puVar51[3] + 0x1c);
                      iVar19 = *(int *)(puVar20[3] + 0x1c);
                      if (((1 << (uVar22 & 0x1f) &
                           *(uint *)(((uVar22 >> 5 & 0x3fff) + 1) * 4 + *(int *)(iVar30 + 0x28))) ==
                           0) && ((*(uint *)(((int)(((ulonglong)uVar22 & 0x7ffff) >> 5) + 1) * 4 +
                                            *(int *)(iVar19 + 0x28)) &
                                  1 << ((uint)((ulonglong)uVar22 & 0x7ffff) & 0x1f)) == 0)) {
                        uVar14 = (ulonglong)*(uint *)(iVar19 + 0x30) & 0x7ffff;
                        iVar34 = iVar19;
                        if ((1 << ((uint)uVar14 & 0x1f) &
                            *(uint *)(((int)(uVar14 >> 5) + 1) * 4 + *(int *)(iVar30 + 0x28))) != 0)
                        {
                          iVar34 = iVar30;
                          iVar30 = iVar19;
                        }
                        uVar14 = (ulonglong)*(uint *)(iVar30 + 0x30) & 0x7ffff;
                        uVar22 = *(uint *)(iVar34 + 0x40);
                        if ((*(uint *)(((int)(uVar14 >> 5) + 1) * 4 + *(int *)(iVar34 + 0x28)) &
                            1 << ((uint)uVar14 & 0x1f)) == 0) {
                          uVar22 = -(uint)(*(uint *)(iVar30 + 0x40) == uVar22) & uVar22;
                        }
                        else if (*(int *)(uVar22 + 0x40) != *(int *)(iVar30 + 0x40)) {
                          uVar22 = 0;
                        }
                        if ((uVar22 != 0) && ((*(uint *)(uVar22 + 0x24) & 1) == 0)) {
                          uVar22 = *(uint *)(uVar22 + 0x20) & 0xfffffffe;
                          iVar19 = uVar22 - 0x28;
                          if ((iVar19 != 0) &&
                             (uVar21 = *(uint *)(uVar22 - 0x20), (uVar21 & 0x3f80) == 0x2d00)) {
                            piVar33 = (int *)fn_82ABE0A0(iVar19,iVar18);
                            iVar30 = *piVar33;
                            if ((uVar21 >> 0x12 & 1) == 0) {
                              for (piVar7 = *(int **)(*(int *)(uVar22 - 0xc) + 0xc);
                                  piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
                                iVar30 = *piVar7;
                                if (iVar30 != *piVar33) goto LAB_82b32530;
                              }
                              iVar30 = 0;
                            }
LAB_82b32530:
                            fn_82B82D28(puVar51,0,&uStack_654,&uStack_644,&uStack_64c,0,
                                              param_2,0);
                            fn_82B82D28(puVar20,0,&uStack_63c,&uStack_5cc,&uStack_5d4,0,
                                              param_2,0);
                            uVar45 = uStack_64c;
                            uVar21 = uStack_654;
                            if ((((uStack_654 == uStack_63c) && (uStack_644 == uStack_5cc)) &&
                                (uStack_64c == (uStack_5d4 ^ 4))) &&
                               (cVar36 = fn_82AEFAD0(uStack_64c,2), cVar36 != '\0')) {
                              puVar29 = puVar51;
                              if ((uVar45 & 4) == 0) {
                                puVar29 = puVar20;
                              }
                              uVar14 = (ulonglong)*(uint *)(iVar30 + 0x30) & 0x7ffff;
                              if ((*(uint *)(((int)(uVar14 >> 5) + 1) * 4 +
                                            *(int *)(*(int *)(puVar29[3] + 0x1c) + 0x28)) &
                                  1 << ((uint)uVar14 & 0x1f)) != 0) {
                                iVar34 = fn_82AC65F0(iVar19);
                                uVar45 = *(uint *)(*(int *)(iVar34 + 0xc) + 8) >> 7 & 0x7f;
                                if (((uVar45 == 0x3d) || (uVar21 = uStack_654, uVar45 == 0x3e)) &&
                                   ((fn_82B82D28(*(undefined4 *)
                                                        (*(int *)(iVar34 + 0xc) + 0x2c),0,
                                                       &uStack_578,&uStack_570,&uStack_568,0,param_2
                                                       ,0), uVar21 = uStack_654,
                                    uStack_578 == uStack_654 &&
                                    ((uStack_570 == uStack_644 && (uStack_568 == (uStack_64c | 4))))
                                    ))) {
                                  uVar14 = fn_82AD1228(uStack_64c,2);
                                  uStack_424 = uStack_644 | 0xe4;
                                  uVar22 = uStack_654;
                                  goto LAB_82b32c08;
                                }
                              }
                            }
                            if (((*(uint *)(uVar21 + 8) & 0x3f80) == 16000) &&
                               ((*(uint *)(uStack_63c + 8) & 0x3f80) == 16000)) {
                              dVar70 = (double)fn_82B80EF8(uVar21,uStack_644,uStack_64c);
                              dVar71 = (double)fn_82B80EF8(uStack_63c,uStack_5cc,uStack_5d4);
                              if ((((dVar70 == dVar68) && (puVar29 = puVar51, dVar71 == dVar69)) ||
                                  ((dVar70 == dVar69 &&
                                   (puVar29 = puVar20, puVar20 = puVar51, dVar71 == dVar68)))) &&
                                 (puVar29 != (uint *)0x0)) {
                                iVar34 = fn_82AC65F0(iVar19);
                                iVar34 = *(int *)(iVar34 + 0xc);
                                uVar21 = *(uint *)(iVar34 + 8) >> 7 & 0x7f;
                                if ((((uVar21 == 0x3d) || (uVar21 == 0x3c)) || (uVar21 == 0x3b)) &&
                                   ((fn_82B82D28(*(undefined4 *)(iVar34 + 0x2c),0,&uStack_674,
                                                       &uStack_558,&iStack_560,0,param_2,0),
                                    uVar21 = uStack_674, iStack_560 == 0 &&
                                    (cVar36 = fn_82B176C0(iVar18,uStack_674), cVar36 != '\0'))
                                   )) {
                                  iVar35 = fn_82ABE0A0(iVar19,iVar18);
                                  if ((((*(uint *)(iVar35 + 8) & 3) != 0) ||
                                      ((uVar45 = *(uint *)(iVar35 + 8) >> 2 & 0xf, uVar45 != 8 &&
                                       (uVar45 != 9)))) &&
                                     (iVar35 = *(int *)(uVar21 + 0x1c),
                                     uVar14 = (ulonglong)*(uint *)(iVar35 + 0x30) & 0x7ffff,
                                     (*(uint *)(((int)(uVar14 >> 5) + 1) * 4 +
                                               *(int *)(piVar8[7] + 0x28)) &
                                     1 << ((uint)uVar14 & 0x1f)) != 0)) {
                                    uVar14 = (ulonglong)*(uint *)(iVar30 + 0x30) & 0x7ffff;
                                    if (((*(uint *)(((int)(uVar14 >> 5) + 1) * 4 +
                                                   *(int *)(*(int *)(puVar29[3] + 0x1c) + 0x28)) &
                                         1 << ((uint)uVar14 & 0x1f)) == 0) &&
                                       ((((uVar45 = *(uint *)(uVar21 + 8) >> 7 & 0x7f, uVar45 == 5
                                          || (uVar45 == 8)) || (uVar45 == 6)) || (uVar45 == 7)))) {
                                      iVar63 = 0;
                                      if ((*(uint *)(iVar35 + 0x1c) & 1) == 0) {
                                        uVar45 = *(uint *)(iVar35 + 0x18);
joined_r0x82b32874:
                                        do {
                                          uVar27 = uVar45 & 0xfffffffe;
                                          iVar35 = uVar27 - 0x28;
                                          if (iVar35 == 0) break;
                                          cVar36 = fn_82ABE2E0(iVar35);
                                          if (cVar36 != '\0') {
                                            fn_82B8AC10(iVar18,iVar35,uVar4,1);
                                            uVar21 = uStack_674;
                                          }
                                          if (iVar63 == 0) {
                                            iVar53 = *(int *)(uVar21 + 0x1c);
                                            if ((*(uint *)(iVar53 + 0x1c) & 1) == 0) {
                                              iVar54 = (*(uint *)(iVar53 + 0x18) & 0xfffffffe) -
                                                       0x28;
                                            }
                                            else {
                                              iVar54 = 0;
                                            }
                                            if (iVar35 != iVar54) {
                                              if ((*(uint *)(iVar53 + 0x1c) & 1) != 0) break;
                                              uVar45 = *(uint *)(iVar53 + 0x18);
                                              goto joined_r0x82b32874;
                                            }
LAB_82b328d8:
                                            uVar45 = *(uint *)(uVar27 - 4);
                                            iVar63 = iVar35;
                                          }
                                          else {
                                            uVar45 = *(uint *)(iVar63 + 0x24);
                                            if ((uVar45 & 1) == 0) {
                                              iVar53 = (uVar45 & 0xfffffffe) - 0x28;
                                            }
                                            else {
                                              iVar53 = 0;
                                            }
                                            if (iVar35 == iVar53) goto LAB_82b328d8;
                                          }
                                        } while ((uVar45 & 1) == 0);
                                      }
                                      for (iVar35 = *(int *)(uVar21 + 4); iVar35 != 0;
                                          iVar35 = *(int *)(iVar35 + 8)) {
                                        if ((*(int *)(iVar35 + 0x10) != 0) &&
                                           (*(int *)(iVar35 + 0x10) != iVar34)) {
                                          bVar65 = true;
                                          goto LAB_82b32990;
                                        }
                                      }
                                      bVar65 = false;
LAB_82b32990:
                                      if (!bVar65) {
                                        for (iVar35 = *(int *)(iVar34 + 4); iVar35 != 0;
                                            iVar35 = *(int *)(iVar35 + 8)) {
                                          if ((*(int *)(iVar35 + 0x10) != 0) &&
                                             (*(int *)(iVar35 + 0x10) != iVar19)) {
                                            bVar65 = true;
                                            goto LAB_82b329d0;
                                          }
                                        }
                                        bVar65 = false;
LAB_82b329d0:
                                        if (!bVar65) {
                                          uVar45 = *(uint *)(uVar21 + 8) >> 7 & 0x7f;
                                          if (uVar45 == 5) {
                                            uVar21 = fn_82AF7A50(iVar18,0,uVar21,
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x30));
                                          }
                                          else if (uVar45 == 6) {
                                            uVar21 = fn_82AF0618(iVar18,0,uVar21,
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x30),
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x2c));
                                          }
                                          else if (uVar45 == 7) {
                                            uVar21 = fn_82AF0548(iVar18,0,uVar21,
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x30),
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x2c));
                                          }
                                          else {
                                            if (uVar45 != 8) {
                    /* WARNING: Subroutine does not return */
                                              fn_82AA66A8(iVar18,0x12c0);
                                            }
                                            uVar21 = fn_82AF7980(iVar18,0,uVar21,
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (uVar21 + 0x30));
                                          }
                                          iVar30 = *(int *)(iVar34 + 0x2c);
                                          piVar33 = (int *)(*(int *)(iVar30 + 0xc) + 4);
                                          for (iVar35 = *piVar33; iVar35 != iVar30;
                                              iVar35 = *(int *)(iVar35 + 8)) {
                                            piVar33 = (int *)(iVar35 + 8);
                                          }
                                          *piVar33 = *(int *)(iVar30 + 8);
                                          *(undefined4 *)(iVar30 + 8) = *(undefined4 *)(uVar21 + 4);
                                          *(int *)(uVar21 + 4) = iVar30;
                                          *(uint *)(iVar30 + 0xc) = uVar21;
                                          uVar45 = ~*(uint *)(uVar22 - 0x20) & 0x40000;
                                          *(uint *)(uVar22 - 0x20) =
                                               *(uint *)(uVar22 - 0x20) & 0xfffbffff | uVar45;
                                          piVar33 = (int *)fn_82ABE0A0(iVar19,iVar18);
                                          iVar30 = *piVar33;
                                          if (uVar45 == 0) {
                                            for (piVar7 = *(int **)(*(int *)(uVar22 - 0xc) + 0xc);
                                                piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
                                              iVar30 = *piVar7;
                                              if (iVar30 != *piVar33) goto LAB_82b32b00;
                                            }
                                            iVar30 = 0;
                                          }
LAB_82b32b00:
                                          fn_82B25248(iVar18,iVar34,uVar4);
                                          fn_82B25248(iVar18,uStack_674,uVar4);
                                          fn_82B25248(iVar18,uVar21,uVar4);
                                          uStack_674 = uVar21;
                                        }
                                      }
                                    }
                                    uVar14 = (ulonglong)*(uint *)(iVar30 + 0x30) & 0x7ffff;
                                    if ((*(uint *)(((int)(uVar14 >> 5) + 1) * 4 +
                                                  *(int *)(*(int *)(puVar29[3] + 0x1c) + 0x28)) &
                                        1 << ((uint)uVar14 & 0x1f)) != 0) {
                                      puVar28 = (uint *)(puVar29[3] + 4);
                                      for (puVar51 = (uint *)*puVar28; puVar51 != puVar29;
                                          puVar51 = (uint *)puVar51[2]) {
                                        puVar28 = puVar51 + 2;
                                      }
                                      *puVar28 = puVar29[2];
                                      puVar29[2] = *(uint *)(uVar21 + 4);
                                      *(uint **)(uVar21 + 4) = puVar29;
                                      puVar29[3] = uVar21;
                                      *puVar29 = (uStack_558 & 0x1b) << 5 | 0x1c80 |
                                                 *puVar29 & 0xfffffc80;
                                      fn_82AD20C0(param_2,puVar20,iVar18);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if (uVar21 == 0x76) {
                iVar19 = piVar8[0xc];
                uVar22 = *(uint *)(iVar19 + 0xc);
                uVar21 = **(uint **)(uVar22 + 0x2c);
                uVar14 = (ulonglong)(uVar21 >> 5) & 3;
                if ((uVar14 == ((ulonglong)(uVar21 >> 7) & 3)) && ((uVar21 & 0x1f) == 0)) {
                  uVar21 = (*(uint **)(uVar22 + 0x2c))[3];
                  bVar65 = false;
                  if (((*(uint *)(uVar21 + 8) & 0x3f80) == 0x3380) &&
                     ((iVar30 = fn_82B17200(uVar21,iVar18), iVar30 == 2 || (iVar30 == 5)))) {
                    piVar33 = (int *)(uVar21 + 0x2c);
                    uVar21 = ((uint *)*piVar33)[3];
                    uVar14 = (ulonglong)(*(uint *)*piVar33 >> 5) & 3;
                  }
                  if (((*(uint *)(uVar21 + 8) & 0x3f80) == 0x580) &&
                     (fn_82B82D28(*(undefined4 *)(uVar21 + 0x2c),uVar14,&uStack_4bc,
                                        &uStack_4b4,&iStack_4c4,0,param_2,0), iStack_4c4 == 0)) {
                    bVar65 = true;
                    uVar14 = (ulonglong)uStack_4b4;
                    uVar21 = uStack_4bc;
                  }
                  if (((*(uint *)(uVar21 + 8) & 0x3f80) == 0x80) &&
                     (cVar36 = fn_82B16DD0(iVar18,uVar21,uVar14,&uStack_6c0,&dStack_6a0,
                                                 &uStack_6b0), uVar45 = uStack_6c0, cVar36 != '\0'))
                  {
                    uVar26 = (((U64)(uStack_6b0) >> 0) & 0xFFFFFFFF);
                    uVar5 = (((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF);
                    dVar68 = (double)fn_82B80EF8(uStack_6c0,(((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF),(((U64)(uStack_6b0) >> 0) & 0xFFFFFFFF))
                    ;
                    uStack_6b0 = (ulonglong)dVar68;
                    uVar57 = uStack_6b0 & 0xffffffff;
                    if ((uVar57 != 0) &&
                       (uStack_6b0 = uStack_6b0 & 0xffffffff, dVar68 == (double)uStack_6b0)) {
                      puVar51 = (uint *)piVar8[0xb];
                      fn_82B82D28(puVar51,0,&iStack_4ac,&uStack_4a4,&uStack_598,0,0,0);
                      if ((*(uint *)(iStack_4ac + 8) & 0x3f80) == 0x3e00) {
                        uVar13 = fn_82AD16B8(iStack_4ac,iVar18);
                        lVar56 = fn_82AE53B0(iStack_4ac,iVar18);
                        uVar27 = fn_82B86570(iVar18,uVar13,lVar56 + uVar57,0);
                        if (uVar27 != 0) {
                          fn_82B2B690(iVar18,uVar21,uVar14,uVar45,uVar5,uVar26,pbVar38);
                          if (bVar65) {
                            fn_82B25248(iVar18,uVar21,uVar4);
                            uVar13 = fn_82AD18C0(iVar18,uVar21,uVar14);
                            uVar21 = fn_82B1AAE8(iVar18,0,param_2,uVar13);
                            uVar14 = 0;
                          }
                          uVar13 = fn_82AD1870(iVar18,uVar21,2,
                                                     (uVar14 & 0x3fffffff) << 2 | 0xe0 | uVar14,0);
                          iVar30 = fn_82B1B020(iVar18,0,param_2,uVar13);
                          puVar29 = (uint *)(puVar51[3] + 4);
                          for (puVar20 = (uint *)*puVar29; puVar20 != puVar51;
                              puVar20 = (uint *)puVar20[2]) {
                            puVar29 = puVar20 + 2;
                          }
                          *puVar29 = puVar51[2];
                          puVar51[2] = *(uint *)(uVar27 + 4);
                          *(uint **)(uVar27 + 4) = puVar51;
                          puVar51[3] = uVar27;
                          uVar45 = *puVar51;
                          uVar27 = (uStack_4a4 & 0x1b) << 5 | 0x1c80;
                          *puVar51 = uVar27 | uVar45 & 0xfffffc9f;
                          *puVar51 = uVar27 | uVar45 & 0xfffffc80 | uStack_598 & 0x1f;
                          piVar33 = (int *)(*(int *)(iVar19 + 0xc) + 4);
                          for (iVar34 = *piVar33; iVar34 != iVar19; iVar34 = *(int *)(iVar34 + 8)) {
                            piVar33 = (int *)(iVar34 + 8);
                          }
                          *piVar33 = *(int *)(iVar19 + 8);
                          *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar30 + 4);
                          *(int *)(iVar30 + 4) = iVar19;
                          *(int *)(iVar19 + 0xc) = iVar30;
                          fn_82B25248(iVar18,iVar30,uVar4);
                          fn_82B25248(iVar18,uVar21,uVar4);
                          goto LAB_82b32270;
                        }
                      }
                    }
                  }
                }
              }
              else if ((uVar21 == 0x7c) &&
                      (cVar36 = fn_82B176C0(iVar18,param_2), cVar36 != '\0')) {
                for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0;
                    puVar51 = (uint *)puVar51[2]) {
                  if (((puVar51[4] != 0) && (uVar22 = *puVar51, (uVar22 & 0xe000000) != 0)) &&
                     ((uVar22 & 0x1c) != (uVar22 & 0x1f))) {
                    *puVar51 = uVar22 & 0xfffffffc;
                    fn_82B25248(iVar18,puVar51[4],uVar4);
                  }
                }
              }
            }
            else {
              uVar57 = 0;
              uVar14 = (ulonglong)(*(uint *)piVar8[0xb] >> 0x19) & 7;
              uVar22 = (uint)uVar14;
              uStack_6c0 = uVar22;
              for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0; puVar51 = (uint *)puVar51[2]
                  ) {
                if (puVar51[4] != 0) {
                  if (((*puVar51 & 0x40000000) != 0) ||
                     (bVar65 = false, (*puVar51 & 0xe000000) != 0)) {
                    bVar65 = true;
                  }
                  if (bVar65) {
                    uVar59 = fn_82ABDBA0(puVar51);
                    uVar57 = uVar59 | uVar57;
                  }
                }
              }
              if ((uVar57 & 0xffffffff) == (ulonglong)((1 << uVar22) - 1)) {
                uVar14 = uVar14 << 0xe | (ulonglong)(uint)piVar8[2] & 0xfffffffffffe3fff;
              }
              else {
                fn_82B25328(iVar18,param_2,uVar57,uVar4,0);
                uVar14 = ((0x8da691691448U >> (uVar57 & 0x7f)) >> (uVar57 & 0x7f)) >>
                         (uVar57 & 0x7f);
                uStack_6c0 = (uint)uVar14 & 7;
                uVar14 = (uVar14 & 7) << 0xe | (ulonglong)(uint)piVar8[2] & 0xfffffffffffe3fff;
              }
              piVar8[2] = (int)uVar14;
              if ((uVar14 >> 6 & 1) == 0) {
                uVar22 = 0;
                for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0;
                    puVar51 = (uint *)puVar51[2]) {
                  if ((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) {
                    uVar27 = fn_82ABDBA0(puVar51);
                    uVar45 = uVar27;
                    for (uVar21 = uVar27; uVar62 = uVar45, uVar21 != 0;
                        uVar21 = uVar21 - (uVar21 & ~(uVar21 - 1))) {
                      uVar14 = 0x1f - LZCOUNT(uVar21 & ~(uVar21 - 1));
                      uVar62 = (uint)((uVar14 & 0xffffffff) << 2) & 0x1c;
                      uVar45 = ((2 << ((int)((uVar14 & 0xffffffff) << 2) + 3U & 0x1f)) - 1U &
                                *(uint *)((int)auStack_688 + ((uint)uVar14 >> 1 & 0x1ffffffc)) &
                               -1 << uVar62) >> uVar62 | uVar45;
                    }
                    for (; uVar62 != 0; uVar62 = uVar62 - (uVar62 & ~(uVar62 - 1))) {
                      uVar14 = 0x1f - LZCOUNT(uVar62 & ~(uVar62 - 1));
                      uVar21 = (uint)((uVar14 & 0xffffffff) >> 1) & 0x1ffffffc;
                      *(uint *)((int)auStack_688 + uVar21) =
                           uVar45 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x1c) |
                           *(uint *)((int)auStack_688 + uVar21);
                    }
                    uVar22 = uVar27 | uVar22;
                  }
                }
                if ((uVar22 != 0) &&
                   (uVar21 = (uint)((0x1fU - LZCOUNT(uVar22 & ~(uVar22 - 1)) & 0xffffffff) << 2),
                   ((2 << (uVar21 + 3 & 0x1f)) - 1U &
                    *(uint *)((int)auStack_688 + (uVar21 >> 3 & 0x1ffffffc)) & -1 << (uVar21 & 0x1c)
                   ) >> (uVar21 & 0x1c) != uVar22)) {
                  puVar51 = (uint *)(((uint)piVar8 & 0xfffffffe) + 0x28);
                  do {
                    uVar14 = 0x1f - LZCOUNT(uVar22 & ~(uVar22 - 1));
                    uVar45 = (uint)((uVar14 & 0x3fffffff) << 2);
                    uVar21 = uVar45 & 0x1f;
                    uVar21 = ((2 << (uVar45 + 3 & 0x1f)) - 1U &
                              *(uint *)((int)auStack_688 +
                                       ((uint)((uVar14 & 0x3fffffff) >> 1) & 0x1ffffffc)) &
                             -1 << uVar21) >> uVar21;
                    uVar14 = (ulonglong)uVar21;
                    lVar56 = 0;
                    uVar22 = uVar22 - uVar21;
                    uVar50 = 0;
                    uVar62 = 0;
                    uVar27 = fn_82B843F0(iVar18,param_2);
                    uVar45 = uVar27 & 0xfffffffe;
                    *(uint *)(uVar27 + 8) = *(uint *)(uVar27 + 8) & 0xfbffffff;
                    uVar60 = 0;
                    *(uint *)(uVar45 + 0x28) = *puVar51;
                    iVar19 = 0;
                    *(uint *)((*puVar51 & 0xfffffffe) + 0x24) = uVar45 + 0x28;
                    uVar61 = 0;
                    *(uint **)(uVar45 + 0x24) = puVar51;
                    uVar64 = 0;
                    uVar42 = 0;
                    *puVar51 = uVar45;
                    do {
                      if ((1 << (uVar60 & 0x3f) & uVar21) != 0) {
                        uVar62 = uVar62 & ~(3 << (uVar42 & 0x3f)) | (int)lVar56 << (uVar42 & 0x3f);
                        uVar50 = uVar50 & ~(3 << (uVar64 & 0x3f)) | uVar60 << (uVar64 & 0x3f);
                        fn_82B16910(uVar27,lVar56,0xf,
                                     *(ushort *)((int)piVar8 + 0xe) >> (uVar61 & 0x3f) & 0xf);
                        piVar33 = (int *)piVar8[4];
                        if (piVar33 != (int *)0x0) {
                          do {
                            if (*piVar33 == 1) break;
                            piVar33 = (int *)piVar33[1];
                          } while (piVar33 != (int *)0x0);
                          if (piVar33 != (int *)0x0) {
                            fn_82B82378(*(undefined8 *)((int)piVar33 + iVar19 + 8),
                                              *(undefined8 *)((int)piVar33 + iVar19 + 0x28),uVar27,
                                              lVar56);
                          }
                        }
                        lVar56 = lVar56 + 1;
                        uVar64 = uVar64 + 2;
                      }
                      uVar42 = uVar42 + 2;
                      uVar60 = uVar60 + 1;
                      uVar61 = uVar61 + 4;
                      iVar19 = iVar19 + 8;
                    } while (uVar42 < 8);
                    lVar56 = param_2 + 0x28;
                    for (uVar57 = 0;
                        (uVar57 & 0xffffffff) < ((ulonglong)((uint)piVar8[2] >> 0x13) & 7);
                        uVar57 = uVar57 + 1) {
                      lVar56 = lVar56 + 4;
                      puVar20 = (uint *)fn_82ACA920(iVar18,*(int *)lVar56,
                                                          *(undefined4 *)(*(int *)lVar56 + 0xc));
                      fn_82AEFB18(puVar20,uVar50);
                      *puVar20 = (uint)((((0x8da691691448U >> (uVar14 & 0x7f)) >> (uVar14 & 0x7f))
                                         >> (uVar14 & 0x7f) & 7) << 0x19) | *puVar20 & 0xf1ffffff;
                      fn_82AC9EE0(uVar27,uVar57,puVar20);
                    }
                    lVar56 = param_2 + 4;
                    while( true ) {
                      puVar20 = (uint *)*(uint *)lVar56;
                      uVar14 = ZEXT48(puVar20);
                      if (uVar14 == 0) break;
                      if (((puVar20[4] != 0) && ((*puVar20 & 0xe000000) != 0)) &&
                         (uVar45 = fn_82ABDBA0(uVar14), (uVar45 & uVar21) != 0)) {
                        lVar66 = (ulonglong)puVar20[3] + 4;
                        for (uVar45 = *(uint *)lVar66; uVar45 != uVar14;
                            uVar45 = *(uint *)(uVar45 + 8)) {
                          lVar66 = (ulonglong)uVar45 + 8;
                        }
                        *(uint *)lVar66 = puVar20[2];
                        puVar20[2] = *(uint *)(uVar27 + 4);
                        *(uint **)(uVar27 + 4) = puVar20;
                        puVar20[3] = uVar27;
                        fn_82ACA598(uVar14,uVar62);
                      }
                      if (*(uint *)lVar56 == uVar14) {
                        lVar56 = uVar14 + 8;
                      }
                    }
                    fn_82B25248(iVar18,uVar27,uVar4);
                    fn_82B25248(iVar18,param_2,uVar4);
                  } while (uVar22 != 0);
                }
              }
              for (puVar51 = (uint *)*piVar8; uVar22 = uStack_6c0, puVar51 != (uint *)0x0;
                  puVar51 = (uint *)puVar51[1]) {
                uVar22 = *puVar51;
                if ((uVar22 & 0xe000000) != 0) {
                  uVar3 = *(ushort *)(puVar51[3] + 0xe);
                  uVar10 = uVar3 >> 4;
                  uVar12 = uVar3 >> 0xc & uVar3 >> 8 & uVar3 & uVar10;
                  uVar9 = uVar12 & 3;
                  if ((((uVar3 | uVar10) >> 8 | uVar3 | uVar10) & 3) == uVar9) {
                    uVar21 = uVar22 & 0x1f;
                    if (uVar9 == 3) {
                      uVar21 = uVar22 & 0x1e;
                    }
                    if (((uVar21 & 1) != 0) && (cVar36 = fn_82B176C0(iVar18), cVar36 != '\0'))
                    {
                      uVar21 = uVar21 - 1;
                    }
                    if (((uVar21 & 1) != 0) && ((uVar21 & 2) != 0)) {
                      uVar21 = uVar21 - 2;
                    }
                    if (((uVar12 & 2) != 0) && ((uVar21 & 2) != 0)) {
                      uVar21 = uVar21 - 2;
                    }
                    if (uVar9 == 3) {
                      uVar21 = uVar21 & 0xfffffffb;
                    }
                    if (uVar21 != (uVar22 & 0x1f)) {
                      *puVar51 = *puVar51 & 0xffffffe0 | uVar21 & 0x1f;
                    }
                  }
                }
              }
              puVar51 = (uint *)piVar8[0xb];
              uVar21 = (uint)piVar8[2] >> 0x13 & 7;
              if (uVar21 == 1) {
                uVar14 = 0;
                if (uStack_6c0 != 0) {
                  do {
                    fn_82B82D28(puVar51,uVar14,&iStack_6a4,&uStack_6a8,&iStack_66c,0,param_2,0
                                     );
                    uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                    if (uVar21 == 9) {
                      fn_82B82580(puVar51,uVar14,&dStack_440,&dStack_5b0);
                      iVar30 = iStack_66c;
                      iVar19 = iStack_6a4;
                      uVar26 = uStack_6a8;
                      if ((dStack_440 < dVar69) || (dVar68 <= dStack_5b0)) {
                        uVar21 = *(uint *)(iStack_6a4 + 8) >> 7 & 0x7f;
                        if ((uVar21 != 9) || (iStack_66c != 0)) {
                          cVar36 = fn_82B16B50(puVar51,uVar14);
                          dVar71 = dVar70;
                          if (cVar36 != '\0') goto LAB_82b2db30;
                          if (((uVar21 == 1) && (iVar30 == 0)) &&
                             (cVar36 = fn_82B16AB0(puVar51,uVar14), dVar71 = dVar70,
                             cVar36 != '\0')) {
                            if ((*(uint *)(piVar8[7] + 0x1c) & 1) == 0) {
                              uVar59 = 0;
                              uVar49 = ((ulonglong)*(uint *)(piVar8[7] + 0x18) & 0xfffffffe) - 0x28;
                              uVar57 = uVar49;
                              while (uVar57 != 0) {
                                cVar36 = fn_82ABE2E0(uVar49);
                                if ((cVar36 != '\0') &&
                                   ((uVar49 & 0xffffffff) != (param_2 & 0xffffffff))) {
                                  fn_82B8AC10(iVar18,uVar49,uVar4,1);
                                }
                                iVar19 = iStack_6a4;
                                if ((uVar59 & 0xffffffff) == 0) {
                                  iVar30 = piVar8[7];
                                  if ((*(uint *)(iVar30 + 0x1c) & 1) == 0) {
                                    uVar57 = ((ulonglong)*(uint *)(iVar30 + 0x18) & 0xfffffffe) -
                                             0x28;
                                  }
                                  else {
                                    uVar57 = 0;
                                  }
                                  if ((uVar49 & 0xffffffff) == (uVar57 & 0xffffffff))
                                  goto LAB_82b2dfac;
                                  if ((*(uint *)(iVar30 + 0x1c) & 1) != 0) break;
                                  uVar21 = *(uint *)(iVar30 + 0x18);
                                  uVar49 = uVar59;
LAB_82b2e010:
                                  uVar57 = CONCAT44(uVar21,uVar21);
                                  uVar59 = uVar49;
                                }
                                else {
                                  uVar21 = *(uint *)((int)uVar59 + 0x24);
                                  if ((uVar21 & 1) == 0) {
                                    uVar57 = ((ulonglong)uVar21 & 0xfffffffe) - 0x28;
                                  }
                                  else {
                                    uVar57 = 0;
                                  }
                                  if ((uVar49 & 0xffffffff) == (uVar57 & 0xffffffff)) {
LAB_82b2dfac:
                                    uVar21 = *(uint *)((int)uVar49 + 0x24);
                                    if ((uVar21 & 1) == 0) goto LAB_82b2e010;
                                    break;
                                  }
                                  if ((uVar21 & 1) != 0) break;
                                  uVar57 = CONCAT44(uVar21,uVar21);
                                }
                                uVar49 = (uVar57 & 0xfffffffe) - 0x28;
                                uVar57 = uVar49 & 0xffffffff;
                              }
                            }
                            uVar26 = uStack_6a8;
                            for (iVar30 = *(int *)(iVar19 + 4); iVar30 != 0;
                                iVar30 = *(int *)(iVar30 + 8)) {
                              if ((*(uint *)(iVar30 + 0x10) != 0) &&
                                 ((ulonglong)*(uint *)(iVar30 + 0x10) != (param_2 & 0xffffffff))) {
                                bVar65 = true;
                                goto LAB_82b2e05c;
                              }
                            }
                            bVar65 = false;
LAB_82b2e05c:
                            if (!bVar65) {
                              iVar30 = *(int *)(iVar19 + 0x30);
                              cVar36 = fn_82B16B50(iVar30,uStack_6a8);
                              if (cVar36 == '\0') {
                                cVar36 = fn_82B16B50(*(undefined4 *)(iVar19 + 0x2c),uVar26);
                                if (cVar36 == '\0') goto LAB_82b2e0bc;
                              }
                              else {
                                iVar30 = *(int *)(iVar19 + 0x2c);
                              }
                              if (iVar30 != 0) {
                                iVar19 = fn_82B1A9A8(iVar18,0,iVar19);
                                goto LAB_82b2db38;
                              }
                            }
                          }
LAB_82b2e0bc:
                          uVar57 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                                (((*puVar51 >> 5 & 0xff) >>
                                                  ((uint)((uVar14 & 0xffffffff) << 1) & 0x3e) & 3)
                                                << 2) & 0xf,*puVar51 & 0x1f);
                          uVar57 = uVar57 & 8 | 0x200000002;
                          uVar21 = (int)uVar57 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x3c);
                          dVar70 = dVar71;
                          if ((uVar21 & piVar8[3] & 0xffff) != uVar21) {
                            *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar21 | (ushort)piVar8[3];
                            uVar57 = fn_82B252E0(iVar18,param_2,uVar4);
                            dVar70 = dVar71;
                          }
                          dVar71 = dVar68;
                          dVar72 = dVar69;
                          uVar13 = fn_82F6FC80(dStack_440,uVar57,&uStack_228);
                          uStack_6b0 = uStack_228;
                          fn_82F6FC80(dStack_5b0,uVar13,&dStack_2e8);
                          dStack_6a0 = dStack_2e8;
                          if ((dVar69 < dStack_5b0) || (dStack_5b0 != dStack_2e8)) {
                            puVar52 = &uStack_6b0;
                            pdVar47 = &dStack_6a0;
                            do {
                              bVar1 = *(byte *)puVar52;
                              bVar2 = *(byte *)pdVar47;
                              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                              puVar52 = (ulonglong *)((int)puVar52 + 1);
                              pdVar47 = (double *)((int)pdVar47 + 1);
                            } while (puVar52 != (ulonglong *)&uStack_6a8);
                            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                              dVar71 = dStack_440;
                              fn_82B16770(dStack_440);
                              dVar72 = (double)fn_82F6DF80();
                              dVar72 = (double)fn_82B16720(dVar72 + dVar71);
                              dVar71 = dStack_5b0;
                              fn_82B16770(dStack_5b0);
                              dVar73 = (double)fn_82F6DF80();
                              dVar71 = (double)fn_82B16720(dVar73 + dVar71);
                            }
                          }
                          cVar36 = fn_82B82378(dVar72,dVar71,param_2,uVar14);
                          if (cVar36 != '\0') {
                            fn_82B252E0(iVar18,param_2,uVar4);
                          }
                          goto LAB_82b2e21c;
                        }
                        iVar30 = 0;
                      }
LAB_82b2dea0:
                      fn_82B28530(iVar18,param_2,uVar14,iVar19,uVar26,iVar30,uVar4,pbVar38);
                    }
                    else {
                      if (uVar21 == 10) {
                        uVar13 = fn_82B82580(puVar51,uVar14,&uStack_238,&uStack_308);
                        uVar13 = fn_82F6FC80(uStack_238,uVar13,&dStack_1c8);
                        dVar71 = dVar70;
                        dVar72 = dStack_1c8;
                        fn_82F6FC80(uStack_308,uVar13,&dStack_2f8);
                        if ((dVar72 != dStack_2f8) ||
                           (dVar70 = (double)(float)dVar72, dVar70 != dVar72)) {
                          dVar70 = dVar71;
                          dVar71 = dStack_2f8;
                          if (((*(uint *)(iStack_6a4 + 8) & 0x3f80) == 0x80) && (iStack_66c == 0)) {
                            uVar57 = 0;
                            if ((*(uint *)(piVar8[7] + 0x1c) & 1) == 0) {
                              uVar49 = ((ulonglong)*(uint *)(piVar8[7] + 0x18) & 0xfffffffe) - 0x28;
                              uVar59 = uVar49;
                              while (uVar59 != 0) {
                                cVar36 = fn_82ABE2E0(uVar49);
                                if ((cVar36 != '\0') &&
                                   ((uVar49 & 0xffffffff) != (param_2 & 0xffffffff))) {
                                  fn_82B8AC10(iVar18,uVar49,uVar4,1);
                                }
                                if ((uVar57 & 0xffffffff) == 0) {
                                  iVar19 = piVar8[7];
                                  if ((*(uint *)(iVar19 + 0x1c) & 1) == 0) {
                                    uVar59 = ((ulonglong)*(uint *)(iVar19 + 0x18) & 0xfffffffe) -
                                             0x28;
                                  }
                                  else {
                                    uVar59 = 0;
                                  }
                                  if ((uVar49 & 0xffffffff) == (uVar59 & 0xffffffff))
                                  goto LAB_82b2dbe8;
                                  if ((*(uint *)(iVar19 + 0x1c) & 1) != 0) break;
                                  uVar21 = *(uint *)(iVar19 + 0x18);
                                  uVar49 = uVar57;
LAB_82b2dc4c:
                                  uVar59 = CONCAT44(uVar21,uVar21);
                                  uVar57 = uVar49;
                                }
                                else {
                                  uVar21 = *(uint *)((int)uVar57 + 0x24);
                                  if ((uVar21 & 1) == 0) {
                                    uVar59 = ((ulonglong)uVar21 & 0xfffffffe) - 0x28;
                                  }
                                  else {
                                    uVar59 = 0;
                                  }
                                  if ((uVar49 & 0xffffffff) == (uVar59 & 0xffffffff)) {
LAB_82b2dbe8:
                                    uVar21 = *(uint *)((int)uVar49 + 0x24);
                                    if ((uVar21 & 1) == 0) goto LAB_82b2dc4c;
                                    break;
                                  }
                                  if ((uVar21 & 1) != 0) break;
                                  uVar59 = CONCAT44(uVar21,uVar21);
                                }
                                uVar49 = (uVar59 & 0xfffffffe) - 0x28;
                                uVar59 = uVar49 & 0xffffffff;
                              }
                            }
                            iVar30 = iStack_6a4;
                            uVar26 = uStack_6a8;
                            for (iVar19 = *(int *)(iStack_6a4 + 4); iVar19 != 0;
                                iVar19 = *(int *)(iVar19 + 8)) {
                              if ((*(uint *)(iVar19 + 0x10) != 0) &&
                                 ((ulonglong)*(uint *)(iVar19 + 0x10) != (param_2 & 0xffffffff))) {
                                bVar65 = true;
                                goto LAB_82b2dc98;
                              }
                            }
                            bVar65 = false;
LAB_82b2dc98:
                            if (!bVar65) {
                              puVar20 = *(uint **)(iStack_6a4 + 0x30);
                              cVar36 = fn_82B16B50(puVar20,uStack_6a8);
                              if (cVar36 == '\0') {
                                cVar36 = fn_82B16B50(*(undefined4 *)(iVar30 + 0x2c),uVar26);
                                if (cVar36 == '\0') goto LAB_82b2dd50;
                              }
                              else {
                                puVar20 = *(uint **)(iVar30 + 0x2c);
                              }
                              if (puVar20 != (uint *)0x0) {
                                uVar21 = fn_82B1AA48(iVar18,0,iVar30,puVar20);
                                puVar28 = (uint *)(puVar20[3] + 4);
                                for (puVar29 = *(uint **)(puVar20[3] + 4); puVar29 != puVar20;
                                    puVar29 = (uint *)puVar29[2]) {
                                  puVar28 = puVar29 + 2;
                                }
                                *puVar28 = puVar20[2];
                                puVar20[2] = *(uint *)(uVar21 + 4);
                                *(uint **)(uVar21 + 4) = puVar20;
                                puVar20[3] = uVar21;
                                *puVar20 = *puVar20 & 0xffffe000 | 0x1c80;
                                uVar26 = uStack_6a8;
                                iVar19 = iStack_6a4;
                                goto LAB_82b2dd48;
                              }
                            }
                          }
LAB_82b2dd50:
                          uVar57 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                                (((*puVar51 >> 5 & 0xff) >>
                                                  ((uint)((uVar14 & 0xffffffff) << 1) & 0x3e) & 3)
                                                << 2) & 0xf,*puVar51 & 0x1f);
                          cVar36 = fn_82B16950(param_2,uVar14,uVar57 | 4);
                          if (cVar36 != '\0') {
                            fn_82B252E0(iVar18,param_2,uVar4);
                          }
                          cVar36 = fn_82B82378(dVar72,dVar71,param_2,uVar14);
                          if (cVar36 != '\0') {
                            fn_82B252E0(iVar18,param_2,uVar4);
                          }
                          iVar30 = iStack_66c;
                          iVar19 = iStack_6a4;
                          uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                          uVar45 = *(uint *)(iStack_6a4 + 8) >> 7 & 0x7f;
                          if ((uVar45 == uVar21) && (iStack_66c == 0)) {
                            uVar26 = uStack_6a8;
                            iVar30 = 0;
                            goto LAB_82b2dea0;
                          }
                          cVar36 = fn_82B16B50(puVar51,uVar14);
                          dVar71 = dVar70;
                          if (cVar36 == '\0') {
                            if ((uVar45 != 9) || (iVar30 != 0)) goto LAB_82b2e21c;
                          }
                          else {
                            uVar26 = uStack_6a8;
                            if (uVar21 != 9) goto LAB_82b2dea0;
                          }
                        }
LAB_82b2db30:
                        iVar19 = fn_82B8A3A0(dVar70,dVar71,dVar71,dVar71,iVar18,1);
LAB_82b2db38:
                        dVar70 = dVar71;
                        uVar26 = 0;
                        iVar30 = 0;
                        goto LAB_82b2dea0;
                      }
                      if (uVar21 == 0xb) {
                        fn_82B82580(puVar51,uVar14,&uStack_1a8,&uStack_318);
                        dVar72 = (double)fn_82B16770(uStack_1a8);
                        dVar71 = (double)fn_82B16770(uStack_318);
                        if ((dVar72 != dVar71) || ((double)(float)dVar72 != dVar72))
                        goto LAB_82b2dd50;
                        iVar19 = fn_82B8A3A0((double)(float)dVar72,dVar70,dVar70,dVar70,iVar18
                                                   ,1);
                        uVar26 = 0;
LAB_82b2dd48:
                        iVar30 = 0;
                        goto LAB_82b2dea0;
                      }
                    }
LAB_82b2e21c:
                    uVar14 = uVar14 + 1;
                  } while ((uVar14 & 0xffffffff) < (ulonglong)uVar22);
                }
              }
              else if (uVar21 == 2) {
                puVar20 = (uint *)piVar8[0xc];
                uVar14 = 0;
                if (uStack_6c0 != 0) {
                  dVar71 = (double)lbl_82002AE0;
                  do {
                    fn_82B82D28(puVar51,uVar14,&uStack_6ec,&iStack_6e8,&uStack_6dc,0,param_2,0
                                     );
                    fn_82B82D28(puVar20,uVar14,&uStack_6e4,&iStack_6d8,&uStack_6e0,0,param_2,0
                                     );
                    uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                    if (uVar21 - 1 < 8) {
                      if (uVar21 == 2) {
                        fn_82B2AF18(iVar18,param_2,uVar14,uStack_6ec,iStack_6e8,uStack_6dc,
                                      uStack_6e4,iStack_6d8);
                      }
                      else {
                        if (uVar21 == 3) {
                          cVar36 = fn_82AF4A50(puVar20,uVar14);
                          if ((((cVar36 != '\0') && (uStack_6dc == 0)) &&
                              ((*(uint *)(uStack_6ec + 8) & 0x3f80) == 0x200)) &&
                             ((fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x30),iStack_6e8,
                                                 &iStack_564,&uStack_55c,&uStack_46c,0,param_2,0),
                              (*(uint *)(iStack_564 + 8) & 0x3f80) == 16000 &&
                              (dVar72 = (double)fn_82B80EF8(iStack_564,uStack_55c,uStack_46c),
                              dVar72 == dVar68)))) {
                            fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x2c),iStack_6e8,
                                              &uStack_45c,&iStack_554,&uStack_464,0,param_2,0);
                            uVar26 = uStack_464;
                            cVar36 = fn_82AEFAD0(uStack_464,1);
                            if (cVar36 != '\0') {
                              uVar57 = fn_82AD1228(uVar26,1);
                              iVar19 = iStack_554;
                              uVar21 = uStack_45c;
                              goto LAB_82b2f80c;
                            }
                          }
                          if ((((*(uint *)(uStack_6e4 + 8) & 0x3f80) == 16000) && (uStack_6dc == 0))
                             && (((*(uint *)(uStack_6ec + 8) & 0x3f80) == 0x200 &&
                                 (fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x30),iStack_6e8,
                                                    &iStack_608,&uStack_548,&uStack_454,0,param_2,0)
                                 , (*(uint *)(iStack_608 + 8) & 0x3f80) == 16000)))) {
                            dVar72 = (double)fn_82B80EF8(uStack_6e4,iStack_6d8,uStack_6e0);
                            dVar73 = (double)fn_82B80EF8(iStack_608,uStack_548,uStack_454);
                            if (dVar73 <= dVar72) {
                              fn_82B86B80(auStack_170,uStack_6e4,iStack_6d8,uStack_6e0);
                              puVar39 = auStack_170;
LAB_82b2ec84:
                              uVar21 = fn_82B86A10(iVar18,1,puVar39);
LAB_82b2f800:
                              iVar19 = 0;
LAB_82b2f808:
                              uVar57 = 0;
                              goto LAB_82b2f80c;
                            }
                          }
                          if (((uStack_6ec == uStack_6e4) && (iStack_6e8 == iStack_6d8)) &&
                             ((ulonglong)uStack_6dc == (ulonglong)(uStack_6e0 ^ 4))) {
                            uVar57 = (ulonglong)uStack_6dc & 0xfffffffffffffff9 | 2;
                            iVar19 = iStack_6e8;
                            uVar21 = uStack_6ec;
                          }
                          else {
                            if (((uStack_6dc == 0) &&
                                ((*(uint *)(uStack_6ec + 8) & 0x3f80) == 0x180)) &&
                               (((fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x2c),iStack_6e8,
                                                    &uStack_490,&iStack_540,&uStack_418,0,0,0),
                                 uStack_490 == uStack_6e4 &&
                                 ((iStack_540 == iStack_6d8 && (uStack_418 == uStack_6e0)))) ||
                                ((fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x30),iStack_6e8,
                                                    &uStack_538,&iStack_488,&uStack_530,0,0,0),
                                 uStack_538 == uStack_6e4 &&
                                 ((iStack_488 == iStack_6d8 && (uStack_530 == uStack_6e0))))))))
                            goto LAB_82b2e388;
                            uVar62 = uStack_6e4;
                            uVar21 = uStack_6ec;
                            uVar27 = (uint)((uVar14 & 0xffffffff) << 1);
                            uVar45 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                                  (((*puVar51 >> 5 & 0xff) >> (uVar27 & 0x3e) & 3)
                                                  << 2) & 0xf,*puVar51 & 0x1f);
                            uVar27 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >>
                                                  (((*puVar20 >> 5 & 0xff) >> (uVar27 & 0x3e) & 3)
                                                  << 2) & 0xf,*puVar20 & 0x1f);
                            if (((uVar45 & 2) == 0) || ((uVar27 & 1) == 0)) {
                              if (((uVar45 & 1) == 0) || ((uVar27 & 2) == 0)) {
                                if (uVar45 != uVar27) {
                                  uVar45 = uVar27 & uVar45 & 0xc;
                                }
                                uVar45 = uVar45 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x3c);
                                if ((uVar45 & piVar8[3] & 0xffff) != uVar45) {
                                  *(ushort *)((int)piVar8 + 0xe) =
                                       (ushort)uVar45 | (ushort)piVar8[3];
                                  fn_82B252E0(iVar18,param_2,uVar4);
                                }
                                fn_82B82580(puVar51,uVar14,&dStack_2c8,&dStack_2d8);
                                fn_82B82580(puVar20,uVar14,&dStack_200,&dStack_218);
                                dVar72 = dStack_218;
                                if (dStack_218 < dStack_2d8) {
                                  dVar72 = dStack_2d8;
                                }
                                dVar73 = dStack_2c8;
                                dVar67 = dStack_200;
                                if (dStack_200 < dStack_2c8) {
LAB_82b2f254:
                                  dVar67 = dVar73;
                                }
LAB_82b2f258:
                                cVar36 = fn_82B82378(dVar67,dVar72,param_2,uVar14);
                                if (cVar36 != '\0') {
                                  fn_82B252E0(iVar18,param_2,uVar4);
                                }
                                if (((uStack_6ec != uStack_6e4) || (iStack_6e8 != iStack_6d8)) ||
                                   (uVar57 = (ulonglong)uStack_6dc, iVar19 = iStack_6e8,
                                   uVar21 = uStack_6ec, uVar57 != uStack_6e0)) goto LAB_82b2f824;
                              }
                              else {
                                uVar57 = (ulonglong)uStack_6e0;
                                iVar19 = iStack_6d8;
                                uVar21 = uVar62;
                              }
                            }
                            else {
                              uVar57 = (ulonglong)uStack_6dc;
                              iVar19 = iStack_6e8;
                            }
                          }
                        }
                        else if (uVar21 == 4) {
                          if (((*(uint *)(uStack_6e4 + 8) & 0x3f80) != 16000) ||
                             (dVar72 = (double)fn_82B80EF8(uStack_6e4,iStack_6d8,uStack_6e0),
                             iVar19 = iStack_6e8, uVar21 = uStack_6ec, dVar72 != dVar68)) {
LAB_82b2ef94:
                            uVar21 = uStack_6ec;
                            if (uStack_6dc != 0) goto LAB_82b2f118;
LAB_82b2efa4:
                            if (((*(uint *)(uStack_6e4 + 8) & 0x3f80) != 16000) ||
                               ((*(uint *)(uVar21 + 8) & 0x3f80) != 0x180)) {
LAB_82b2f058:
                              if (((*(uint *)(uVar21 + 8) & 0x3f80) == 0x200) &&
                                 ((((fn_82B82D28(*(undefined4 *)(uVar21 + 0x2c),iStack_6e8,
                                                       &uStack_518,&iStack_478,&uStack_510,0,0,0),
                                    uStack_518 == uStack_6e4 && (iStack_478 == iStack_6d8)) &&
                                   (uStack_510 == uStack_6e0)) ||
                                  (((fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x30),iStack_6e8
                                                       ,&uStack_420,&iStack_508,&uStack_470,0,0,0),
                                    uVar21 = uStack_6ec, uStack_420 == uStack_6e4 &&
                                    (iStack_508 == iStack_6d8)) && (uStack_470 == uStack_6e0))))))
                              goto LAB_82b2e388;
                              goto LAB_82b2f118;
                            }
                            fn_82B82D28(*(undefined4 *)(uVar21 + 0x30),iStack_6e8,&iStack_5d8,
                                              &uStack_408,&uStack_520,0,param_2,0);
                            if ((*(uint *)(iStack_5d8 + 8) & 0x3f80) != 16000) {
LAB_82b2f048:
                              uVar21 = uStack_6ec;
                              if (uStack_6dc != 0) goto LAB_82b2f118;
                              goto LAB_82b2f058;
                            }
                            dVar72 = (double)fn_82B80EF8(uStack_6e4,iStack_6d8,uStack_6e0);
                            dVar73 = (double)fn_82B80EF8(iStack_5d8,uStack_408,uStack_520);
                            if (dVar73 < dVar72) goto LAB_82b2f048;
                            fn_82B86B80(auStack_2b8,uStack_6e4,iStack_6d8,uStack_6e0);
                            puVar39 = auStack_2b8;
                            goto LAB_82b2ec84;
                          }
                          if (uStack_6dc == 0) {
                            if (((*(uint *)(uStack_6ec + 8) & 0x3f80) == 0x180) &&
                               (cVar36 = fn_82AF4A50(*(undefined4 *)(uStack_6ec + 0x30),
                                                           iStack_6e8), cVar36 != '\0')) {
                              fn_82B82D28(*(undefined4 *)(uVar21 + 0x2c),iVar19,&uStack_480,
                                                &iStack_528,&uStack_428,0,param_2,0);
                              uVar26 = uStack_428;
                              cVar36 = fn_82AEFAD0(uStack_428,1);
                              if (cVar36 != '\0') {
                                uVar57 = fn_82AD1228(uVar26,1);
                                iVar19 = iStack_528;
                                uVar21 = uStack_480;
                                goto LAB_82b2f80c;
                              }
                              goto LAB_82b2ef94;
                            }
                            goto LAB_82b2efa4;
                          }
LAB_82b2f118:
                          uVar27 = (uint)((uVar14 & 0xffffffff) << 1);
                          uVar45 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                                (((*puVar51 >> 5 & 0xff) >> (uVar27 & 0x3e) & 3) <<
                                                2) & 0xf,*puVar51 & 0x1f);
                          uVar27 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >>
                                                (((*puVar20 >> 5 & 0xff) >> (uVar27 & 0x3e) & 3) <<
                                                2) & 0xf,*puVar20 & 0x1f);
                          if (((uVar45 & 1) == 0) || ((uVar27 & 2) == 0)) {
                            if (((uVar45 & 2) == 0) || ((uVar27 & 1) == 0)) {
                              if (uVar45 != uVar27) {
                                uVar45 = uVar27 & uVar45 & 0xc;
                              }
                              uVar45 = uVar45 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x3c);
                              if ((uVar45 & piVar8[3] & 0xffff) != uVar45) {
                                *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar45 | (ushort)piVar8[3];
                                fn_82B252E0(iVar18,param_2,uVar4);
                              }
                              fn_82B82580(puVar51,uVar14,&dStack_1f0,&dStack_208);
                              fn_82B82580(puVar20,uVar14,&dStack_298,&dStack_2a8);
                              dVar72 = dStack_2a8;
                              if (dStack_208 < dStack_2a8) {
                                dVar72 = dStack_208;
                              }
                              dVar73 = dStack_1f0;
                              dVar67 = dStack_298;
                              if (dStack_1f0 < dStack_298) goto LAB_82b2f254;
                              goto LAB_82b2f258;
                            }
                            uVar57 = (ulonglong)uStack_6e0;
                            iVar19 = iStack_6d8;
                            uVar21 = uStack_6e4;
                          }
                          else {
                            uVar57 = (ulonglong)uStack_6dc;
                            iVar19 = iStack_6e8;
                          }
                        }
                        else {
                          if (uVar21 == 5) {
                            cVar36 = fn_82AF4A50(puVar51,uVar14);
                            if ((cVar36 != '\0') &&
                               (cVar36 = fn_82AF4A50(puVar20,uVar14), dVar72 = dVar71,
                               cVar36 != '\0')) {
LAB_82b2f7f8:
                              uVar21 = fn_82B8A3A0(dVar72,dVar70,dVar70,dVar70,iVar18,1);
                              goto LAB_82b2f800;
                            }
                            fn_82B82580(puVar51,uVar14,&dStack_1b8,&dStack_1e0);
                            fn_82B82580(puVar20,uVar14,&dStack_288,&dStack_278);
                            dVar72 = dVar70;
                            if (dStack_1e0 < dStack_288) goto LAB_82b2f7f8;
                            bVar65 = dStack_278 < dStack_1b8;
LAB_82b2f32c:
                            dVar72 = dVar70;
                            if (bVar65) goto LAB_82b2f7f8;
LAB_82b2f614:
                            uVar27 = uStack_6dc;
                            uVar21 = uStack_6ec;
                            uVar45 = *(uint *)(uStack_6ec + 8) >> 7 & 0x7f;
                            if (((uVar45 == 5) ||
                                (((uVar45 == 8 || (uVar45 == 7)) || (uVar45 == 6)))) &&
                               (((CONCAT44(uStack_6dc,uStack_6dc) & 0xfffffffffffffffb) == 0 &&
                                (cVar36 = fn_82AF4A50(puVar20,uVar14), cVar36 != '\0')))) {
                              uVar45 = (uint)piVar8[2] >> 7 & 0x7f;
                              if (uVar45 == 7) {
                                dVar72 = dVar71;
                                if ((uVar27 & 4) != 0) {
                                  puVar28 = (uint *)fn_82ACA920(iVar18,puVar51,puVar51[3]);
                                  *puVar28 = *puVar28 & 0xffffffe0;
                                  puVar29 = puVar20;
LAB_82b2f6b8:
                                  uVar21 = fn_82AF7980(iVar18,0,param_2,puVar28,puVar29);
                                  goto LAB_82b2f800;
                                }
                              }
                              else {
                                if (uVar45 == 5) {
                                  puVar28 = (uint *)fn_82B18128(iVar18,*(undefined4 *)
                                                                              (uVar21 + 0x2c),
                                                                      iStack_6e8);
                                  puVar29 = (uint *)fn_82B18128(iVar18,*(undefined4 *)
                                                                              (uStack_6ec + 0x30),
                                                                      iStack_6e8);
                                  uVar21 = *(uint *)(uStack_6ec + 8) >> 7 & 0x7f;
                                  if (uVar21 == 5) goto LAB_82b2f3d4;
                                  if (uVar21 == 6) goto LAB_82b2f56c;
                                  if (uVar21 == 7) goto LAB_82b2f47c;
                                  if (uVar21 != 8) {
                    /* WARNING: Subroutine does not return */
                                    fn_82AA66A8(iVar18,0x12c0);
                                  }
                                  goto LAB_82b2f6b8;
                                }
                                iVar19 = iStack_6e8;
                                if ((uVar45 != 6) || (dVar72 = dVar70, (uVar27 & 4) == 0))
                                goto LAB_82b2f808;
                              }
                              goto LAB_82b2f7f8;
                            }
                            uVar45 = (uint)piVar8[2] >> 7 & 0x7f;
                            if ((((uVar45 != 6) && (uVar45 != 8)) ||
                                (cVar36 = fn_82B176C0(iVar18,uVar21), cVar36 == '\0')) ||
                               ((uVar27 != 0 ||
                                (cVar36 = fn_82AF4A50(puVar20,uVar14), iVar19 = iStack_6e8,
                                cVar36 == '\0')))) {
                              if ((uVar21 != uStack_6e4) ||
                                 ((iStack_6e8 != iStack_6d8 || (uVar27 != uStack_6e0))))
                              goto LAB_82b2f824;
                              if ((uVar45 == 6) || (dVar72 = dVar71, uVar45 == 8)) {
                                dVar72 = dVar70;
                              }
                              goto LAB_82b2f7f8;
                            }
                            goto LAB_82b2f808;
                          }
                          if (uVar21 == 6) {
                            cVar36 = fn_82B16B00(puVar51,uVar14);
                            if ((cVar36 != '\0') &&
                               (cVar36 = fn_82B16AB0(puVar20,uVar14), dVar72 = dVar70,
                               cVar36 != '\0')) goto LAB_82b2f7f8;
                            if ((uStack_6dc == 2) &&
                               (cVar36 = fn_82AF4A50(puVar20,uVar14), cVar36 != '\0')) {
                              uVar13 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                              puVar29 = (uint *)fn_82AD18C0(iVar18,uVar13,0);
                              puVar28 = (uint *)fn_82AD18C0(iVar18,uStack_6ec,iStack_6e8);
LAB_82b2f3d4:
                              uVar21 = fn_82AF7A50(iVar18,0,param_2,puVar28,puVar29);
                            }
                            else {
                              cVar36 = fn_82AF4A50(puVar51,uVar14);
                              if (((cVar36 == '\0') ||
                                  (cVar36 = fn_82AEFAD0(uStack_6e0,4), cVar36 == '\0')) ||
                                 ((*(uint *)(uStack_6e4 + 8) & 0x3f80) == 16000)) {
                                fn_82B82580(puVar51,uVar14,&dStack_1e8,&dStack_198);
                                fn_82B82580(puVar20,uVar14,&dStack_258,&dStack_268);
                                dVar72 = dVar71;
                                if ((dStack_1e8 <= dStack_268) &&
                                   (dVar72 = dVar70, dStack_258 < dStack_198)) goto LAB_82b2f614;
                                goto LAB_82b2f7f8;
                              }
                              uVar13 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                              puVar28 = (uint *)fn_82AD18C0(iVar18,uVar13,0);
                              uVar13 = fn_82AD1228(uStack_6e0,4);
                              puVar29 = (uint *)fn_82AD1918(iVar18,uStack_6e4,iStack_6d8,
                                                                  uVar13);
LAB_82b2f47c:
                              uVar21 = fn_82AF0548(iVar18,0,param_2,puVar29,puVar28);
                            }
                            goto LAB_82b2f800;
                          }
                          if (uVar21 == 7) {
                            cVar36 = fn_82AF4A50(puVar51,uVar14);
                            if (((cVar36 != '\0') &&
                                (cVar36 = fn_82AEFAD0(uStack_6e0,4), cVar36 != '\0')) &&
                               ((*(uint *)(uStack_6e4 + 8) & 0x3f80) != 16000)) {
                              uVar13 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                              puVar28 = (uint *)fn_82AD18C0(iVar18,uVar13,0);
                              uVar13 = fn_82AD1228(uStack_6e0,4);
                              puVar29 = (uint *)fn_82AD1918(iVar18,uStack_6e4,iStack_6d8,
                                                                  uVar13);
LAB_82b2f56c:
                              uVar21 = fn_82AF0618(iVar18,0,param_2,puVar29,puVar28);
                              goto LAB_82b2f800;
                            }
                            fn_82B82580(puVar51,uVar14,&dStack_348,&dStack_330);
                            fn_82B82580(puVar20,uVar14,&dStack_320,&dStack_340);
                            dVar72 = dVar71;
                            if (dStack_348 < dStack_340) {
                              bVar65 = dStack_330 < dStack_320;
                              goto LAB_82b2f32c;
                            }
                            goto LAB_82b2f7f8;
                          }
                          if (uVar21 != 1) {
                            fn_82B82580(puVar51,uVar14,&dStack_2f0,&dStack_310);
                            fn_82B82580(puVar20,uVar14,&dStack_300,&dStack_2e0);
                            dVar72 = dVar71;
                            if ((dStack_300 <= dStack_310) && (dStack_2f0 <= dStack_2e0))
                            goto LAB_82b2f614;
                            goto LAB_82b2f7f8;
                          }
                          cVar36 = fn_82AF4A50(puVar20,uVar14);
                          if (cVar36 == '\0') {
                            if ((((((*(uint *)(uStack_6ec + 8) & 0x3f80) != 0x480) ||
                                  (uStack_6dc != 4)) ||
                                 (fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x2c),iStack_6e8,
                                                    &uStack_660,&iStack_664,auStack_634,0,param_2,0)
                                 , uStack_660 != uStack_6e4)) ||
                                ((iStack_664 != iStack_6d8 || (auStack_634[0] != uStack_6e0)))) &&
                               ((((*(uint *)(uStack_6e4 + 8) & 0x3f80) != 0x480 ||
                                 ((uStack_6e0 != 4 ||
                                  (fn_82B82D28(*(undefined4 *)(uStack_6e4 + 0x2c),iStack_6d8,
                                                     &uStack_660,&iStack_664,auStack_634,0,param_2,0
                                                    ), uStack_660 != uStack_6ec)))) ||
                                ((iStack_664 != iStack_6e8 || (auStack_634[0] != uStack_6dc)))))) {
                              if (((((*(uint *)(uStack_6ec + 8) & 0x3f80) == 0x100) &&
                                   (uStack_6dc == 0)) &&
                                  ((*(uint *)(uStack_6e4 + 8) & 0x3f80) == 0x580)) &&
                                 (uStack_6e0 == 0)) {
                                fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x2c),iStack_6e8,
                                                  &iStack_670,auStack_688 + 2,&iStack_5bc,0,param_2)
                                ;
                                fn_82B82D28(*(undefined4 *)(uStack_6ec + 0x30),iStack_6e8,
                                                  &iStack_648,&uStack_68c,&iStack_5c8,0,param_2,0);
                                iVar19 = iStack_670;
                                uVar26 = uStack_68c;
                                if ((((*(uint *)(iStack_670 + 8) & 0x3f80) == 0x300) &&
                                    (iStack_5bc == 0)) &&
                                   (((*(uint *)(iStack_648 + 8) & 0x3f80) == 0x300 &&
                                    (iStack_5c8 == 0)))) {
                                  if ((*(uint *)(*(int *)(*(int *)(iStack_670 + 0x30) + 0xc) + 8) &
                                      0x3f80) == 16000) {
                                    iStack_670 = iStack_648;
                                    iStack_5bc = 0;
                                    iStack_648 = iVar19;
                                    iStack_5c8 = 0;
                                    uStack_68c = auStack_688[2];
                                    auStack_688[2] = uVar26;
                                  }
                                  fn_82B82D28(*(undefined4 *)(iStack_648 + 0x2c),uStack_68c,
                                                    &iStack_618,&uStack_58c,&iStack_49c,0,param_2,0)
                                  ;
                                  fn_82B82D28(*(undefined4 *)(iStack_648 + 0x30),uStack_68c,
                                                    &iStack_404,&uStack_594,&uStack_430,0,param_2,0)
                                  ;
                                  if ((((*(uint *)(iStack_404 + 8) & 0x3f80) == 16000) &&
                                      (dVar72 = (double)fn_82B80EF8(iStack_404,uStack_594,
                                                                          uStack_430),
                                      dVar72 == dVar69)) &&
                                     (((*(uint *)(iStack_618 + 8) & 0x3f80) == 0x480 &&
                                      (iStack_49c == 0)))) {
                                    fn_82B82D28(*(undefined4 *)(uStack_6e4 + 0x2c),iStack_6d8,
                                                      &iStack_5e0,&iStack_610,&iStack_5b8,0,param_2,
                                                      0);
                                    fn_82B82D28(*(undefined4 *)(iStack_618 + 0x2c),uStack_58c,
                                                      &iStack_494,&iStack_584,&iStack_48c,0,param_2,
                                                      0);
                                    if (((iStack_494 == iStack_5e0) && (iStack_584 == iStack_610))
                                       && (iStack_48c == iStack_5b8)) {
                                      fn_82B82D28(*(undefined4 *)(iStack_670 + 0x2c),
                                                        auStack_688[2],&iStack_57c,&uStack_574,
                                                        &uStack_484,0,param_2,0);
                                      fn_82B82D28(*(undefined4 *)(iStack_670 + 0x30),
                                                        auStack_688[2],&iStack_47c,&iStack_56c,
                                                        &iStack_474,0,param_2,0);
                                      if (((((*(uint *)(iStack_57c + 8) & 0x3f80) == 16000) &&
                                           (dVar72 = (double)fn_82B80EF8(iStack_57c,uStack_574
                                                                               ,uStack_484),
                                           dVar72 == dVar69)) && (iStack_5e0 == iStack_47c)) &&
                                         ((iStack_610 == iStack_56c && (iStack_5b8 == iStack_474))))
                                      {
                                        uVar13 = fn_82AD1918(iVar18);
                                        uVar21 = fn_82B1AA48(iVar18,0,param_2,uVar13);
                                        goto LAB_82b2f800;
                                      }
                                    }
                                  }
                                }
                              }
                              uVar21 = (uint)((uVar14 & 0xffffffff) << 1);
                              uVar45 = fn_82AF49A8(*(ushort *)(puVar51[3] + 0xe) >>
                                                    (((*puVar51 >> 5 & 0xff) >> (uVar21 & 0x3e) & 3)
                                                    << 2) & 0xf,*puVar51 & 0x1f);
                              uVar27 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >>
                                                    (((*puVar20 >> 5 & 0xff) >> (uVar21 & 0x3e) & 3)
                                                    << 2) & 0xf,*puVar20 & 0x1f);
                              uVar21 = uVar27 & uVar45 & 0xfffffffc;
                              if ((uVar45 & 3) == (uVar27 & 3)) {
                                uVar21 = uVar21 | uVar45 & 3;
                              }
                              uVar21 = uVar21 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x3c);
                              if ((uVar21 & piVar8[3] & 0xffff) != uVar21) {
                                *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar21 | (ushort)piVar8[3];
                                fn_82B252E0(iVar18,param_2,uVar4);
                              }
                              fn_82B82580(puVar51,uVar14,&dStack_3d0,&dStack_3d8);
                              fn_82B82580(puVar20,uVar14,&dStack_3f8,&dStack_3e8);
                              dVar72 = dStack_3f8 + dStack_3d0;
                              dVar73 = dStack_3e8 + dStack_3d8;
                              cVar36 = fn_82B82378(dVar72,dVar73,param_2,uVar14);
                              if (cVar36 != '\0') {
                                fn_82B252E0(iVar18,param_2,uVar4);
                              }
                              if (((dVar69 < dVar72) &&
                                  (((dStack_3d0 == dVar69 && (dVar69 < dStack_3f8)) ||
                                   ((dVar69 < dStack_3d0 && (dStack_3f8 == dVar69)))))) ||
                                 ((dVar73 < dVar69 &&
                                  (((dStack_3d8 == dVar69 && (dStack_3e8 < dVar69)) ||
                                   ((dStack_3d8 < dVar69 && (dStack_3e8 == dVar69)))))))) {
                                dVar73 = dStack_3d8;
                                if (dVar69 < dVar72) {
                                  dVar73 = dStack_3d0;
                                }
                                puVar29 = puVar20;
                                if (dVar73 != dVar69) {
                                  puVar29 = puVar51;
                                }
                                lVar56 = param_2 + 4;
                                while( true ) {
                                  puVar28 = (uint *)*(uint *)lVar56;
                                  if (ZEXT48(puVar28) == 0) break;
                                  if ((puVar28[4] != 0) && ((*puVar28 & 0xe000000) != 0)) {
                                    uVar21 = puVar28[4];
                                    uVar45 = *(uint *)(uVar21 + 8);
                                    uVar27 = uVar45 >> 7 & 0x7f;
                                    if (5 < uVar27) {
                                      if (uVar27 < 8) {
LAB_82b2e990:
                                        if (dVar72 <= dVar69) goto LAB_82b2eaac;
                                      }
                                      else if ((uVar27 != 8) && (uVar27 != 0x3c)) {
                                        if ((uVar27 < 0x3d) || (0x3e < uVar27)) goto LAB_82b2eaac;
                                        goto LAB_82b2e990;
                                      }
                                      cVar36 = fn_82AEFAD0(*puVar29 & 0x1f,*puVar28 & 0x1f);
                                      if ((cVar36 != '\0') &&
                                         (((uVar45 & 0x380000) == 0x80000 ||
                                          ((puVar28 == *(uint **)(uVar21 + 0x2c) &&
                                           (cVar36 = fn_82ABF768(dVar69,*(undefined4 *)
                                                                               (uVar21 + 0x30)),
                                           cVar36 != '\0')))))) {
                                        uVar45 = puVar29[3];
                                        puVar48 = (uint *)(puVar28[3] + 4);
                                        for (puVar6 = (uint *)*puVar48; puVar6 != puVar28;
                                            puVar6 = (uint *)puVar6[2]) {
                                          puVar48 = puVar6 + 2;
                                        }
                                        *puVar48 = puVar28[2];
                                        puVar28[2] = *(uint *)(uVar45 + 4);
                                        *(uint **)(uVar45 + 4) = puVar28;
                                        puVar28[3] = uVar45;
                                        uVar62 = fn_82AD1228(*puVar29 & 0x1f,*puVar28 & 0x1f);
                                        uVar45 = *puVar28;
                                        *puVar28 = uVar45 & 0xffffffe0 | uVar62 & 0x1f;
                                        uVar27 = *puVar29 >> 5 & 0xff;
                                        *puVar28 = ((((uVar27 >> ((uVar45 & 0x1800) >> 10) & 3) << 2
                                                     | uVar27 >> ((uVar45 & 0x600) >> 8) & 3) << 2 |
                                                    uVar27 >> (uVar45 >> 6 & 6) & 3) << 2 |
                                                   uVar27 >> ((uVar45 & 0x60) >> 4) & 3) << 5 |
                                                   uVar45 & 0xffffe000 | uVar62 & 0x1f;
                                        fn_82B25248(iVar18,param_2,uVar4);
                                        fn_82B25248(iVar18,uVar21,uVar4);
                                      }
                                    }
                                  }
LAB_82b2eaac:
                                  if ((uint *)*(uint *)lVar56 == puVar28) {
                                    lVar56 = ZEXT48(puVar28) + 8;
                                  }
                                }
                              }
                              goto LAB_82b2f824;
                            }
                            uVar13 = fn_82AD1918(iVar18);
                            uVar21 = fn_82B1AAE8(iVar18,0,param_2,uVar13);
                            goto LAB_82b2f800;
                          }
LAB_82b2e388:
                          uVar57 = (ulonglong)uStack_6dc;
                          iVar19 = iStack_6e8;
                          uVar21 = uStack_6ec;
                        }
LAB_82b2f80c:
                        fn_82B28530(iVar18,param_2,uVar14,uVar21,iVar19,uVar57,uVar4,pbVar38);
                      }
                    }
LAB_82b2f824:
                    uVar14 = uVar14 + 1;
                  } while ((uVar14 & 0xffffffff) < (ulonglong)uVar22);
                }
              }
              else {
                puVar20 = (uint *)piVar8[0xc];
                puVar29 = (uint *)piVar8[0xd];
                for (uVar14 = 0; (uVar14 & 0xffffffff) < (ulonglong)uVar22; uVar14 = uVar14 + 1) {
                  fn_82B82D28(puVar51,uVar14,&iStack_6c4,&uStack_694,&iStack_698,0,param_2,0);
                  fn_82B82D28(puVar20,uVar14,&uStack_6d4,&iStack_6d0,&iStack_6cc,0,param_2,0);
                  fn_82B82D28(puVar29,uVar14,&uStack_6c8,&iStack_6bc,aiStack_6b8,0,param_2,0);
                  uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                  if (uVar21 == 0xd) {
                    cVar36 = fn_82AF4A50(puVar51,uVar14);
                    iVar19 = iStack_6cc;
                    iVar30 = iStack_6d0;
                    uVar21 = uStack_6d4;
                    if (cVar36 == '\0') {
                      fn_82B82580(puVar51,uVar14,&dStack_2d0,&dStack_2c0);
                      if ((dVar69 < dStack_2d0) || (dStack_2c0 < dVar69)) {
                        iVar19 = aiStack_6b8[0];
                        iVar30 = iStack_6bc;
                        uVar21 = uStack_6c8;
                        if (((*(uint *)(iVar18 + 0x2c) & 0x10000000) != 0) &&
                           (piVar33 = (int *)piVar8[4], piVar33 != (int *)0x0)) {
                          do {
                            if (*piVar33 == 0) break;
                            piVar33 = (int *)piVar33[1];
                          } while (piVar33 != (int *)0x0);
                          if (piVar33 != (int *)0x0) {
                            *(uint *)(iVar18 + 0x2c) = *(uint *)(iVar18 + 0x2c) | 0x8000000;
                            goto LAB_82b2fa40;
                          }
                        }
                      }
                      else {
LAB_82b2fa40:
                        if ((*(uint *)(iStack_6c4 + 8) & 0x3f80) == 16000) {
                          dVar71 = (double)fn_82B80EF8(iStack_6c4,uStack_694,iStack_698);
                          uVar45 = (uint)piVar8[2] >> 7 & 0x7f;
                          iVar19 = aiStack_6b8[0];
                          iVar30 = iStack_6bc;
                          uVar21 = uStack_6c8;
                          if (uVar45 == 0xd) {
                            if (dVar71 == dVar69) goto LAB_82b2fab0;
                          }
                          else if (uVar45 == 0xe) {
                            if (dVar69 <= dVar71) goto LAB_82b2fab0;
                          }
                          else {
                            if (uVar45 != 0xf) {
                    /* WARNING: Subroutine does not return */
                              fn_82AA66A8(iVar18,0x12c0);
                            }
                            if (dVar69 < dVar71) {
LAB_82b2fab0:
                              iVar19 = iStack_6cc;
                              iVar30 = iStack_6d0;
                              uVar21 = uStack_6d4;
                            }
                          }
                        }
                        else {
                          if (((*(uint *)(uStack_6d4 + 8) & 0x3f80) == 16000) &&
                             ((*(uint *)(uStack_6c8 + 8) & 0x3f80) == 16000)) {
                            dVar71 = (double)fn_82B80EF8(uStack_6d4,iStack_6d0,iStack_6cc);
                            dVar72 = (double)fn_82B80EF8(uStack_6c8,iStack_6bc,aiStack_6b8[0])
                            ;
                            if (((dVar71 == dVar68) && (dVar72 == dVar69)) ||
                               ((dVar71 == dVar69 && (dVar72 == dVar68)))) {
                              uVar13 = fn_82B8A2E0(iVar18,0,0);
                              uVar15 = fn_82AD18C0(iVar18,uVar13,0);
                              uVar13 = fn_82AD1918(iVar18,iStack_6c4,uStack_694,iStack_698);
                              uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                              if (uVar21 == 0xd) {
                                if (dVar71 == dVar68) {
                                  uVar21 = fn_82AF7980();
                                }
                                else {
                                  uVar21 = fn_82AF7A50(iVar18,0,param_2,uVar13,uVar15);
                                }
                                goto LAB_82b2f9b0;
                              }
                              if (uVar21 == 0xe) {
                                uVar16 = uVar13;
                                uVar13 = uVar15;
                                if (dVar71 == dVar68) goto LAB_82b2fbac;
                              }
                              else {
                                if (uVar21 != 0xf) {
                    /* WARNING: Subroutine does not return */
                                  fn_82AA66A8(iVar18,0x12c0);
                                }
                                uVar16 = uVar15;
                                if (dVar71 != dVar68) {
LAB_82b2fbac:
                                  uVar21 = fn_82AF0618(iVar18,0,param_2,uVar16,uVar13);
                                  goto LAB_82b2f9b0;
                                }
                              }
                              uVar21 = fn_82AF0548();
                              goto LAB_82b2f9b0;
                            }
                          }
                          if (((uStack_6d4 != uStack_6c8) || (iStack_6d0 != iStack_6bc)) ||
                             (iVar19 = iStack_6cc, iVar30 = iStack_6d0, uVar21 = uStack_6d4,
                             iStack_6cc != aiStack_6b8[0])) {
                            uVar21 = *(uint *)(iStack_6c4 + 8) >> 7 & 0x7f;
                            iVar19 = iStack_6c4;
                            if ((((uVar21 == 5) || (uVar21 == 8)) ||
                                ((uVar21 == 6 || (uVar21 == 7)))) &&
                               ((iStack_698 == 0 && ((piVar8[2] & 0x3f80U) != 0x700)))) {
                              fn_82B82D28(*(undefined4 *)(iStack_6c4 + 0x2c),uStack_694,
                                                auStack_634 + 4,&uStack_5f8,&uStack_5c0,0,param_2,0)
                              ;
                              fn_82B82D28(*(undefined4 *)(iStack_6c4 + 0x30),uStack_694,
                                                &iStack_5b4,&uStack_5f0,&uStack_5d0,0,param_2,0);
                              bVar65 = true;
                              iVar19 = iStack_6c4;
                              if ((*(uint *)(iStack_5b4 + 8) & 0x3f80) != 16000) goto LAB_82b2fd14;
                              dVar71 = (double)fn_82B80EF8(iStack_5b4,uStack_5f0,uStack_5d0);
                              iVar19 = iStack_6c4;
                              if (dVar71 != dVar69) goto LAB_82b2fd14;
                              uVar13 = fn_82AD1918(iVar18,auStack_634[4],uStack_5f8,uStack_5c0
                                                        );
                              do {
                                bVar11 = (piVar8[2] & 0x3f80U) == 0x680;
                                uVar15 = fn_82AD1918(iVar18,uStack_6d4,iStack_6d0,iStack_6cc);
                                uVar16 = fn_82AD1918(iVar18,uStack_6c8,iStack_6bc,
                                                           aiStack_6b8[0]);
                                iVar19 = iStack_6c4;
                                uVar21 = *(uint *)(iStack_6c4 + 8) >> 7 & 0x7f;
                                if (uVar21 == 5) {
                                  bVar11 = !bVar11;
LAB_82b2ff28:
                                  uVar40 = uVar16;
                                  if (bVar11) {
                                    uVar40 = uVar15;
                                    uVar15 = uVar16;
                                  }
                                  uVar21 = fn_82AF7B20(iVar18,0,param_2,uVar13,uVar40,uVar15);
LAB_82b2ff58:
                                  iVar19 = iStack_6c4;
                                  if (uVar21 != 0) goto LAB_82b2f9b0;
                                }
                                else {
                                  uVar40 = uVar15;
                                  uVar41 = uVar16;
                                  if (uVar21 == 6) {
                                    if (bVar65) {
                                      if (!bVar11) {
LAB_82b2ff14:
                                        uVar21 = fn_82AF7D20(iVar18,0,param_2,uVar13,uVar40,
                                                                   uVar41);
                                        goto LAB_82b2ff58;
                                      }
                                      cVar36 = fn_82AEFB68(uVar13,4);
                                      if (cVar36 != '\0') {
                                        fn_82AD1270(uVar13,4);
                                        goto LAB_82b2fe74;
                                      }
                                    }
                                    else {
                                      cVar36 = fn_82AEFB68(uVar13,4);
                                      if (cVar36 != '\0') {
                                        fn_82AD1270(uVar13,4);
                                        uVar40 = uVar16;
                                        uVar41 = uVar15;
                                        if (!bVar11) {
                                          uVar40 = uVar15;
                                          uVar41 = uVar16;
                                        }
                                        goto LAB_82b2ff14;
                                      }
                                    }
                                  }
                                  else {
                                    if (uVar21 != 7) {
                                      if (uVar21 != 8) {
                    /* WARNING: Subroutine does not return */
                                        fn_82AA66A8(iVar18,0x12c0);
                                      }
                                      goto LAB_82b2ff28;
                                    }
                                    if (bVar65) {
                                      if (!bVar11) {
LAB_82b2fe74:
                                        uVar21 = fn_82AF7C20(iVar18,0,param_2,uVar13,uVar40,
                                                                   uVar41);
                                        goto LAB_82b2ff58;
                                      }
                                      cVar36 = fn_82AEFB68(uVar13,4);
                                      if (cVar36 != '\0') {
                                        fn_82AD1270(uVar13,4);
                                        goto LAB_82b2ff14;
                                      }
                                    }
                                    else {
                                      cVar36 = fn_82AEFB68(uVar13,4);
                                      if (cVar36 != '\0') {
                                        fn_82AD1270(uVar13,4);
                                        uVar40 = uVar16;
                                        uVar41 = uVar15;
                                        if (!bVar11) {
                                          uVar40 = uVar15;
                                          uVar41 = uVar16;
                                        }
                                        goto LAB_82b2fe74;
                                      }
                                    }
                                  }
                                }
LAB_82b2fd14:
                                if (((!bVar65) ||
                                    ((*(uint *)(auStack_634[4] + 8) & 0x3f80) != 16000)) ||
                                   (dVar71 = (double)fn_82B80EF8(auStack_634[4],uStack_5f8,
                                                                       uStack_5c0),
                                   iVar19 = iStack_6c4, dVar71 != dVar69)) break;
                                uVar13 = fn_82AD1918(iVar18,iStack_5b4,uStack_5f0,uStack_5d0);
                                bVar65 = false;
                              } while( true );
                            }
                            uVar21 = uStack_6d4;
                            if ((((piVar8[2] & 0x3f80U) != 0x700) && (iStack_698 == 0)) &&
                               (cVar36 = fn_82B176C0(iVar18,iVar19), cVar36 != '\0')) {
                              if ((*(uint *)(uVar21 + 8) & 0x3f80) == 16000) {
                                dVar71 = (double)fn_82B167E0(uVar21,iStack_6d0);
                                bVar65 = true;
                                uVar21 = uStack_6d4;
                                if (dVar71 != dVar69) goto LAB_82b2ffc8;
                              }
                              else {
LAB_82b2ffc8:
                                bVar65 = false;
                              }
                              if ((*(uint *)(uStack_6c8 + 8) & 0x3f80) == 16000) {
                                dVar71 = (double)fn_82B167E0(uStack_6c8,iStack_6bc);
                                bVar11 = true;
                                uVar21 = uStack_6d4;
                                if (dVar71 != dVar69) goto LAB_82b2fffc;
                              }
                              else {
LAB_82b2fffc:
                                bVar11 = false;
                              }
                              if (((bVar65) && ((piVar8[2] & 0x3f80U) == 0x680)) ||
                                 ((bVar11 && ((piVar8[2] & 0x3f80U) != 0x680)))) {
                                iVar30 = iStack_6d0;
                                iVar19 = iStack_6cc;
                                if (bVar65) {
                                  iVar30 = iStack_6bc;
                                  iVar19 = aiStack_6b8[0];
                                  uVar21 = uStack_6c8;
                                }
                                uVar13 = fn_82AD1918(iVar18,uVar21,iVar30,iVar19);
                                uVar15 = fn_82AD1918(iVar18,iStack_6c4,uStack_694,iStack_698);
                                uVar21 = fn_82B1A7E8(iVar18,0,param_2,uVar15,uVar13);
                                goto LAB_82b2f9b0;
                              }
                            }
                            uVar45 = (uint)((uVar14 & 0xffffffff) << 1);
                            uVar21 = fn_82AF49A8(*(ushort *)(puVar20[3] + 0xe) >>
                                                  (((*puVar20 >> 5 & 0xff) >> (uVar45 & 0x3e) & 3)
                                                  << 2) & 0xf,*puVar20 & 0x1f);
                            uVar45 = fn_82AF49A8(*(ushort *)(puVar29[3] + 0xe) >>
                                                  (((*puVar29 >> 5 & 0xff) >> (uVar45 & 0x3e) & 3)
                                                  << 2) & 0xf,*puVar29 & 0x1f);
                            if (uVar21 != uVar45) {
                              uVar21 = uVar45 & uVar21 & 0xc;
                            }
                            uVar21 = uVar21 << ((uint)((uVar14 & 0xffffffff) << 2) & 0x3c);
                            if ((uVar21 & piVar8[3] & 0xffff) != uVar21) {
                              *(ushort *)((int)piVar8 + 0xe) = (ushort)uVar21 | (ushort)piVar8[3];
                              fn_82B252E0(iVar18,param_2,uVar4);
                            }
                            fn_82B82580(puVar20,uVar14,&dStack_290,&dStack_2b0);
                            fn_82B82580(puVar29,uVar14,&dStack_280,&dStack_2a0);
                            dVar71 = dStack_2a0;
                            if (dStack_2a0 < dStack_2b0) {
                              dVar71 = dStack_2b0;
                            }
                            dVar72 = dStack_280;
                            if (dStack_290 < dStack_280) {
                              dVar72 = dStack_290;
                            }
                            cVar36 = fn_82B82378(dVar72,dVar71,param_2,uVar14);
                            if (cVar36 != '\0') {
                              fn_82B252E0(iVar18,param_2,uVar4);
                            }
                            goto LAB_82b2f91c;
                          }
                        }
                      }
                    }
LAB_82b2f904:
                    fn_82B28530(iVar18,param_2,uVar14,uVar21,iVar30,iVar19,uVar4,pbVar38);
                  }
                  else {
                    if (uVar21 == 0xe) {
                      cVar36 = fn_82B16AB0(puVar51,uVar14);
                      iVar19 = iStack_6cc;
                      iVar30 = iStack_6d0;
                      uVar21 = uStack_6d4;
                      if (cVar36 != '\0') goto LAB_82b2f904;
                      if (iStack_698 != 4) goto LAB_82b2fa40;
                      uVar13 = fn_82AD1918(iVar18,uStack_6d4,iStack_6d0,iStack_6cc);
                      uVar15 = fn_82AD1918(iVar18,uStack_6c8,iStack_6bc,aiStack_6b8[0]);
                      uVar16 = fn_82AD18C0(iVar18,iStack_6c4,uStack_694);
                      uVar21 = fn_82AF7D20(iVar18,0,param_2,uVar16,uVar15,uVar13);
LAB_82b2f9b0:
                      iVar19 = 0;
                      iVar30 = 0;
                      goto LAB_82b2f904;
                    }
                    if (uVar21 == 0xf) {
                      cVar36 = fn_82B16B00(puVar51,uVar14);
                      iVar19 = aiStack_6b8[0];
                      iVar30 = iStack_6bc;
                      uVar21 = uStack_6c8;
                      if (cVar36 == '\0') goto LAB_82b2fa40;
                      goto LAB_82b2f904;
                    }
                  }
LAB_82b2f91c:;}
              }
              cVar36 = fn_82ABE2E0(param_2);
              if (cVar36 == '\0') {
                uVar21 = (uint)piVar8[2] >> 7 & 0x7f;
                if ((uVar21 == 1) || (bVar65 = false, uVar21 == 0xc)) {
                  bVar65 = true;
                }
                if ((bVar65) && ((*(uint *)(iVar18 + 0x2c) & 0x20000) == 0)) {
                  for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0;
                      puVar51 = (uint *)puVar51[2]) {
                    if ((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) {
                      uVar21 = *(uint *)(puVar51[4] + 8) >> 7 & 0x7f;
                      if ((uVar21 == 1) || (bVar65 = false, uVar21 == 0xc)) {
                        bVar65 = true;
                      }
                      if (bVar65) goto LAB_82b30564;
                    }
                  }
                  uVar14 = 0;
                  if (uVar22 != 0) {
                    do {
                      iVar19 = fn_82B2A0D8(iVar18,param_2,uVar14);
                      if (iVar19 != 0) {
                        cVar36 = fn_82B27568(iVar18,iVar19,param_2);
                        iVar30 = fn_82B24D00(iVar18,iVar19);
                        iStack_5a0 = 0;
                        uStack_5a4 = -(uint)((*(uint *)(iVar30 + 4) & 1) == 0) &
                                     *(uint *)(iVar30 + 4);
                        iStack_5a8 = iVar30;
                        puVar25 = (undefined4 *)0x0;
                        uVar22 = 0;
                        while( true ) {
                          if ((uStack_5a4 == 0) ||
                             (bVar65 = false, iStack_5a0 == *(int *)(uStack_5a4 + 8))) {
                            bVar65 = true;
                          }
                          if (bVar65) break;
                          puVar31 = (undefined4 *)fn_82ABE870(&iStack_5a8);
                          if (puVar31[1] != 1) {
                            uVar21 = fn_82B27D10(iVar18,iVar19,*puVar31,param_2,&uStack_6b0);
                            if ((((U64)(uStack_6b0) >> 0) & 0xFFFFFFFF) != 0) {
                              fn_82B271F8(iVar18,(((U64)(uStack_6b0) >> 0) & 0xFFFFFFFF),*(undefined4 *)(iVar18 + 0x28c))
                              ;
                            }
                            if ((1 < uVar21) && (uVar22 < uVar21)) {
                              puVar25 = puVar31;
                              uVar22 = uVar21;
                            }
                          }
                        }
                        if (puVar25 == (undefined4 *)0x0) {
                          if (cVar36 != '\0') {
                            puVar31 = (undefined4 *)0x0;
                            goto LAB_82b302f8;
                          }
LAB_82b30534:
                          uVar26 = 0;
                        }
                        else {
                          puVar31 = (undefined4 *)*puVar25;
LAB_82b302f8:
                          uVar59 = 0;
                          auStack_634[3] = 0;
                          uVar57 = 0;
                          auStack_634[2] =
                               -(uint)((*(uint *)(iVar19 + 4) & 1) == 0) & *(uint *)(iVar19 + 4);
                          auStack_634[1] = iVar19;
                          while( true ) {
                            if ((auStack_634[2] == 0) ||
                               (bVar65 = false, auStack_634[3] == *(int *)(auStack_634[2] + 8))) {
                              bVar65 = true;
                            }
                            if (bVar65) break;
                            puVar32 = (undefined4 *)fn_82ACB180(auStack_634 + 1);
                            cVar37 = fn_82B27340(iVar18,param_2,*puVar32,puVar31,&dStack_6a0,uVar4
                                                  );
                            if (cVar37 == '\0') {
                              if ((uVar59 & 0xffffffff) != 0) {
                                uVar13 = fn_82AF7710(iVar18,0,param_2,uVar59,(((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF))
                                ;
                                uVar59 = fn_82AD18C0(iVar18,uVar13,0);
                                goto LAB_82b3040c;
                              }
                              uVar59 = (ulonglong)(((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF);
                            }
                            else if ((uVar57 & 0xffffffff) == 0) {
                              uVar57 = (ulonglong)(((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF);
                            }
                            else {
                              uVar13 = fn_82AF7710(iVar18,0,param_2,uVar57,(((U64)(dStack_6a0) >> 0) & 0xFFFFFFFF));
                              uVar57 = fn_82AD18C0(iVar18,uVar13,0);
LAB_82b3040c:
                              fn_82B25248(iVar18,uVar13,uVar4);
                            }
                          }
                          if ((uVar57 & 0xffffffff) == 0) {
                            if (cVar36 == '\0') {
                    /* WARNING: Subroutine does not return */
                              fn_82AA66A8(iVar18,0x12c0);
                            }
                            uVar13 = fn_82B8A3A0(dVar70,dVar70,dVar70,dVar70,iVar18,1);
                          }
                          else {
                            if (puVar31 == (undefined4 *)0x0) {
                              uVar13 = fn_82AF76C8(iVar18,0,param_2,1);
                              fn_82AC9EE0(uVar13,0,uVar57);
                            }
                            else {
                              uVar13 = fn_82AD1918(iVar18,*puVar31,puVar31[1],
                                                         CONCAT44(puVar31[2],puVar31[2]) &
                                                         0xfffffffffffffffb);
                              uVar13 = fn_82B1A7E8(iVar18,0,param_2,uVar57,uVar13);
                              fn_82B25248(iVar18,uVar13,uVar4);
                              if ((uVar59 & 0xffffffff) == 0) goto LAB_82b30504;
                              uVar13 = fn_82AD18C0(iVar18,uVar13,0);
                              uVar13 = fn_82AF7710(iVar18,0,param_2,uVar59,uVar13);
                            }
                            fn_82B25248(iVar18,uVar13,uVar4);
                          }
LAB_82b30504:
                          fn_82B28530(iVar18,param_2,uVar14,uVar13,0,0,uVar4,pbVar38);
                          uVar26 = uVar4;
                          if (puVar25 == (undefined4 *)0x0) goto LAB_82b30534;
                        }
                        fn_82B271F8(iVar18,iVar19,uVar26);
                        fn_82B22F90(iVar18,iVar30);
                        uVar22 = uStack_6c0;
                      }
                      uVar14 = uVar14 + 1;
                    } while ((uVar14 & 0xffffffff) < (ulonglong)uVar22);
                  }
                }
              }
            }
LAB_82b30564:
            cVar36 = fn_82ABE2E0(param_2);
            if (cVar36 == '\0') {
              lVar56 = param_2 + 0x2c;
              for (uVar22 = 0; uVar21 = piVar8[2], uVar22 < (uVar21 >> 0x13 & 7);
                  uVar22 = uVar22 + 1) {
                puVar51 = (uint *)*(int *)lVar56;
                uVar45 = *puVar51;
                if ((((uVar45 & 0xe000000) != 0) && ((uVar45 & 0x1e) != 0)) &&
                   ((cVar36 = fn_82AEFBB8(param_2,uVar45 & 0x1e), cVar36 == '\0' ||
                    (((uVar21 & 0x3f80) == 0x180 && ((uVar21 >> 5 & 1) != 0)))))) {
                  fn_82B28130(iVar18,puVar51[3],uVar45 & 0x1e,uVar4);
                }
                lVar56 = lVar56 + 4;
              }
              goto LAB_82b2bd90;
            }
          }
        }
      }
LAB_82b2b960:
      fn_82B8AC10(iVar18,param_2,uVar4,1);
LAB_82b2b96c:
      uVar13 = 1;
      goto LAB_82b2bd94;
    }
  }
  else {
    uVar22 = piVar8[2];
    if ((uVar22 >> 5 & 1) == 0) {
      if ((uVar22 >> 0x19 & 1) == 0) {
        if (((uVar14 & 0xffffffff) == (ulonglong)((1 << (uVar22 >> 0xe & 7)) - 1)) &&
           (((uVar22 & 0x3f80) != 0x3700 || ((uStack_600 & 0xff) == 0)))) {
          fn_82B8E280(&iStack_400,iVar18,param_2,uVar14,adStack_160,uVar4);
          if (iStack_400 != 0) {
            *pbVar38 = bStack_3f9 & 1 | *pbVar38;
          }
        }
        else {
          uVar22 = uVar22 >> 7 & 0x7f;
          if ((uVar22 != 0x6e) && ((uVar22 != 0x61 && (uVar22 != 0x60)))) {
            lVar56 = param_2 + 4;
            uVar57 = 0;
            for (puVar51 = (uint *)piVar8[1]; puVar51 != (uint *)0x0; puVar51 = (uint *)puVar51[2])
            {
              if ((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) {
                uVar59 = fn_82ABDBA0(puVar51);
                uVar57 = uVar59 | uVar57;
              }
            }
            if ((uVar57 & uVar14) != 0) {
              uVar22 = fn_82AF76C8(iVar18,1,param_2,
                                         ((0x8da691691448U >> (uVar57 & 0x7f)) >> (uVar57 & 0x7f))
                                         >> (uVar57 & 0x7f) & 7);
              lVar66 = 0;
              uVar21 = 0;
              for (; (uVar57 & 0xffffffff) != 0; uVar57 = uVar57 - (uVar57 & ~(uVar57 - 1))) {
                uVar55 = 0x1f - LZCOUNT((uint)uVar57 & ~((uint)uVar57 - 1));
                uVar59 = param_2;
                uVar49 = uVar55;
                if (((uint)(1 << ((uint)uVar55 & 0x3f)) & uVar14) != 0) {
                  uVar59 = fn_82B8A3E8(*(undefined8 *)
                                              ((int)adStack_160 + (int)((uVar55 & 0xffffffff) << 3))
                                             ,iVar18);
                  uVar49 = 0;
                }
                uVar13 = fn_82AD18C0(iVar18,uVar59,uVar49);
                fn_82AC9EE0(uVar22,lVar66,uVar13);
                uVar45 = (uint)((uVar55 & 0xffffffff) << 1);
                uVar21 = uVar21 & ~(3 << (uVar45 & 0x3e)) | (int)lVar66 << (uVar45 & 0x3e);
                lVar66 = lVar66 + 1;
              }
              while( true ) {
                puVar51 = (uint *)*(uint *)lVar56;
                uVar14 = ZEXT48(puVar51);
                if (uVar14 == 0) break;
                if (((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) && (puVar51[4] != uVar22))
                {
                  lVar66 = (ulonglong)puVar51[3] + 4;
                  for (uVar45 = *(uint *)lVar66; uVar45 != uVar14; uVar45 = *(uint *)(uVar45 + 8)) {
                    lVar66 = (ulonglong)uVar45 + 8;
                  }
                  *(uint *)lVar66 = puVar51[2];
                  puVar51[2] = *(uint *)(uVar22 + 4);
                  *(uint **)(uVar22 + 4) = puVar51;
                  puVar51[3] = uVar22;
                  uVar45 = *puVar51;
                  *puVar51 = ((((uVar21 >> (uVar45 >> 10 & 6) & 3) << 2 |
                               uVar21 >> (uVar45 >> 8 & 6) & 3) << 2 |
                              uVar21 >> (uVar45 >> 6 & 6) & 3) << 2 |
                             uVar21 >> (uVar45 >> 4 & 6) & 3) << 5 | uVar45 & 0xffffe01f;
                }
                if (*(uint *)lVar56 == uVar14) {
                  lVar56 = uVar14 + 8;
                }
              }
              fn_82B25248(iVar18,uVar22,uVar4);
            }
          }
        }
        goto LAB_82b2c108;
      }
      uVar21 = uVar22 >> 7 & 0x7f;
      if (((uVar21 < 0x19) || (0x1c < uVar21)) && ((uVar21 < 0x43 || (0x47 < uVar21)))) {
        bVar65 = false;
      }
      else {
        bVar65 = true;
      }
      if ((bVar65) &&
         (uVar22 = uVar22 >> 0xe & 7, (uVar14 & 0xffffffff) == (ulonglong)((1 << uVar22) - 1))) {
        uVar21 = 0;
        if (uVar22 != 0) {
          pdVar47 = adStack_160;
          do {
            if (*pdVar47 != lbl_82005710) goto LAB_82b2bd90;
            uVar21 = uVar21 + 1;
            pdVar47 = pdVar47 + 1;
          } while (uVar21 < uVar22);
        }
        fn_82B8F3D8(piVar8[7],0,param_2,iVar18);
        cVar36 = fn_82ABE2E0(param_2);
        if (cVar36 != '\0') goto LAB_82b2b960;
      }
    }
    else {
      puVar51 = (uint *)piVar8[1];
      lVar56 = param_2 + 4;
      while( true ) {
        if (puVar51 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(iVar18,0x12c0);
        }
        if (((puVar51[4] != 0) && ((*puVar51 & 0xe000000) != 0)) &&
           ((uVar21 = *(uint *)(puVar51[4] + 8) >> 7 & 0x7f, uVar21 == 0x53 || (uVar21 == 0x75))))
        break;
        puVar51 = (uint *)puVar51[2];
      }
      uVar57 = (ulonglong)(*puVar51 >> 0xd);
      if ((uVar22 >> 0xe & 7) == 4) {
        uVar59 = uVar57 & 0xf;
        uVar58 = 0;
        lVar66 = 4;
        uVar55 = 0;
        uVar22 = 0;
        pdVar47 = adStack_160;
        uVar49 = uVar59;
        do {
          uVar44 = (ulonglong)(uint)(1 << (uVar22 & 0x3f));
          uVar43 = uVar49 & ~(uVar49 - 1);
          uVar49 = uVar49 - uVar43;
          if (((uVar44 & uVar14) != 0) && ((*pdVar47 == lbl_82005710 || (*pdVar47 == lbl_82005758)))
             ) {
            uVar58 = uVar44 | uVar58;
            uVar55 = uVar43 | uVar55;
          }
          uVar22 = uVar22 + 1;
          pdVar47 = pdVar47 + 1;
          lVar66 = lVar66 + -1;
        } while (lVar66 != 0);
        if ((uVar55 & 0xffffffff) == uVar59) {
          uVar58 = uVar58 - (uVar58 & ~(uVar58 - 1));
          uVar55 = uVar55 - (uVar55 & ~(uVar55 - 1));
        }
        if ((uVar58 & 0xffffffff) != 0) {
          uVar22 = 0;
          uVar14 = 0;
          uVar45 = 0;
          uVar21 = 0;
          pdVar47 = adStack_160;
          dVar68 = lbl_82005710;
          do {
            uVar49 = uVar59 & ~(uVar59 - 1);
            uVar59 = uVar59 - uVar49;
            if (((uint)(1 << (uVar45 & 0x3f)) & uVar58) == 0) {
              uVar14 = uVar14 + 1;
              uVar22 = uVar22 & ~(3 << (uVar21 & 0x3f)) | uVar45 << (uVar21 & 0x3f);
              uVar21 = uVar21 + 2;
            }
            else {
              uVar13 = 0x79;
              if (*pdVar47 != dVar68) {
                uVar13 = 0x7a;
              }
              iVar19 = fn_82B841E8(iVar18,(ulonglong)(uint)piVar8[7],
                                         (ulonglong)(uint)piVar8[7] + 0x18,uVar13,0,1);
              puVar20 = (uint *)fn_82AD17B0(iVar18,iVar19);
              fn_82AD1978(puVar51[4],puVar20);
              *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) | 0x20;
              *puVar20 = (uint)((uVar57 & 0xff0 | uVar49 & 0xf) << 0xd) | 0x40000000 |
                         *puVar20 & 0xfe001fff;
            }
            uVar45 = uVar45 + 1;
            pdVar47 = pdVar47 + 1;
          } while (uVar45 < 4);
          puVar20 = (uint *)fn_82B841E8(iVar18,piVar8[7],0,3,2,uVar14);
          uVar21 = (uint)piVar8 & 0xfffffffe;
          uVar45 = (uint)puVar20 & 0xfffffffe;
          *(undefined4 *)(uVar45 + 0x28) = *(undefined4 *)(uVar21 + 0x28);
          *(uint *)((*(uint *)(uVar21 + 0x28) & 0xfffffffe) + 0x24) = uVar45 + 0x28;
          *(uint *)(uVar45 + 0x24) = uVar21 + 0x28;
          *(uint *)(uVar21 + 0x28) = uVar45;
          puVar20[2] = puVar20[2] | 0x20;
          piVar8[2] = piVar8[2] & 0xffffffdf;
          while( true ) {
            uVar21 = *(uint *)lVar56;
            uVar49 = (ulonglong)uVar21;
            uVar59 = param_2;
            if (uVar49 == 0) break;
            if (*(int *)(uVar21 + 0x10) != 0) {
              lVar66 = (ulonglong)*(uint *)(uVar21 + 0xc) + 4;
              for (uVar45 = *(uint *)lVar66; uVar45 != uVar49; uVar45 = *(uint *)(uVar45 + 8)) {
                lVar66 = (ulonglong)uVar45 + 8;
              }
              *(undefined4 *)lVar66 = *(undefined4 *)(uVar21 + 8);
              *(uint *)(uVar21 + 8) = puVar20[1];
              puVar20[1] = uVar21;
              *(uint **)(uVar21 + 0xc) = puVar20;
            }
            if (*(uint *)lVar56 == uVar49) {
              lVar56 = uVar49 + 8;
            }
          }
          while( true ) {
            puVar29 = (uint *)*(uint *)uVar59;
            uVar49 = ZEXT48(puVar29);
            if (uVar49 == 0) break;
            if (((*puVar29 & 0x40000000) != 0) || (bVar65 = true, (*puVar29 & 0xe000000) != 0)) {
              bVar65 = false;
            }
            if (bVar65) {
              uVar58 = ZEXT48((uint *)puVar29[4]);
              for (uVar21 = *(uint *)puVar29[4]; uVar21 != uVar49; uVar21 = *(uint *)(uVar21 + 4)) {
                uVar58 = (ulonglong)uVar21 + 4;
              }
              *(uint *)uVar58 = puVar29[1];
              puVar29[1] = *puVar20;
              *puVar20 = (uint)puVar29;
              puVar29[4] = (uint)puVar20;
            }
            if ((uint *)*(uint *)uVar59 == puVar29) {
              uVar59 = uVar49 + 4;
            }
          }
          if (((uint)piVar8[2] >> 0x19 & 1) != 0) {
            puVar20[2] = puVar20[2] | 0x2000000;
            lVar56 = 4;
            piVar8[2] = piVar8[2] & 0xfdffffff;
            puVar29 = (uint *)(piVar8[7] + 0x5c);
            do {
              if ((ulonglong)*puVar29 == (param_2 & 0xffffffff)) {
                *puVar29 = (uint)puVar20;
              }
              puVar29 = puVar29 + 1;
              lVar56 = lVar56 + -1;
            } while (lVar56 != 0);
          }
          uVar13 = fn_82AD1870(iVar18,param_2,uVar14,uVar22,*puVar51 & 0x1f);
          fn_82AC9EE0(puVar20,0,uVar13);
          fn_82AC9EE0(puVar20,1,uVar13);
          *puVar51 = (uint)(((uVar57 & 0xfff) - uVar55 & 0xffffffff) << 0xd) & 0x1e000 |
                     (uint)((uVar14 & 0xffffffff) << 0x19) & 0xe000000 | *puVar51 & 0xf1fe1fe0;
          fn_82B25248(iVar18,param_2,uVar4);
        }
      }
    }
  }
LAB_82b2bd90:
  uVar13 = 0;
LAB_82b2bd94:
  fn_82F6A58C(uVar13);
  return;
LAB_82b32ee8:
  uVar57 = 0;
  if ((uVar22 >> 0x19 & 7) != 0) {
    uVar22 = 0;
    uVar45 = 0;
    do {
      iVar19 = fn_82AC69C8(iVar18,0,uVar21,*(uint *)(uVar21 + 8) >> 7 & 0x7f,
                                 *(uint *)(uVar21 + 8) >> 0x13 & 7,1);
      puVar25 = (undefined4 *)(uVar21 + 0x28);
      for (uVar59 = 0; (uVar59 & 0xffffffff) < ((ulonglong)(*(uint *)(uVar21 + 8) >> 0x13) & 7);
          uVar59 = uVar59 + 1) {
        puVar25 = puVar25 + 1;
        puVar51 = (uint *)*puVar25;
        puVar20 = (uint *)fn_82ACA920(iVar18,puVar51,puVar51[3]);
        *puVar20 = ((*puVar51 >> 5 & 0xff) >> (uVar45 & 0x3f) & 3) << 5 | 0x2001c80 |
                   *puVar20 & 0xf3fffc9f;
        fn_82AC9EE0(iVar19,uVar59,puVar20);
      }
      uVar27 = *(ushort *)(uVar21 + 0xe) >> (uVar22 & 0x3f) & 0xf;
      if ((uVar27 & *(uint *)(iVar19 + 0xc)) != uVar27) {
        *(ushort *)(iVar19 + 0xe) = (ushort)uVar27 | (ushort)*(uint *)(iVar19 + 0xc);
      }
      fn_82B28530(iVar18,uVar21,uVar57,iVar19,0,0,uVar4,pbVar38);
      uVar57 = uVar57 + 1;
      uVar45 = uVar45 + 2;
      uVar22 = uVar22 + 4;
    } while ((uVar57 & 0xffffffff) < uVar14);
  }
  cVar36 = fn_82ABE2E0(uVar21);
  if (cVar36 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(iVar18,0x12c0);
  }
  goto LAB_82b32e98;
}

