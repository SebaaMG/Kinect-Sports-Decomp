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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_560;
extern unsigned int *auStack_570;
extern unsigned int *auStack_580;
extern unsigned int *auStack_590;
extern unsigned int *auStack_5a0;
extern unsigned int *auStack_5b0;
extern unsigned int *auStack_5c0;
extern unsigned int *auStack_5d0;
extern unsigned int *auStack_5e0;
extern unsigned int *auStack_5f0;
extern unsigned int *auStack_650;
extern unsigned int *auStack_660;
extern unsigned int *auStack_670;
extern unsigned int *auStack_690;
extern unsigned int *auStack_6a0;
extern unsigned int *auStack_6b0;
extern unsigned int *auStack_6d0;
extern unsigned int *auStack_6f0;
extern unsigned int *auStack_710;
extern unsigned int *auStack_720;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_820FDA30;
extern unsigned int lbl_83230000;
extern unsigned int lbl_83232468;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d4;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_210;
extern unsigned int uStack_214;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_240;
extern unsigned int uStack_244;
extern unsigned int uStack_250;
extern unsigned int uStack_254;
extern unsigned int uStack_260;
extern unsigned int uStack_264;
extern unsigned int uStack_270;
extern unsigned int uStack_274;
extern unsigned int uStack_280;
extern unsigned int uStack_284;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2a4;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b4;
extern unsigned int uStack_2c0;
extern unsigned int uStack_2c4;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d4;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2e4;
extern unsigned int uStack_2f0;
extern unsigned int uStack_2f4;
extern unsigned int uStack_300;
extern unsigned int uStack_304;
extern unsigned int uStack_310;
extern unsigned int uStack_314;
extern unsigned int uStack_320;
extern unsigned int uStack_324;
extern unsigned int uStack_328;
extern unsigned int uStack_32c;
extern unsigned int uStack_330;
extern unsigned int uStack_334;
extern unsigned int uStack_338;
extern unsigned int uStack_33c;
extern unsigned int uStack_340;
extern unsigned int uStack_344;
extern unsigned int uStack_348;
extern unsigned int uStack_34c;
extern unsigned int uStack_350;
extern unsigned int uStack_354;
extern unsigned int uStack_358;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;
extern unsigned int uStack_364;
extern unsigned int uStack_368;
extern unsigned int uStack_36c;
extern unsigned int uStack_370;
extern unsigned int uStack_374;
extern unsigned int uStack_378;
extern unsigned int uStack_37c;
extern unsigned int uStack_380;
extern unsigned int uStack_384;
extern unsigned int uStack_388;
extern unsigned int uStack_38c;
extern unsigned int uStack_390;
extern unsigned int uStack_394;
extern unsigned int uStack_398;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3a4;
extern unsigned int uStack_3a8;
extern unsigned int uStack_3ac;
extern unsigned int uStack_3b0;
extern unsigned int uStack_3b4;
extern unsigned int uStack_3b8;
extern unsigned int uStack_3bc;
extern unsigned int uStack_3c0;
extern unsigned int uStack_3c4;
extern unsigned int uStack_3c8;
extern unsigned int uStack_3cc;
extern unsigned int uStack_3d0;
extern unsigned int uStack_3d4;
extern unsigned int uStack_3d8;
extern unsigned int uStack_3dc;
extern unsigned int uStack_3e0;
extern unsigned int uStack_3e4;
extern unsigned int uStack_3e8;
extern unsigned int uStack_3ec;
extern unsigned int uStack_3f0;
extern unsigned int uStack_3f4;
extern unsigned int uStack_3f8;
extern unsigned int uStack_3fc;
extern unsigned int uStack_400;
extern unsigned int uStack_404;
extern unsigned int uStack_408;
extern unsigned int uStack_40c;
extern unsigned int uStack_410;
extern unsigned int uStack_414;
extern unsigned int uStack_418;
extern unsigned int uStack_41c;
extern unsigned int uStack_420;
extern unsigned int uStack_424;
extern unsigned int uStack_428;
extern unsigned int uStack_42c;
extern unsigned int uStack_430;
extern unsigned int uStack_434;
extern unsigned int uStack_438;
extern unsigned int uStack_43c;
extern unsigned int uStack_440;
extern unsigned int uStack_444;
extern unsigned int uStack_448;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_454;
extern unsigned int uStack_458;
extern unsigned int uStack_45c;
extern unsigned int uStack_460;
extern unsigned int uStack_464;
extern unsigned int uStack_468;
extern unsigned int uStack_46c;
extern unsigned int uStack_470;
extern unsigned int uStack_474;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b0;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4b8;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4cc;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e0;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4e8;
extern unsigned int uStack_4ec;
extern unsigned int uStack_4f0;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;
extern unsigned int uStack_4fc;
extern unsigned int uStack_500;
extern unsigned int uStack_504;
extern unsigned int uStack_508;
extern unsigned int uStack_50c;
extern unsigned int uStack_510;
extern unsigned int uStack_514;
extern unsigned int uStack_518;
extern unsigned int uStack_51c;
extern unsigned int uStack_520;
extern unsigned int uStack_52c;
extern unsigned int uStack_530;
extern unsigned int uStack_534;
extern unsigned int uStack_538;
extern unsigned int uStack_540;
extern unsigned int uStack_550;
extern unsigned int uStack_554;
extern unsigned int uStack_5f8;
extern unsigned int uStack_5fc;
extern unsigned int uStack_600;
extern unsigned int uStack_604;
extern unsigned int uStack_608;
extern unsigned int uStack_60c;
extern unsigned int uStack_610;
extern unsigned int uStack_614;
extern unsigned int uStack_618;
extern unsigned int uStack_61c;
extern unsigned int uStack_620;
extern unsigned int uStack_624;
extern unsigned int uStack_628;
extern unsigned int uStack_62c;
extern unsigned int uStack_630;
extern unsigned int uStack_634;
extern unsigned int uStack_638;
extern unsigned int uStack_63c;
extern unsigned int uStack_640;
extern unsigned int uStack_644;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_680;
extern unsigned int uStack_6b8;
extern unsigned int uStack_6bc;
extern unsigned int uStack_6c0;
extern unsigned int uStack_6d8;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned int uStack_6f8;
extern unsigned int uStack_6fc;
extern unsigned int uStack_700;
extern unsigned int uStack_72c;
extern unsigned int uStack_734;
extern unsigned int uStack_738;
extern unsigned int uStack_73c;
extern unsigned int uStack_740;
extern unsigned int uStack_744;
extern unsigned int uStack_748;
extern unsigned int uStack_74c;
extern unsigned int uStack_754;
extern unsigned int uStack_75c;
extern unsigned int uStack_760;
extern unsigned int uStack_764;
extern unsigned int uStack_770;
extern unsigned int uStack_778;
extern unsigned int uStack_77c;
extern unsigned int uStack_780;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern V16 vectorAverageUnsignedByte();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_830F2960(int param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_r0;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar12;
  short sVar17;
  ulonglong uVar16;
  ulonglong uVar18;
  int iVar19;
  undefined2 uVar20;
  ushort uVar25;
  ushort uVar26;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  ushort uVar28;
  short sVar29;
  undefined4 *puVar27;
  int iVar30;
  undefined2 uVar35;
  uint uVar31;
  uint uVar32;
  int iVar33;
  short sVar36;
  ushort *puVar34;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  uint uVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined4 *puVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  uint uVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  undefined2 uVar65;
  longlong lVar66;
  int iVar67;
  undefined2 uVar68;
  uint *puVar71;
  ulonglong uVar69;
  longlong lVar70;
  int iVar72;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 auVar73 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar74 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar75 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar76 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs46 [16];
  undefined1 in_vs47 [16];
  undefined1 in_vs48 [16];
  undefined1 in_vs49 [16];
  undefined1 in_vs50 [16];
  undefined1 in_vs51 [16];
  undefined1 in_vs52 [16];
  undefined1 in_vs53 [16];
  undefined1 auVar77 [16];
  undefined1 in_vs55 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 in_register_000100f0;
  undefined4 in_register_000100f4;
  undefined4 in_register_000100f8;
  undefined4 in_vr15;
  undefined4 in_register_00010100;
  undefined4 in_register_00010104;
  undefined4 in_register_00010108;
  undefined4 in_vr16;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  undefined4 in_register_00010160;
  undefined4 in_register_00010164;
  undefined4 in_register_00010168;
  undefined4 in_vr22;
  undefined4 in_register_00010170;
  undefined4 in_register_00010174;
  undefined4 in_register_00010178;
  undefined4 in_vr23;
  undefined4 in_register_00010180;
  undefined4 in_register_00010184;
  undefined4 in_register_00010188;
  undefined4 in_vr24;
  undefined4 in_register_000101b0;
  undefined4 in_register_000101b4;
  undefined4 in_register_000101b8;
  undefined4 in_vr27;
  undefined4 in_register_000101e0;
  undefined4 in_register_000101e4;
  undefined4 in_register_000101e8;
  undefined4 in_vr30;
  uint *puStack00000024;
  undefined4 uStack_780;
  uint uStack_77c;
  uint uStack_778;
  uint *puStack_774;
  uint uStack_770;
  undefined4 *puStack_76c;
  undefined4 *puStack_768;
  uint uStack_764;
  uint uStack_760;
  uint uStack_75c;
  undefined *puStack_758;
  uint uStack_754;
  undefined4 *puStack_750;
  uint uStack_74c;
  uint uStack_748;
  uint uStack_744;
  uint uStack_740;
  uint uStack_73c;
  uint uStack_738;
  uint uStack_734;
  undefined4 *puStack_730;
  uint uStack_72c;
  undefined *puStack_728;
  ushort auStack_720 [8];
  ushort auStack_710 [8];
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  ushort auStack_6f0 [8];
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  ushort auStack_6d0 [8];
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  ushort auStack_6b0 [8];
  ushort auStack_6a0 [8];
  ushort auStack_690 [8];
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  ushort auStack_670 [8];
  ushort auStack_660 [8];
  ushort auStack_650 [6];
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  ushort auStack_5f0 [8];
  ushort auStack_5e0 [8];
  ushort auStack_5d0 [8];
  ushort auStack_5c0 [8];
  ushort auStack_5b0 [8];
  ushort auStack_5a0 [8];
  ushort auStack_590 [8];
  ushort auStack_580 [8];
  ushort auStack_570 [8];
  ushort auStack_560 [6];
  uint uStack_554;
  uint uStack_550;
  longlong lStack_548;
  ulonglong uStack_540;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  puVar71 = *(uint **)(param_1 + 0x110);
  if (((*(int *)(param_1 + 0xecc) == 0) || (*(int *)(param_1 + 0xed0) == 0)) ||
     (*(int *)(param_1 + 0xed4) == 0)) {
LAB_830fe55c:
    uVar12 = 1;
  }
  else {
    uVar25 = *(ushort *)(param_2 + 0x4a);
    uVar28 = *(ushort *)(param_2 + 0x4c);
    uVar1 = *(ushort *)(param_2 + 0x34) >> 1;
    uVar24 = (uint)uVar1;
    uVar26 = *(ushort *)(param_2 + 0x32);
    param_3[9] = *(uint *)(param_2 + 0x268);
    uVar26 = uVar26 >> 1;
    uVar16 = (ulonglong)uVar26;
    param_3[10] = *(uint *)(param_2 + 0x1ac);
    param_3[0xb] = *(uint *)(param_2 + 0x48c);
    *param_3 = 0;
    param_3[1] = 0;
    uStack_534 = (uint)uVar25;
    uStack_538 = (uint)uVar28;
    uStack_530 = (uint)uVar1;
    uStack_52c = (uint)uVar26;
    uStack_554 = 0;
    uStack_550 = 0;
    uStack_748 = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    if (uVar24 != 0) {
      puStack_758 = &lbl_83230000;
      puStack_728 = &lbl_820FDA30;
      puStack00000024 = param_3;
      puStack_774 = puVar71;
      do {
        param_3[2] = uStack_554;
        uVar60 = 0;
        param_3[3] = uStack_550;
        uStack_770 = 0;
        *(undefined2 *)((int)param_3 + 0x12) = 0;
        if (uVar16 != 0) {
          do {
            puVar10 = puStack_728;
            uVar24 = *puVar71;
            uVar31 = uVar24 >> 8 & 7;
            if (uVar31 != 4) {
              iVar14 = (int)uVar60;
              if (uVar31 == 0) {
                uVar31 = *param_3;
                uVar18 = (ulonglong)uVar31;
                uVar25 = *(ushort *)(param_2 + 0x32);
                uVar16 = (ulonglong)uVar25;
                uVar28 = *(ushort *)(param_2 + 0x4a);
                uVar69 = (ulonglong)uVar28;
                if ((uStack_748 == 0) || (*(int *)(*(int *)(param_2 + 0x518) + uStack_748 * 4) != 0)
                   ) {
                  uStack_778 = 1;
                }
                else {
                  uStack_778 = 0;
                }
                sVar36 = *(short *)(param_2 + 0x3e);
                uVar26 = *(ushort *)(param_2 + 0x42);
                sVar17 = *(short *)(param_2 + 0x40);
                uVar1 = *(ushort *)(param_2 + 0x44);
                iVar15 = *(int *)(param_2 + 0x15c);
                if (*(int *)(param_2 + 0x230) == 0) {
                  uStack_74c = 0;
                }
                else {
                  uStack_74c = param_3[2] + *(int *)(param_2 + 0x230);
                }
                if (*(int *)(param_2 + 0x240) == 0) {
                  puStack_730 = (undefined4 *)0x0;
                }
                else {
                  puStack_730 = (undefined4 *)(*(int *)(param_2 + 0x240) + param_3[3]);
                }
                if (*(int *)(param_2 + 0x244) == 0) {
                  puStack_750 = (undefined4 *)0x0;
                }
                else {
                  puStack_750 = (undefined4 *)(*(int *)(param_2 + 0x244) + param_3[3]);
                }
                if (*(uint *)(param_2 + 0x1d0) == 0) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = (ulonglong)param_3[2] + (ulonglong)*(uint *)(param_2 + 0x1d0);
                }
                if (*(uint *)(param_2 + 0x1e0) == 0) {
                  uVar43 = 0;
                }
                else {
                  uVar43 = (ulonglong)*(uint *)(param_2 + 0x1e0) + (ulonglong)param_3[3];
                }
                puStack_768 = (undefined4 *)uVar43;
                if (*(uint *)(param_2 + 0x1e4) == 0) {
                  uVar47 = 0;
                }
                else {
                  uVar47 = (ulonglong)*(uint *)(param_2 + 0x1e4) + (ulonglong)param_3[3];
                }
                puStack_76c = (undefined4 *)uVar47;
                if (*(uint *)(param_2 + 0x200) == 0) {
                  uVar59 = 0;
                }
                else {
                  uVar59 = (ulonglong)*(uint *)(param_2 + 0x200) + (ulonglong)param_3[2];
                }
                uStack_72c = (uint)uVar59;
                if (*(uint *)(param_2 + 0x210) == 0) {
                  uVar50 = 0;
                }
                else {
                  uVar50 = (ulonglong)*(uint *)(param_2 + 0x210) + (ulonglong)param_3[3];
                }
                uStack_734 = (uint)uVar50;
                if (*(uint *)(param_2 + 0x214) == 0) {
                  uVar53 = 0;
                }
                else {
                  uVar53 = (ulonglong)*(uint *)(param_2 + 0x214) + (ulonglong)param_3[3];
                }
                uStack_73c = (uint)uVar53;
                if ((((uVar45 & 0xffffffff) == 0) || ((uVar43 & 0xffffffff) == 0)) ||
                   (bVar7 = true, (uVar47 & 0xffffffff) == 0)) {
                  bVar7 = false;
                }
                if ((((uVar59 & 0xffffffff) == 0) || ((uVar50 & 0xffffffff) == 0)) ||
                   (bVar9 = true, (uVar53 & 0xffffffff) == 0)) {
                  bVar9 = false;
                }
                if (((uStack_74c == 0) || (puStack_730 == (undefined4 *)0x0)) ||
                   (bVar8 = true, puStack_750 == (undefined4 *)0x0)) {
                  bVar8 = false;
                }
                uVar38 = (ulonglong)(uVar24 >> 5) & 7;
                uVar39 = uVar38 - 1;
                if (3 < (uVar39 & 0xffffffff)) goto LAB_830fe55c;
                uVar24 = (int)(uint)uVar28 >> 1;
                if ((int)uVar39 == 0) {
                  iVar14 = *(int *)(param_2 + 0x63c);
                  if ((((!bVar7) || (!bVar9)) || (!bVar8)) || (*(int *)(param_2 + 0x178) == 0))
                  goto LAB_830fe55c;
                  iVar4 = uVar31 * 2;
                  iVar15 = *(int *)(uVar31 * 4 + *(int *)(param_2 + 0x178));
                  iVar41 = (int)((uVar16 + uVar18 & 0x7fffffff) << 1);
                  uVar31 = uStack_748 << 0x10 | uStack_770;
                  iVar19 = iVar15 >> 0x10;
                  iVar15 = (int)(short)iVar15;
                  iVar30 = iVar14 * iVar15 + 0x80;
                  uStack_77c = iVar30 >> 8;
                  uVar35 = (undefined2)((uint)iVar30 >> 8);
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6ac) + 2) = uVar35;
                  iVar30 = iVar14 * iVar19 + 0x80;
                  iVar15 = (iVar14 + -0x100) * iVar15 + 0x80;
                  iVar14 = (iVar14 + -0x100) * iVar19 + 0x80;
                  uStack_780 = iVar30 >> 8;
                  uVar42 = iVar15 >> 8;
                  uVar32 = iVar14 >> 8;
                  uVar20 = (undefined2)((uint)iVar30 >> 8);
                  uVar57 = (undefined2)((uint)iVar15 >> 8);
                  uVar56 = (undefined2)((uint)iVar14 >> 8);
                  uVar5 = uVar31 & 0x3ffffff;
                  iVar14 = uVar31 * 0x40;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6ac)) = uVar35;
                  uVar61 = uStack_780 << 0x10 | uStack_77c & 0xffff;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6ac) + 2) = uVar35;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6ac)) = uVar35;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b0) + 2) = uVar20;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b0)) = uVar20;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b0) + 2) = uVar20;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b0)) = uVar20;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b4) + 2) = uVar57;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b4)) = uVar57;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b4) + 2) = uVar57;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b4)) = uVar57;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b8) + 2) = uVar56;
                  *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b8)) = uVar56;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b8) + 2) = uVar56;
                  *(undefined2 *)(iVar4 + *(int *)(param_2 + 0x6b8)) = uVar56;
                  uVar31 = *(uint *)(param_2 + 0x268);
                  uVar60 = (ulonglong)uVar31;
                  uVar13 = *(uint *)(param_2 + 0x124);
                  uStack_740 = (int)(((int)((uStack_77c & 3) + 1) >> 2) + uStack_77c) >> 1;
                  uVar16 = (ulonglong)(int)uStack_740;
                  uVar49 = (int)(((int)((uStack_780 & 3) + 1) >> 2) + uStack_780) >> 1;
                  uStack_778 = uVar49;
                  if (((uVar61 + (uStack_77c & 0x8000) * -2 + iVar14 + 0x730073 |
                       (*(int *)(param_2 + 0x11c) - uVar61) + uVar5 * -0x40) & 0x80008000) != 0) {
                    fn_830EF918(&uStack_77c,&uStack_780,iVar14);
                  }
                  uVar6 = uStack_77c;
                  uVar61 = uStack_780;
                  lVar40 = (longlong)(iVar14 >> 1);
                  uVar18 = ((ulonglong)uVar49 & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
                  if (((uVar18 + (uVar16 & 0x8000) * -2 + lVar40 + 0x3b003b |
                       (uVar13 - uVar18) - lVar40) & 0x80008000) != 0) {
                    fn_830EF9E8(&uStack_740,&uStack_778,lVar40,(ulonglong)uVar13);
                    uVar16 = (ulonglong)uStack_740;
                    uVar49 = uStack_778;
                  }
                  lVar40 = (longlong)((int)uVar61 >> 2) *
                           (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                           (longlong)((int)uVar6 >> 2) + uVar45;
                  if (lbl_83232468 ==
                      (((int)lbl_83232468 >> 3) +
                      (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                    dataCacheBlockTouch(lVar40 + 0x80);
                    dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                    dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                    dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                    dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                    dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                    dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                    dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                    lbl_83232468 = 0;
                  }
                  lVar37 = (uVar69 + 8) * 8;
                  dataCacheBlockTouch(lVar37 + lVar40);
                  lVar55 = uVar69 * 9 + 0x40;
                  dataCacheBlockTouch(lVar55 + lVar40);
                  lVar54 = uVar69 * 10 + 0x40;
                  dataCacheBlockTouch(lVar54 + lVar40);
                  lVar51 = uVar69 * 0xb + 0x40;
                  dataCacheBlockTouch(lVar51 + lVar40);
                  lVar48 = uVar69 * 0xc + 0x40;
                  dataCacheBlockTouch(lVar48 + lVar40);
                  lVar46 = uVar69 * 0xd + 0x40;
                  dataCacheBlockTouch(lVar46 + lVar40);
                  lVar44 = uVar69 * 0xe + 0x40;
                  dataCacheBlockTouch(lVar44 + lVar40);
                  lVar70 = uVar69 * 0xf + 0x40;
                  uStack_740 = (uint)lVar70;
                  dataCacheBlockTouch(lVar70 + lVar40);
                  uVar61 = uVar61 & 3;
                  lbl_83232468 = lbl_83232468 + 1;
                  iVar15 = (**(code **)(((uVar6 & 3) * 4 + uVar61 + 0xf1) * 4 + param_2))
                                     (lVar40,uVar69,uVar60,0x10,param_2,uVar6 & 3,uVar61,1);
                  if (iVar15 != 0) {
                    fn_82CC4918(lVar40,uVar69,uVar60,0x10,uVar6 & 3,uVar61,
                                      *(undefined1 *)(param_2 + 0x23),1);
                  }
                  uVar61 = (uint)uVar16;
                  lVar66 = (longlong)(int)uVar24;
                  uVar13 = *(uint *)(puStack_758 + 0x246c);
                  lVar70 = (longlong)((int)uVar49 >> 2) *
                           (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                           (longlong)((int)uVar61 >> 2);
                  lVar40 = lVar70 + ZEXT48(puStack_768);
                  lVar70 = lVar70 + ZEXT48(puStack_76c);
                  if (uVar13 == (((int)uVar13 >> 4) + (uint)((int)uVar13 < 0 && (uVar13 & 0xf) != 0)
                                ) * 0x10) {
                    dataCacheBlockTouch(lVar40 + 0x80);
                    dataCacheBlockTouch(lVar66 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar40);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar40);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                    dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar40);
                    uVar13 = 0;
                  }
                  uVar49 = uVar49 & 3;
                  *(uint *)(puStack_758 + 0x246c) = uVar13 + 1;
                  (**(code **)(((uVar61 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                            (lVar40,lVar66,uVar60 + 0x100,8,uVar16 & 3,uVar49,
                             *(undefined1 *)(param_2 + 0x23),1);
                  uVar13 = *(uint *)(puStack_758 + 0x246c);
                  if (uVar13 == (((int)uVar13 >> 4) + (uint)((int)uVar13 < 0 && (uVar13 & 0xf) != 0)
                                ) * 0x10) {
                    dataCacheBlockTouch(lVar70 + 0x80);
                    dataCacheBlockTouch(lVar66 + 0x80 + lVar70);
                    dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar70);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar70);
                    dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar70);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar70);
                    dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar70);
                    dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar70);
                    uVar13 = 0;
                  }
                  *(uint *)(puStack_758 + 0x246c) = uVar13 + 1;
                  (**(code **)(((uVar61 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                            (lVar70,lVar66,uVar60 + 0x140,8,uVar16 & 3,uVar49,
                             *(undefined1 *)(param_2 + 0x23),1);
                  uVar61 = uVar32 << 0x10 | uVar42 & 0xffff;
                  puStack_768 = (undefined4 *)((int)(((int)((uVar42 & 3) + 1) >> 2) + uVar42) >> 1);
                  uVar16 = (ulonglong)(int)puStack_768;
                  uVar13 = *(uint *)(param_2 + 0x1ac);
                  uVar60 = (ulonglong)uVar13;
                  uVar49 = *(uint *)(param_2 + 0x124);
                  puVar27 = (undefined4 *)((int)(((int)((uVar32 & 3) + 1) >> 2) + uVar32) >> 1);
                  uStack_780 = uVar32;
                  uStack_77c = uVar42;
                  puStack_76c = puVar27;
                  if (((uVar61 + (uVar42 & 0x8000) * -2 + iVar14 + 0x730073 |
                       (*(int *)(param_2 + 0x11c) - uVar61) + uVar5 * -0x40) & 0x80008000) != 0) {
                    fn_830EF918(&uStack_77c,&uStack_780,iVar14);
                  }
                  uVar32 = uStack_77c;
                  uVar42 = uStack_780;
                  lVar40 = (longlong)(iVar14 >> 1);
                  uVar18 = (ZEXT48(puVar27) & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
                  if (((uVar18 + (uVar16 & 0x8000) * -2 + lVar40 + 0x3b003b |
                       (uVar49 - uVar18) - lVar40) & 0x80008000) != 0) {
                    fn_830EF9E8(&puStack_768,&puStack_76c,lVar40,(ulonglong)uVar49);
                    uVar16 = ZEXT48(puStack_768);
                    puVar27 = puStack_76c;
                  }
                  lVar40 = (longlong)((int)uVar42 >> 2) *
                           (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                           (longlong)((int)uVar32 >> 2) + (ulonglong)uStack_72c;
                  if (lbl_83232468 ==
                      (((int)lbl_83232468 >> 3) +
                      (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                    dataCacheBlockTouch(lVar40 + 0x80);
                    dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                    dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                    dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                    dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                    dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                    dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                    dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                    lbl_83232468 = 0;
                  }
                  dataCacheBlockTouch(lVar37 + lVar40);
                  dataCacheBlockTouch(lVar55 + lVar40);
                  dataCacheBlockTouch(lVar54 + lVar40);
                  dataCacheBlockTouch(lVar51 + lVar40);
                  dataCacheBlockTouch(lVar48 + lVar40);
                  dataCacheBlockTouch(lVar46 + lVar40);
                  dataCacheBlockTouch(lVar44 + lVar40);
                  dataCacheBlockTouch((ulonglong)uStack_740 + lVar40);
                  lbl_83232468 = lbl_83232468 + 1;
                  uVar42 = uVar42 & 3;
                  iVar14 = (**(code **)(((uVar32 & 3) * 4 + uVar42 + 0xf1) * 4 + param_2))
                                     (lVar40,uVar69,uVar60,0x10,param_2,uVar32 & 3,uVar42,1);
                  if (iVar14 != 0) {
                    fn_82CC4918(lVar40,uVar69,uVar60,0x10,uVar32 & 3,uVar42,
                                      *(undefined1 *)(param_2 + 0x23),1);
                  }
                  puVar10 = puStack_758;
                  uVar32 = (uint)uVar16;
                  uVar42 = *(uint *)(puStack_758 + 0x246c);
                  lVar37 = (longlong)((int)puVar27 >> 2) *
                           (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                           (longlong)((int)uVar32 >> 2);
                  lVar40 = lVar37 + (ulonglong)uStack_734;
                  lVar37 = lVar37 + (ulonglong)uStack_73c;
                  if (uVar42 == (((int)uVar42 >> 4) + (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0)
                                ) * 0x10) {
                    dataCacheBlockTouch(lVar40 + 0x80);
                    dataCacheBlockTouch(lVar66 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar40);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar40);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                    dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                    dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar40);
                    uVar42 = 0;
                  }
                  uVar49 = (uint)puVar27 & 3;
                  *(uint *)(puStack_758 + 0x246c) = uVar42 + 1;
                  (**(code **)(((uVar32 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                            (lVar40,lVar66,uVar60 + 0x100,8,uVar16 & 3,uVar49,
                             *(undefined1 *)(param_2 + 0x23),1);
                  uVar42 = *(uint *)(puVar10 + 0x246c);
                  if (uVar42 == (((int)uVar42 >> 4) + (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0)
                                ) * 0x10) {
                    dataCacheBlockTouch(lVar37 + 0x80);
                    dataCacheBlockTouch(lVar66 + 0x80 + lVar37);
                    dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar37);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar37);
                    dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar37);
                    dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar37);
                    dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar37);
                    dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar37);
                    uVar42 = 0;
                  }
                  *(uint *)(puVar10 + 0x246c) = uVar42 + 1;
                  (**(code **)(((uVar32 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                            (lVar37,lVar66,uVar60 + 0x140,8,uVar16 & 3,uVar49,
                             *(undefined1 *)(param_2 + 0x23),1);
                  iVar14 = (int)in_r0;
                  puVar27 = (undefined4 *)(iVar14 + uVar13 & 0xfffffff0);
                  uVar80 = *puVar27;
                  uVar81 = puVar27[1];
                  uVar82 = puVar27[2];
                  uVar83 = puVar27[3];
                  puVar27 = (undefined4 *)(iVar14 + uVar31 & 0xfffffff0);
                  uVar96 = *puVar27;
                  uVar97 = puVar27[1];
                  uVar98 = puVar27[2];
                  uVar99 = puVar27[3];{ V16 _vt0 = vectorAverageUnsignedByte(in_vs45,in_vs32); memcpy(auVar76, &_vt0, 16); }{ V16 _vt1 = vectorAverageUnsignedByte(in_vs42,in_vs44); memcpy(auVar75, &_vt1, 16); }{ V16 _vt2 = vectorAverageUnsignedByte(in_vs39,in_vs41); memcpy(auVar74, &_vt2, 16); }
                  puVar27 = (undefined4 *)(uVar31 + 0x40 & 0xfffffff0);
                  uVar84 = *puVar27;
                  uVar85 = puVar27[1];
                  uVar86 = puVar27[2];
                  uVar87 = puVar27[3];{ V16 _vt3 = vectorAverageUnsignedByte(in_vs36,in_vs38); memcpy(auVar73, &_vt3, 16); }{ V16 _vt4 = vectorAverageUnsignedByte(in_vs33,in_vs35); memcpy(auVar78, &_vt4, 16); }{ V16 _vt5 = vectorAverageUnsignedByte(in_vs61,in_vs63); memcpy(auVar79, &_vt5, 16); }{ V16 _vt6 = vectorAverageUnsignedByte(in_vs58,in_vs60); memcpy(in_vs56, &_vt6, 16); }
                  puVar27 = (undefined4 *)(iVar14 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_000100b0;
                  puVar27[1] = in_register_000100b4;
                  puVar27[2] = in_register_000100b8;
                  puVar27[3] = in_vr11;
                  puVar27 = (undefined4 *)(uStack_74c + uVar28 & 0xfffffff0);
                  *puVar27 = in_register_00010080;
                  puVar27[1] = in_register_00010084;
                  puVar27[2] = in_register_00010088;
                  puVar27[3] = in_vr8;
                  puVar27 = (undefined4 *)((uint)uVar28 * 2 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_00010050;
                  puVar27[1] = in_register_00010054;
                  puVar27[2] = in_register_00010058;
                  puVar27[3] = in_vr5;{ V16 _vt7 = vectorAverageUnsignedByte(in_vs55,in_vs57); memcpy(auVar77, &_vt7, 16); }
                  puVar27 = (undefined4 *)((uint)uVar28 * 3 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_00010020;
                  puVar27[1] = in_register_00010024;
                  puVar27[2] = in_register_00010028;
                  puVar27[3] = in_vr2;
                  puVar27 = (undefined4 *)((uint)uVar28 * 4 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_000101e0;
                  puVar27[1] = in_register_000101e4;
                  puVar27[2] = in_register_000101e8;
                  puVar27[3] = in_vr30;
                  puVar27 = (undefined4 *)((uint)uVar28 * 5 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_000101b0;
                  puVar27[1] = in_register_000101b4;
                  puVar27[2] = in_register_000101b8;
                  puVar27[3] = in_vr27;
                  puVar27 = (undefined4 *)((uint)uVar28 * 6 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_00010180;
                  puVar27[1] = in_register_00010184;
                  puVar27[2] = in_register_00010188;
                  puVar27[3] = in_vr24;
                  puVar27 = (undefined4 *)((uint)uVar28 * 7 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_00010160;
                  puVar27[1] = in_register_00010164;
                  puVar27[2] = in_register_00010168;
                  puVar27[3] = in_vr22;
                  puVar27 = (undefined4 *)(uVar31 + 0xa0 & 0xfffffff0);
                  in_register_000100f0 = *puVar27;
                  in_register_000100f4 = puVar27[1];
                  in_register_000100f8 = puVar27[2];
                  in_vr15 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar13 + 0x90 & 0xfffffff0);
                  uVar108 = *puVar27;
                  uVar109 = puVar27[1];
                  uVar110 = puVar27[2];
                  uVar111 = puVar27[3];{ V16 _vt8 = vectorAverageUnsignedByte(in_vs51,in_vs52); memcpy(in_vs32, &_vt8, 16); }
                  puVar27 = (undefined4 *)(iVar14 + uVar13 + 0x80 & 0xfffffff0);
                  uVar112 = *puVar27;
                  uVar113 = puVar27[1];
                  uVar114 = puVar27[2];
                  uVar115 = puVar27[3];{ V16 _vt9 = vectorAverageUnsignedByte(in_vs47,in_vs49); memcpy(in_vs45, &_vt9, 16); }
                  puVar27 = (undefined4 *)(iVar14 + uVar31 + 0x80 & 0xfffffff0);
                  uVar104 = *puVar27;
                  uVar105 = puVar27[1];
                  uVar106 = puVar27[2];
                  uVar107 = puVar27[3];
                  vectorAverageUnsignedByte(in_vs50,in_vs53);
                  puVar27 = (undefined4 *)(uVar13 + 0xb0 & 0xfffffff0);
                  uVar100 = *puVar27;
                  uVar101 = puVar27[1];
                  uVar102 = puVar27[2];
                  uVar103 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar31 + 0xb0 & 0xfffffff0);
                  uVar92 = *puVar27;
                  uVar93 = puVar27[1];
                  uVar94 = puVar27[2];
                  uVar95 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar13 + 0xc0 & 0xfffffff0);
                  in_register_000100b0 = *puVar27;
                  in_register_000100b4 = puVar27[1];
                  in_register_000100b8 = puVar27[2];
                  in_vr11 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar31 + 0xc0 & 0xfffffff0);
                  in_register_000100a0 = *puVar27;
                  in_register_000100a4 = puVar27[1];
                  in_register_000100a8 = puVar27[2];
                  in_vr10 = puVar27[3];
                  puVar27 = (undefined4 *)((int)&uStack_500 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar80;
                  puVar27[1] = uVar81;
                  puVar27[2] = uVar82;
                  puVar27[3] = uVar83;
                  puVar27 = (undefined4 *)(uVar31 + 0xd0 & 0xfffffff0);
                  uVar88 = *puVar27;
                  uVar89 = puVar27[1];
                  uVar90 = puVar27[2];
                  uVar91 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar31 + 0xe0 & 0xfffffff0);
                  in_register_00010080 = *puVar27;
                  in_register_00010084 = puVar27[1];
                  in_register_00010088 = puVar27[2];
                  in_vr8 = puVar27[3];
                  iVar15 = (uint)uVar28 * 8 + uStack_74c;
                  vectorAverageUnsignedByte(in_vs44,in_vs46);
                  puVar27 = (undefined4 *)(uVar13 + 0xe0 & 0xfffffff0);
                  in_register_00010050 = *puVar27;
                  in_register_00010054 = puVar27[1];
                  in_register_00010058 = puVar27[2];
                  in_vr5 = puVar27[3];{ V16 _vt10 = vectorAverageUnsignedByte(in_vs42,auVar76); memcpy(in_vs43, &_vt10, 16); }{ V16 _vt11 = vectorAverageUnsignedByte(in_vs41,in_vs38); memcpy(in_vs42, &_vt11, 16); }
                  puVar27 = (undefined4 *)((uint)uVar28 * 8 + uStack_74c & 0xfffffff0);
                  *puVar27 = in_register_00010100;
                  puVar27[1] = in_register_00010104;
                  puVar27[2] = in_register_00010108;
                  puVar27[3] = in_vr16;{ V16 _vt12 = vectorAverageUnsignedByte(auVar75,auVar74); memcpy(in_vs41, &_vt12, 16); }
                  puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 & 0xfffffff0);
                  *puVar27 = uVar80;
                  puVar27[1] = uVar81;
                  puVar27[2] = uVar82;
                  puVar27[3] = uVar83;
                  vectorAverageUnsignedByte(in_vs39,in_vs36);
                  puVar27 = (undefined4 *)((uint)uVar28 * 2 + iVar15 & 0xfffffff0);
                  *puVar27 = uVar96;
                  puVar27[1] = uVar97;
                  puVar27[2] = uVar98;
                  puVar27[3] = uVar99;
                  puVar27 = (undefined4 *)((uint)uVar28 * 3 + iVar15 & 0xfffffff0);
                  *puVar27 = uVar92;
                  puVar27[1] = uVar93;
                  puVar27[2] = uVar94;
                  puVar27[3] = uVar95;
                  puVar27 = (undefined4 *)((uint)uVar28 * 4 + iVar15 & 0xfffffff0);
                  *puVar27 = in_register_000100b0;
                  puVar27[1] = in_register_000100b4;
                  puVar27[2] = in_register_000100b8;
                  puVar27[3] = in_vr11;
                  puVar27 = (undefined4 *)((uint)uVar28 * 5 + iVar15 & 0xfffffff0);
                  *puVar27 = in_register_000100a0;
                  puVar27[1] = in_register_000100a4;
                  puVar27[2] = in_register_000100a8;
                  puVar27[3] = in_vr10;
                  puVar27 = (undefined4 *)((uint)uVar28 * 6 + iVar15 & 0xfffffff0);
                  *puVar27 = uVar88;
                  puVar27[1] = uVar89;
                  puVar27[2] = uVar90;
                  puVar27[3] = uVar91;
                  puVar27 = (undefined4 *)((uint)uVar28 * 7 + iVar15 & 0xfffffff0);
                  *puVar27 = in_register_00010080;
                  puVar27[1] = in_register_00010084;
                  puVar27[2] = in_register_00010088;
                  puVar27[3] = in_vr8;
                  puVar27 = (undefined4 *)((int)&uStack_3c0 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar96;
                  puVar27[1] = uVar97;
                  puVar27[2] = uVar98;
                  puVar27[3] = uVar99;
                  puVar27 = (undefined4 *)((int)&uStack_4e0 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar92;
                  puVar27[1] = uVar93;
                  puVar27[2] = uVar94;
                  puVar27[3] = uVar95;
                  puVar27 = (undefined4 *)((int)&uStack_4c0 + iVar14 & 0xfffffff0);
                  *puVar27 = in_register_000100a0;
                  puVar27[1] = in_register_000100a4;
                  puVar27[2] = in_register_000100a8;
                  puVar27[3] = in_vr10;
                  puVar27 = (undefined4 *)((int)&uStack_520 + iVar14 & 0xfffffff0);
                  *puVar27 = in_register_00010080;
                  puVar27[1] = in_register_00010084;
                  puVar27[2] = in_register_00010088;
                  puVar27[3] = in_vr8;
                  puVar27 = (undefined4 *)(uVar13 + 0x110 & 0xfffffff0);
                  in_register_00010160 = *puVar27;
                  in_register_00010164 = puVar27[1];
                  in_register_00010168 = puVar27[2];
                  in_vr22 = puVar27[3];
                  puVar27 = (undefined4 *)(iVar14 + uVar31 + 0x100 & 0xfffffff0);
                  in_register_000101e0 = *puVar27;
                  in_register_000101e4 = puVar27[1];
                  in_register_000101e8 = puVar27[2];
                  in_vr30 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar31 + 0x150 & 0xfffffff0);
                  in_register_00010020 = *puVar27;
                  in_register_00010024 = puVar27[1];
                  in_register_00010028 = puVar27[2];
                  in_vr2 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar13 + 0x140 & 0xfffffff0);
                  in_register_000101b0 = *puVar27;
                  in_register_000101b4 = puVar27[1];
                  in_register_000101b8 = puVar27[2];
                  in_vr27 = puVar27[3];
                  puVar27 = (undefined4 *)(uVar31 + 0x110 & 0xfffffff0);
                  in_register_00010170 = *puVar27;
                  in_register_00010174 = puVar27[1];
                  in_register_00010178 = puVar27[2];
                  in_vr23 = puVar27[3];{ V16 _vt13 = vectorAverageUnsignedByte(in_vs55,auVar77); memcpy(in_vs53, &_vt13, 16); }{ V16 _vt14 = vectorAverageUnsignedByte(auVar78,in_vs63); memcpy(in_vs52, &_vt14, 16); }
                  puVar27 = (undefined4 *)((int)&uStack_500 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar112;
                  puVar27[1] = uVar113;
                  puVar27[2] = uVar114;
                  puVar27[3] = uVar115;{ V16 _vt15 = vectorAverageUnsignedByte(in_vs60,in_vs61); memcpy(in_vs50, &_vt15, 16); }
                  puVar27 = (undefined4 *)(uVar31 + 0x160 & 0xfffffff0);
                  in_register_00010180 = *puVar27;
                  in_register_00010184 = puVar27[1];
                  in_register_00010188 = puVar27[2];
                  in_vr24 = puVar27[3];{ V16 _vt16 = vectorAverageUnsignedByte(auVar73,in_vs35); memcpy(in_vs33, &_vt16, 16); }
                  puVar27 = (undefined4 *)((int)&uStack_340 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar108;
                  puVar27[1] = uVar109;
                  puVar27[2] = uVar110;
                  puVar27[3] = uVar111;{ V16 _vt17 = vectorAverageUnsignedByte(in_vs56,in_vs57); memcpy(in_vs46, &_vt17, 16); }
                  puVar27 = (undefined4 *)((int)&uStack_3c0 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar104;
                  puVar27[1] = uVar105;
                  puVar27[2] = uVar106;
                  puVar27[3] = uVar107;{ V16 _vt18 = vectorAverageUnsignedByte(in_vs58,in_vs51); memcpy(in_vs48, &_vt18, 16); }{ V16 _vt19 = vectorAverageUnsignedByte(in_vs49,auVar79); memcpy(in_vs47, &_vt19, 16); }
                  puVar27 = (undefined4 *)((int)&uStack_4a0 + iVar14 & 0xfffffff0);
                  *puVar27 = in_register_000100b0;
                  puVar27[1] = in_register_000100b4;
                  puVar27[2] = in_register_000100b8;
                  puVar27[3] = in_vr11;
                  puVar27 = (undefined4 *)((int)&uStack_490 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar88;
                  puVar27[1] = uVar89;
                  puVar27[2] = uVar90;
                  puVar27[3] = uVar91;
                  puVar27 = (undefined4 *)((int)&uStack_4e0 + iVar14 & 0xfffffff0);
                  *puVar27 = in_register_00010100;
                  puVar27[1] = in_register_00010104;
                  puVar27[2] = in_register_00010108;
                  puVar27[3] = in_vr16;
                  puVar27 = (undefined4 *)((int)&uStack_4a0 + iVar14 & 0xfffffff0);
                  *puVar27 = in_register_000100f0;
                  puVar27[1] = in_register_000100f4;
                  puVar27[2] = in_register_000100f8;
                  puVar27[3] = in_vr15;
                  puVar27 = (undefined4 *)((int)&uStack_4c0 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar84;
                  puVar27[1] = uVar85;
                  puVar27[2] = uVar86;
                  puVar27[3] = uVar87;
                  puVar27 = (undefined4 *)((int)&uStack_490 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar100;
                  puVar27[1] = uVar101;
                  puVar27[2] = uVar102;
                  puVar27[3] = uVar103;
                  *puStack_730 = uStack_340;{ V16 _vt20 = vectorAverageUnsignedByte(in_vs45,in_vs32); memcpy(in_vs44, &_vt20, 16); }
                  puStack_730[1] = uStack_33c;
                  *(undefined4 *)(uVar24 + (int)puStack_730) = uStack_338;
                  puVar27 = (undefined4 *)((int)&uStack_520 + iVar14 & 0xfffffff0);
                  *puVar27 = uVar92;
                  puVar27[1] = uVar93;
                  puVar27[2] = uVar94;
                  puVar27[3] = uVar95;
                  *(undefined4 *)((int)puStack_730 + uVar24 + 4) = uStack_334;
                  puStack_730 = (undefined4 *)((int)puStack_730 + uVar24 * 2);
                  *puStack_730 = uStack_500;
                  puStack_730[1] = uStack_4fc;
                  puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                  *puStack_730 = uStack_4f8;
                  puStack_730[1] = uStack_4f4;
                  puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                  *puStack_730 = uStack_3c0;
                  puStack_730[1] = uStack_3bc;
                  puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                  *puStack_730 = uStack_3b8;
                  puStack_730[1] = uStack_3b4;
                  puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                  *puStack_730 = uStack_4e0;
                  puStack_730[1] = uStack_4dc;
                  *(undefined4 *)((int)puStack_730 + uVar24) = uStack_4d8;
                  ((undefined4 *)((int)puStack_730 + uVar24))[1] = uStack_4d4;
                  *puStack_750 = uStack_4a0;
                  puStack_750[1] = uStack_49c;
                  *(undefined4 *)(uVar24 + (int)puStack_750) = uStack_498;
                  *(undefined4 *)((int)puStack_750 + uVar24 + 4) = uStack_494;
                  puStack_750 = (undefined4 *)((int)puStack_750 + uVar24 * 2);
                  *puStack_750 = uStack_4c0;
                  puStack_750[1] = uStack_4bc;
                  puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                  *puStack_750 = uStack_4b8;
                  puStack_750[1] = uStack_4b4;
                  puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                  *puStack_750 = uStack_490;
                  puStack_750[1] = uStack_48c;
                  puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                  *puStack_750 = uStack_488;
                  puStack_750[1] = uStack_484;
                  puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                  *puStack_750 = uStack_520;
                  puStack_750[1] = uStack_51c;
                  *(undefined4 *)((int)puStack_750 + uVar24) = uStack_518;
                  ((undefined4 *)((int)puStack_750 + uVar24))[1] = uStack_514;
                }
                else {
                  iVar4 = (int)(uint)uVar25 >> 1;
                  if (uVar38 == 2) {
                    if (((!bVar7) || (!bVar9)) || (!bVar8)) goto LAB_830fe55c;
                    iVar19 = *(int *)(param_2 + 0x6ac);
                    iVar41 = *(int *)(param_2 + 0x6b0);
                    lVar40 = 0;
                    uStack_6c0 = 0;
                    uStack_6b8 = 0;
                    uStack_6bc = 0;
                    if (iVar14 != 0) {
                      uVar43 = uVar18 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                          uStack_6c0 = CONCAT22(*(undefined2 *)(iVar41 + iVar14),
                                                *(undefined2 *)(iVar19 + iVar14));
                        }
                        else {
                          iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                          iVar30 = (int)((uVar43 + uVar16 & 0xffffffff) << 1);
                          uStack_6c0 = CONCAT22((short)((int)*(short *)(iVar41 + iVar30) +
                                                        (int)*(short *)(iVar41 + iVar14) + 1 >> 1),
                                                (short)((int)*(short *)(iVar19 + iVar30) +
                                                        (int)*(short *)(iVar19 + iVar14) + 1 >> 1));
                        }
                        lVar40 = 1;
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar43 = uVar18 + uVar16 * -2;
                      uVar13 = puStack_774[iVar4 * -6];
                      if ((uVar13 & 0x20000) != 0) {
                        if ((uVar13 & 0x700) == 0) {
                          iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                          iVar30 = (int)(lVar40 << 2);
                          uVar20 = *(undefined2 *)(iVar41 + iVar14);
                          *(undefined2 *)((int)&uStack_6c0 + iVar30 + 2) =
                               *(undefined2 *)(iVar19 + iVar14);
                          *(undefined2 *)((int)&uStack_6c0 + iVar30) = uVar20;
                        }
                        else {
                          iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                          iVar30 = (int)((uVar43 + uVar16 & 0xffffffff) << 1);
                          iVar22 = (int)(lVar40 << 2);
                          sVar29 = *(short *)(iVar41 + iVar30);
                          sVar2 = *(short *)(iVar41 + iVar14);
                          *(short *)((int)&uStack_6c0 + iVar22 + 2) =
                               (short)((int)*(short *)(iVar19 + iVar30) +
                                       (int)*(short *)(iVar19 + iVar14) + 1 >> 1);
                          *(short *)((int)&uStack_6c0 + iVar22) =
                               (short)((int)sVar29 + (int)sVar2 + 1 >> 1);
                        }
                        lVar40 = lVar40 + 1;
                      }
                      if (iVar4 != 1) {
                        uVar60 = ((~((longlong)iVar4 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                 (ulonglong)((longlong)iVar4 - 1U <= uVar60) & 1;
                        uVar43 = (uVar60 * 4 + uVar43) - 2;
                        uVar13 = (puStack_774 + iVar4 * -6)[(int)uVar60 * 0xc + -6];
                        if ((uVar13 & 0x20000) != 0) {
                          if ((uVar13 & 0x700) == 0) {
                            iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                            iVar4 = (int)(lVar40 << 2);
                            uVar20 = *(undefined2 *)(iVar41 + iVar14);
                            *(undefined2 *)((int)&uStack_6c0 + iVar4 + 2) =
                                 *(undefined2 *)(iVar19 + iVar14);
                            *(undefined2 *)((int)&uStack_6c0 + iVar4) = uVar20;
                          }
                          else {
                            iVar14 = (int)((uVar43 & 0xffffffff) << 1);
                            iVar4 = (int)((uVar43 + uVar16 & 0xffffffff) << 1);
                            iVar30 = (int)(lVar40 << 2);
                            sVar29 = *(short *)(iVar41 + iVar14);
                            sVar2 = *(short *)(iVar41 + iVar4);
                            *(short *)((int)&uStack_6c0 + iVar30 + 2) =
                                 (short)((int)*(short *)(iVar19 + iVar4) +
                                         (int)*(short *)(iVar19 + iVar14) + 1 >> 1);
                            *(short *)((int)&uStack_6c0 + iVar30) =
                                 (short)((int)sVar2 + (int)sVar29 + 1 >> 1);
                          }
                          lVar40 = lVar40 + 1;
                        }
                      }
                    }
                    if ((uint)lVar40 < 2) {
                      uVar13 = -(uint)(lVar40 == 1) & uStack_6c0;
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar13)) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar13 >> 0x10))) & ((U64)0xFFFF)) << 0));
                    }
                    else {
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_6c0) >> 16) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_6c0) >> 16) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_6c0) >> 16) & 0xFFFF))) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_6c0) >> 0) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_6c0) >> 0) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_6c0) >> 0) & 0xFFFF))) & ((U64)0xFFFF)) << 0));
                    }
                    puVar27 = (undefined4 *)(uVar31 * 4 + iVar15);
                    iVar4 = uVar31 * 2;
                    uVar80 = *puVar27;
                    iVar41 = (int)((uVar16 + uVar18 & 0x7fffffff) << 1);
                    uVar25 = ((((U64)(uStack_780) >> 16) & 0xFFFF) + (short)uVar80 + sVar36 & uVar26) - sVar36;
                    *(ushort *)(iVar41 + iVar19 + 2) = uVar25;
                    sVar29 = ((((U64)(uStack_780) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) + sVar17 & uVar1) -
                             sVar17;
                    *(ushort *)(iVar41 + *(int *)(param_2 + 0x6ac)) = uVar25;
                    lVar40 = 0;
                    uStack_678 = 0;
                    *(ushort *)(iVar4 + *(int *)(param_2 + 0x6ac) + 2) = uVar25;
                    *(ushort *)(iVar4 + *(int *)(param_2 + 0x6ac)) = uVar25;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b0) + 2) = sVar29;
                    uStack_680 = 0;
                    uStack_67c = 0;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b0)) = sVar29;
                    *(short *)(iVar4 + *(int *)(param_2 + 0x6b0) + 2) = sVar29;
                    *(short *)(iVar4 + *(int *)(param_2 + 0x6b0)) = sVar29;
                    iVar14 = *(int *)(param_2 + 0x6b8);
                    uVar16 = (ulonglong)*(ushort *)(param_2 + 0x32);
                    iVar15 = *(int *)(param_2 + 0x6b4);
                    iVar19 = (int)(uint)*(ushort *)(param_2 + 0x32) >> 1;
                    if (uStack_770 != 0) {
                      uVar60 = (ulonglong)*param_3 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar30 = (int)((uVar60 & 0xffffffff) << 1);
                          uStack_680 = CONCAT22(*(undefined2 *)(iVar30 + iVar14),
                                                *(undefined2 *)(iVar30 + iVar15));
                        }
                        else {
                          iVar30 = (int)((uVar60 & 0xffffffff) << 1);
                          iVar22 = (int)((uVar60 + uVar16 & 0xffffffff) << 1);
                          uStack_680 = CONCAT22((short)((int)*(short *)(iVar22 + iVar14) +
                                                        (int)*(short *)(iVar30 + iVar14) + 1 >> 1),
                                                (short)((int)*(short *)(iVar22 + iVar15) +
                                                        (int)*(short *)(iVar30 + iVar15) + 1 >> 1));
                        }
                        lVar40 = 1;
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar60 = (ulonglong)*param_3 + uVar16 * -2;
                      uVar31 = puStack_774[iVar19 * -6];
                      if ((uVar31 & 0x20000) != 0) {
                        if ((uVar31 & 0x700) == 0) {
                          iVar30 = (int)((uVar60 & 0xffffffff) << 1);
                          iVar22 = (int)(lVar40 << 2);
                          uVar20 = *(undefined2 *)(iVar30 + iVar14);
                          *(undefined2 *)((int)&uStack_680 + iVar22 + 2) =
                               *(undefined2 *)(iVar30 + iVar15);
                          *(undefined2 *)((int)&uStack_680 + iVar22) = uVar20;
                        }
                        else {
                          iVar30 = (int)((uVar60 & 0xffffffff) << 1);
                          iVar22 = (int)((uVar60 + uVar16 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar40 << 2);
                          sVar2 = *(short *)(iVar22 + iVar14);
                          sVar3 = *(short *)(iVar30 + iVar14);
                          *(short *)((int)&uStack_680 + iVar21 + 2) =
                               (short)((int)*(short *)(iVar22 + iVar15) +
                                       (int)*(short *)(iVar30 + iVar15) + 1 >> 1);
                          *(short *)((int)&uStack_680 + iVar21) =
                               (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
                        }
                        lVar40 = lVar40 + 1;
                      }
                      if (iVar19 != 1) {
                        uVar18 = ((~((longlong)iVar19 - 1U ^ (ulonglong)uStack_770) & 0xffffffff) >>
                                 0x1f) + (ulonglong)((longlong)iVar19 - 1U <= (ulonglong)uStack_770)
                                 & 1;
                        uVar60 = (uVar18 * 4 + uVar60) - 2;
                        uVar31 = (puStack_774 + iVar19 * -6)[(int)uVar18 * 0xc + -6];
                        if ((uVar31 & 0x20000) != 0) {
                          if ((uVar31 & 0x700) == 0) {
                            iVar19 = (int)((uVar60 & 0xffffffff) << 1);
                            lVar37 = lVar40 << 2;
                            lVar40 = lVar40 + 1;
                            uVar20 = *(undefined2 *)(iVar19 + iVar14);
                            iVar14 = (int)lVar37;
                            *(undefined2 *)((int)&uStack_680 + iVar14 + 2) =
                                 *(undefined2 *)(iVar19 + iVar15);
                            *(undefined2 *)((int)&uStack_680 + iVar14) = uVar20;
                          }
                          else {
                            iVar19 = (int)((uVar60 & 0xffffffff) << 1);
                            iVar30 = (int)((uVar60 + uVar16 & 0xffffffff) << 1);
                            iVar22 = (int)(lVar40 << 2);
                            lVar40 = lVar40 + 1;
                            sVar2 = *(short *)(iVar30 + iVar14);
                            sVar3 = *(short *)(iVar19 + iVar14);
                            *(short *)((int)&uStack_680 + iVar22 + 2) =
                                 (short)((int)*(short *)(iVar30 + iVar15) +
                                         (int)*(short *)(iVar19 + iVar15) + 1 >> 1);
                            *(short *)((int)&uStack_680 + iVar22) =
                                 (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
                          }
                        }
                      }
                    }
                    if ((uint)lVar40 < 2) {
                      uVar31 = -(uint)(lVar40 == 1) & uStack_680;
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar31)) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar31 >> 0x10))) & ((U64)0xFFFF)) << 0));
                    }
                    else {
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_680) >> 16) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_680) >> 16) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_680) >> 16) & 0xFFFF))) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_680) >> 0) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_680) >> 0) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_680) >> 0) & 0xFFFF))) & ((U64)0xFFFF)) << 0));
                    }
                    uVar80 = puVar27[1];
                    uStack_77c = (uint)(short)uVar25;
                    uVar26 = ((((U64)(uStack_780) >> 16) & 0xFFFF) + (short)uVar80 + sVar36 & uVar26) - sVar36;
                    *(ushort *)(iVar15 + iVar41 + 2) = uVar26;
                    uVar31 = uStack_748 << 0x10 | uStack_770;
                    uVar32 = uVar31 & 0x3ffffff;
                    iVar14 = uVar31 * 0x40;
                    uStack_740 = ((int)(((int)(short)uVar25 & 3U) + 1) >> 2) + (int)(short)uVar25 >>
                                 1;
                    uVar16 = (ulonglong)(int)uStack_740;
                    sVar17 = ((((U64)(uStack_780) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) + sVar17 & uVar1) -
                             sVar17;
                    uVar42 = ((int)(((int)sVar29 & 3U) + 1) >> 2) + (int)sVar29 >> 1;
                    *(ushort *)(iVar41 + *(int *)(param_2 + 0x6b4)) = uVar26;
                    *(ushort *)(iVar4 + *(int *)(param_2 + 0x6b4) + 2) = uVar26;
                    *(ushort *)(iVar4 + *(int *)(param_2 + 0x6b4)) = uVar26;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b8)) = sVar17;
                    *(short *)(iVar4 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                    *(short *)(iVar4 + *(int *)(param_2 + 0x6b8)) = sVar17;
                    uVar31 = *(uint *)(param_2 + 0x124);
                    uVar13 = *(uint *)(param_2 + 0x268);
                    uVar60 = (ulonglong)uVar13;
                    uStack_780 = (int)sVar29;
                    uStack_778 = uVar42;
                    if (((CONCAT22(sVar29,uVar25) + (uVar25 & 0x8000) * -2 + iVar14 + 0x730073 |
                         (*(int *)(param_2 + 0x11c) - CONCAT22(sVar29,uVar25)) + uVar32 * -0x40) &
                        0x80008000) != 0) {
                      fn_830EF918(&uStack_77c,&uStack_780,iVar14);
                    }
                    uVar5 = uStack_77c;
                    uVar49 = uStack_780;
                    lVar40 = (longlong)(iVar14 >> 1);
                    uVar18 = ((ulonglong)uVar42 & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
                    if (((uVar18 + (uVar16 & 0x8000) * -2 + lVar40 + 0x3b003b |
                         (uVar31 - uVar18) - lVar40) & 0x80008000) != 0) {
                      fn_830EF9E8(&uStack_740,&uStack_778,lVar40,(ulonglong)uVar31);
                      uVar16 = (ulonglong)uStack_740;
                      uVar42 = uStack_778;
                    }
                    lVar40 = (longlong)((int)uVar49 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)uVar5 >> 2) + uVar45;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                      lbl_83232468 = 0;
                    }
                    lVar37 = (uVar69 + 8) * 8;
                    dataCacheBlockTouch(lVar37 + lVar40);
                    lVar55 = uVar69 * 9 + 0x40;
                    dataCacheBlockTouch(lVar55 + lVar40);
                    lVar54 = uVar69 * 10 + 0x40;
                    dataCacheBlockTouch(lVar54 + lVar40);
                    lVar51 = uVar69 * 0xb + 0x40;
                    dataCacheBlockTouch(lVar51 + lVar40);
                    lVar48 = uVar69 * 0xc + 0x40;
                    dataCacheBlockTouch(lVar48 + lVar40);
                    lVar46 = uVar69 * 0xd + 0x40;
                    dataCacheBlockTouch(lVar46 + lVar40);
                    lVar44 = uVar69 * 0xe + 0x40;
                    dataCacheBlockTouch(lVar44 + lVar40);
                    lVar70 = uVar69 * 0xf + 0x40;
                    uStack_740 = (uint)lVar70;
                    dataCacheBlockTouch(lVar70 + lVar40);
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar49 = uVar49 & 3;
                    iVar15 = (**(code **)(((uVar5 & 3) * 4 + uVar49 + 0xf1) * 4 + param_2))
                                       (lVar40,uVar69,uVar60,0x10,param_2,uVar5 & 3,uVar49,1);
                    if (iVar15 != 0) {
                      fn_82CC4918(lVar40,uVar69,uVar60,0x10,uVar5 & 3,uVar49,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    uVar49 = (uint)uVar16;
                    lVar66 = (longlong)(int)uVar24;
                    uVar31 = *(uint *)(puStack_758 + 0x246c);
                    lVar70 = (longlong)((int)uVar42 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar49 >> 2);
                    lVar40 = ZEXT48(puStack_768) + lVar70;
                    lVar70 = ZEXT48(puStack_76c) + lVar70;
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(lVar66 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar40);
                      uVar31 = 0;
                    }
                    uVar42 = uVar42 & 3;
                    *(uint *)(puStack_758 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar49 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar40,lVar66,uVar60 + 0x100,8,uVar16 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puStack_758 + 0x246c);
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(lVar66 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar70);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar70);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar70);
                      uVar31 = 0;
                    }
                    *(uint *)(puStack_758 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar49 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar70,lVar66,uVar60 + 0x140,8,uVar16 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uStack_77c = (uint)(short)uVar26;
                    puStack_768 = (undefined4 *)
                                  (((int)(((int)(short)uVar26 & 3U) + 1) >> 2) + (int)(short)uVar26
                                  >> 1);
                    uVar16 = (ulonglong)(int)puStack_768;
                    uVar31 = *(uint *)(param_2 + 0x1ac);
                    uVar60 = (ulonglong)uVar31;
                    puVar27 = (undefined4 *)
                              (((int)(((int)sVar17 & 3U) + 1) >> 2) + (int)sVar17 >> 1);
                    uVar42 = *(uint *)(param_2 + 0x124);
                    uStack_780 = (uint)sVar17;
                    puStack_76c = puVar27;
                    if (((CONCAT22(sVar17,uVar26) + (uVar26 & 0x8000) * -2 + iVar14 + 0x730073 |
                         (*(int *)(param_2 + 0x11c) - CONCAT22(sVar17,uVar26)) + uVar32 * -0x40) &
                        0x80008000) != 0) {
                      fn_830EF918(&uStack_77c,&uStack_780,iVar14);
                    }
                    uVar49 = uStack_77c;
                    uVar32 = uStack_780;
                    lVar40 = (longlong)(iVar14 >> 1);
                    uVar18 = (ZEXT48(puVar27) & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
                    if (((uVar18 + (uVar16 & 0x8000) * -2 + lVar40 + 0x3b003b |
                         (uVar42 - uVar18) - lVar40) & 0x80008000) != 0) {
                      fn_830EF9E8(&puStack_768,&puStack_76c,lVar40,(ulonglong)uVar42);
                      uVar16 = ZEXT48(puStack_768);
                      puVar27 = puStack_76c;
                    }
                    lVar40 = (longlong)((int)uVar32 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)uVar49 >> 2) + (ulonglong)uStack_72c;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                      lbl_83232468 = 0;
                    }
                    dataCacheBlockTouch(lVar37 + lVar40);
                    dataCacheBlockTouch(lVar55 + lVar40);
                    dataCacheBlockTouch(lVar54 + lVar40);
                    dataCacheBlockTouch(lVar51 + lVar40);
                    dataCacheBlockTouch(lVar48 + lVar40);
                    dataCacheBlockTouch(lVar46 + lVar40);
                    dataCacheBlockTouch(lVar44 + lVar40);
                    dataCacheBlockTouch((ulonglong)uStack_740 + lVar40);
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar32 = uVar32 & 3;
                    iVar14 = (**(code **)(((uVar49 & 3) * 4 + uVar32 + 0xf1) * 4 + param_2))
                                       (lVar40,uVar69,uVar60,0x10,param_2,uVar49 & 3,uVar32,1);
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar40,uVar69,uVar60,0x10,uVar49 & 3,uVar32,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    puVar10 = puStack_758;
                    uVar32 = (uint)uVar16;
                    uVar42 = *(uint *)(puStack_758 + 0x246c);
                    lVar37 = (longlong)((int)puVar27 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar32 >> 2);
                    lVar40 = lVar37 + (ulonglong)uStack_734;
                    lVar37 = lVar37 + (ulonglong)uStack_73c;
                    if (uVar42 == (((int)uVar42 >> 4) +
                                  (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(lVar66 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar40);
                      uVar42 = 0;
                    }
                    uVar49 = (uint)puVar27 & 3;
                    *(uint *)(puStack_758 + 0x246c) = uVar42 + 1;
                    (**(code **)(((uVar32 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar40,lVar66,uVar60 + 0x100,8,uVar16 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar42 = *(uint *)(puVar10 + 0x246c);
                    if (uVar42 == (((int)uVar42 >> 4) +
                                  (uint)((int)uVar42 < 0 && (uVar42 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar37 + 0x80);
                      dataCacheBlockTouch(lVar66 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar66 + 0x40) * 2 + lVar37);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar66 + 0x20) * 4 + lVar37);
                      dataCacheBlockTouch(lVar66 + (ulonglong)uVar24 * 4 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar66 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar66) + 0x80 + lVar37);
                      uVar42 = 0;
                    }
                    *(uint *)(puVar10 + 0x246c) = uVar42 + 1;
                    (**(code **)(((uVar32 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar37,lVar66,uVar60 + 0x140,8,uVar16 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    iVar14 = (int)in_r0;
                    puVar27 = (undefined4 *)(iVar14 + uVar31 & 0xfffffff0);
                    uVar80 = *puVar27;
                    uVar81 = puVar27[1];
                    uVar82 = puVar27[2];
                    uVar83 = puVar27[3];
                    puVar27 = (undefined4 *)(iVar14 + uVar13 & 0xfffffff0);
                    uVar92 = *puVar27;
                    uVar93 = puVar27[1];
                    uVar94 = puVar27[2];
                    uVar95 = puVar27[3];{ V16 _vt21 = vectorAverageUnsignedByte(in_vs45,in_vs32); memcpy(auVar76, &_vt21, 16); }{ V16 _vt22 = vectorAverageUnsignedByte(in_vs42,in_vs44); memcpy(auVar75, &_vt22, 16); }{ V16 _vt23 = vectorAverageUnsignedByte(in_vs39,in_vs41); memcpy(auVar74, &_vt23, 16); }{ V16 _vt24 = vectorAverageUnsignedByte(in_vs36,in_vs38); memcpy(auVar73, &_vt24, 16); }
                    puVar27 = (undefined4 *)(uVar13 + 0x50 & 0xfffffff0);
                    uVar112 = *puVar27;
                    uVar113 = puVar27[1];
                    uVar114 = puVar27[2];
                    uVar115 = puVar27[3];{ V16 _vt25 = vectorAverageUnsignedByte(in_vs33,in_vs35); memcpy(auVar79, &_vt25, 16); }
                    vectorAverageUnsignedByte(in_vs61,in_vs63);
                    puVar27 = (undefined4 *)(uVar31 + 0x70 & 0xfffffff0);
                    uVar108 = *puVar27;
                    uVar109 = puVar27[1];
                    uVar110 = puVar27[2];
                    uVar111 = puVar27[3];{ V16 _vt26 = vectorAverageUnsignedByte(in_vs58,in_vs60); memcpy(in_vs56, &_vt26, 16); }
                    puVar27 = (undefined4 *)(iVar14 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_000100b0;
                    puVar27[1] = in_register_000100b4;
                    puVar27[2] = in_register_000100b8;
                    puVar27[3] = in_vr11;{ V16 _vt27 = vectorAverageUnsignedByte(in_vs55,in_vs57); memcpy(auVar77, &_vt27, 16); }
                    puVar27 = (undefined4 *)(uStack_74c + uVar28 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;
                    puVar27 = (undefined4 *)((uint)uVar28 * 2 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_00010050;
                    puVar27[1] = in_register_00010054;
                    puVar27[2] = in_register_00010058;
                    puVar27[3] = in_vr5;
                    puVar27 = (undefined4 *)((uint)uVar28 * 3 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_00010020;
                    puVar27[1] = in_register_00010024;
                    puVar27[2] = in_register_00010028;
                    puVar27[3] = in_vr2;
                    puVar27 = (undefined4 *)((uint)uVar28 * 4 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_000101e0;
                    puVar27[1] = in_register_000101e4;
                    puVar27[2] = in_register_000101e8;
                    puVar27[3] = in_vr30;
                    puVar27 = (undefined4 *)((uint)uVar28 * 5 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_000101b0;
                    puVar27[1] = in_register_000101b4;
                    puVar27[2] = in_register_000101b8;
                    puVar27[3] = in_vr27;
                    puVar27 = (undefined4 *)((uint)uVar28 * 6 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_00010180;
                    puVar27[1] = in_register_00010184;
                    puVar27[2] = in_register_00010188;
                    puVar27[3] = in_vr24;
                    puVar27 = (undefined4 *)((uint)uVar28 * 7 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_00010160;
                    puVar27[1] = in_register_00010164;
                    puVar27[2] = in_register_00010168;
                    puVar27[3] = in_vr22;
                    puVar27 = (undefined4 *)(uVar13 + 0xb0 & 0xfffffff0);
                    uVar88 = *puVar27;
                    uVar89 = puVar27[1];
                    uVar90 = puVar27[2];
                    uVar91 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar13 + 0xa0 & 0xfffffff0);
                    uVar104 = *puVar27;
                    uVar105 = puVar27[1];
                    uVar106 = puVar27[2];
                    uVar107 = puVar27[3];{ V16 _vt28 = vectorAverageUnsignedByte(in_vs50,in_vs53); memcpy(in_vs32, &_vt28, 16); }
                    puVar27 = (undefined4 *)(iVar14 + uVar31 + 0x80 & 0xfffffff0);
                    uVar100 = *puVar27;
                    uVar101 = puVar27[1];
                    uVar102 = puVar27[2];
                    uVar103 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar31 + 0xb0 & 0xfffffff0);
                    uVar96 = *puVar27;
                    uVar97 = puVar27[1];
                    uVar98 = puVar27[2];
                    uVar99 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar31 + 0xc0 & 0xfffffff0);
                    in_register_000100b0 = *puVar27;
                    in_register_000100b4 = puVar27[1];
                    in_register_000100b8 = puVar27[2];
                    in_vr11 = puVar27[3];
                    vectorAverageUnsignedByte(in_vs52,in_vs49);
                    puVar27 = (undefined4 *)(uVar13 + 0xc0 & 0xfffffff0);
                    in_register_000100a0 = *puVar27;
                    in_register_000100a4 = puVar27[1];
                    in_register_000100a8 = puVar27[2];
                    in_vr10 = puVar27[3];{ V16 _vt29 = vectorAverageUnsignedByte(in_vs51,in_vs48); memcpy(in_vs45, &_vt29, 16); }
                    puVar27 = (undefined4 *)((int)&uStack_470 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar80;
                    puVar27[1] = uVar81;
                    puVar27[2] = uVar82;
                    puVar27[3] = uVar83;
                    puVar27 = (undefined4 *)(uVar13 + 0xd0 & 0xfffffff0);
                    uVar84 = *puVar27;
                    uVar85 = puVar27[1];
                    uVar86 = puVar27[2];
                    uVar87 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar13 + 0xe0 & 0xfffffff0);
                    in_register_00010080 = *puVar27;
                    in_register_00010084 = puVar27[1];
                    in_register_00010088 = puVar27[2];
                    in_vr8 = puVar27[3];
                    iVar15 = (uint)uVar28 * 8 + uStack_74c;
                    vectorAverageUnsignedByte(in_vs44,in_vs46);
                    puVar27 = (undefined4 *)(uVar31 + 0xe0 & 0xfffffff0);
                    in_register_00010050 = *puVar27;
                    in_register_00010054 = puVar27[1];
                    in_register_00010058 = puVar27[2];
                    in_vr5 = puVar27[3];{ V16 _vt30 = vectorAverageUnsignedByte(in_vs42,auVar76); memcpy(in_vs43, &_vt30, 16); }{ V16 _vt31 = vectorAverageUnsignedByte(in_vs41,in_vs38); memcpy(in_vs42, &_vt31, 16); }
                    puVar27 = (undefined4 *)((uint)uVar28 * 8 + uStack_74c & 0xfffffff0);
                    *puVar27 = in_register_000100f0;
                    puVar27[1] = in_register_000100f4;
                    puVar27[2] = in_register_000100f8;
                    puVar27[3] = in_vr15;{ V16 _vt32 = vectorAverageUnsignedByte(auVar75,auVar74); memcpy(in_vs41, &_vt32, 16); }
                    puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 & 0xfffffff0);
                    *puVar27 = uVar80;
                    puVar27[1] = uVar81;
                    puVar27[2] = uVar82;
                    puVar27[3] = uVar83;
                    vectorAverageUnsignedByte(in_vs39,in_vs36);
                    puVar27 = (undefined4 *)((uint)uVar28 * 2 + iVar15 & 0xfffffff0);
                    *puVar27 = uVar92;
                    puVar27[1] = uVar93;
                    puVar27[2] = uVar94;
                    puVar27[3] = uVar95;
                    puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 * 3 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    puVar27 = (undefined4 *)((uint)uVar28 * 4 + iVar15 & 0xfffffff0);
                    *puVar27 = in_register_000100b0;
                    puVar27[1] = in_register_000100b4;
                    puVar27[2] = in_register_000100b8;
                    puVar27[3] = in_vr11;
                    puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 * 5 & 0xfffffff0);
                    *puVar27 = in_register_000100a0;
                    puVar27[1] = in_register_000100a4;
                    puVar27[2] = in_register_000100a8;
                    puVar27[3] = in_vr10;
                    puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 * 6 & 0xfffffff0);
                    *puVar27 = uVar84;
                    puVar27[1] = uVar85;
                    puVar27[2] = uVar86;
                    puVar27[3] = uVar87;
                    puVar27 = (undefined4 *)(iVar15 + (uint)uVar28 * 7 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;
                    puVar27 = (undefined4 *)((int)&uStack_480 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar92;
                    puVar27[1] = uVar93;
                    puVar27[2] = uVar94;
                    puVar27[3] = uVar95;
                    puVar27 = (undefined4 *)((int)&uStack_380 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    puVar27 = (undefined4 *)((int)&uStack_460 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100b0;
                    puVar27[1] = in_register_000100b4;
                    puVar27[2] = in_register_000100b8;
                    puVar27[3] = in_vr11;
                    puVar27 = (undefined4 *)((int)&uStack_440 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar84;
                    puVar27[1] = uVar85;
                    puVar27[2] = uVar86;
                    puVar27[3] = uVar87;
                    puVar27 = (undefined4 *)((int)&uStack_3e0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100a0;
                    puVar27[1] = in_register_000100a4;
                    puVar27[2] = in_register_000100a8;
                    puVar27[3] = in_vr10;
                    puVar27 = (undefined4 *)((int)&uStack_3a0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;
                    puVar27 = (undefined4 *)(uVar13 + 0x130 & 0xfffffff0);
                    in_register_00010180 = *puVar27;
                    in_register_00010184 = puVar27[1];
                    in_register_00010188 = puVar27[2];
                    in_vr24 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar31 + 0x150 & 0xfffffff0);
                    in_register_00010100 = *puVar27;
                    in_register_00010104 = puVar27[1];
                    in_register_00010108 = puVar27[2];
                    in_vr16 = puVar27[3];
                    puVar27 = (undefined4 *)(iVar14 + uVar31 + 0x100 & 0xfffffff0);
                    in_register_000101e0 = *puVar27;
                    in_register_000101e4 = puVar27[1];
                    in_register_000101e8 = puVar27[2];
                    in_vr30 = puVar27[3];{ V16 _vt33 = vectorAverageUnsignedByte(in_vs63,auVar79); memcpy(in_vs61, &_vt33, 16); }
                    puVar27 = (undefined4 *)((int)&uStack_350 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar112;
                    puVar27[1] = uVar113;
                    puVar27[2] = uVar114;
                    puVar27[3] = uVar115;{ V16 _vt34 = vectorAverageUnsignedByte(in_vs60,in_vs58); memcpy(in_vs57, &_vt34, 16); }
                    puVar27 = (undefined4 *)(uVar13 + 0x140 & 0xfffffff0);
                    in_register_00010020 = *puVar27;
                    in_register_00010024 = puVar27[1];
                    in_register_00010028 = puVar27[2];
                    in_vr2 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar13 + 0x120 & 0xfffffff0);
                    in_register_00010170 = *puVar27;
                    in_register_00010174 = puVar27[1];
                    in_register_00010178 = puVar27[2];
                    in_vr23 = puVar27[3];{ V16 _vt35 = vectorAverageUnsignedByte(in_vs55,in_vs52); memcpy(in_vs49, &_vt35, 16); }
                    puVar27 = (undefined4 *)((int)&uStack_470 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar108;
                    puVar27[1] = uVar109;
                    puVar27[2] = uVar110;
                    puVar27[3] = uVar111;{ V16 _vt36 = vectorAverageUnsignedByte(auVar73,in_vs53); memcpy(in_vs51, &_vt36, 16); }{ V16 _vt37 = vectorAverageUnsignedByte(in_vs56,in_vs50); memcpy(in_vs47, &_vt37, 16); }
                    puVar27 = (undefined4 *)(uVar13 + 0x150 & 0xfffffff0);
                    in_register_00010160 = *puVar27;
                    in_register_00010164 = puVar27[1];
                    in_register_00010168 = puVar27[2];
                    in_vr22 = puVar27[3];
                    vectorAverageUnsignedByte(in_vs35,in_vs33);{ V16 _vt38 = vectorAverageUnsignedByte(auVar77,in_vs48); memcpy(in_vs46, &_vt38, 16); }
                    puVar27 = (undefined4 *)((int)&uStack_460 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar104;
                    puVar27[1] = uVar105;
                    puVar27[2] = uVar106;
                    puVar27[3] = uVar107;
                    puVar27 = (undefined4 *)((int)&uStack_480 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar100;
                    puVar27[1] = uVar101;
                    puVar27[2] = uVar102;
                    puVar27[3] = uVar103;
                    puVar27 = (undefined4 *)((int)&uStack_380 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100f0;
                    puVar27[1] = in_register_000100f4;
                    puVar27[2] = in_register_000100f8;
                    puVar27[3] = in_vr15;
                    puVar27 = (undefined4 *)((int)&uStack_3e0 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar96;
                    puVar27[1] = uVar97;
                    puVar27[2] = uVar98;
                    puVar27[3] = uVar99;
                    puVar27 = (undefined4 *)((int)&uStack_440 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000101b0;
                    puVar27[1] = in_register_000101b4;
                    puVar27[2] = in_register_000101b8;
                    puVar27[3] = in_vr27;
                    *puStack_730 = uStack_350;{ V16 _vt39 = vectorAverageUnsignedByte(in_vs32,in_vs45); memcpy(in_vs44, &_vt39, 16); }
                    puStack_730[1] = uStack_34c;
                    *(undefined4 *)(uVar24 + (int)puStack_730) = uStack_348;
                    puVar27 = (undefined4 *)((int)&uStack_3a0 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    *(undefined4 *)((int)puStack_730 + uVar24 + 4) = uStack_344;
                    puStack_730 = (undefined4 *)((int)puStack_730 + uVar24 * 2);
                    *puStack_730 = uStack_470;
                    puStack_730[1] = uStack_46c;
                    puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                    *puStack_730 = uStack_468;
                    puStack_730[1] = uStack_464;
                    puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                    *puStack_730 = uStack_480;
                    puStack_730[1] = uStack_47c;
                    puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                    *puStack_730 = uStack_478;
                    puStack_730[1] = uStack_474;
                    puStack_730 = (undefined4 *)((int)puStack_730 + uVar24);
                    *puStack_730 = uStack_380;
                    puStack_730[1] = uStack_37c;
                    *(undefined4 *)((int)puStack_730 + uVar24) = uStack_378;
                    ((undefined4 *)((int)puStack_730 + uVar24))[1] = uStack_374;
                    *puStack_750 = uStack_460;
                    puStack_750[1] = uStack_45c;
                    *(undefined4 *)(uVar24 + (int)puStack_750) = uStack_458;
                    *(undefined4 *)((int)puStack_750 + uVar24 + 4) = uStack_454;
                    puStack_750 = (undefined4 *)((int)puStack_750 + uVar24 * 2);
                    *puStack_750 = uStack_3e0;
                    puStack_750[1] = uStack_3dc;
                    puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                    *puStack_750 = uStack_3d8;
                    puStack_750[1] = uStack_3d4;
                    puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                    *puStack_750 = uStack_440;
                    puStack_750[1] = uStack_43c;
                    puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                    *puStack_750 = uStack_438;
                    puStack_750[1] = uStack_434;
                    puStack_750 = (undefined4 *)((int)puStack_750 + uVar24);
                    *puStack_750 = uStack_3a0;
                    puStack_750[1] = uStack_39c;
                    *(undefined4 *)((int)puStack_750 + uVar24) = uStack_398;
                    ((undefined4 *)((int)puStack_750 + uVar24))[1] = uStack_394;
                  }
                  else if (uVar39 == 2) {
                    if ((!bVar9) || (!bVar8)) goto LAB_830fe55c;
                    iVar19 = *(int *)(param_2 + 0x6b4);
                    iVar41 = *(int *)(param_2 + 0x6b8);
                    lVar40 = 0;
                    uStack_6e0 = 0;
                    uStack_6d8 = 0;
                    uStack_6dc = 0;
                    if (iVar14 != 0) {
                      uVar45 = uVar18 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                          uStack_6e0 = CONCAT22(*(undefined2 *)(iVar30 + iVar41),
                                                *(undefined2 *)(iVar30 + iVar19));
                        }
                        else {
                          iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                          iVar22 = (int)((uVar45 + uVar16 & 0xffffffff) << 1);
                          uStack_6e0 = CONCAT22((short)((int)*(short *)(iVar22 + iVar41) +
                                                        (int)*(short *)(iVar30 + iVar41) + 1 >> 1),
                                                (short)((int)*(short *)(iVar22 + iVar19) +
                                                        (int)*(short *)(iVar30 + iVar19) + 1 >> 1));
                        }
                        lVar40 = 1;
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar45 = uVar18 + uVar16 * -2;
                      uVar13 = puStack_774[iVar4 * -6];
                      if ((uVar13 & 0x20000) != 0) {
                        if ((uVar13 & 0x700) == 0) {
                          iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                          iVar22 = (int)(lVar40 << 2);
                          uVar20 = *(undefined2 *)(iVar30 + iVar41);
                          *(undefined2 *)((int)&uStack_6e0 + iVar22 + 2) =
                               *(undefined2 *)(iVar30 + iVar19);
                          *(undefined2 *)((int)&uStack_6e0 + iVar22) = uVar20;
                        }
                        else {
                          iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar40 << 2);
                          iVar22 = (int)((uVar45 + uVar16 & 0xffffffff) << 1);
                          sVar29 = *(short *)(iVar30 + iVar41);
                          sVar2 = *(short *)(iVar22 + iVar41);
                          uStack_738 = CONCAT22(sVar29,(((U64)(uStack_738) >> 16) & 0xFFFF));
                          *(short *)((int)&uStack_6e0 + iVar21 + 2) =
                               (short)((int)*(short *)(iVar22 + iVar19) +
                                       (int)*(short *)(iVar30 + iVar19) + 1 >> 1);
                          *(short *)((int)&uStack_6e0 + iVar21) =
                               (short)((int)sVar2 + (int)sVar29 + 1 >> 1);
                        }
                        lVar40 = lVar40 + 1;
                      }
                      if (iVar4 != 1) {
                        uVar43 = ((~((longlong)iVar4 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                 (ulonglong)((longlong)iVar4 - 1U <= uVar60) & 1;
                        uVar45 = (uVar43 * 4 + uVar45) - 2;
                        uVar13 = (puStack_774 + iVar4 * -6)[(int)uVar43 * 0xc + -6];
                        if ((uVar13 & 0x20000) != 0) {
                          if ((uVar13 & 0x700) == 0) {
                            iVar4 = (int)((uVar45 & 0xffffffff) << 1);
                            iVar30 = (int)(lVar40 << 2);
                            uVar20 = *(undefined2 *)(iVar4 + iVar41);
                            *(undefined2 *)((int)&uStack_6e0 + iVar30 + 2) =
                                 *(undefined2 *)(iVar4 + iVar19);
                            *(undefined2 *)((int)&uStack_6e0 + iVar30) = uVar20;
                          }
                          else {
                            iVar4 = (int)((uVar45 & 0xffffffff) << 1);
                            iVar30 = (int)((uVar45 + uVar16 & 0xffffffff) << 1);
                            iVar22 = (int)(lVar40 << 2);
                            sVar29 = *(short *)(iVar4 + iVar41);
                            sVar2 = *(short *)(iVar30 + iVar41);
                            *(short *)((int)&uStack_6e0 + iVar22 + 2) =
                                 (short)((int)*(short *)(iVar30 + iVar19) +
                                         (int)*(short *)(iVar4 + iVar19) + 1 >> 1);
                            *(short *)((int)&uStack_6e0 + iVar22) =
                                 (short)((int)sVar2 + (int)sVar29 + 1 >> 1);
                          }
                          lVar40 = lVar40 + 1;
                        }
                      }
                    }
                    if ((uint)lVar40 < 2) {
                      uVar13 = -(uint)(lVar40 == 1) & uStack_6e0;
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar13)) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar13 >> 0x10))) & ((U64)0xFFFF)) << 0));
                    }
                    else {
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_6e0) >> 16) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_6e0) >> 16) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_6e0) >> 16) & 0xFFFF))) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_6e0) >> 0) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_6e0) >> 0) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_6e0) >> 0) & 0xFFFF))) & ((U64)0xFFFF)) << 0));
                    }
                    iVar41 = uVar31 * 2;
                    uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                    iVar30 = (int)((uVar16 + uVar18 & 0x7fffffff) << 1);
                    uVar28 = ((((U64)(uStack_780) >> 16) & 0xFFFF) + (short)uVar80 + sVar36 & uVar26) - sVar36;
                    uVar16 = (ulonglong)(short)uVar28;
                    *(ushort *)(iVar19 + iVar30 + 2) = uVar28;
                    sVar17 = ((((U64)(uStack_780) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) + sVar17 & uVar1) -
                             sVar17;
                    *(ushort *)(iVar30 + *(int *)(param_2 + 0x6b4)) = uVar28;
                    *(ushort *)(iVar41 + *(int *)(param_2 + 0x6b4) + 2) = uVar28;
                    lVar37 = 0;
                    *(ushort *)(iVar41 + *(int *)(param_2 + 0x6b4)) = uVar28;
                    *(short *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                    *(short *)(iVar30 + *(int *)(param_2 + 0x6b8)) = sVar17;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                    *(short *)(iVar41 + *(int *)(param_2 + 0x6b8)) = sVar17;
                    uVar25 = *(ushort *)(param_2 + 0x32);
                    uVar18 = (ulonglong)uVar25;
                    iVar15 = *(int *)(param_2 + 0x6b0);
                    iVar4 = *(int *)(param_2 + 0x6ac);
                    iVar19 = (int)(uint)uVar25 >> 1;
                    auStack_5e0[4] = 0;
                    auStack_5e0[5] = 0;
                    lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                             0x7fffffff) * 2;
                    auStack_5e0[2] = 0;
                    auStack_5e0[3] = 0;
                    auStack_5e0[0] = 0;
                    auStack_5e0[1] = 0;
                    if ((iVar14 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                      iVar14 = (int)((lVar40 - 2U & 0xffffffff) << 1);
                      lVar37 = 1;
                      auStack_5e0[0] = *(undefined2 *)(iVar15 + iVar14);
                      auStack_5e0[1] = *(undefined2 *)(iVar4 + iVar14);
                    }
                    if (uStack_778 == 0) {
                      uVar45 = lVar40 + uVar18 * -2;
                      if ((puStack_774[iVar19 * -6] & 0x20000) != 0) {
                        iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                        iVar22 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        uVar20 = *(undefined2 *)(iVar15 + iVar14);
                        *(undefined2 *)((int)auStack_5e0 + iVar22 + 2) =
                             *(undefined2 *)(iVar4 + iVar14);
                        *(undefined2 *)((int)auStack_5e0 + iVar22) = uVar20;
                      }
                      if ((iVar19 != 1) &&
                         (uVar60 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                         ((puStack_774 + iVar19 * -6)[(int)uVar60 * 0xc + -6] & 0x20000) != 0)) {
                        iVar14 = (int)(((uVar60 * 4 + uVar45) - 2 & 0xffffffff) << 1);
                        iVar19 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        uVar20 = *(undefined2 *)(iVar15 + iVar14);
                        *(undefined2 *)((int)auStack_5e0 + iVar19 + 2) =
                             *(undefined2 *)(iVar4 + iVar14);
                        *(undefined2 *)((int)auStack_5e0 + iVar19) = uVar20;
                      }
                    }
                    iVar19 = 0;
                    iVar14 = 0;
                    iVar22 = (int)lVar37;
                    if (iVar22 == 0) {
LAB_830f40a0:
                      uStack_608 = 0;
                    }
                    else {
                      puVar27 = &uStack_184;
                      puVar58 = &uStack_264;
                      puVar34 = auStack_5e0;
                      do {
                        if ((*puVar34 & 4) == 0) {
                          iVar19 = iVar19 + 1;
                          puVar58 = puVar58 + 1;
                          *puVar58 = *(undefined4 *)puVar34;
                        }
                        else {
                          iVar14 = iVar14 + 1;
                          puVar27 = puVar27 + 1;
                          *puVar27 = *(undefined4 *)puVar34;
                        }
                        puVar34 = puVar34 + 2;
                        lVar37 = lVar37 + -1;
                      } while (lVar37 != 0);
                      if (iVar22 == 0) goto LAB_830f40a0;
                      if ((iVar19 == 3) || (iVar14 == 3)) {
                        uStack_608 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5e0[0] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_5e0[0] >>
                                                             0x10)) >> 0xf & auStack_5e0[0],
                                              (short)((ushort)((uint)-(int)(short)auStack_5e0[1] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_5e0[1] >>
                                                             0x10)) >> 0xf & auStack_5e0[1]);
                      }
                      else if (iVar19 < iVar14) {
                        uStack_608 = uStack_180;
                      }
                      else {
                        uStack_608 = uStack_260;
                      }
                    }
                    uVar60 = (ulonglong)uStack_770;
                    iVar14 = (int)(uint)uVar25 >> 1;
                    auStack_660[4] = 0;
                    auStack_660[5] = 0;
                    auStack_660[2] = 0;
                    auStack_660[3] = 0;
                    auStack_660[0] = 0;
                    auStack_660[1] = 0;
                    lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                             0x7fffffff) * 2;
                    lVar37 = 0;
                    if (uStack_770 != 0) {
                      uVar45 = lVar40 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        lVar37 = 1;
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar19 = (int)((uVar45 & 0xffffffff) << 1);
                          auStack_660[0] = *(undefined2 *)(iVar15 + iVar19);
                          auStack_660[1] = *(undefined2 *)(iVar4 + iVar19);
                        }
                        else {
                          iVar19 = (int)((uVar45 + uVar18 & 0xffffffff) << 1);
                          auStack_660[0] = *(undefined2 *)(iVar15 + iVar19);
                          auStack_660[1] = *(undefined2 *)(iVar4 + iVar19);
                        }
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar45 = lVar40 + uVar18 * -2;
                      uVar31 = puStack_774[iVar14 * -6];
                      if ((uVar31 & 0x20000) != 0) {
                        iVar19 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        if ((uVar31 & 0x700) == 0) {
                          iVar22 = (int)((uVar45 & 0xffffffff) << 1);
                        }
                        else {
                          iVar22 = (int)((uVar45 + uVar18 & 0xffffffff) << 1);
                        }
                        uVar20 = *(undefined2 *)(iVar15 + iVar22);
                        *(undefined2 *)((int)auStack_660 + iVar19 + 2) =
                             *(undefined2 *)(iVar4 + iVar22);
                        *(undefined2 *)((int)auStack_660 + iVar19) = uVar20;
                      }
                      if (iVar14 != 1) {
                        uVar43 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                 (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1;
                        uVar45 = (uVar43 * 4 + uVar45) - 2;
                        uVar31 = (puStack_774 + iVar14 * -6)[(int)uVar43 * 0xc + -6];
                        if ((uVar31 & 0x20000) != 0) {
                          if ((uVar31 & 0x700) == 0) {
                            iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                            iVar19 = (int)(lVar37 << 2);
                            uVar20 = *(undefined2 *)(iVar15 + iVar14);
                            *(undefined2 *)((int)auStack_660 + iVar19 + 2) =
                                 *(undefined2 *)(iVar4 + iVar14);
                            *(undefined2 *)((int)auStack_660 + iVar19) = uVar20;
                          }
                          else {
                            iVar19 = (int)(lVar37 << 2);
                            iVar14 = (int)((uVar45 + uVar18 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar15 + iVar14);
                            *(undefined2 *)((int)auStack_660 + iVar19 + 2) =
                                 *(undefined2 *)(iVar4 + iVar14);
                            *(undefined2 *)((int)auStack_660 + iVar19) = uVar20;
                          }
                          lVar37 = lVar37 + 1;
                        }
                      }
                    }
                    iVar15 = 0;
                    iVar14 = 0;
                    iVar19 = (int)lVar37;
                    if (iVar19 == 0) {
LAB_830f4384:
                      uStack_600 = 0;
                    }
                    else {
                      puVar27 = &uStack_e4;
                      puVar58 = &uStack_244;
                      puVar34 = auStack_660;
                      do {
                        if ((*puVar34 & 4) == 0) {
                          iVar15 = iVar15 + 1;
                          puVar58 = puVar58 + 1;
                          *puVar58 = *(undefined4 *)puVar34;
                        }
                        else {
                          iVar14 = iVar14 + 1;
                          puVar27 = puVar27 + 1;
                          *puVar27 = *(undefined4 *)puVar34;
                        }
                        puVar34 = puVar34 + 2;
                        lVar37 = lVar37 + -1;
                      } while (lVar37 != 0);
                      if (iVar19 == 0) goto LAB_830f4384;
                      if ((iVar15 == 3) || (iVar14 == 3)) {
                        uStack_600 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_660[0] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_660[0] >>
                                                             0x10)) >> 0xf & auStack_660[0],
                                              (short)((ushort)((uint)-(int)(short)auStack_660[1] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_660[1] >>
                                                             0x10)) >> 0xf & auStack_660[1]);
                      }
                      else if (iVar15 < iVar14) {
                        uStack_600 = uStack_e0;
                      }
                      else {
                        uStack_600 = uStack_240;
                      }
                    }
                    uStack_780 = (uint)sVar17;
                    *(undefined2 *)(iVar41 + iVar4 + 2) = (((U64)(uStack_608) >> 16) & 0xFFFF);
                    uStack_77c = (uint)(short)uVar28;
                    uVar18 = ((ulonglong)(uint)(int)sVar17 & 0xffff) << 0x10 |
                             uVar16 & 0xffffffff0000ffff;
                    uVar60 = (((ulonglong)uStack_748 & 0xffff) << 0x10 | uVar60) & 0x3ffffff;
                    lVar40 = uVar60 * 0x40;
                    puStack_768 = (undefined4 *)
                                  (((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28
                                  >> 1);
                    uVar45 = (ulonglong)(int)puStack_768;
                    puVar27 = (undefined4 *)
                              (((int)(((int)sVar17 & 3U) + 1) >> 2) + (int)sVar17 >> 1);
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6ac)) = (((U64)(uStack_608) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b0) + 2) = (((U64)(uStack_608) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b0)) = (((U64)(uStack_608) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6ac) + 2) = (((U64)(uStack_600) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6ac)) = (((U64)(uStack_600) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b0) + 2) = (((U64)(uStack_600) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b0)) = (((U64)(uStack_600) >> 0) & 0xFFFF);
                    uVar31 = *(uint *)(param_2 + 0x124);
                    puStack_76c = puVar27;
                    if (((uVar18 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar40 + 0x730073 |
                         (*(uint *)(param_2 + 0x11c) - uVar18) + uVar60 * -0x40) & 0x80008000) != 0)
                    {
                      fn_830EF918(&uStack_77c,&uStack_780,lVar40);
                      uVar16 = (ulonglong)uStack_77c;
                    }
                    uVar13 = uStack_780;
                    lVar40 = (longlong)((int)lVar40 >> 1);
                    uVar60 = (ZEXT48(puVar27) & 0xffff) << 0x10 | uVar45 & 0xffffffff0000ffff;
                    if (((uVar60 + (uVar45 & 0x8000) * -2 + lVar40 + 0x3b003b |
                         (uVar31 - uVar60) - lVar40) & 0x80008000) != 0) {
                      fn_830EF9E8(&puStack_768,&puStack_76c,lVar40,(ulonglong)uVar31);
                      uVar45 = ZEXT48(puStack_768);
                      puVar27 = puStack_76c;
                    }
                    uVar31 = uStack_74c;
                    lVar40 = (longlong)((int)uVar13 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar16 >> 2) + uVar59;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                      lbl_83232468 = 0;
                    }
                    dataCacheBlockTouch((uVar69 + 8) * 8 + lVar40);
                    dataCacheBlockTouch(uVar69 * 9 + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 10 + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xb + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xc + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xd + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xe + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xf + 0x40 + lVar40);
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar13 = uVar13 & 3;
                    iVar14 = (**(code **)((((uint)uVar16 & 3) * 4 + uVar13 + 0xf1) * 4 + param_2))
                                       (lVar40,uVar69,uStack_74c,uVar69,param_2,uVar16 & 3,uVar13,1)
                    ;
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar40,uVar69,uVar31,uVar69,uVar16 & 3,uVar13,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    puVar10 = puStack_758;
                    uVar13 = (uint)uVar45;
                    lVar70 = (longlong)(int)uVar24;
                    uVar31 = *(uint *)(puStack_758 + 0x246c);
                    lVar37 = (longlong)((int)puVar27 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar13 >> 2);
                    lVar40 = lVar37 + uVar50;
                    lVar37 = lVar37 + uVar53;
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar70) + 0x80 + lVar40);
                      uVar31 = 0;
                    }
                    uVar42 = (uint)puVar27 & 3;
                    *(uint *)(puStack_758 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar40,lVar70,puStack_730,lVar70,uVar45 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puVar10 + 0x246c);
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar37 + 0x80);
                      dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 4 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar70) + 0x80 + lVar37);
                      uVar31 = 0;
                    }
                    *(uint *)(puVar10 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar37,lVar70,puStack_750,lVar70,uVar45 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                  }
                  else {
                    if ((!bVar7) || (!bVar8)) goto LAB_830fe55c;
                    iVar4 = *(int *)(param_2 + 0x6ac);
                    iVar41 = (int)(uint)uVar25 >> 1;
                    iVar19 = *(int *)(param_2 + 0x6b0);
                    lVar40 = 0;
                    uStack_700 = 0;
                    uStack_6f8 = 0;
                    uStack_6fc = 0;
                    if (iVar14 != 0) {
                      uVar59 = uVar18 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar30 = (int)((uVar59 & 0xffffffff) << 1);
                          uStack_700 = CONCAT22(*(undefined2 *)(iVar30 + iVar19),
                                                *(undefined2 *)(iVar30 + iVar4));
                        }
                        else {
                          iVar30 = (int)((uVar59 & 0xffffffff) << 1);
                          iVar22 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                          uStack_700 = CONCAT22((short)((int)*(short *)(iVar22 + iVar19) +
                                                        (int)*(short *)(iVar30 + iVar19) + 1 >> 1),
                                                (short)((int)*(short *)(iVar22 + iVar4) +
                                                        (int)*(short *)(iVar30 + iVar4) + 1 >> 1));
                        }
                        lVar40 = 1;
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar59 = uVar18 + uVar16 * -2;
                      uVar13 = puStack_774[iVar41 * -6];
                      if ((uVar13 & 0x20000) != 0) {
                        if ((uVar13 & 0x700) == 0) {
                          iVar30 = (int)((uVar59 & 0xffffffff) << 1);
                          iVar22 = (int)(lVar40 << 2);
                          uVar20 = *(undefined2 *)(iVar30 + iVar19);
                          *(undefined2 *)((int)&uStack_700 + iVar22 + 2) =
                               *(undefined2 *)(iVar30 + iVar4);
                          *(undefined2 *)((int)&uStack_700 + iVar22) = uVar20;
                        }
                        else {
                          iVar30 = (int)((uVar59 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar40 << 2);
                          iVar22 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                          sVar29 = *(short *)(iVar30 + iVar19);
                          sVar2 = *(short *)(iVar22 + iVar19);
                          uStack_738 = CONCAT22(sVar29,(((U64)(uStack_738) >> 16) & 0xFFFF));
                          *(short *)((int)&uStack_700 + iVar21 + 2) =
                               (short)((int)*(short *)(iVar22 + iVar4) +
                                       (int)*(short *)(iVar30 + iVar4) + 1 >> 1);
                          *(short *)((int)&uStack_700 + iVar21) =
                               (short)((int)sVar2 + (int)sVar29 + 1 >> 1);
                        }
                        lVar40 = lVar40 + 1;
                      }
                      if (iVar41 != 1) {
                        uVar50 = ((~((longlong)iVar41 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                 (ulonglong)((longlong)iVar41 - 1U <= uVar60) & 1;
                        uVar59 = (uVar50 * 4 + uVar59) - 2;
                        uVar13 = (puStack_774 + iVar41 * -6)[(int)uVar50 * 0xc + -6];
                        if ((uVar13 & 0x20000) != 0) {
                          if ((uVar13 & 0x700) == 0) {
                            iVar41 = (int)((uVar59 & 0xffffffff) << 1);
                            iVar30 = (int)(lVar40 << 2);
                            uVar20 = *(undefined2 *)(iVar41 + iVar19);
                            *(undefined2 *)((int)&uStack_700 + iVar30 + 2) =
                                 *(undefined2 *)(iVar41 + iVar4);
                            *(undefined2 *)((int)&uStack_700 + iVar30) = uVar20;
                          }
                          else {
                            iVar41 = (int)((uVar59 & 0xffffffff) << 1);
                            iVar30 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                            iVar22 = (int)(lVar40 << 2);
                            sVar29 = *(short *)(iVar41 + iVar19);
                            sVar2 = *(short *)(iVar30 + iVar19);
                            *(short *)((int)&uStack_700 + iVar22 + 2) =
                                 (short)((int)*(short *)(iVar30 + iVar4) +
                                         (int)*(short *)(iVar41 + iVar4) + 1 >> 1);
                            *(short *)((int)&uStack_700 + iVar22) =
                                 (short)((int)sVar2 + (int)sVar29 + 1 >> 1);
                          }
                          lVar40 = lVar40 + 1;
                        }
                      }
                    }
                    if ((uint)lVar40 < 2) {
                      uVar13 = -(uint)(lVar40 == 1) & uStack_700;
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((ushort)uVar13)) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((ushort)(uVar13 >> 0x10))) & ((U64)0xFFFF)) << 0));
                    }
                    else {
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_700) >> 16) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_700) >> 16) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_700) >> 16) & 0xFFFF))) & ((U64)0xFFFF)) << 16));
                      uStack_780 = ((((U64)(uStack_780)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((short)((ushort)((uint)-(int)(short)(((U64)(uStack_700) >> 0) & 0xFFFF) >> 0x10) ^
                                  (ushort)((uint)-(int)(short)(((U64)(uStack_700) >> 0) & 0xFFFF) >> 0x10)) >> 0xf &
                           (((U64)(uStack_700) >> 0) & 0xFFFF))) & ((U64)0xFFFF)) << 0));
                    }
                    iVar19 = uVar31 * 2;
                    uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                    iVar30 = (int)((uVar16 + uVar18 & 0x7fffffff) << 1);
                    uVar28 = ((((U64)(uStack_780) >> 16) & 0xFFFF) + (short)uVar80 + sVar36 & uVar26) - sVar36;
                    uVar18 = (ulonglong)(short)uVar28;
                    *(ushort *)(iVar30 + iVar4 + 2) = uVar28;
                    sVar17 = ((((U64)(uStack_780) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) + sVar17 & uVar1) -
                             sVar17;
                    *(ushort *)(iVar30 + *(int *)(param_2 + 0x6ac)) = uVar28;
                    *(ushort *)(iVar19 + *(int *)(param_2 + 0x6ac) + 2) = uVar28;
                    *(ushort *)(iVar19 + *(int *)(param_2 + 0x6ac)) = uVar28;
                    *(short *)(iVar30 + *(int *)(param_2 + 0x6b0) + 2) = sVar17;
                    *(short *)(iVar30 + *(int *)(param_2 + 0x6b0)) = sVar17;
                    *(short *)(iVar19 + *(int *)(param_2 + 0x6b0) + 2) = sVar17;
                    *(short *)(iVar19 + *(int *)(param_2 + 0x6b0)) = sVar17;
                    lVar37 = 0;
                    uVar25 = *(ushort *)(param_2 + 0x32);
                    uVar16 = (ulonglong)uVar25;
                    iVar15 = *(int *)(param_2 + 0x6b8);
                    iVar4 = *(int *)(param_2 + 0x6b4);
                    iVar41 = (int)(uint)uVar25 >> 1;
                    auStack_5b0[4] = 0;
                    auStack_5b0[5] = 0;
                    lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                             0x7fffffff) * 2;
                    auStack_5b0[2] = 0;
                    auStack_5b0[3] = 0;
                    auStack_5b0[0] = 0;
                    auStack_5b0[1] = 0;
                    if ((iVar14 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                      iVar14 = (int)((lVar40 - 2U & 0xffffffff) << 1);
                      lVar37 = 1;
                      auStack_5b0[0] = *(undefined2 *)(iVar14 + iVar15);
                      auStack_5b0[1] = *(undefined2 *)(iVar14 + iVar4);
                    }
                    if (uStack_778 == 0) {
                      uVar59 = lVar40 + uVar16 * -2;
                      if ((puStack_774[iVar41 * -6] & 0x20000) != 0) {
                        iVar14 = (int)((uVar59 & 0xffffffff) << 1);
                        iVar22 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        uVar20 = *(undefined2 *)(iVar14 + iVar15);
                        *(undefined2 *)((int)auStack_5b0 + iVar22 + 2) =
                             *(undefined2 *)(iVar14 + iVar4);
                        *(undefined2 *)((int)auStack_5b0 + iVar22) = uVar20;
                      }
                      if ((iVar41 != 1) &&
                         (uVar60 = ((~((longlong)iVar41 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar41 - 1U <= uVar60) & 1,
                         ((puStack_774 + iVar41 * -6)[(int)uVar60 * 0xc + -6] & 0x20000) != 0)) {
                        iVar14 = (int)(((uVar60 * 4 + uVar59) - 2 & 0xffffffff) << 1);
                        iVar41 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        uVar20 = *(undefined2 *)(iVar14 + iVar15);
                        *(undefined2 *)((int)auStack_5b0 + iVar41 + 2) =
                             *(undefined2 *)(iVar14 + iVar4);
                        *(undefined2 *)((int)auStack_5b0 + iVar41) = uVar20;
                      }
                    }
                    iVar41 = 0;
                    iVar14 = 0;
                    iVar22 = (int)lVar37;
                    if (iVar22 == 0) {
LAB_830f32c0:
                      uStack_640 = 0;
                    }
                    else {
                      puVar27 = &uStack_1a4;
                      puVar58 = &uStack_154;
                      puVar34 = auStack_5b0;
                      do {
                        if ((*puVar34 & 4) == 0) {
                          iVar41 = iVar41 + 1;
                          puVar58 = puVar58 + 1;
                          *puVar58 = *(undefined4 *)puVar34;
                        }
                        else {
                          iVar14 = iVar14 + 1;
                          puVar27 = puVar27 + 1;
                          *puVar27 = *(undefined4 *)puVar34;
                        }
                        puVar34 = puVar34 + 2;
                        lVar37 = lVar37 + -1;
                      } while (lVar37 != 0);
                      if (iVar22 == 0) goto LAB_830f32c0;
                      if ((iVar41 == 3) || (iVar14 == 3)) {
                        uStack_640 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5b0[0] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_5b0[0] >>
                                                             0x10)) >> 0xf & auStack_5b0[0],
                                              (short)((ushort)((uint)-(int)(short)auStack_5b0[1] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_5b0[1] >>
                                                             0x10)) >> 0xf & auStack_5b0[1]);
                      }
                      else if (iVar41 < iVar14) {
                        uStack_640 = uStack_1a0;
                      }
                      else {
                        uStack_640 = uStack_150;
                      }
                    }
                    uVar60 = (ulonglong)uStack_770;
                    iVar14 = (int)(uint)uVar25 >> 1;
                    auStack_6a0[4] = 0;
                    auStack_6a0[5] = 0;
                    auStack_6a0[2] = 0;
                    auStack_6a0[3] = 0;
                    auStack_6a0[0] = 0;
                    auStack_6a0[1] = 0;
                    lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                             0x7fffffff) * 2;
                    lVar37 = 0;
                    if (uStack_770 != 0) {
                      uVar59 = lVar40 - 2;
                      if ((puStack_774[-6] & 0x20000) != 0) {
                        lVar37 = 1;
                        if ((puStack_774[-6] & 0x700) == 0) {
                          iVar41 = (int)((uVar59 & 0xffffffff) << 1);
                          auStack_6a0[0] = *(undefined2 *)(iVar41 + iVar15);
                          auStack_6a0[1] = *(undefined2 *)(iVar41 + iVar4);
                        }
                        else {
                          iVar41 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                          auStack_6a0[0] = *(undefined2 *)(iVar41 + iVar15);
                          auStack_6a0[1] = *(undefined2 *)(iVar41 + iVar4);
                        }
                      }
                    }
                    if (uStack_778 == 0) {
                      uVar59 = lVar40 + uVar16 * -2;
                      uVar31 = puStack_774[iVar14 * -6];
                      if ((uVar31 & 0x20000) != 0) {
                        iVar41 = (int)(lVar37 << 2);
                        lVar37 = lVar37 + 1;
                        if ((uVar31 & 0x700) == 0) {
                          iVar22 = (int)((uVar59 & 0xffffffff) << 1);
                        }
                        else {
                          iVar22 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                        }
                        uVar20 = *(undefined2 *)(iVar22 + iVar15);
                        *(undefined2 *)((int)auStack_6a0 + iVar41 + 2) =
                             *(undefined2 *)(iVar22 + iVar4);
                        *(undefined2 *)((int)auStack_6a0 + iVar41) = uVar20;
                      }
                      if (iVar14 != 1) {
                        uVar50 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                 (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1;
                        uVar59 = (uVar50 * 4 + uVar59) - 2;
                        uVar31 = (puStack_774 + iVar14 * -6)[(int)uVar50 * 0xc + -6];
                        if ((uVar31 & 0x20000) != 0) {
                          if ((uVar31 & 0x700) == 0) {
                            iVar14 = (int)((uVar59 & 0xffffffff) << 1);
                            iVar41 = (int)(lVar37 << 2);
                            uVar20 = *(undefined2 *)(iVar14 + iVar15);
                            *(undefined2 *)((int)auStack_6a0 + iVar41 + 2) =
                                 *(undefined2 *)(iVar14 + iVar4);
                            *(undefined2 *)((int)auStack_6a0 + iVar41) = uVar20;
                          }
                          else {
                            iVar41 = (int)(lVar37 << 2);
                            iVar14 = (int)((uVar59 + uVar16 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar14 + iVar15);
                            *(undefined2 *)((int)auStack_6a0 + iVar41 + 2) =
                                 *(undefined2 *)(iVar14 + iVar4);
                            *(undefined2 *)((int)auStack_6a0 + iVar41) = uVar20;
                          }
                          lVar37 = lVar37 + 1;
                        }
                      }
                    }
                    iVar15 = 0;
                    iVar14 = 0;
                    iVar41 = (int)lVar37;
                    if (iVar41 == 0) {
LAB_830f35a4:
                      uStack_610 = 0;
                    }
                    else {
                      puVar27 = &uStack_124;
                      puVar58 = &uStack_284;
                      puVar34 = auStack_6a0;
                      do {
                        if ((*puVar34 & 4) == 0) {
                          iVar15 = iVar15 + 1;
                          puVar58 = puVar58 + 1;
                          *puVar58 = *(undefined4 *)puVar34;
                        }
                        else {
                          iVar14 = iVar14 + 1;
                          puVar27 = puVar27 + 1;
                          *puVar27 = *(undefined4 *)puVar34;
                        }
                        puVar34 = puVar34 + 2;
                        lVar37 = lVar37 + -1;
                      } while (lVar37 != 0);
                      if (iVar41 == 0) goto LAB_830f35a4;
                      if ((iVar15 == 3) || (iVar14 == 3)) {
                        uStack_610 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_6a0[0] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_6a0[0] >>
                                                             0x10)) >> 0xf & auStack_6a0[0],
                                              (short)((ushort)((uint)-(int)(short)auStack_6a0[1] >>
                                                              0x10) ^
                                                     (ushort)((uint)-(int)(short)auStack_6a0[1] >>
                                                             0x10)) >> 0xf & auStack_6a0[1]);
                      }
                      else if (iVar15 < iVar14) {
                        uStack_610 = uStack_120;
                      }
                      else {
                        uStack_610 = uStack_280;
                      }
                    }
                    uStack_780 = (uint)sVar17;
                    *(undefined2 *)(iVar4 + iVar19 + 2) = (((U64)(uStack_640) >> 16) & 0xFFFF);
                    uStack_77c = (uint)(short)uVar28;
                    uVar59 = ((ulonglong)(uint)(int)sVar17 & 0xffff) << 0x10 |
                             uVar18 & 0xffffffff0000ffff;
                    uVar16 = (((ulonglong)uStack_748 & 0xffff) << 0x10 | uVar60) & 0x3ffffff;
                    lVar40 = uVar16 * 0x40;
                    puStack_768 = (undefined4 *)
                                  (((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28
                                  >> 1);
                    uVar60 = (ulonglong)(int)puStack_768;
                    puVar27 = (undefined4 *)
                              (((int)(((int)sVar17 & 3U) + 1) >> 2) + (int)sVar17 >> 1);
                    *(undefined2 *)(iVar19 + *(int *)(param_2 + 0x6b4)) = (((U64)(uStack_640) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar19 + *(int *)(param_2 + 0x6b8) + 2) = (((U64)(uStack_640) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar19 + *(int *)(param_2 + 0x6b8)) = (((U64)(uStack_640) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b4) + 2) = (((U64)(uStack_610) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b4)) = (((U64)(uStack_610) >> 16) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = (((U64)(uStack_610) >> 0) & 0xFFFF);
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b8)) = (((U64)(uStack_610) >> 0) & 0xFFFF);
                    uVar31 = *(uint *)(param_2 + 0x124);
                    puStack_76c = puVar27;
                    if (((uVar59 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar40 + 0x730073 |
                         (*(uint *)(param_2 + 0x11c) - uVar59) + uVar16 * -0x40) & 0x80008000) != 0)
                    {
                      fn_830EF918(&uStack_77c,&uStack_780,lVar40);
                      uVar18 = (ulonglong)uStack_77c;
                    }
                    uVar13 = uStack_780;
                    lVar40 = (longlong)((int)lVar40 >> 1);
                    uVar16 = (ZEXT48(puVar27) & 0xffff) << 0x10 | uVar60 & 0xffffffff0000ffff;
                    if (((uVar16 + (uVar60 & 0x8000) * -2 + lVar40 + 0x3b003b |
                         (uVar31 - uVar16) - lVar40) & 0x80008000) != 0) {
                      fn_830EF9E8(&puStack_768,&puStack_76c,lVar40,(ulonglong)uVar31);
                      uVar60 = ZEXT48(puStack_768);
                      puVar27 = puStack_76c;
                    }
                    uVar31 = uStack_74c;
                    lVar40 = (longlong)((int)uVar13 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar18 >> 2) + uVar45;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(uVar69 * 3 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(uVar69 * 5 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 6 + 0x80 + lVar40);
                      dataCacheBlockTouch(uVar69 * 7 + 0x80 + lVar40);
                      lbl_83232468 = 0;
                    }
                    dataCacheBlockTouch((uVar69 + 8) * 8 + lVar40);
                    dataCacheBlockTouch(uVar69 * 9 + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 10 + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xb + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xc + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xd + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xe + 0x40 + lVar40);
                    dataCacheBlockTouch(uVar69 * 0xf + 0x40 + lVar40);
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar13 = uVar13 & 3;
                    iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar13 + 0xf1) * 4 + param_2))
                                       (lVar40,uVar69,uStack_74c,uVar69,param_2,uVar18 & 3,uVar13,1)
                    ;
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar40,uVar69,uVar31,uVar69,uVar18 & 3,uVar13,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    puVar10 = puStack_758;
                    uVar13 = (uint)uVar60;
                    lVar70 = (longlong)(int)uVar24;
                    uVar31 = *(uint *)(puStack_758 + 0x246c);
                    lVar37 = (longlong)((int)puVar27 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar13 >> 2);
                    lVar40 = lVar37 + uVar43;
                    lVar37 = lVar37 + uVar47;
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 4 + 0x80 + lVar40);
                      dataCacheBlockTouch((lVar70 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar70) + 0x80 + lVar40);
                      uVar31 = 0;
                    }
                    uVar42 = (uint)puVar27 & 3;
                    *(uint *)(puStack_758 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar40,lVar70,puStack_730,lVar70,uVar60 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puVar10 + 0x246c);
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar37 + 0x80);
                      dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                      dataCacheBlockTouch(lVar70 + (ulonglong)uVar24 * 4 + 0x80 + lVar37);
                      dataCacheBlockTouch((lVar70 + (ulonglong)uVar24 * 2) * 2 + 0x80 + lVar37);
                      dataCacheBlockTouch(((ulonglong)uVar24 * 8 - lVar70) + 0x80 + lVar37);
                      uVar31 = 0;
                    }
                    *(uint *)(puVar10 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar42 + 0x101) * 4 + param_2))
                              (lVar37,lVar70,puStack_750,lVar70,uVar60 & 3,uVar42,
                               *(undefined1 *)(param_2 + 0x23),1);
                  }
                }
              }
              else {
                uVar16 = (ulonglong)*(ushort *)(param_2 + 0x4a);
                uStack_738 = (uint)*(ushort *)(param_2 + 0x4a) << 1;
                lVar40 = uVar16 * 2;
                if ((uStack_748 == 0) ||
                   (uStack_778 = 0, *(int *)(*(int *)(param_2 + 0x518) + uStack_748 * 4) != 0)) {
                  uStack_778 = 1;
                }
                iVar15 = *(int *)(param_2 + 0x15c);
                bVar7 = false;
                bVar9 = false;
                uVar25 = *(ushort *)(param_2 + 0x32);
                uVar13 = (uint)uVar25;
                uVar31 = *param_3;
                uStack_740 = 0;
                puStack_76c = (undefined4 *)0x0;
                puStack_768 = (undefined4 *)0x0;
                uStack_73c = 0;
                uStack_74c = 0;
                puStack_750 = (undefined4 *)0x0;
                uStack_734 = 0;
                puStack_730 = (undefined4 *)0x0;
                uStack_72c = 0;
                if (((*(int *)(param_2 + 0x230) != 0) && (*(int *)(param_2 + 0x240) != 0)) &&
                   (*(int *)(param_2 + 0x244) != 0)) {
                  uStack_740 = param_3[2] + *(int *)(param_2 + 0x230);
                  puStack_76c = (undefined4 *)(param_3[3] + *(int *)(param_2 + 0x240));
                  puStack_768 = (undefined4 *)(*(int *)(param_2 + 0x244) + param_3[3]);
                }
                if (((*(int *)(param_2 + 0x1d0) != 0) && (*(int *)(param_2 + 0x1e0) != 0)) &&
                   (*(int *)(param_2 + 0x1e4) != 0)) {
                  bVar7 = true;
                  uStack_73c = param_3[2] + *(int *)(param_2 + 0x1d0);
                  uStack_74c = param_3[3] + *(int *)(param_2 + 0x1e0);
                  puStack_750 = (undefined4 *)(*(int *)(param_2 + 0x1e4) + param_3[3]);
                }
                if (((*(int *)(param_2 + 0x200) != 0) && (*(int *)(param_2 + 0x210) != 0)) &&
                   (*(int *)(param_2 + 0x214) != 0)) {
                  bVar9 = true;
                  uStack_734 = *(int *)(param_2 + 0x200) + param_3[2];
                  puStack_730 = (undefined4 *)(param_3[3] + *(int *)(param_2 + 0x210));
                  uStack_72c = param_3[3] + *(int *)(param_2 + 0x214);
                }
                uVar24 = uVar24 >> 5 & 7;
                if (6 < uVar24 - 1) goto LAB_830fe55c;
                uVar42 = (int)uStack_738 >> 1;
                iVar4 = (int)uStack_738 >> 2;
                if (uVar24 == 1) {
                  iVar14 = *(int *)(param_2 + 0x63c);
                  if (((bVar7) && (bVar9)) && (iVar15 = *(int *)(param_2 + 0x178), iVar15 != 0)) {
                    iVar41 = uVar31 * 2;
                    iVar19 = *(int *)(uVar31 * 4 + iVar15);
                    iVar21 = iVar14 + -0x100;
                    iVar30 = (uVar13 + uVar31) * 2;
                    iVar15 = *(int *)((uVar13 + uVar31) * 4 + iVar15);
                    iVar67 = (int)(short)iVar19;
                    iVar19 = iVar19 >> 0x10;
                    iVar33 = iVar14 * iVar67 + 0x80;
                    iVar22 = iVar15 >> 0x10;
                    uStack_77c = iVar33 >> 8;
                    uVar45 = (ulonglong)(int)uStack_77c;
                    uVar20 = (undefined2)((uint)iVar33 >> 8);
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6ac) + 2) = uVar20;
                    iVar63 = iVar19 * iVar21 + 0x80;
                    iVar72 = (int)(short)iVar15;
                    iVar62 = iVar72 * iVar14 + 0x80;
                    iVar33 = iVar14 * iVar19 + 0x80;
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6ac)) = uVar20;
                    uStack_780 = iVar33 >> 8;
                    iVar64 = iVar22 * iVar14 + 0x80;
                    uVar20 = (undefined2)((uint)iVar33 >> 8);
                    iVar15 = iVar22 * iVar21 + 0x80;
                    *(undefined2 *)(*(int *)(param_2 + 0x6b0) + iVar41 + 2) = uVar20;
                    iVar14 = iVar67 * iVar21 + 0x80;
                    uVar31 = iVar14 >> 8;
                    uVar50 = (ulonglong)(int)uVar31;
                    uVar13 = iVar63 >> 8;
                    iVar19 = iVar72 * iVar21 + 0x80;
                    uVar32 = iVar62 >> 8;
                    uVar59 = (ulonglong)(int)uVar32;
                    uVar49 = iVar64 >> 8;
                    uVar5 = iVar19 >> 8;
                    uVar43 = (ulonglong)(int)uVar5;
                    uVar57 = (undefined2)((uint)iVar14 >> 8);
                    uStack_75c = iVar15 >> 8;
                    *(undefined2 *)(*(int *)(param_2 + 0x6b0) + iVar41) = uVar20;
                    uVar56 = (undefined2)((uint)iVar63 >> 8);
                    uVar20 = (undefined2)((uint)iVar15 >> 8);
                    uVar68 = (undefined2)((uint)iVar62 >> 8);
                    uVar65 = (undefined2)((uint)iVar64 >> 8);
                    uVar35 = (undefined2)((uint)iVar19 >> 8);
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b4) + 2) = uVar57;
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b4)) = uVar57;
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b8) + 2) = uVar56;
                    *(undefined2 *)(iVar41 + *(int *)(param_2 + 0x6b8)) = uVar56;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6ac) + 2) = uVar68;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6ac)) = uVar68;
                    *(undefined2 *)(*(int *)(param_2 + 0x6b0) + iVar30 + 2) = uVar65;
                    *(undefined2 *)(*(int *)(param_2 + 0x6b0) + iVar30) = uVar65;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b4) + 2) = uVar35;
                    lVar37 = (longlong)(int)uVar42;
                    uVar69 = ((ulonglong)uStack_780 & 0xffff) << 0x10 | uVar45 & 0xffffffff0000ffff;
                    uVar18 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | (ulonglong)uStack_770;
                    uVar60 = uVar18 & 0x3ffffff;
                    lVar40 = uVar60 * 0x40;
                    uStack_754 = (int)(((int)((uStack_77c & 3) + 1) >> 2) + uStack_77c) >> 1;
                    uVar47 = (ulonglong)(int)uStack_754;
                    uStack_764 = ((int)uVar69 - ((uint)((uVar45 & 0xffff) << 1) & 0x10000)) +
                                 (int)lVar40 + 0x730073;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b4)) = uVar35;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = uVar20;
                    *(undefined2 *)(iVar30 + *(int *)(param_2 + 0x6b8)) = uVar20;
                    uVar16 = (ulonglong)*(uint *)(puStack_728 + (uStack_780 & 0xf) * 4) +
                             ((ulonglong)(uint)(iVar33 >> 9) & 0xfffffff8);
                    uVar39 = (ulonglong)*(uint *)(param_2 + 0x11c);
                    uVar38 = (ulonglong)*(uint *)(param_2 + 0x124);
                    uVar24 = *(uint *)(param_2 + 0x268);
                    uVar53 = (ulonglong)uVar24;
                    uStack_760 = (uint)uVar16;
                    uVar61 = uStack_780;
                    uStack_778 = uVar49;
                    uStack_744 = uVar32;
                    if ((((ulonglong)uStack_764 | (uVar39 - uVar69) + uVar60 * -0x40 & 0xffffffff) &
                        0x80008000) != 0) {
                      fn_830EF918(&uStack_77c,&uStack_780,lVar40,uVar39);
                      uVar45 = (ulonglong)uStack_77c;
                      uVar61 = uStack_780;
                    }
                    uVar69 = ((ulonglong)uVar49 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                    lVar70 = lVar40 + 0x40000;
                    uStack_780 = (int)(((int)((uVar32 & 3) + 1) >> 2) + uVar32) >> 1;
                    uStack_77c = *(int *)(puStack_728 + (uVar49 & 0xf) * 4) +
                                 (iVar64 >> 9 & 0xfffffff8U);
                    if (((uVar69 + (uVar59 & 0x8000) * -2 + lVar70 + 0x730073 |
                         (uVar39 - uVar69) - lVar70) & 0x80008000) != 0) {
                      fn_830EF918(&uStack_744,&uStack_778,lVar70,uVar39);
                      uVar59 = (ulonglong)uStack_744;
                      uVar49 = uStack_778;
                    }
                    uVar18 = uVar18 & 0x7ffffff;
                    uVar69 = uVar18 * 0x20;
                    uVar39 = (uVar16 & 0xffff) << 0x10 | uVar47 & 0xffffffff0000ffff;
                    uStack_778 = (uint)uVar69;
                    if (((uVar39 + (uVar47 & 0x8000) * -2 + uVar69 + 0x3b003b |
                         (uVar38 - uVar39) + uVar18 * -0x20) & 0x80008000) != 0) {
                      fn_830EF9E8(&uStack_754,&uStack_760,uVar69,uVar38);
                      uVar69 = (ulonglong)uStack_778;
                      uVar47 = (ulonglong)uStack_754;
                      uVar16 = (ulonglong)uStack_760;
                    }
                    lVar70 = uVar69 + 0x40000;
                    uVar18 = ((ulonglong)uStack_77c & 0xffff) << 0x10 |
                             (ulonglong)uStack_780 & 0xffffffff0000ffff;
                    if (((uVar18 + ((ulonglong)uStack_780 & 0x8000) * -2 + lVar70 + 0x3b003b |
                         (uVar38 - uVar18) - lVar70) & 0x80008000) != 0) {
                      fn_830EF9E8(&uStack_780,&uStack_77c,lVar70,uVar38);
                    }
                    uVar32 = uStack_738;
                    lVar70 = (longlong)((int)uVar61 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar45 >> 2) + (ulonglong)uStack_73c;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      uVar18 = (ulonglong)uStack_738;
                      dataCacheBlockTouch(uVar18 + 0x80 + lVar70);
                      dataCacheBlockTouch((uVar18 + 0x40 & 0x7fffffff) * 2 + lVar70);
                      dataCacheBlockTouch(uVar18 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 + 0x80 +
                                          lVar70);
                      dataCacheBlockTouch((uVar18 + 0x20 & 0x3fffffff) * 4 + lVar70);
                      dataCacheBlockTouch(uVar18 + ((ulonglong)uStack_738 & 0x3fffffff) * 4 + 0x80 +
                                          lVar70);
                      dataCacheBlockTouch((uVar18 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 &
                                          0x7fffffff) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((((ulonglong)uStack_738 & 0x1fffffff) * 8 - uVar18) + 0x80
                                          + lVar70);
                      lbl_83232468 = 0;
                    }
                    uVar18 = (ulonglong)uStack_738;
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar61 = uVar61 & 3;
                    iVar14 = (**(code **)((((uint)uVar45 & 3) * 4 + uVar61 + 0xf1) * 4 + param_2))
                                       (lVar70,uVar18,uVar53,0x20,param_2,uVar45 & 3,uVar61,1);
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar70,uVar18,uVar53,0x20,uVar45 & 3,uVar61,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    lVar70 = (longlong)(((int)uVar49 >> 2) + 1) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar59 >> 2) + (ulonglong)uStack_73c;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(uVar18 + 0x80 + lVar70);
                      dataCacheBlockTouch((uVar18 + 0x40 & 0x7fffffff) * 2 + lVar70);
                      dataCacheBlockTouch(uVar18 + ((ulonglong)uVar32 & 0x7fffffff) * 2 + 0x80 +
                                          lVar70);
                      dataCacheBlockTouch((uVar18 + 0x20 & 0x3fffffff) * 4 + lVar70);
                      dataCacheBlockTouch(uVar18 + ((ulonglong)uVar32 & 0x3fffffff) * 4 + 0x80 +
                                          lVar70);
                      dataCacheBlockTouch((uVar18 + ((ulonglong)uVar32 & 0x7fffffff) * 2 &
                                          0x7fffffff) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((((ulonglong)uVar32 & 0x1fffffff) * 8 - uVar18) + 0x80 +
                                          lVar70);
                      lbl_83232468 = 0;
                    }
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar49 = uVar49 & 3;
                    iVar14 = (**(code **)((((uint)uVar59 & 3) * 4 + uVar49 + 0xf1) * 4 + param_2))
                                       (lVar70,uVar18,uVar53 + 0x10,0x20,param_2,uVar59 & 3,uVar49,1
                                       );
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar70,uVar18,uVar53 + 0x10,0x20,uVar59 & 3,uVar49,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    puVar10 = puStack_758;
                    uVar49 = (uint)uVar47;
                    uVar69 = (ulonglong)uStack_74c;
                    uVar18 = ZEXT48(puStack_750);
                    uVar32 = *(uint *)(puStack_758 + 0x246c);
                    lVar44 = (longlong)((int)uVar16 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar49 >> 2);
                    lVar70 = uVar69 + lVar44;
                    lVar44 = uVar18 + lVar44;
                    if (uVar32 == (((int)uVar32 >> 4) +
                                  (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                      uVar32 = 0;
                    }
                    uVar16 = uVar16 & 3;
                    *(uint *)(puStack_758 + 0x246c) = uVar32 + 1;
                    (**(code **)(((uVar49 & 3) * 4 + (int)uVar16 + 0x101) * 4 + param_2))
                              (lVar70,lVar37,uVar53 + 0x100,0x10,uVar47 & 3,uVar16,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar32 = *(uint *)(puVar10 + 0x246c);
                    if (uVar32 == (((int)uVar32 >> 4) +
                                  (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar44 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                      uVar32 = 0;
                    }
                    *(uint *)(puVar10 + 0x246c) = uVar32 + 1;
                    (**(code **)(((uVar49 & 3) * 4 + (int)uVar16 + 0x101) * 4 + param_2))
                              (lVar44,lVar37,uVar53 + 0x140,0x10,uVar47 & 3,uVar16,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar49 = uStack_780;
                    uVar25 = *(ushort *)(param_2 + 0x4c);
                    uVar32 = *(uint *)(puVar10 + 0x246c);
                    lVar44 = (longlong)((int)uStack_77c >> 2) * (longlong)(int)(uint)uVar25 +
                             (longlong)((int)uStack_780 >> 2);
                    lVar70 = uVar69 + lVar44 + (ulonglong)uVar25;
                    lVar44 = uVar18 + lVar44 + (ulonglong)uVar25;
                    if (uVar32 == (((int)uVar32 >> 4) +
                                  (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                      uVar32 = 0;
                    }
                    uVar61 = uStack_77c & 3;
                    *(uint *)(puVar10 + 0x246c) = uVar32 + 1;
                    uVar6 = uStack_780 & 3;
                    (**(code **)(((uStack_780 & 3) * 4 + uVar61 + 0x101) * 4 + param_2))
                              (lVar70,lVar37,uVar53 + 0x108,0x10,uVar6,uVar61,
                               *(undefined1 *)(param_2 + 0x23),1);
                    puVar11 = puStack_758;
                    uVar32 = *(uint *)(puVar10 + 0x246c);
                    if (uVar32 == (((int)uVar32 >> 4) +
                                  (uint)((int)uVar32 < 0 && (uVar32 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar44 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                      uVar32 = 0;
                    }
                    *(uint *)(puStack_758 + 0x246c) = uVar32 + 1;
                    (**(code **)(((uVar49 & 3) * 4 + uVar61 + 0x101) * 4 + param_2))
                              (lVar44,lVar37,uVar53 + 0x148,0x10,uVar6,uVar61,
                               *(undefined1 *)(param_2 + 0x23),1);
                    puVar10 = puStack_728;
                    uVar49 = uStack_75c;
                    uVar16 = ((ulonglong)uVar13 & 0xffff) << 0x10 | uVar50 & 0xffffffff0000ffff;
                    uStack_744 = uStack_75c;
                    puStack_750 = (undefined4 *)
                                  ((int)(((int)((uVar31 & 3) + 1) >> 2) + uVar31) >> 1);
                    uVar18 = (ulonglong)(int)puStack_750;
                    uVar45 = (ulonglong)*(uint *)(param_2 + 0x11c);
                    uVar32 = *(uint *)(param_2 + 0x1ac);
                    uVar47 = (ulonglong)uVar32;
                    uVar69 = (ulonglong)*(uint *)(param_2 + 0x124);
                    uStack_780 = *(int *)(puStack_728 + (uVar13 & 0xf) * 4) +
                                 (iVar63 >> 9 & 0xfffffff8U);
                    uStack_754 = uVar31;
                    uStack_74c = uVar5;
                    if (((uVar16 + (uVar50 & 0x8000) * -2 + lVar40 + 0x730073 |
                         (uVar45 - uVar16) + uVar60 * -0x40) & 0x80008000) != 0) {
                      uStack_760 = uVar13;
                      fn_830EF918(&uStack_754,&uStack_760,lVar40,uVar45);
                      uVar50 = (ulonglong)uStack_754;
                      uVar13 = uStack_760;
                    }
                    uVar16 = ((ulonglong)uVar49 & 0xffff) << 0x10 | uVar43 & 0xffffffff0000ffff;
                    lVar40 = lVar40 + 0x40000;
                    uStack_760 = (int)(((int)((uVar5 & 3) + 1) >> 2) + uVar5) >> 1;
                    uVar60 = (ulonglong)(int)uStack_760;
                    uStack_77c = *(int *)(puVar10 + (uVar49 & 0xf) * 4) +
                                 ((int)uVar49 >> 1 & 0xfffffff8U);
                    if (((uVar16 + (uVar43 & 0x8000) * -2 + lVar40 + 0x730073 |
                         (uVar45 - uVar16) - lVar40) & 0x80008000) != 0) {
                      fn_830EF918(&uStack_74c,&uStack_744,lVar40,uVar45);
                      uVar43 = (ulonglong)uStack_74c;
                      uVar49 = uStack_744;
                    }
                    uVar45 = (ulonglong)uStack_778;
                    uVar16 = ((ulonglong)uStack_780 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                    if (((uVar16 + (uVar18 & 0x8000) * -2 + uVar45 + 0x3b003b |
                         (uVar69 - uVar16) - uVar45) & 0x80008000) != 0) {
                      fn_830EF9E8(&puStack_750,&uStack_780,uVar45,uVar69);
                      uVar18 = ZEXT48(puStack_750);
                    }
                    lVar40 = uVar45 + 0x40000;
                    uVar16 = ((ulonglong)uStack_77c & 0xffff) << 0x10 | uVar60 & 0xffffffff0000ffff;
                    if (((uVar16 + (uVar60 & 0x8000) * -2 + lVar40 + 0x3b003b |
                         (uVar69 - uVar16) - lVar40) & 0x80008000) != 0) {
                      fn_830EF9E8(&uStack_760,&uStack_77c,lVar40,uVar69);
                      uVar60 = (ulonglong)uStack_760;
                    }
                    uVar16 = (ulonglong)uStack_734;
                    lVar40 = (longlong)((int)uVar13 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar50 >> 2) + uVar16;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar40 + 0x80);
                      uVar69 = (ulonglong)uStack_738;
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                      dataCacheBlockTouch((uVar69 + 0x40 & 0x7fffffff) * 2 + lVar40);
                      dataCacheBlockTouch(uVar69 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 + 0x80 +
                                          lVar40);
                      dataCacheBlockTouch((uVar69 + 0x20 & 0x3fffffff) * 4 + lVar40);
                      dataCacheBlockTouch(uVar69 + ((ulonglong)uStack_738 & 0x3fffffff) * 4 + 0x80 +
                                          lVar40);
                      dataCacheBlockTouch((uVar69 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 &
                                          0x7fffffff) * 2 + 0x80 + lVar40);
                      dataCacheBlockTouch((((ulonglong)uStack_738 & 0x1fffffff) * 8 - uVar69) + 0x80
                                          + lVar40);
                      lbl_83232468 = 0;
                    }
                    uVar69 = (ulonglong)uStack_738;
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar13 = uVar13 & 3;
                    iVar14 = (**(code **)((((uint)uVar50 & 3) * 4 + uVar13 + 0xf1) * 4 + param_2))
                                       (lVar40,uVar69,uVar47,0x20,param_2,uVar50 & 3,uVar13,1);
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar40,uVar69,uVar47,0x20,uVar50 & 3,uVar13,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    lVar40 = uVar47 + 0x10;
                    lVar70 = (longlong)(((int)uVar49 >> 2) + 1) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                             (longlong)((int)(uint)uVar43 >> 2) + uVar16;
                    if (lbl_83232468 ==
                        (((int)lbl_83232468 >> 3) +
                        (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(uVar69 + 0x80 + lVar70);
                      dataCacheBlockTouch((uVar69 + 0x40 & 0x7fffffff) * 2 + lVar70);
                      dataCacheBlockTouch(uVar69 + (uVar69 & 0x7fffffff) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((uVar69 + 0x20 & 0x3fffffff) * 4 + lVar70);
                      dataCacheBlockTouch(uVar69 + (uVar69 & 0x3fffffff) * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((uVar69 + (uVar69 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                                          0x80 + lVar70);
                      dataCacheBlockTouch(((uVar69 & 0x1fffffff) * 8 - uVar69) + 0x80 + lVar70);
                      lbl_83232468 = 0;
                    }
                    lbl_83232468 = lbl_83232468 + 1;
                    uVar49 = uVar49 & 3;
                    iVar14 = (**(code **)((((uint)uVar43 & 3) * 4 + uVar49 + 0xf1) * 4 + param_2))
                                       (lVar70,uVar69,lVar40,0x20,param_2,uVar43 & 3,uVar49,1);
                    if (iVar14 != 0) {
                      fn_82CC4918(lVar70,uVar69,lVar40,0x20,uVar43 & 3,uVar49,
                                        *(undefined1 *)(param_2 + 0x23),1);
                    }
                    uVar31 = *(uint *)(puVar11 + 0x246c);
                    uVar13 = (uint)uVar18;
                    uVar69 = ZEXT48(puStack_730);
                    uVar16 = (ulonglong)uStack_72c;
                    lVar44 = (longlong)((int)uStack_780 >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar13 >> 2);
                    lVar70 = lVar44 + uVar69;
                    lVar44 = lVar44 + uVar16;
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                      uVar31 = 0;
                    }
                    uVar49 = uStack_780 & 3;
                    *(uint *)(puVar11 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar70,lVar37,uVar47 + 0x100,0x10,uVar18 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puVar11 + 0x246c);
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar44 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                      uVar31 = 0;
                    }
                    *(uint *)(puVar11 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar44,lVar37,uVar47 + 0x140,0x10,uVar18 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puVar11 + 0x246c);
                    uVar13 = (uint)uVar60;
                    lVar44 = (longlong)((int)uStack_77c >> 2) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                             (longlong)((int)uVar13 >> 2) + (ulonglong)*(ushort *)(param_2 + 0x4c);
                    lVar70 = lVar44 + uVar69;
                    lVar44 = lVar44 + uVar16;
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar70 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                      uVar31 = 0;
                    }
                    uVar49 = uStack_77c & 3;
                    *(uint *)(puVar11 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar70,lVar37,uVar47 + 0x108,0x10,uVar60 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    uVar31 = *(uint *)(puVar11 + 0x246c);
                    if (uVar31 == (((int)uVar31 >> 4) +
                                  (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0)) * 0x10) {
                      dataCacheBlockTouch(lVar44 + 0x80);
                      dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                      dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                      dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                      dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                      uVar31 = 0;
                    }
                    *(uint *)(puVar11 + 0x246c) = uVar31 + 1;
                    (**(code **)(((uVar13 & 3) * 4 + uVar49 + 0x101) * 4 + param_2))
                              (lVar44,lVar37,uVar47 + 0x148,0x10,uVar60 & 3,uVar49,
                               *(undefined1 *)(param_2 + 0x23),1);
                    iVar14 = (int)in_r0;
                    puVar27 = (undefined4 *)(iVar14 + (int)lVar40 & 0xfffffff0);
                    uVar80 = *puVar27;
                    uVar81 = puVar27[1];
                    uVar82 = puVar27[2];
                    uVar83 = puVar27[3];
                    puVar27 = (undefined4 *)(iVar14 + uVar32 & 0xfffffff0);
                    uVar92 = *puVar27;
                    uVar93 = puVar27[1];
                    uVar94 = puVar27[2];
                    uVar95 = puVar27[3];{ V16 _vt40 = vectorAverageUnsignedByte(in_vs44,in_vs45); memcpy(auVar76, &_vt40, 16); }{ V16 _vt41 = vectorAverageUnsignedByte(in_vs43,in_vs32); memcpy(auVar75, &_vt41, 16); }{ V16 _vt42 = vectorAverageUnsignedByte(in_vs39,in_vs41); memcpy(auVar74, &_vt42, 16); }{ V16 _vt43 = vectorAverageUnsignedByte(in_vs36,in_vs38); memcpy(auVar73, &_vt43, 16); }
                    puVar27 = (undefined4 *)(uVar24 + 0x50 & 0xfffffff0);
                    uVar112 = *puVar27;
                    uVar113 = puVar27[1];
                    uVar114 = puVar27[2];
                    uVar115 = puVar27[3];{ V16 _vt44 = vectorAverageUnsignedByte(in_vs33,in_vs35); memcpy(auVar79, &_vt44, 16); }
                    vectorAverageUnsignedByte(in_vs61,in_vs63);
                    puVar27 = (undefined4 *)(iVar14 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_000100a0;
                    puVar27[1] = in_register_000100a4;
                    puVar27[2] = in_register_000100a8;
                    puVar27[3] = in_vr10;{ V16 _vt45 = vectorAverageUnsignedByte(in_vs57,in_vs60); memcpy(in_vs55, &_vt45, 16); }
                    puVar27 = (undefined4 *)(uVar42 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;{ V16 _vt46 = vectorAverageUnsignedByte(in_vs56,in_vs58); memcpy(auVar77, &_vt46, 16); }
                    puVar27 = (undefined4 *)(uStack_740 + uVar42 * 2 & 0xfffffff0);
                    *puVar27 = in_register_00010050;
                    puVar27[1] = in_register_00010054;
                    puVar27[2] = in_register_00010058;
                    puVar27[3] = in_vr5;
                    puVar27 = (undefined4 *)(uStack_740 + uVar42 * 3 & 0xfffffff0);
                    *puVar27 = in_register_00010020;
                    puVar27[1] = in_register_00010024;
                    puVar27[2] = in_register_00010028;
                    puVar27[3] = in_vr2;
                    puVar27 = (undefined4 *)(uStack_740 + uVar42 * 4 & 0xfffffff0);
                    *puVar27 = in_register_000101e0;
                    puVar27[1] = in_register_000101e4;
                    puVar27[2] = in_register_000101e8;
                    puVar27[3] = in_vr30;
                    puVar27 = (undefined4 *)(uVar42 * 5 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_000101b0;
                    puVar27[1] = in_register_000101b4;
                    puVar27[2] = in_register_000101b8;
                    puVar27[3] = in_vr27;
                    puVar27 = (undefined4 *)(uVar42 * 6 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_00010170;
                    puVar27[1] = in_register_00010174;
                    puVar27[2] = in_register_00010178;
                    puVar27[3] = in_vr23;
                    puVar27 = (undefined4 *)(uVar42 * 7 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_00010160;
                    puVar27[1] = in_register_00010164;
                    puVar27[2] = in_register_00010168;
                    puVar27[3] = in_vr22;
                    iVar15 = uVar42 * 8 + uStack_740;
                    puVar27 = (undefined4 *)(uVar32 + 0x90 & 0xfffffff0);
                    uVar108 = *puVar27;
                    uVar109 = puVar27[1];
                    uVar110 = puVar27[2];
                    uVar111 = puVar27[3];{ V16 _vt47 = vectorAverageUnsignedByte(in_vs52,in_vs53); memcpy(in_vs32, &_vt47, 16); }
                    puVar27 = (undefined4 *)(iVar14 + uVar24 + 0x80 & 0xfffffff0);
                    uVar104 = *puVar27;
                    uVar105 = puVar27[1];
                    uVar106 = puVar27[2];
                    uVar107 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar32 + 0xa0 & 0xfffffff0);
                    uVar100 = *puVar27;
                    uVar101 = puVar27[1];
                    uVar102 = puVar27[2];
                    uVar103 = puVar27[3];{ V16 _vt48 = vectorAverageUnsignedByte(in_vs50,in_vs51); memcpy(in_vs48, &_vt48, 16); }
                    puVar27 = (undefined4 *)(uVar24 + 0xa0 & 0xfffffff0);
                    in_register_000100f0 = *puVar27;
                    in_register_000100f4 = puVar27[1];
                    in_register_000100f8 = puVar27[2];
                    in_vr15 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar32 + 0xb0 & 0xfffffff0);
                    uVar96 = *puVar27;
                    uVar97 = puVar27[1];
                    uVar98 = puVar27[2];
                    uVar99 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar24 + 0xb0 & 0xfffffff0);
                    uVar88 = *puVar27;
                    uVar89 = puVar27[1];
                    uVar90 = puVar27[2];
                    uVar91 = puVar27[3];
                    puVar27 = (undefined4 *)((int)&uStack_420 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar80;
                    puVar27[1] = uVar81;
                    puVar27[2] = uVar82;
                    puVar27[3] = uVar83;
                    puVar27 = (undefined4 *)(uVar24 + 0xc0 & 0xfffffff0);
                    in_register_000100a0 = *puVar27;
                    in_register_000100a4 = puVar27[1];
                    in_register_000100a8 = puVar27[2];
                    in_vr10 = puVar27[3];{ V16 _vt49 = vectorAverageUnsignedByte(in_vs47,in_vs49); memcpy(in_vs45, &_vt49, 16); }
                    puVar27 = (undefined4 *)(uVar32 + 0xc0 & 0xfffffff0);
                    in_register_000100b0 = *puVar27;
                    in_register_000100b4 = puVar27[1];
                    in_register_000100b8 = puVar27[2];
                    in_vr11 = puVar27[3];
                    vectorAverageUnsignedByte(in_vs44,in_vs46);
                    puVar27 = (undefined4 *)(uVar32 + 0xd0 & 0xfffffff0);
                    uVar84 = *puVar27;
                    uVar85 = puVar27[1];
                    uVar86 = puVar27[2];
                    uVar87 = puVar27[3];{ V16 _vt50 = vectorAverageUnsignedByte(auVar76,in_vs43); memcpy(in_vs43, &_vt50, 16); }
                    puVar27 = (undefined4 *)(uVar24 + 0xd0 & 0xfffffff0);
                    in_register_00010080 = *puVar27;
                    in_register_00010084 = puVar27[1];
                    in_register_00010088 = puVar27[2];
                    in_vr8 = puVar27[3];{ V16 _vt51 = vectorAverageUnsignedByte(auVar75,in_vs41); memcpy(in_vs42, &_vt51, 16); }
                    puVar27 = (undefined4 *)(uVar32 + 0xf0 & 0xfffffff0);
                    in_register_00010050 = *puVar27;
                    in_register_00010054 = puVar27[1];
                    in_register_00010058 = puVar27[2];
                    in_vr5 = puVar27[3];{ V16 _vt52 = vectorAverageUnsignedByte(in_vs38,in_vs39); memcpy(in_vs41, &_vt52, 16); }
                    puVar27 = (undefined4 *)(uVar42 * 8 + uStack_740 & 0xfffffff0);
                    *puVar27 = in_register_00010100;
                    puVar27[1] = in_register_00010104;
                    puVar27[2] = in_register_00010108;
                    puVar27[3] = in_vr16;
                    vectorAverageUnsignedByte(in_vs36,auVar74);
                    puVar27 = (undefined4 *)(uVar42 + iVar15 & 0xfffffff0);
                    *puVar27 = uVar80;
                    puVar27[1] = uVar81;
                    puVar27[2] = uVar82;
                    puVar27[3] = uVar83;
                    puVar27 = (undefined4 *)(uVar42 * 2 + iVar15 & 0xfffffff0);
                    *puVar27 = uVar92;
                    puVar27[1] = uVar93;
                    puVar27[2] = uVar94;
                    puVar27[3] = uVar95;
                    puVar27 = (undefined4 *)(uVar42 * 3 + iVar15 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    puVar27 = (undefined4 *)(uVar42 * 4 + iVar15 & 0xfffffff0);
                    *puVar27 = in_register_000100b0;
                    puVar27[1] = in_register_000100b4;
                    puVar27[2] = in_register_000100b8;
                    puVar27[3] = in_vr11;
                    puVar27 = (undefined4 *)(uVar42 * 5 + iVar15 & 0xfffffff0);
                    *puVar27 = in_register_000100a0;
                    puVar27[1] = in_register_000100a4;
                    puVar27[2] = in_register_000100a8;
                    puVar27[3] = in_vr10;
                    puVar27 = (undefined4 *)(uVar42 * 6 + iVar15 & 0xfffffff0);
                    *puVar27 = uVar84;
                    puVar27[1] = uVar85;
                    puVar27[2] = uVar86;
                    puVar27[3] = uVar87;
                    puVar27 = (undefined4 *)(uVar42 * 7 + iVar15 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;
                    puVar27 = (undefined4 *)((int)&uStack_4d0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100b0;
                    puVar27[1] = in_register_000100b4;
                    puVar27[2] = in_register_000100b8;
                    puVar27[3] = in_vr11;
                    puVar27 = (undefined4 *)((int)&uStack_510 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar92;
                    puVar27[1] = uVar93;
                    puVar27[2] = uVar94;
                    puVar27[3] = uVar95;
                    puVar27 = (undefined4 *)((int)&uStack_4f0 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    puVar27 = (undefined4 *)((int)&uStack_4b0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100a0;
                    puVar27[1] = in_register_000100a4;
                    puVar27[2] = in_register_000100a8;
                    puVar27[3] = in_vr10;
                    puVar27 = (undefined4 *)((int)&uStack_430 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_00010080;
                    puVar27[1] = in_register_00010084;
                    puVar27[2] = in_register_00010088;
                    puVar27[3] = in_vr8;
                    puVar27 = (undefined4 *)((int)&uStack_450 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar84;
                    puVar27[1] = uVar85;
                    puVar27[2] = uVar86;
                    puVar27[3] = uVar87;{ V16 _vt53 = vectorAverageUnsignedByte(in_vs33,in_vs63); memcpy(in_vs61, &_vt53, 16); }
                    puVar27 = (undefined4 *)(uVar24 + 0x140 & 0xfffffff0);
                    in_register_000101e0 = *puVar27;
                    in_register_000101e4 = puVar27[1];
                    in_register_000101e8 = puVar27[2];
                    in_vr30 = puVar27[3];
                    vectorAverageUnsignedByte(auVar79,in_vs60);
                    puVar27 = (undefined4 *)((int)&uStack_4d0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000101b0;
                    puVar27[1] = in_register_000101b4;
                    puVar27[2] = in_register_000101b8;
                    puVar27[3] = in_vr27;
                    puVar27 = (undefined4 *)((int)&uStack_420 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar112;
                    puVar27[1] = uVar113;
                    puVar27[2] = uVar114;
                    puVar27[3] = uVar115;{ V16 _vt54 = vectorAverageUnsignedByte(in_vs58,in_vs51); memcpy(in_vs50, &_vt54, 16); }
                    puVar27 = (undefined4 *)(iVar14 + uVar32 + 0x100 & 0xfffffff0);
                    in_register_00010180 = *puVar27;
                    in_register_00010184 = puVar27[1];
                    in_register_00010188 = puVar27[2];
                    in_vr24 = puVar27[3];{ V16 _vt55 = vectorAverageUnsignedByte(in_vs35,in_vs57); memcpy(in_vs49, &_vt55, 16); }
                    puVar27 = (undefined4 *)(iVar14 + uVar24 + 0x100 & 0xfffffff0);
                    in_register_00010170 = *puVar27;
                    in_register_00010174 = puVar27[1];
                    in_register_00010178 = puVar27[2];
                    in_vr23 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar32 + 0x150 & 0xfffffff0);
                    in_register_00010160 = *puVar27;
                    in_register_00010164 = puVar27[1];
                    in_register_00010168 = puVar27[2];
                    in_vr22 = puVar27[3];{ V16 _vt56 = vectorAverageUnsignedByte(in_vs55,in_vs56); memcpy(in_vs53, &_vt56, 16); }{ V16 _vt57 = vectorAverageUnsignedByte(in_vs52,auVar77); memcpy(in_vs47, &_vt57, 16); }
                    puVar27 = (undefined4 *)(uVar24 + 0x160 & 0xfffffff0);
                    in_register_00010020 = *puVar27;
                    in_register_00010024 = puVar27[1];
                    in_register_00010028 = puVar27[2];
                    in_vr2 = puVar27[3];
                    puVar27 = (undefined4 *)(uVar32 + 0x160 & 0xfffffff0);
                    in_register_00010100 = *puVar27;
                    in_register_00010104 = puVar27[1];
                    in_register_00010108 = puVar27[2];
                    in_vr16 = puVar27[3];
                    puVar27 = (undefined4 *)((int)&uStack_4f0 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar104;
                    puVar27[1] = uVar105;
                    puVar27[2] = uVar106;
                    puVar27[3] = uVar107;{ V16 _vt58 = vectorAverageUnsignedByte(auVar73,in_vs48); memcpy(in_vs46, &_vt58, 16); }
                    puVar27 = (undefined4 *)((int)&uStack_330 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar108;
                    puVar27[1] = uVar109;
                    puVar27[2] = uVar110;
                    puVar27[3] = uVar111;
                    puVar27 = (undefined4 *)((int)&uStack_510 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar100;
                    puVar27[1] = uVar101;
                    puVar27[2] = uVar102;
                    puVar27[3] = uVar103;
                    puVar27 = (undefined4 *)((int)&uStack_4b0 + iVar14 & 0xfffffff0);
                    *puVar27 = in_register_000100f0;
                    puVar27[1] = in_register_000100f4;
                    puVar27[2] = in_register_000100f8;
                    puVar27[3] = in_vr15;
                    puVar27 = (undefined4 *)((int)&uStack_450 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar96;
                    puVar27[1] = uVar97;
                    puVar27[2] = uVar98;
                    puVar27[3] = uVar99;{ V16 _vt59 = vectorAverageUnsignedByte(in_vs45,in_vs32); memcpy(in_vs44, &_vt59, 16); }
                    *puStack_76c = uStack_330;
                    puStack_76c[1] = uStack_32c;
                    *(undefined4 *)((int)puStack_76c + iVar4) = uStack_328;
                    *(undefined4 *)((int)puStack_76c + iVar4 + 4) = uStack_324;
                    puVar27 = (undefined4 *)((int)&uStack_430 + iVar14 & 0xfffffff0);
                    *puVar27 = uVar88;
                    puVar27[1] = uVar89;
                    puVar27[2] = uVar90;
                    puVar27[3] = uVar91;
                    puStack_76c = (undefined4 *)((int)puStack_76c + iVar4 * 2);
                    *puStack_76c = uStack_420;
                    puStack_76c[1] = uStack_41c;
                    puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                    *puStack_76c = uStack_418;
                    puStack_76c[1] = uStack_414;
                    puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                    *puStack_76c = uStack_510;
                    puStack_76c[1] = uStack_50c;
                    puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                    *puStack_76c = uStack_508;
                    puStack_76c[1] = uStack_504;
                    puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                    *puStack_76c = uStack_4f0;
                    puStack_76c[1] = uStack_4ec;
                    *(undefined4 *)((int)puStack_76c + iVar4) = uStack_4e8;
                    ((undefined4 *)((int)puStack_76c + iVar4))[1] = uStack_4e4;
                    *puStack_768 = uStack_4d0;
                    puStack_768[1] = uStack_4cc;
                    *(undefined4 *)((int)puStack_768 + iVar4) = uStack_4c8;
                    *(undefined4 *)((int)puStack_768 + iVar4 + 4) = uStack_4c4;
                    puStack_768 = (undefined4 *)((int)puStack_768 + iVar4 * 2);
                    *puStack_768 = uStack_4b0;
                    puStack_768[1] = uStack_4ac;
                    puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                    *puStack_768 = uStack_4a8;
                    puStack_768[1] = uStack_4a4;
                    puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                    *puStack_768 = uStack_450;
                    puStack_768[1] = uStack_44c;
                    puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                    *puStack_768 = uStack_448;
                    puStack_768[1] = uStack_444;
                    puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                    *puStack_768 = uStack_430;
                    puStack_768[1] = uStack_42c;
                    *(undefined4 *)((int)puStack_768 + iVar4) = uStack_428;
                    ((undefined4 *)((int)puStack_768 + iVar4))[1] = uStack_424;
                    goto LAB_830fe488;
                  }
                  goto LAB_830fe55c;
                }
                iVar19 = (int)uVar13 >> 1;
                if (uVar24 != 2) {
                  if (uVar24 == 3) {
                    if (bVar9) {
                      uVar24 = *(uint *)(param_2 + 0x6b4);
                      iVar41 = *(int *)(param_2 + 0x6b8);
                      iVar30 = *(int *)(param_2 + 0x6ac);
                      iVar22 = *(int *)(param_2 + 0x6b0);
                      auStack_5a0[4] = 0;
                      auStack_5a0[5] = 0;
                      auStack_5a0[2] = 0;
                      auStack_5a0[3] = 0;
                      auStack_5a0[0] = 0;
                      auStack_5a0[1] = 0;
                      lVar37 = ((longlong)(int)uVar13 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      lVar70 = 0;
                      if ((iVar14 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                        iVar14 = (int)((lVar37 - 2U & 0xffffffff) << 1);
                        lVar70 = 1;
                        auStack_5a0[0] = *(undefined2 *)(iVar14 + iVar41);
                        auStack_5a0[1] = *(undefined2 *)(iVar14 + uVar24);
                      }
                      if (uStack_778 == 0) {
                        uVar18 = lVar37 + ((ulonglong)CONCAT24(uVar25,uVar13) & 0x7fffffff) * -2;
                        if ((puStack_774[iVar19 * -6] & 0x20000) != 0) {
                          iVar14 = (int)((uVar18 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar14 + iVar41);
                          *(undefined2 *)((int)auStack_5a0 + iVar21 + 2) =
                               *(undefined2 *)(iVar14 + uVar24);
                          *(undefined2 *)((int)auStack_5a0 + iVar21) = uVar20;
                        }
                        if ((iVar19 != 1) &&
                           (uVar60 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                           ((puStack_774 + iVar19 * -6)[(int)uVar60 * 0xc + -6] & 0x20000) != 0)) {
                          iVar14 = (int)(((uVar60 * 4 + uVar18) - 2 & 0xffffffff) << 1);
                          iVar19 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar14 + iVar41);
                          *(undefined2 *)((int)auStack_5a0 + iVar19 + 2) =
                               *(undefined2 *)(iVar14 + uVar24);
                          *(undefined2 *)((int)auStack_5a0 + iVar19) = uVar20;
                        }
                      }
                      iVar19 = 0;
                      iVar14 = 0;
                      iVar21 = (int)lVar70;
                      if (iVar21 == 0) {
LAB_830f80e0:
                        uStack_614 = 0;
                      }
                      else {
                        puVar27 = &uStack_294;
                        puVar58 = &uStack_2b4;
                        puVar34 = auStack_5a0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar21 == 0) goto LAB_830f80e0;
                        if ((iVar19 == 3) || (iVar14 == 3)) {
                          uStack_614 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5a0[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_5a0[0] >>
                                                               0x10)) >> 0xf & auStack_5a0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_5a0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_5a0[1] >>
                                                               0x10)) >> 0xf & auStack_5a0[1]);
                        }
                        else if (iVar19 < iVar14) {
                          uStack_614 = uStack_290;
                        }
                        else {
                          uStack_614 = uStack_2b0;
                        }
                      }
                      lVar37 = ((ulonglong)uVar31 & 0x7fffffff) << 1;
                      uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                      uVar60 = (ulonglong)uStack_770;
                      iVar19 = (int)lVar37;
                      uVar28 = ((((U64)(uStack_614) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar18 = (ulonglong)(short)uVar28;
                      *(ushort *)(uVar24 + iVar19 + 2) = uVar28;
                      *(ushort *)(uVar24 + iVar19) = uVar28;
                      auStack_580[4] = 0;
                      auStack_580[5] = 0;
                      lVar70 = 0;
                      auStack_580[2] = 0;
                      auStack_580[3] = 0;
                      auStack_580[0] = 0;
                      auStack_580[1] = 0;
                      sVar36 = ((((U64)(uStack_614) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) +
                                *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      uVar32 = (uint)sVar36;
                      *(short *)(iVar41 + iVar19 + 2) = sVar36;
                      *(short *)(iVar41 + iVar19) = sVar36;
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      iVar14 = (int)(uint)uVar25 >> 1;
                      lVar44 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if ((uStack_770 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                        iVar21 = (int)((lVar44 - 2U & 0xffffffff) << 1);
                        lVar70 = 1;
                        auStack_580[0] = *(undefined2 *)(iVar21 + iVar22);
                        auStack_580[1] = *(undefined2 *)(iVar21 + iVar30);
                      }
                      if (uStack_778 == 0) {
                        uVar69 = lVar44 + (ulonglong)uVar25 * -2;
                        if ((puStack_774[iVar14 * -6] & 0x20000) != 0) {
                          iVar21 = (int)((uVar69 & 0xffffffff) << 1);
                          iVar33 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar21 + iVar22);
                          *(undefined2 *)((int)auStack_580 + iVar33 + 2) =
                               *(undefined2 *)(iVar21 + iVar30);
                          *(undefined2 *)((int)auStack_580 + iVar33) = uVar20;
                        }
                        if ((iVar14 != 1) &&
                           (uVar45 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1,
                           ((puStack_774 + iVar14 * -6)[(int)uVar45 * 0xc + -6] & 0x20000) != 0)) {
                          iVar14 = (int)(((uVar45 * 4 + uVar69) - 2 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar14 + iVar22);
                          *(undefined2 *)((int)auStack_580 + iVar21 + 2) =
                               *(undefined2 *)(iVar14 + iVar30);
                          *(undefined2 *)((int)auStack_580 + iVar21) = uVar20;
                        }
                      }
                      iVar21 = 0;
                      iVar14 = 0;
                      iVar33 = (int)lVar70;
                      if (iVar33 == 0) {
LAB_830f83f0:
                        uStack_62c = 0;
                      }
                      else {
                        puVar27 = &uStack_254;
                        puVar58 = &uStack_274;
                        puVar34 = auStack_580;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar21 = iVar21 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar33 == 0) goto LAB_830f83f0;
                        if ((iVar21 == 3) || (iVar14 == 3)) {
                          uStack_764 = -(int)(short)auStack_580[0];
                          uStack_62c = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_580[0]
                                                                >> 0x10) ^
                                                       (ushort)(uStack_764 >> 0x10)) >> 0xf &
                                                auStack_580[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_580[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_580[1] >>
                                                               0x10)) >> 0xf & auStack_580[1]);
                          lStack_548 = lVar37;
                          uStack_540 = (ulonglong)uVar24;
                        }
                        else if (iVar21 < iVar14) {
                          uStack_62c = uStack_250;
                        }
                        else {
                          uStack_62c = uStack_270;
                        }
                      }
                      auStack_6d0[4] = 0;
                      auStack_6d0[5] = 0;
                      auStack_6d0[2] = 0;
                      auStack_6d0[3] = 0;
                      auStack_6d0[0] = 0;
                      auStack_6d0[1] = 0;
                      *(undefined2 *)(iVar30 + iVar19 + 2) = (((U64)(uStack_62c) >> 16) & 0xFFFF);
                      lVar70 = 0;
                      *(undefined2 *)(iVar30 + iVar19) = (((U64)(uStack_62c) >> 16) & 0xFFFF);
                      *(undefined2 *)(iVar22 + iVar19 + 2) = (((U64)(uStack_62c) >> 0) & 0xFFFF);
                      *(undefined2 *)(iVar22 + iVar19) = (((U64)(uStack_62c) >> 0) & 0xFFFF);
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      uVar69 = (ulonglong)uVar25;
                      iVar14 = (int)(uint)uVar25 >> 1;
                      lVar37 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if (uStack_770 != 0) {
                        uVar45 = lVar37 - 2;
                        if ((puStack_774[-6] & 0x20000) != 0) {
                          lVar70 = 1;
                          if ((puStack_774[-6] & 0x700) == 0) {
                            iVar19 = (int)((uVar45 & 0xffffffff) << 1);
                            auStack_6d0[0] = *(undefined2 *)(iVar41 + iVar19);
                            auStack_6d0[1] = *(undefined2 *)(uVar24 + iVar19);
                          }
                          else {
                            iVar19 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                            auStack_6d0[0] = *(undefined2 *)(iVar41 + iVar19);
                            auStack_6d0[1] = *(undefined2 *)(uVar24 + iVar19);
                          }
                        }
                      }
                      if (uStack_778 == 0) {
                        uVar45 = lVar37 + uVar69 * -2;
                        uVar49 = puStack_774[iVar14 * -6];
                        if ((uVar49 & 0x20000) != 0) {
                          iVar19 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          if ((uVar49 & 0x700) == 0) {
                            iVar21 = (int)((uVar45 & 0xffffffff) << 1);
                          }
                          else {
                            iVar21 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                          }
                          uVar20 = *(undefined2 *)(iVar41 + iVar21);
                          *(undefined2 *)((int)auStack_6d0 + iVar19 + 2) =
                               *(undefined2 *)(uVar24 + iVar21);
                          *(undefined2 *)((int)auStack_6d0 + iVar19) = uVar20;
                        }
                        if (iVar14 != 1) {
                          uVar43 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1;
                          uVar45 = (uVar43 * 4 + uVar45) - 2;
                          uVar49 = (puStack_774 + iVar14 * -6)[(int)uVar43 * 0xc + -6];
                          if ((uVar49 & 0x20000) != 0) {
                            if ((uVar49 & 0x700) == 0) {
                              iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                              iVar19 = (int)(lVar70 << 2);
                              uVar20 = *(undefined2 *)(iVar41 + iVar14);
                              *(undefined2 *)((int)auStack_6d0 + iVar19 + 2) =
                                   *(undefined2 *)(uVar24 + iVar14);
                              *(undefined2 *)((int)auStack_6d0 + iVar19) = uVar20;
                            }
                            else {
                              iVar19 = (int)(lVar70 << 2);
                              iVar14 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar41 + iVar14);
                              *(undefined2 *)((int)auStack_6d0 + iVar19 + 2) =
                                   *(undefined2 *)(uVar24 + iVar14);
                              *(undefined2 *)((int)auStack_6d0 + iVar19) = uVar20;
                            }
                            lVar70 = lVar70 + 1;
                          }
                        }
                      }
                      iVar19 = 0;
                      iVar14 = 0;
                      iVar21 = (int)lVar70;
                      if (iVar21 == 0) {
LAB_830f86d8:
                        uStack_604 = 0;
                      }
                      else {
                        puVar27 = &uStack_214;
                        puVar58 = &uStack_234;
                        puVar34 = auStack_6d0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar21 == 0) goto LAB_830f86d8;
                        if ((iVar19 == 3) || (iVar14 == 3)) {
                          uStack_604 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_6d0[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6d0[0] >>
                                                               0x10)) >> 0xf & auStack_6d0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_6d0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6d0[1] >>
                                                               0x10)) >> 0xf & auStack_6d0[1]);
                        }
                        else if (iVar19 < iVar14) {
                          uStack_604 = uStack_210;
                        }
                        else {
                          uStack_604 = uStack_230;
                        }
                      }
                      iVar14 = (uVar13 + uVar31) * 2;
                      auStack_6b0[4] = 0;
                      auStack_6b0[5] = 0;
                      uVar80 = *(undefined4 *)((uVar13 + uVar31) * 4 + iVar15);
                      auStack_6b0[2] = 0;
                      auStack_6b0[3] = 0;
                      auStack_6b0[0] = 0;
                      auStack_6b0[1] = 0;
                      uVar26 = (*(short *)(param_2 + 0x3e) + (((U64)(uStack_604) >> 16) & 0xFFFF) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar69 = (ulonglong)(short)uVar26;
                      *(ushort *)(uVar24 + iVar14 + 2) = uVar26;
                      *(ushort *)(uVar24 + iVar14) = uVar26;
                      lVar70 = 0;
                      sVar17 = ((short)((uint)uVar80 >> 0x10) + *(short *)(param_2 + 0x40) +
                                (((U64)(uStack_604) >> 0) & 0xFFFF) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      uVar24 = (uint)sVar17;
                      *(short *)(iVar41 + iVar14 + 2) = sVar17;
                      *(short *)(iVar41 + iVar14) = sVar17;
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      uVar45 = (ulonglong)uVar25;
                      iVar15 = (int)(uint)uVar25 >> 1;
                      lVar37 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if (uStack_770 != 0) {
                        uVar43 = lVar37 - 2;
                        if ((puStack_774[-6] & 0x20000) != 0) {
                          lVar70 = 1;
                          if ((puStack_774[-6] & 0x700) == 0) {
                            iVar19 = (int)((uVar43 & 0xffffffff) << 1);
                            auStack_6b0[0] = *(undefined2 *)(iVar22 + iVar19);
                            auStack_6b0[1] = *(undefined2 *)(iVar30 + iVar19);
                          }
                          else {
                            iVar19 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                            auStack_6b0[0] = *(undefined2 *)(iVar22 + iVar19);
                            auStack_6b0[1] = *(undefined2 *)(iVar30 + iVar19);
                          }
                        }
                      }
                      if (uStack_778 == 0) {
                        uVar43 = lVar37 + uVar45 * -2;
                        uVar31 = puStack_774[iVar15 * -6];
                        if ((uVar31 & 0x20000) != 0) {
                          lVar37 = lVar70 << 2;
                          lVar70 = lVar70 + 1;
                          iVar19 = (int)lVar37;
                          if ((uVar31 & 0x700) == 0) {
                            iVar41 = (int)((uVar43 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar22 + iVar41);
                            *(undefined2 *)((int)auStack_6b0 + iVar19 + 2) =
                                 *(undefined2 *)(iVar30 + iVar41);
                            *(undefined2 *)((int)auStack_6b0 + iVar19) = uVar20;
                          }
                          else {
                            iVar41 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar22 + iVar41);
                            *(undefined2 *)((int)auStack_6b0 + iVar19 + 2) =
                                 *(undefined2 *)(iVar30 + iVar41);
                            *(undefined2 *)((int)auStack_6b0 + iVar19) = uVar20;
                          }
                        }
                        if (iVar15 != 1) {
                          uVar47 = ((~((longlong)iVar15 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar15 - 1U <= uVar60) & 1;
                          uVar43 = (uVar47 * 4 + uVar43) - 2;
                          uVar31 = (puStack_774 + iVar15 * -6)[(int)uVar47 * 0xc + -6];
                          if ((uVar31 & 0x20000) != 0) {
                            lVar37 = lVar70 << 2;
                            lVar70 = lVar70 + 1;
                            iVar15 = (int)lVar37;
                            if ((uVar31 & 0x700) == 0) {
                              iVar19 = (int)((uVar43 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar22 + iVar19);
                              *(undefined2 *)((int)auStack_6b0 + iVar15 + 2) =
                                   *(undefined2 *)(iVar30 + iVar19);
                              *(undefined2 *)((int)auStack_6b0 + iVar15) = uVar20;
                            }
                            else {
                              iVar19 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar22 + iVar19);
                              *(undefined2 *)((int)auStack_6b0 + iVar15 + 2) =
                                   *(undefined2 *)(iVar30 + iVar19);
                              *(undefined2 *)((int)auStack_6b0 + iVar15) = uVar20;
                            }
                          }
                        }
                      }
                      iVar19 = 0;
                      iVar15 = 0;
                      iVar41 = (int)lVar70;
                      if (iVar41 == 0) {
LAB_830f8a40:
                        uStack_624 = 0;
                      }
                      else {
                        puVar27 = &uStack_1d4;
                        puVar58 = &uStack_1f4;
                        puVar34 = auStack_6b0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar15 = iVar15 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar41 == 0) goto LAB_830f8a40;
                        if ((iVar19 == 3) || (iVar15 == 3)) {
                          uStack_624 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_6b0[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6b0[0] >>
                                                               0x10)) >> 0xf & auStack_6b0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_6b0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6b0[1] >>
                                                               0x10)) >> 0xf & auStack_6b0[1]);
                        }
                        else if (iVar19 < iVar15) {
                          uStack_624 = uStack_1d0;
                        }
                        else {
                          uStack_624 = uStack_1f0;
                        }
                      }
                      uVar31 = (uint)sVar17;
                      puStack_750 = (undefined4 *)(int)(short)uVar26;
                      uVar47 = ((ulonglong)uVar32 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                      uStack_780 = (uint)sVar36;
                      *(undefined2 *)(iVar30 + iVar14 + 2) = (((U64)(uStack_624) >> 16) & 0xFFFF);
                      *(undefined2 *)(iVar30 + iVar14) = (((U64)(uStack_624) >> 16) & 0xFFFF);
                      uVar60 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | uVar60;
                      uStack_77c = (uint)(short)uVar28;
                      lVar70 = (longlong)(int)uVar42;
                      ((undefined2 *)(iVar22 + iVar14))[1] = (((U64)(uStack_624) >> 0) & 0xFFFF);
                      uVar43 = uVar60 & 0x3ffffff;
                      lVar37 = uVar43 * 0x40;
                      *(undefined2 *)(iVar22 + iVar14) = (((U64)(uStack_624) >> 0) & 0xFFFF);
                      uStack_73c = ((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28
                                   >> 1;
                      uVar59 = (ulonglong)(int)uStack_73c;
                      uVar53 = (ulonglong)*(uint *)(param_2 + 0x11c);
                      uVar45 = (ulonglong)*(uint *)(puStack_728 + (uVar32 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)uStack_780 >> 1) & 0xfffffff8);
                      uVar50 = (ulonglong)*(uint *)(param_2 + 0x124);
                      uStack_778 = (uint)uVar45;
                      uStack_74c = uVar31;
                      if (((uVar47 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 - uVar47) + uVar43 * -0x40) & 0x80008000) != 0) {
                        fn_830EF918(&uStack_77c,&uStack_780,lVar37,uVar53);
                        uVar18 = (ulonglong)uStack_77c;
                        uVar32 = uStack_780;
                      }
                      uVar47 = ((ulonglong)uVar24 & 0xffff) << 0x10 | uVar69 & 0xffffffff0000ffff;
                      lVar37 = lVar37 + 0x40000;
                      uStack_780 = ((int)(((int)(short)uVar26 & 3U) + 1) >> 2) + (int)(short)uVar26
                                   >> 1;
                      uVar38 = (ulonglong)(int)uStack_780;
                      uVar43 = (ulonglong)*(uint *)(puVar10 + (uVar24 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)uVar31 >> 1) & 0xfffffff8);
                      uStack_77c = (uint)uVar43;
                      if (((uVar47 + ((ulonglong)uVar26 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 - uVar47) - lVar37) & 0x80008000) != 0) {
                        fn_830EF918(&puStack_750,&uStack_74c,lVar37,uVar53);
                        uVar69 = ZEXT48(puStack_750);
                        uVar24 = uStack_74c;
                      }
                      uVar60 = uVar60 & 0x7ffffff;
                      lVar37 = uVar60 * 0x20;
                      uVar47 = (uVar45 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                      if (((uVar47 + (uVar59 & 0x8000) * -2 + lVar37 + 0x3b003b |
                           (uVar50 - uVar47) + uVar60 * -0x20) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_73c,&uStack_778,lVar37,uVar50);
                        uVar59 = (ulonglong)uStack_73c;
                        uVar45 = (ulonglong)uStack_778;
                      }
                      lVar37 = lVar37 + 0x40000;
                      uVar60 = (uVar43 & 0xffff) << 0x10 | uVar38 & 0xffffffff0000ffff;
                      if (((uVar60 + (uVar38 & 0x8000) * -2 + lVar37 + 0x3b003b |
                           (uVar50 - uVar60) - lVar37) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_780,&uStack_77c,lVar37,uVar50);
                        uVar38 = (ulonglong)uStack_780;
                        uVar43 = (ulonglong)uStack_77c;
                      }
                      lVar37 = (longlong)((int)uVar32 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar18 >> 2) + (ulonglong)uStack_734;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar60 = (ulonglong)uStack_740;
                      uVar32 = uVar32 & 3;
                      iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar32 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,uVar60,lVar40,param_2,uVar18 & 3,uVar32,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,uVar60,lVar40,uVar18 & 3,uVar32,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      lVar37 = (longlong)(((int)uVar24 >> 2) + 1) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar69 >> 2) + (ulonglong)uStack_734;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar24 = uVar24 & 3;
                      iVar14 = (**(code **)((((uint)uVar69 & 3) * 4 + uVar24 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,lVar70 + uVar60,lVar40,param_2,uVar69 & 3,
                                          uVar24,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,lVar70 + uVar60,lVar40,uVar69 & 3,uVar24,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      puVar10 = puStack_758;
                      puVar27 = puStack_76c;
                      uVar31 = (uint)uVar59;
                      uVar60 = ZEXT48(puStack_730);
                      uVar16 = (ulonglong)uStack_72c;
                      uVar24 = *(uint *)(puStack_758 + 0x246c);
                      lVar37 = (longlong)((int)uVar45 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                               (longlong)((int)uVar31 >> 2);
                      lVar40 = uVar60 + lVar37;
                      lVar37 = uVar16 + lVar37;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar45 = uVar45 & 3;
                      *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar45 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,puStack_76c,lVar70,uVar59 & 3,uVar45,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      puVar58 = puStack_768;
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar45 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,puStack_768,lVar70,uVar59 & 3,uVar45,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      uVar31 = (uint)uVar38;
                      uVar25 = *(ushort *)(param_2 + 0x4c);
                      lVar37 = (longlong)((int)uVar43 >> 2) * (longlong)(int)(uint)uVar25 +
                               (longlong)((int)uVar31 >> 2);
                      lVar40 = uVar60 + uVar25 + lVar37;
                      lVar37 = uVar16 + uVar25 + lVar37;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar43 = uVar43 & 3;
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,(int)puVar27 + iVar4,lVar70,uVar38 & 3,uVar43,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,(int)puVar58 + iVar4,lVar70,uVar38 & 3,uVar43,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      goto LAB_830fe488;
                    }
                  }
                  else if (uVar24 == 4) {
                    if (bVar7) {
                      uVar24 = *(uint *)(param_2 + 0x6ac);
                      iVar41 = *(int *)(param_2 + 0x6b0);
                      iVar30 = *(int *)(param_2 + 0x6b4);
                      iVar22 = *(int *)(param_2 + 0x6b8);
                      auStack_5d0[4] = 0;
                      auStack_5d0[5] = 0;
                      auStack_5d0[2] = 0;
                      auStack_5d0[3] = 0;
                      auStack_5d0[0] = 0;
                      auStack_5d0[1] = 0;
                      lVar37 = ((longlong)(int)uVar13 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      lVar70 = 0;
                      if ((iVar14 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                        iVar14 = (int)((lVar37 - 2U & 0xffffffff) << 1);
                        lVar70 = 1;
                        auStack_5d0[0] = *(undefined2 *)(iVar41 + iVar14);
                        auStack_5d0[1] = *(undefined2 *)(uVar24 + iVar14);
                      }
                      if (uStack_778 == 0) {
                        uVar18 = lVar37 + ((ulonglong)CONCAT24(uVar25,uVar13) & 0x7fffffff) * -2;
                        if ((puStack_774[iVar19 * -6] & 0x20000) != 0) {
                          iVar14 = (int)((uVar18 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar41 + iVar14);
                          *(undefined2 *)((int)auStack_5d0 + iVar21 + 2) =
                               *(undefined2 *)(uVar24 + iVar14);
                          *(undefined2 *)((int)auStack_5d0 + iVar21) = uVar20;
                        }
                        if ((iVar19 != 1) &&
                           (uVar60 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                           ((puStack_774 + iVar19 * -6)[(int)uVar60 * 0xc + -6] & 0x20000) != 0)) {
                          iVar14 = (int)(((uVar60 * 4 + uVar18) - 2 & 0xffffffff) << 1);
                          iVar19 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar41 + iVar14);
                          *(undefined2 *)((int)auStack_5d0 + iVar19 + 2) =
                               *(undefined2 *)(uVar24 + iVar14);
                          *(undefined2 *)((int)auStack_5d0 + iVar19) = uVar20;
                        }
                      }
                      iVar19 = 0;
                      iVar14 = 0;
                      iVar21 = (int)lVar70;
                      if (iVar21 == 0) {
LAB_830f6d04:
                        uStack_5f8 = 0;
                      }
                      else {
                        puVar27 = &uStack_164;
                        puVar58 = &uStack_224;
                        puVar34 = auStack_5d0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar21 == 0) goto LAB_830f6d04;
                        if ((iVar19 == 3) || (iVar14 == 3)) {
                          uStack_5f8 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5d0[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_5d0[0] >>
                                                               0x10)) >> 0xf & auStack_5d0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_5d0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_5d0[1] >>
                                                               0x10)) >> 0xf & auStack_5d0[1]);
                        }
                        else if (iVar19 < iVar14) {
                          uStack_5f8 = uStack_160;
                        }
                        else {
                          uStack_5f8 = uStack_220;
                        }
                      }
                      lVar37 = ((ulonglong)uVar31 & 0x7fffffff) << 1;
                      uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                      uVar60 = (ulonglong)uStack_770;
                      iVar19 = (int)lVar37;
                      uVar28 = (*(short *)(param_2 + 0x3e) + (((U64)(uStack_5f8) >> 16) & 0xFFFF) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar18 = (ulonglong)(short)uVar28;
                      *(ushort *)(uVar24 + iVar19 + 2) = uVar28;
                      *(ushort *)(uVar24 + iVar19) = uVar28;
                      auStack_5c0[4] = 0;
                      auStack_5c0[5] = 0;
                      auStack_5c0[2] = 0;
                      auStack_5c0[3] = 0;
                      auStack_5c0[0] = 0;
                      auStack_5c0[1] = 0;
                      lVar70 = 0;
                      sVar36 = ((short)((uint)uVar80 >> 0x10) + *(short *)(param_2 + 0x40) +
                                (((U64)(uStack_5f8) >> 0) & 0xFFFF) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      uVar32 = (uint)sVar36;
                      *(short *)(iVar41 + iVar19 + 2) = sVar36;
                      *(short *)(iVar41 + iVar19) = sVar36;
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      iVar14 = (int)(uint)uVar25 >> 1;
                      lVar44 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if ((uStack_770 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                        iVar21 = (int)((lVar44 - 2U & 0xffffffff) << 1);
                        lVar70 = 1;
                        auStack_5c0[0] = *(undefined2 *)(iVar22 + iVar21);
                        auStack_5c0[1] = *(undefined2 *)(iVar30 + iVar21);
                      }
                      if (uStack_778 == 0) {
                        uVar69 = lVar44 + (ulonglong)uVar25 * -2;
                        if ((puStack_774[iVar14 * -6] & 0x20000) != 0) {
                          iVar21 = (int)((uVar69 & 0xffffffff) << 1);
                          iVar33 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar22 + iVar21);
                          *(undefined2 *)((int)auStack_5c0 + iVar33 + 2) =
                               *(undefined2 *)(iVar30 + iVar21);
                          *(undefined2 *)((int)auStack_5c0 + iVar33) = uVar20;
                        }
                        if ((iVar14 != 1) &&
                           (uVar45 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1,
                           ((puStack_774 + iVar14 * -6)[(int)uVar45 * 0xc + -6] & 0x20000) != 0)) {
                          iVar14 = (int)(((uVar45 * 4 + uVar69) - 2 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar22 + iVar14);
                          *(undefined2 *)((int)auStack_5c0 + iVar21 + 2) =
                               *(undefined2 *)(iVar30 + iVar14);
                          *(undefined2 *)((int)auStack_5c0 + iVar21) = uVar20;
                        }
                      }
                      iVar33 = 0;
                      iVar14 = 0;
                      iVar21 = (int)lVar70;
                      if (iVar21 == 0) {
LAB_830f7018:
                        uStack_63c = 0;
                      }
                      else {
                        puVar27 = &uStack_104;
                        puVar58 = &uStack_204;
                        puVar34 = auStack_5c0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar33 = iVar33 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar21 == 0) goto LAB_830f7018;
                        if ((iVar33 == 3) || (iVar14 == 3)) {
                          uStack_764 = -(int)(short)auStack_5c0[0];
                          uStack_63c = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5c0[0]
                                                                >> 0x10) ^
                                                       (ushort)(uStack_764 >> 0x10)) >> 0xf &
                                                auStack_5c0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_5c0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_5c0[1] >>
                                                               0x10)) >> 0xf & auStack_5c0[1]);
                          lStack_548 = lVar37;
                          uStack_540 = (ulonglong)uVar24;
                        }
                        else if (iVar33 < iVar14) {
                          uStack_63c = uStack_100;
                        }
                        else {
                          uStack_63c = uStack_200;
                        }
                      }
                      auStack_710[4] = 0;
                      auStack_710[5] = 0;
                      auStack_710[2] = 0;
                      auStack_710[3] = 0;
                      auStack_710[0] = 0;
                      auStack_710[1] = 0;
                      *(undefined2 *)(iVar30 + iVar19 + 2) = (((U64)(uStack_63c) >> 16) & 0xFFFF);
                      lVar70 = 0;
                      *(undefined2 *)(iVar30 + iVar19) = (((U64)(uStack_63c) >> 16) & 0xFFFF);
                      *(undefined2 *)(iVar22 + iVar19 + 2) = (((U64)(uStack_63c) >> 0) & 0xFFFF);
                      *(undefined2 *)(iVar22 + iVar19) = (((U64)(uStack_63c) >> 0) & 0xFFFF);
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      uVar69 = (ulonglong)uVar25;
                      iVar14 = (int)(uint)uVar25 >> 1;
                      lVar37 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if (uStack_770 != 0) {
                        uVar45 = lVar37 - 2;
                        if ((puStack_774[-6] & 0x20000) != 0) {
                          lVar70 = 1;
                          if ((puStack_774[-6] & 0x700) == 0) {
                            iVar19 = (int)((uVar45 & 0xffffffff) << 1);
                            auStack_710[0] = *(undefined2 *)(iVar41 + iVar19);
                            auStack_710[1] = *(undefined2 *)(uVar24 + iVar19);
                          }
                          else {
                            iVar19 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                            auStack_710[0] = *(undefined2 *)(iVar41 + iVar19);
                            auStack_710[1] = *(undefined2 *)(uVar24 + iVar19);
                          }
                        }
                      }
                      if (uStack_778 == 0) {
                        uVar45 = lVar37 + uVar69 * -2;
                        uVar49 = puStack_774[iVar14 * -6];
                        if ((uVar49 & 0x20000) != 0) {
                          iVar19 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          if ((uVar49 & 0x700) == 0) {
                            iVar21 = (int)((uVar45 & 0xffffffff) << 1);
                          }
                          else {
                            iVar21 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                          }
                          uVar20 = *(undefined2 *)(iVar41 + iVar21);
                          *(undefined2 *)((int)auStack_710 + iVar19 + 2) =
                               *(undefined2 *)(uVar24 + iVar21);
                          *(undefined2 *)((int)auStack_710 + iVar19) = uVar20;
                        }
                        if (iVar14 != 1) {
                          uVar43 = ((~((longlong)iVar14 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar14 - 1U <= uVar60) & 1;
                          uVar45 = (uVar43 * 4 + uVar45) - 2;
                          uVar49 = (puStack_774 + iVar14 * -6)[(int)uVar43 * 0xc + -6];
                          if ((uVar49 & 0x20000) != 0) {
                            if ((uVar49 & 0x700) == 0) {
                              iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                              iVar19 = (int)(lVar70 << 2);
                              uVar20 = *(undefined2 *)(iVar41 + iVar14);
                              *(undefined2 *)((int)auStack_710 + iVar19 + 2) =
                                   *(undefined2 *)(uVar24 + iVar14);
                              *(undefined2 *)((int)auStack_710 + iVar19) = uVar20;
                            }
                            else {
                              iVar19 = (int)(lVar70 << 2);
                              iVar14 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar41 + iVar14);
                              *(undefined2 *)((int)auStack_710 + iVar19 + 2) =
                                   *(undefined2 *)(uVar24 + iVar14);
                              *(undefined2 *)((int)auStack_710 + iVar19) = uVar20;
                            }
                            lVar70 = lVar70 + 1;
                          }
                        }
                      }
                      iVar19 = 0;
                      iVar14 = 0;
                      iVar21 = (int)lVar70;
                      if (iVar21 == 0) {
LAB_830f7300:
                        uStack_5fc = 0;
                      }
                      else {
                        puVar27 = &uStack_314;
                        puVar58 = &uStack_1e4;
                        puVar34 = auStack_710;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar14 = iVar14 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar21 == 0) goto LAB_830f7300;
                        if ((iVar19 == 3) || (iVar14 == 3)) {
                          uStack_5fc = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_710[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_710[0] >>
                                                               0x10)) >> 0xf & auStack_710[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_710[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_710[1] >>
                                                               0x10)) >> 0xf & auStack_710[1]);
                        }
                        else if (iVar19 < iVar14) {
                          uStack_5fc = uStack_310;
                        }
                        else {
                          uStack_5fc = uStack_1e0;
                        }
                      }
                      iVar14 = (uVar13 + uVar31) * 2;
                      auStack_6f0[4] = 0;
                      auStack_6f0[5] = 0;
                      uVar80 = *(undefined4 *)((uVar13 + uVar31) * 4 + iVar15);
                      auStack_6f0[2] = 0;
                      auStack_6f0[3] = 0;
                      auStack_6f0[0] = 0;
                      auStack_6f0[1] = 0;
                      uVar26 = ((((U64)(uStack_5fc) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar69 = (ulonglong)(short)uVar26;
                      *(ushort *)(uVar24 + iVar14 + 2) = uVar26;
                      *(ushort *)(uVar24 + iVar14) = uVar26;
                      lVar70 = 0;
                      sVar17 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_5fc) >> 0) & 0xFFFF) +
                                *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      puVar27 = (undefined4 *)(int)sVar17;
                      *(short *)(iVar41 + iVar14 + 2) = sVar17;
                      *(short *)(iVar41 + iVar14) = sVar17;
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      uVar45 = (ulonglong)uVar25;
                      iVar15 = (int)(uint)uVar25 >> 1;
                      lVar37 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if (uStack_770 != 0) {
                        uVar43 = lVar37 - 2;
                        if ((puStack_774[-6] & 0x20000) != 0) {
                          lVar70 = 1;
                          if ((puStack_774[-6] & 0x700) == 0) {
                            iVar19 = (int)((uVar43 & 0xffffffff) << 1);
                            auStack_6f0[0] = *(undefined2 *)(iVar19 + iVar22);
                            auStack_6f0[1] = *(undefined2 *)(iVar19 + iVar30);
                          }
                          else {
                            iVar19 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                            auStack_6f0[0] = *(undefined2 *)(iVar19 + iVar22);
                            auStack_6f0[1] = *(undefined2 *)(iVar19 + iVar30);
                          }
                        }
                      }
                      if (uStack_778 == 0) {
                        uVar43 = lVar37 + uVar45 * -2;
                        uVar24 = puStack_774[iVar15 * -6];
                        if ((uVar24 & 0x20000) != 0) {
                          lVar37 = lVar70 << 2;
                          lVar70 = lVar70 + 1;
                          iVar19 = (int)lVar37;
                          if ((uVar24 & 0x700) == 0) {
                            iVar41 = (int)((uVar43 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar41 + iVar22);
                            *(undefined2 *)((int)auStack_6f0 + iVar19 + 2) =
                                 *(undefined2 *)(iVar41 + iVar30);
                            *(undefined2 *)((int)auStack_6f0 + iVar19) = uVar20;
                          }
                          else {
                            iVar41 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                            uVar20 = *(undefined2 *)(iVar41 + iVar22);
                            *(undefined2 *)((int)auStack_6f0 + iVar19 + 2) =
                                 *(undefined2 *)(iVar41 + iVar30);
                            *(undefined2 *)((int)auStack_6f0 + iVar19) = uVar20;
                          }
                        }
                        if (iVar15 != 1) {
                          uVar47 = ((~((longlong)iVar15 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar15 - 1U <= uVar60) & 1;
                          uVar43 = (uVar47 * 4 + uVar43) - 2;
                          uVar24 = (puStack_774 + iVar15 * -6)[(int)uVar47 * 0xc + -6];
                          if ((uVar24 & 0x20000) != 0) {
                            lVar37 = lVar70 << 2;
                            lVar70 = lVar70 + 1;
                            iVar15 = (int)lVar37;
                            if ((uVar24 & 0x700) == 0) {
                              iVar19 = (int)((uVar43 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar19 + iVar22);
                              *(undefined2 *)((int)auStack_6f0 + iVar15 + 2) =
                                   *(undefined2 *)(iVar19 + iVar30);
                              *(undefined2 *)((int)auStack_6f0 + iVar15) = uVar20;
                            }
                            else {
                              iVar19 = (int)((uVar43 + uVar45 & 0xffffffff) << 1);
                              uVar20 = *(undefined2 *)(iVar19 + iVar22);
                              *(undefined2 *)((int)auStack_6f0 + iVar15 + 2) =
                                   *(undefined2 *)(iVar19 + iVar30);
                              *(undefined2 *)((int)auStack_6f0 + iVar15) = uVar20;
                            }
                          }
                        }
                      }
                      iVar19 = 0;
                      iVar15 = 0;
                      iVar41 = (int)lVar70;
                      if (iVar41 == 0) {
LAB_830f7668:
                        uStack_634 = 0;
                      }
                      else {
                        puVar58 = &uStack_2d4;
                        puVar23 = &uStack_2f4;
                        puVar34 = auStack_6f0;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar19 = iVar19 + 1;
                            puVar23 = puVar23 + 1;
                            *puVar23 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar15 = iVar15 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar41 == 0) goto LAB_830f7668;
                        if ((iVar19 == 3) || (iVar15 == 3)) {
                          uStack_634 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_6f0[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6f0[0] >>
                                                               0x10)) >> 0xf & auStack_6f0[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_6f0[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_6f0[1] >>
                                                               0x10)) >> 0xf & auStack_6f0[1]);
                        }
                        else if (iVar19 < iVar15) {
                          uStack_634 = uStack_2d0;
                        }
                        else {
                          uStack_634 = uStack_2f0;
                        }
                      }
                      *(undefined2 *)(iVar30 + iVar14 + 2) = (((U64)(uStack_634) >> 16) & 0xFFFF);
                      uVar60 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | uVar60;
                      puVar58 = (undefined4 *)(int)sVar17;
                      *(undefined2 *)(iVar30 + iVar14) = (((U64)(uStack_634) >> 16) & 0xFFFF);
                      uStack_72c = (uint)(short)uVar26;
                      ((undefined2 *)(iVar22 + iVar14))[1] = (((U64)(uStack_634) >> 0) & 0xFFFF);
                      lVar70 = (longlong)(int)uVar42;
                      *(undefined2 *)(iVar22 + iVar14) = (((U64)(uStack_634) >> 0) & 0xFFFF);
                      uStack_780 = (uint)sVar36;
                      uStack_77c = (uint)(short)uVar28;
                      uVar47 = ((ulonglong)uVar32 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                      uVar43 = uVar60 & 0x3ffffff;
                      lVar37 = uVar43 * 0x40;
                      uStack_734 = ((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28
                                   >> 1;
                      uVar59 = (ulonglong)(int)uStack_734;
                      uVar53 = (ulonglong)*(uint *)(param_2 + 0x11c);
                      uVar50 = (ulonglong)*(uint *)(param_2 + 0x124);
                      uVar45 = (ulonglong)*(uint *)(puStack_728 + (uVar32 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)uStack_780 >> 1) & 0xfffffff8);
                      uStack_778 = (uint)uVar45;
                      puStack_730 = puVar58;
                      if (((uVar47 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 - uVar47) + uVar43 * -0x40) & 0x80008000) != 0) {
                        fn_830EF918(&uStack_77c,&uStack_780,lVar37,uVar53);
                        uVar18 = (ulonglong)uStack_77c;
                        uVar32 = uStack_780;
                      }
                      uVar47 = (ZEXT48(puVar27) & 0xffff) << 0x10 | uVar69 & 0xffffffff0000ffff;
                      lVar37 = lVar37 + 0x40000;
                      uStack_780 = ((int)(((int)(short)uVar26 & 3U) + 1) >> 2) + (int)(short)uVar26
                                   >> 1;
                      uVar38 = (ulonglong)(int)uStack_780;
                      uVar43 = (ulonglong)*(uint *)(puVar10 + ((uint)puVar27 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)puVar58 >> 1) & 0xfffffff8);
                      uStack_77c = (uint)uVar43;
                      if (((uVar47 + ((ulonglong)uVar26 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 - uVar47) - lVar37) & 0x80008000) != 0) {
                        fn_830EF918(&uStack_72c,&puStack_730,lVar37,uVar53);
                        uVar69 = (ulonglong)uStack_72c;
                        puVar27 = puStack_730;
                      }
                      uVar60 = uVar60 & 0x7ffffff;
                      lVar37 = uVar60 * 0x20;
                      uVar47 = (uVar45 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                      if (((uVar47 + (uVar59 & 0x8000) * -2 + lVar37 + 0x3b003b |
                           (uVar50 - uVar47) + uVar60 * -0x20) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_734,&uStack_778,lVar37,uVar50);
                        uVar59 = (ulonglong)uStack_734;
                        uVar45 = (ulonglong)uStack_778;
                      }
                      lVar37 = lVar37 + 0x40000;
                      uVar60 = (uVar43 & 0xffff) << 0x10 | uVar38 & 0xffffffff0000ffff;
                      if (((uVar60 + (uVar38 & 0x8000) * -2 + lVar37 + 0x3b003b |
                           (uVar50 - uVar60) - lVar37) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_780,&uStack_77c,lVar37,uVar50);
                        uVar38 = (ulonglong)uStack_780;
                        uVar43 = (ulonglong)uStack_77c;
                      }
                      lVar37 = (longlong)((int)uVar32 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar18 >> 2) + (ulonglong)uStack_73c;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar60 = (ulonglong)uStack_740;
                      uVar32 = uVar32 & 3;
                      iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar32 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,uVar60,lVar40,param_2,uVar18 & 3,uVar32,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,uVar60,lVar40,uVar18 & 3,uVar32,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      lVar37 = (longlong)(((int)puVar27 >> 2) + 1) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar69 >> 2) + (ulonglong)uStack_73c;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar24 = (uint)puVar27 & 3;
                      iVar14 = (**(code **)((((uint)uVar69 & 3) * 4 + uVar24 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,lVar70 + uVar60,lVar40,param_2,uVar69 & 3,
                                          uVar24,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,lVar70 + uVar60,lVar40,uVar69 & 3,uVar24,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      puVar10 = puStack_758;
                      puVar27 = puStack_76c;
                      uVar31 = (uint)uVar59;
                      uVar60 = (ulonglong)uStack_74c;
                      uVar16 = ZEXT48(puStack_750);
                      uVar24 = *(uint *)(puStack_758 + 0x246c);
                      lVar37 = (longlong)((int)uVar45 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                               (longlong)((int)uVar31 >> 2);
                      lVar40 = lVar37 + uVar60;
                      lVar37 = lVar37 + uVar16;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar45 = uVar45 & 3;
                      *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar45 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,puStack_76c,lVar70,uVar59 & 3,uVar45,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      puVar58 = puStack_768;
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar45 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,puStack_768,lVar70,uVar59 & 3,uVar45,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar31 = (uint)uVar38;
                      lVar37 = (longlong)((int)uVar43 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                               (longlong)((int)uVar31 >> 2) + (ulonglong)*(ushort *)(param_2 + 0x4c)
                      ;
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      lVar40 = lVar37 + uVar60;
                      lVar37 = lVar37 + uVar16;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar43 = uVar43 & 3;
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,iVar4 + (int)puVar27,lVar70,uVar38 & 3,uVar43,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,iVar4 + (int)puVar58,lVar70,uVar38 & 3,uVar43,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      goto LAB_830fe488;
                    }
                  }
                  else if (uVar24 != 5) {
                    if (uVar24 == 6) {
                      if ((bVar7) && (bVar9)) {
                        iVar41 = *(int *)(param_2 + 0x6ac);
                        iVar30 = *(int *)(param_2 + 0x6b0);
                        auStack_5f0[4] = 0;
                        auStack_5f0[5] = 0;
                        auStack_5f0[2] = 0;
                        auStack_5f0[3] = 0;
                        auStack_5f0[0] = 0;
                        auStack_5f0[1] = 0;
                        lVar37 = ((longlong)(int)uVar13 * (longlong)(int)uStack_748 + uVar60 &
                                 0x7fffffff) * 2;
                        lVar70 = 0;
                        if ((iVar14 != 0) && ((puVar71[-6] & 0x20000) != 0)) {
                          iVar22 = (int)((lVar37 - 2U & 0xffffffff) << 1);
                          lVar70 = 1;
                          auStack_5f0[0] = *(undefined2 *)(iVar22 + iVar30);
                          auStack_5f0[1] = *(undefined2 *)(iVar22 + iVar41);
                        }
                        if (uStack_778 == 0) {
                          uVar18 = lVar37 + ((ulonglong)CONCAT24(uVar25,uVar13) & 0x7fffffff) * -2;
                          if ((puVar71[iVar19 * -6] & 0x20000) != 0) {
                            iVar22 = (int)((uVar18 & 0xffffffff) << 1);
                            iVar21 = (int)(lVar70 << 2);
                            lVar70 = lVar70 + 1;
                            uVar20 = *(undefined2 *)(iVar22 + iVar30);
                            *(undefined2 *)((int)auStack_5f0 + iVar21 + 2) =
                                 *(undefined2 *)(iVar22 + iVar41);
                            *(undefined2 *)((int)auStack_5f0 + iVar21) = uVar20;
                          }
                          if ((iVar19 != 1) &&
                             (uVar69 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                       (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                             ((puVar71 + iVar19 * -6)[(int)uVar69 * 0xc + -6] & 0x20000) != 0)) {
                            iVar19 = (int)(((uVar69 * 4 + uVar18) - 2 & 0xffffffff) << 1);
                            iVar22 = (int)(lVar70 << 2);
                            lVar70 = lVar70 + 1;
                            uVar20 = *(undefined2 *)(iVar19 + iVar30);
                            *(undefined2 *)((int)auStack_5f0 + iVar22 + 2) =
                                 *(undefined2 *)(iVar19 + iVar41);
                            *(undefined2 *)((int)auStack_5f0 + iVar22) = uVar20;
                          }
                        }
                        iVar30 = 0;
                        iVar19 = 0;
                        iVar22 = (int)lVar70;
                        if (iVar22 == 0) {
LAB_830fc9c0:
                          uStack_630 = 0;
                        }
                        else {
                          puVar27 = &uStack_304;
                          puVar58 = &uStack_b4;
                          puVar34 = auStack_5f0;
                          do {
                            if ((*puVar34 & 4) == 0) {
                              iVar30 = iVar30 + 1;
                              puVar58 = puVar58 + 1;
                              *puVar58 = *(undefined4 *)puVar34;
                            }
                            else {
                              iVar19 = iVar19 + 1;
                              puVar27 = puVar27 + 1;
                              *puVar27 = *(undefined4 *)puVar34;
                            }
                            puVar34 = puVar34 + 2;
                            lVar70 = lVar70 + -1;
                          } while (lVar70 != 0);
                          if (iVar22 == 0) goto LAB_830fc9c0;
                          if ((iVar30 == 3) || (iVar19 == 3)) {
                            uStack_630 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_5f0[0]
                                                                  >> 0x10) ^
                                                         (ushort)((uint)-(int)(short)auStack_5f0[0]
                                                                 >> 0x10)) >> 0xf & auStack_5f0[0],
                                                  (short)((ushort)((uint)-(int)(short)auStack_5f0[1]
                                                                  >> 0x10) ^
                                                         (ushort)((uint)-(int)(short)auStack_5f0[1]
                                                                 >> 0x10)) >> 0xf & auStack_5f0[1]);
                          }
                          else if (iVar30 < iVar19) {
                            uStack_630 = uStack_300;
                          }
                          else {
                            uStack_630 = uStack_b0;
                          }
                        }
                        auStack_650[4] = 0;
                        auStack_650[5] = 0;
                        uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                        iVar30 = (uVar13 + uVar31) * 2;
                        auStack_650[2] = 0;
                        auStack_650[3] = 0;
                        auStack_650[0] = 0;
                        auStack_650[1] = 0;
                        uVar28 = ((((U64)(uStack_630) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                                 *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                        iVar21 = uVar31 * 2;
                        uVar18 = (ulonglong)(short)uVar28;
                        *(ushort *)(iVar30 + iVar41 + 2) = uVar28;
                        lVar37 = 0;
                        *(ushort *)(iVar30 + *(int *)(param_2 + 0x6ac)) = uVar28;
                        *(ushort *)(iVar21 + *(int *)(param_2 + 0x6ac) + 2) = uVar28;
                        *(ushort *)(iVar21 + *(int *)(param_2 + 0x6ac)) = uVar28;
                        sVar36 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_630) >> 0) & 0xFFFF) +
                                  *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                                 *(short *)(param_2 + 0x40);
                        uVar24 = (uint)sVar36;
                        *(short *)(iVar30 + *(int *)(param_2 + 0x6b0) + 2) = sVar36;
                        *(short *)(iVar30 + *(int *)(param_2 + 0x6b0)) = sVar36;
                        *(short *)(*(int *)(param_2 + 0x6b0) + iVar21 + 2) = sVar36;
                        *(short *)(*(int *)(param_2 + 0x6b0) + iVar21) = sVar36;
                        uVar25 = *(ushort *)(param_2 + 0x32);
                        uVar69 = (ulonglong)uVar25;
                        iVar19 = *(int *)(param_2 + 0x6b4);
                        iVar41 = *(int *)(param_2 + 0x6b8);
                        iVar22 = (int)(uint)uVar25 >> 1;
                        lVar70 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                                 0x7fffffff) * 2;
                        if (iVar14 != 0) {
                          uVar45 = lVar70 - 2;
                          if ((puStack_774[-6] & 0x20000) != 0) {
                            lVar37 = 1;
                            if ((puStack_774[-6] & 0x700) != 0) {
                              uVar45 = uVar45 + uVar69;
                            }
                            iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                            auStack_650[0] = *(undefined2 *)(iVar14 + iVar41);
                            auStack_650[1] = *(undefined2 *)(iVar14 + iVar19);
                          }
                        }
                        if (uStack_778 == 0) {
                          uVar45 = lVar70 + uVar69 * -2;
                          uVar32 = puStack_774[iVar22 * -6];
                          if ((uVar32 & 0x20000) != 0) {
                            iVar14 = (int)(lVar37 << 2);
                            lVar37 = lVar37 + 1;
                            if ((uVar32 & 0x700) == 0) {
                              iVar33 = (int)((uVar45 & 0xffffffff) << 1);
                            }
                            else {
                              iVar33 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                            }
                            uVar20 = *(undefined2 *)(iVar33 + iVar41);
                            *(undefined2 *)((int)auStack_650 + iVar14 + 2) =
                                 *(undefined2 *)(iVar33 + iVar19);
                            *(undefined2 *)((int)auStack_650 + iVar14) = uVar20;
                          }
                          if (iVar22 != 1) {
                            uVar60 = ((~((longlong)iVar22 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar22 - 1U <= uVar60) & 1;
                            uVar45 = (uVar60 * 4 + uVar45) - 2;
                            uVar32 = (puStack_774 + iVar22 * -6)[(int)uVar60 * 0xc + -6];
                            if ((uVar32 & 0x20000) != 0) {
                              iVar14 = (int)(lVar37 << 2);
                              lVar37 = lVar37 + 1;
                              if ((uVar32 & 0x700) == 0) {
                                iVar22 = (int)((uVar45 & 0xffffffff) << 1);
                              }
                              else {
                                iVar22 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                              }
                              uVar20 = *(undefined2 *)(iVar22 + iVar41);
                              *(undefined2 *)((int)auStack_650 + iVar14 + 2) =
                                   *(undefined2 *)(iVar22 + iVar19);
                              *(undefined2 *)((int)auStack_650 + iVar14) = uVar20;
                            }
                          }
                        }
                        iVar22 = 0;
                        iVar41 = 0;
                        iVar14 = (int)lVar37;
                        if (iVar14 == 0) {
LAB_830fcd24:
                          uStack_628 = 0;
                        }
                        else {
                          puVar27 = &uStack_2e4;
                          puVar58 = &uStack_144;
                          puVar34 = auStack_650;
                          do {
                            if ((*puVar34 & 4) == 0) {
                              iVar22 = iVar22 + 1;
                              puVar58 = puVar58 + 1;
                              *puVar58 = *(undefined4 *)puVar34;
                            }
                            else {
                              iVar41 = iVar41 + 1;
                              puVar27 = puVar27 + 1;
                              *puVar27 = *(undefined4 *)puVar34;
                            }
                            puVar34 = puVar34 + 2;
                            lVar37 = lVar37 + -1;
                          } while (lVar37 != 0);
                          if (iVar14 == 0) goto LAB_830fcd24;
                          if ((iVar22 == 3) || (iVar41 == 3)) {
                            uStack_628 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_650[0]
                                                                  >> 0x10) ^
                                                         (ushort)((uint)-(int)(short)auStack_650[0]
                                                                 >> 0x10)) >> 0xf & auStack_650[0],
                                                  (short)((ushort)((uint)-(int)(short)auStack_650[1]
                                                                  >> 0x10) ^
                                                         (ushort)((uint)-(int)(short)auStack_650[1]
                                                                 >> 0x10)) >> 0xf & auStack_650[1]);
                          }
                          else {
                            uStack_628 = uStack_2e0;
                            if (iVar41 <= iVar22) {
                              uStack_628 = uStack_140;
                            }
                          }
                        }
                        uVar80 = *(undefined4 *)((uVar13 + uVar31) * 4 + iVar15);
                        uStack_75c = (uint)(short)uVar28;
                        uVar25 = ((((U64)(uStack_628) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                                 *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                        uVar59 = (ulonglong)(short)uVar25;
                        *(ushort *)(iVar30 + iVar19 + 2) = uVar25;
                        lVar70 = (longlong)(int)uVar42;
                        uStack_754 = (uint)(short)uVar25;
                        uVar43 = ((ulonglong)uVar24 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                        uVar45 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | (ulonglong)uStack_770;
                        uVar69 = uVar45 & 0x3ffffff;
                        lVar37 = uVar69 * 0x40;
                        uStack_744 = ((int)(((int)(short)uVar28 & 3U) + 1) >> 2) +
                                     (int)(short)uVar28 >> 1;
                        uVar47 = (ulonglong)(int)uStack_744;
                        uStack_764 = (uint)sVar36;
                        *(ushort *)(iVar30 + *(int *)(param_2 + 0x6b4)) = uVar25;
                        *(ushort *)(iVar21 + *(int *)(param_2 + 0x6b4) + 2) = uVar25;
                        *(ushort *)(iVar21 + *(int *)(param_2 + 0x6b4)) = uVar25;
                        sVar17 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_628) >> 0) & 0xFFFF) +
                                  *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                                 *(short *)(param_2 + 0x40);
                        uVar31 = (uint)sVar17;
                        *(short *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                        uStack_760 = (uint)sVar17;
                        *(short *)(iVar30 + *(int *)(param_2 + 0x6b8)) = sVar17;
                        *(short *)(iVar21 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                        *(short *)(iVar21 + *(int *)(param_2 + 0x6b8)) = sVar17;
                        uVar53 = (ulonglong)*(uint *)(param_2 + 0x11c);
                        uVar50 = (ulonglong)*(uint *)(param_2 + 0x124);
                        uVar60 = (ulonglong)*(uint *)(puStack_728 + (uVar24 & 0xf) * 4) +
                                 ((ulonglong)(uint)((int)sVar36 >> 1) & 0xfffffff8);
                        uStack_780 = (uint)uVar60;
                        if (((uVar43 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar37 + 0x730073 |
                             (uVar53 - uVar43) + uVar69 * -0x40) & 0x80008000) != 0) {
                          fn_830EF918(&uStack_75c,&uStack_764,lVar37,uVar53);
                          uVar18 = (ulonglong)uStack_75c;
                          uVar24 = uStack_764;
                        }
                        uVar43 = ((ulonglong)uVar31 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                        lVar37 = lVar37 + 0x40000;
                        uStack_764 = ((int)(((int)(short)uVar25 & 3U) + 1) >> 2) +
                                     (int)(short)uVar25 >> 1;
                        uVar38 = (ulonglong)(int)uStack_764;
                        uVar69 = (ulonglong)*(uint *)(puVar10 + (uVar31 & 0xf) * 4) +
                                 ((ulonglong)(uint)((int)sVar17 >> 1) & 0xfffffff8);
                        uStack_75c = (uint)uVar69;
                        if (((uVar43 + ((ulonglong)uVar25 & 0x8000) * -2 + lVar37 + 0x730073 |
                             (uVar53 - uVar43) - lVar37) & 0x80008000) != 0) {
                          fn_830EF918(&uStack_754,&uStack_760,lVar37,uVar53);
                          uVar59 = (ulonglong)uStack_754;
                          uVar31 = uStack_760;
                        }
                        uVar45 = uVar45 & 0x7ffffff;
                        lVar37 = uVar45 * 0x20;
                        uVar43 = (uVar60 & 0xffff) << 0x10 | uVar47 & 0xffffffff0000ffff;
                        if (((uVar43 + (uVar47 & 0x8000) * -2 + lVar37 + 0x3b003b |
                             (uVar50 - uVar43) + uVar45 * -0x20) & 0x80008000) != 0) {
                          fn_830EF9E8(&uStack_744,&uStack_780,lVar37,uVar50);
                          uVar47 = (ulonglong)uStack_744;
                          uVar60 = (ulonglong)uStack_780;
                        }
                        lVar37 = lVar37 + 0x40000;
                        uVar45 = (uVar69 & 0xffff) << 0x10 | uVar38 & 0xffffffff0000ffff;
                        if (((uVar45 + (uVar38 & 0x8000) * -2 + lVar37 + 0x3b003b |
                             (uVar50 - uVar45) - lVar37) & 0x80008000) != 0) {
                          fn_830EF9E8(&uStack_764,&uStack_75c,lVar37,uVar50);
                          uVar38 = (ulonglong)uStack_764;
                          uVar69 = (ulonglong)uStack_75c;
                        }
                        lVar37 = (longlong)((int)uVar24 >> 2) *
                                 (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                                 (longlong)((int)(uint)uVar18 >> 2) + (ulonglong)uStack_73c;
                        if (lbl_83232468 ==
                            (((int)lbl_83232468 >> 3) +
                            (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                          dataCacheBlockTouch(lVar37 + 0x80);
                          dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                          dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                          dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                          dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                          dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                          lbl_83232468 = 0;
                        }
                        lbl_83232468 = lbl_83232468 + 1;
                        uVar45 = (ulonglong)uStack_740;
                        uVar24 = uVar24 & 3;
                        iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar24 + 0xf1) * 4 + param_2
                                             ))(lVar37,lVar40,uVar45,lVar40,param_2,uVar18 & 3,
                                                uVar24,1);
                        if (iVar14 != 0) {
                          fn_82CC4918(lVar37,lVar40,uVar45,lVar40,uVar18 & 3,uVar24,
                                            *(undefined1 *)(param_2 + 0x23),1);
                        }
                        lVar37 = (longlong)(((int)uVar31 >> 2) + 1) *
                                 (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                                 (longlong)((int)(uint)uVar59 >> 2) + (ulonglong)uStack_734;
                        if (lbl_83232468 ==
                            (((int)lbl_83232468 >> 3) +
                            (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                          dataCacheBlockTouch(lVar37 + 0x80);
                          dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                          dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                          dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                          dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                          dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                          lbl_83232468 = 0;
                        }
                        lbl_83232468 = lbl_83232468 + 1;
                        uVar31 = uVar31 & 3;
                        iVar14 = (**(code **)((((uint)uVar59 & 3) * 4 + uVar31 + 0xf1) * 4 + param_2
                                             ))(lVar37,lVar40,lVar70 + uVar45,lVar40,param_2,
                                                uVar59 & 3,uVar31,1);
                        if (iVar14 != 0) {
                          fn_82CC4918(lVar37,lVar40,lVar70 + uVar45,lVar40,uVar59 & 3,uVar31,
                                            *(undefined1 *)(param_2 + 0x23),1);
                        }
                        puVar10 = puStack_758;
                        puVar27 = puStack_76c;
                        uVar31 = (uint)uVar47;
                        uVar24 = *(uint *)(puStack_758 + 0x246c);
                        lVar37 = (longlong)((int)uVar60 >> 2) *
                                 (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                                 (longlong)((int)uVar31 >> 2);
                        lVar40 = (ulonglong)uStack_74c + lVar37;
                        lVar37 = ZEXT48(puStack_750) + lVar37;
                        if (uVar24 == (((int)uVar24 >> 4) +
                                      (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                          dataCacheBlockTouch(lVar40 + 0x80);
                          dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                          dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                          uVar24 = 0;
                        }
                        uVar60 = uVar60 & 3;
                        *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                        (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                                  (lVar40,lVar70,puStack_76c,lVar70,uVar47 & 3,uVar60,
                                   *(undefined1 *)(param_2 + 0x23),1);
                        puVar58 = puStack_768;
                        uVar24 = *(uint *)(puVar10 + 0x246c);
                        if (uVar24 == (((int)uVar24 >> 4) +
                                      (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                          dataCacheBlockTouch(lVar37 + 0x80);
                          dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                          dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                          uVar24 = 0;
                        }
                        *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                        (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                                  (lVar37,lVar70,puStack_768,lVar70,uVar47 & 3,uVar60,
                                   *(undefined1 *)(param_2 + 0x23),1);
                        uVar24 = *(uint *)(puVar10 + 0x246c);
                        uVar31 = (uint)uVar38;
                        uVar25 = *(ushort *)(param_2 + 0x4c);
                        lVar37 = (longlong)((int)uVar69 >> 2) * (longlong)(int)(uint)uVar25 +
                                 (longlong)((int)uVar31 >> 2);
                        lVar40 = ZEXT48(puStack_730) + lVar37 + (ulonglong)uVar25;
                        lVar37 = (ulonglong)uStack_72c + lVar37 + (ulonglong)uVar25;
                        if (uVar24 == (((int)uVar24 >> 4) +
                                      (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                          dataCacheBlockTouch(lVar40 + 0x80);
                          dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                          dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                          dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                          uVar24 = 0;
                        }
                        uVar69 = uVar69 & 3;
                        *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                        (**(code **)(((uVar31 & 3) * 4 + (int)uVar69 + 0x101) * 4 + param_2))
                                  (lVar40,lVar70,(int)puVar27 + iVar4,lVar70,uVar38 & 3,uVar69,
                                   *(undefined1 *)(param_2 + 0x23),1);
                        uVar24 = *(uint *)(puVar10 + 0x246c);
                        if (uVar24 == (((int)uVar24 >> 4) +
                                      (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                          dataCacheBlockTouch(lVar37 + 0x80);
                          dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                          dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                          dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                          dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                          uVar24 = 0;
                        }
                        *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                        (**(code **)(((uVar31 & 3) * 4 + (int)uVar69 + 0x101) * 4 + param_2))
                                  (lVar37,lVar70,(int)puVar58 + iVar4,lVar70,uVar38 & 3,uVar69,
                                   *(undefined1 *)(param_2 + 0x23),1);
                        goto LAB_830fe488;
                      }
                    }
                    else if ((bVar7) && (bVar9)) {
                      iVar41 = *(int *)(param_2 + 0x6b4);
                      iVar30 = *(int *)(param_2 + 0x6b8);
                      auStack_570[4] = 0;
                      auStack_570[5] = 0;
                      auStack_570[2] = 0;
                      auStack_570[3] = 0;
                      auStack_570[0] = 0;
                      auStack_570[1] = 0;
                      lVar37 = ((longlong)(int)uVar13 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      lVar70 = 0;
                      if ((iVar14 != 0) && ((puVar71[-6] & 0x20000) != 0)) {
                        iVar22 = (int)((lVar37 - 2U & 0xffffffff) << 1);
                        lVar70 = 1;
                        auStack_570[0] = *(undefined2 *)(iVar30 + iVar22);
                        auStack_570[1] = *(undefined2 *)(iVar41 + iVar22);
                      }
                      if (uStack_778 == 0) {
                        uVar18 = lVar37 + ((ulonglong)CONCAT24(uVar25,uVar13) & 0x7fffffff) * -2;
                        if ((puVar71[iVar19 * -6] & 0x20000) != 0) {
                          iVar22 = (int)((uVar18 & 0xffffffff) << 1);
                          iVar21 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar30 + iVar22);
                          *(undefined2 *)((int)auStack_570 + iVar21 + 2) =
                               *(undefined2 *)(iVar41 + iVar22);
                          *(undefined2 *)((int)auStack_570 + iVar21) = uVar20;
                        }
                        if ((iVar19 != 1) &&
                           (uVar69 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                     (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                           ((puVar71 + iVar19 * -6)[(int)uVar69 * 0xc + -6] & 0x20000) != 0)) {
                          iVar19 = (int)(((uVar69 * 4 + uVar18) - 2 & 0xffffffff) << 1);
                          iVar22 = (int)(lVar70 << 2);
                          lVar70 = lVar70 + 1;
                          uVar20 = *(undefined2 *)(iVar30 + iVar19);
                          *(undefined2 *)((int)auStack_570 + iVar22 + 2) =
                               *(undefined2 *)(iVar41 + iVar19);
                          *(undefined2 *)((int)auStack_570 + iVar22) = uVar20;
                        }
                      }
                      iVar30 = 0;
                      iVar19 = 0;
                      iVar22 = (int)lVar70;
                      if (iVar22 == 0) {
LAB_830fd854:
                        uStack_620 = 0;
                      }
                      else {
                        puVar27 = &uStack_2c4;
                        puVar58 = &uStack_1c4;
                        puVar34 = auStack_570;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar30 = iVar30 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar19 = iVar19 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar70 = lVar70 + -1;
                        } while (lVar70 != 0);
                        if (iVar22 == 0) goto LAB_830fd854;
                        if ((iVar30 == 3) || (iVar19 == 3)) {
                          uStack_620 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_570[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_570[0] >>
                                                               0x10)) >> 0xf & auStack_570[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_570[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_570[1] >>
                                                               0x10)) >> 0xf & auStack_570[1]);
                        }
                        else if (iVar30 < iVar19) {
                          uStack_620 = uStack_2c0;
                        }
                        else {
                          uStack_620 = uStack_1c0;
                        }
                      }
                      auStack_720[4] = 0;
                      auStack_720[5] = 0;
                      uVar80 = *(undefined4 *)(uVar31 * 4 + iVar15);
                      iVar30 = (uVar13 + uVar31) * 2;
                      auStack_720[2] = 0;
                      auStack_720[3] = 0;
                      auStack_720[0] = 0;
                      auStack_720[1] = 0;
                      uVar28 = ((((U64)(uStack_620) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar18 = (ulonglong)(short)uVar28;
                      *(ushort *)(iVar30 + iVar41 + 2) = uVar28;
                      iVar21 = uVar31 * 2;
                      lVar37 = 0;
                      *(ushort *)(iVar30 + *(int *)(param_2 + 0x6b4)) = uVar28;
                      *(ushort *)(iVar21 + *(int *)(param_2 + 0x6b4) + 2) = uVar28;
                      *(ushort *)(iVar21 + *(int *)(param_2 + 0x6b4)) = uVar28;
                      sVar36 = ((((U64)(uStack_620) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) +
                                *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      uVar24 = (uint)sVar36;
                      *(short *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = sVar36;
                      *(short *)(iVar30 + *(int *)(param_2 + 0x6b8)) = sVar36;
                      *(short *)(iVar21 + *(int *)(param_2 + 0x6b8) + 2) = sVar36;
                      *(short *)(iVar21 + *(int *)(param_2 + 0x6b8)) = sVar36;
                      uVar25 = *(ushort *)(param_2 + 0x32);
                      uVar69 = (ulonglong)uVar25;
                      iVar19 = *(int *)(param_2 + 0x6ac);
                      iVar41 = *(int *)(param_2 + 0x6b0);
                      iVar22 = (int)(uint)uVar25 >> 1;
                      lVar70 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                               0x7fffffff) * 2;
                      if (iVar14 != 0) {
                        uVar45 = lVar70 - 2;
                        if ((puStack_774[-6] & 0x20000) != 0) {
                          lVar37 = 1;
                          if ((puStack_774[-6] & 0x700) != 0) {
                            uVar45 = uVar45 + uVar69;
                          }
                          iVar14 = (int)((uVar45 & 0xffffffff) << 1);
                          auStack_720[0] = *(undefined2 *)(iVar41 + iVar14);
                          auStack_720[1] = *(undefined2 *)(iVar19 + iVar14);
                        }
                      }
                      if (uStack_778 == 0) {
                        uVar45 = lVar70 + uVar69 * -2;
                        uVar32 = puStack_774[iVar22 * -6];
                        if ((uVar32 & 0x20000) != 0) {
                          iVar14 = (int)(lVar37 << 2);
                          lVar37 = lVar37 + 1;
                          if ((uVar32 & 0x700) == 0) {
                            iVar33 = (int)((uVar45 & 0xffffffff) << 1);
                          }
                          else {
                            iVar33 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                          }
                          uVar20 = *(undefined2 *)(iVar41 + iVar33);
                          *(undefined2 *)((int)auStack_720 + iVar14 + 2) =
                               *(undefined2 *)(iVar19 + iVar33);
                          *(undefined2 *)((int)auStack_720 + iVar14) = uVar20;
                        }
                        if (iVar22 != 1) {
                          uVar60 = ((~((longlong)iVar22 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                                   (ulonglong)((longlong)iVar22 - 1U <= uVar60) & 1;
                          uVar45 = (uVar60 * 4 + uVar45) - 2;
                          uVar32 = (puStack_774 + iVar22 * -6)[(int)uVar60 * 0xc + -6];
                          if ((uVar32 & 0x20000) != 0) {
                            iVar14 = (int)(lVar37 << 2);
                            lVar37 = lVar37 + 1;
                            if ((uVar32 & 0x700) == 0) {
                              iVar22 = (int)((uVar45 & 0xffffffff) << 1);
                            }
                            else {
                              iVar22 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                            }
                            uVar20 = *(undefined2 *)(iVar41 + iVar22);
                            *(undefined2 *)((int)auStack_720 + iVar14 + 2) =
                                 *(undefined2 *)(iVar19 + iVar22);
                            *(undefined2 *)((int)auStack_720 + iVar14) = uVar20;
                          }
                        }
                      }
                      iVar22 = 0;
                      iVar41 = 0;
                      iVar14 = (int)lVar37;
                      if (iVar14 == 0) {
LAB_830fdbb8:
                        uStack_618 = 0;
                      }
                      else {
                        puVar27 = &uStack_2a4;
                        puVar58 = &uStack_c4;
                        puVar34 = auStack_720;
                        do {
                          if ((*puVar34 & 4) == 0) {
                            iVar22 = iVar22 + 1;
                            puVar58 = puVar58 + 1;
                            *puVar58 = *(undefined4 *)puVar34;
                          }
                          else {
                            iVar41 = iVar41 + 1;
                            puVar27 = puVar27 + 1;
                            *puVar27 = *(undefined4 *)puVar34;
                          }
                          puVar34 = puVar34 + 2;
                          lVar37 = lVar37 + -1;
                        } while (lVar37 != 0);
                        if (iVar14 == 0) goto LAB_830fdbb8;
                        if ((iVar22 == 3) || (iVar41 == 3)) {
                          uStack_618 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_720[0]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_720[0] >>
                                                               0x10)) >> 0xf & auStack_720[0],
                                                (short)((ushort)((uint)-(int)(short)auStack_720[1]
                                                                >> 0x10) ^
                                                       (ushort)((uint)-(int)(short)auStack_720[1] >>
                                                               0x10)) >> 0xf & auStack_720[1]);
                        }
                        else {
                          uStack_618 = uStack_2a0;
                          if (iVar41 <= iVar22) {
                            uStack_618 = uStack_c0;
                          }
                        }
                      }
                      uVar80 = *(undefined4 *)((uVar13 + uVar31) * 4 + iVar15);
                      uStack_75c = (uint)(short)uVar28;
                      uVar25 = ((((U64)(uStack_618) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                               *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                      uVar59 = (ulonglong)(short)uVar25;
                      *(ushort *)(iVar30 + iVar19 + 2) = uVar25;
                      lVar70 = (longlong)(int)uVar42;
                      uStack_754 = (uint)(short)uVar25;
                      uVar43 = ((ulonglong)uVar24 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                      uVar45 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | (ulonglong)uStack_770;
                      uVar69 = uVar45 & 0x3ffffff;
                      lVar37 = uVar69 * 0x40;
                      uStack_744 = ((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28
                                   >> 1;
                      uVar47 = (ulonglong)(int)uStack_744;
                      uStack_764 = (uint)sVar36;
                      *(ushort *)(iVar30 + *(int *)(param_2 + 0x6ac)) = uVar25;
                      *(ushort *)(iVar21 + *(int *)(param_2 + 0x6ac) + 2) = uVar25;
                      *(ushort *)(iVar21 + *(int *)(param_2 + 0x6ac)) = uVar25;
                      sVar17 = ((((U64)(uStack_618) >> 0) & 0xFFFF) + (short)((uint)uVar80 >> 0x10) +
                                *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                               *(short *)(param_2 + 0x40);
                      uVar31 = (uint)sVar17;
                      *(short *)(iVar30 + *(int *)(param_2 + 0x6b0) + 2) = sVar17;
                      uStack_760 = (uint)sVar17;
                      *(short *)(iVar30 + *(int *)(param_2 + 0x6b0)) = sVar17;
                      *(short *)(*(int *)(param_2 + 0x6b0) + iVar21 + 2) = sVar17;
                      *(short *)(*(int *)(param_2 + 0x6b0) + iVar21) = sVar17;
                      uVar53 = (ulonglong)*(uint *)(param_2 + 0x11c);
                      uVar50 = (ulonglong)*(uint *)(param_2 + 0x124);
                      uVar60 = (ulonglong)*(uint *)(puStack_728 + (uVar24 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)sVar36 >> 1) & 0xfffffff8);
                      uStack_780 = (uint)uVar60;
                      if (((uVar43 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 + uVar69 * -0x40) - uVar43) & 0x80008000) != 0) {
                        fn_830EF918(&uStack_75c,&uStack_764,lVar37,uVar53);
                        uVar18 = (ulonglong)uStack_75c;
                        uVar24 = uStack_764;
                      }
                      uVar43 = ((ulonglong)uVar31 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                      lVar37 = lVar37 + 0x40000;
                      uStack_764 = ((int)(((int)(short)uVar25 & 3U) + 1) >> 2) + (int)(short)uVar25
                                   >> 1;
                      uVar38 = (ulonglong)(int)uStack_764;
                      uVar69 = (ulonglong)*(uint *)(puVar10 + (uVar31 & 0xf) * 4) +
                               ((ulonglong)(uint)((int)sVar17 >> 1) & 0xfffffff8);
                      uStack_75c = (uint)uVar69;
                      if (((uVar43 + ((ulonglong)uVar25 & 0x8000) * -2 + lVar37 + 0x730073 |
                           (uVar53 - lVar37) - uVar43) & 0x80008000) != 0) {
                        fn_830EF918(&uStack_754,&uStack_760,lVar37,uVar53);
                        uVar59 = (ulonglong)uStack_754;
                        uVar31 = uStack_760;
                      }
                      uVar43 = (uVar60 & 0xffff) << 0x10 | uVar47 & 0xffffffff0000ffff;
                      uVar45 = uVar45 & 0x7ffffff;
                      lVar37 = uVar45 * 0x20;
                      if (((lVar37 + (uVar47 & 0x8000) * -2 + uVar43 + 0x3b003b |
                           (uVar50 + uVar45 * -0x20) - uVar43) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_744,&uStack_780,lVar37,uVar50);
                        uVar47 = (ulonglong)uStack_744;
                        uVar60 = (ulonglong)uStack_780;
                      }
                      lVar37 = lVar37 + 0x40000;
                      uVar45 = (uVar69 & 0xffff) << 0x10 | uVar38 & 0xffffffff0000ffff;
                      if (((lVar37 + (uVar38 & 0x8000) * -2 + uVar45 + 0x3b003b |
                           (uVar50 - lVar37) - uVar45) & 0x80008000) != 0) {
                        fn_830EF9E8(&uStack_764,&uStack_75c,lVar37,uVar50);
                        uVar38 = (ulonglong)uStack_764;
                        uVar69 = (ulonglong)uStack_75c;
                      }
                      lVar37 = (longlong)((int)uVar24 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar18 >> 2) + (ulonglong)uStack_734;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar45 = (ulonglong)uStack_740;
                      uVar24 = uVar24 & 3;
                      iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar24 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,uVar45,lVar40,param_2,uVar18 & 3,uVar24,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,uVar45,lVar40,uVar18 & 3,uVar24,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      lVar37 = (longlong)(((int)uVar31 >> 2) + 1) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                               (longlong)((int)(uint)uVar59 >> 2) + (ulonglong)uStack_73c;
                      if (lbl_83232468 ==
                          (((int)lbl_83232468 >> 3) +
                          (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar40 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar40 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar37);
                        dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar37);
                        lbl_83232468 = 0;
                      }
                      lbl_83232468 = lbl_83232468 + 1;
                      uVar31 = uVar31 & 3;
                      iVar14 = (**(code **)((((uint)uVar59 & 3) * 4 + uVar31 + 0xf1) * 4 + param_2))
                                         (lVar37,lVar40,lVar70 + uVar45,lVar40,param_2,uVar59 & 3,
                                          uVar31,1);
                      if (iVar14 != 0) {
                        fn_82CC4918(lVar37,lVar40,lVar70 + uVar45,lVar40,uVar59 & 3,uVar31,
                                          *(undefined1 *)(param_2 + 0x23),1);
                      }
                      puVar10 = puStack_758;
                      puVar27 = puStack_76c;
                      uVar31 = (uint)uVar47;
                      uVar24 = *(uint *)(puStack_758 + 0x246c);
                      lVar37 = (longlong)((int)uVar60 >> 2) *
                               (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                               (longlong)((int)uVar31 >> 2);
                      lVar40 = ZEXT48(puStack_730) + lVar37;
                      lVar37 = (ulonglong)uStack_72c + lVar37;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar60 = uVar60 & 3;
                      *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,puStack_76c,lVar70,uVar47 & 3,uVar60,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      puVar58 = puStack_768;
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,puStack_768,lVar70,uVar47 & 3,uVar60,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      uVar31 = (uint)uVar38;
                      uVar25 = *(ushort *)(param_2 + 0x4c);
                      lVar37 = (longlong)((int)uVar69 >> 2) * (longlong)(int)(uint)uVar25 +
                               (longlong)((int)uVar31 >> 2);
                      lVar40 = (ulonglong)uStack_74c + (ulonglong)uVar25 + lVar37;
                      lVar37 = ZEXT48(puStack_750) + (ulonglong)uVar25 + lVar37;
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar40 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar40);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar40);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar40);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar40);
                        uVar24 = 0;
                      }
                      uVar69 = uVar69 & 3;
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar69 + 0x101) * 4 + param_2))
                                (lVar40,lVar70,(int)puVar27 + iVar4,lVar70,uVar38 & 3,uVar69,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      uVar24 = *(uint *)(puVar10 + 0x246c);
                      if (uVar24 == (((int)uVar24 >> 4) +
                                    (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * 0x10) {
                        dataCacheBlockTouch(lVar37 + 0x80);
                        dataCacheBlockTouch(lVar70 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x40) * 2 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + 0x20) * 4 + lVar37);
                        dataCacheBlockTouch(lVar70 + (ulonglong)uVar42 * 4 + 0x80 + lVar37);
                        dataCacheBlockTouch((lVar70 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar37);
                        dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar70) + 0x80 + lVar37);
                        uVar24 = 0;
                      }
                      *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                      (**(code **)(((uVar31 & 3) * 4 + (int)uVar69 + 0x101) * 4 + param_2))
                                (lVar37,lVar70,(int)puVar58 + iVar4,lVar70,uVar38 & 3,uVar69,
                                 *(undefined1 *)(param_2 + 0x23),1);
                      goto LAB_830fe488;
                    }
                  }
                  goto LAB_830fe55c;
                }
                if ((!bVar7) || (!bVar9)) goto LAB_830fe55c;
                iVar41 = *(int *)(param_2 + 0x6ac);
                iVar30 = *(int *)(param_2 + 0x6b0);
                auStack_560[4] = 0;
                auStack_560[5] = 0;
                auStack_560[2] = 0;
                auStack_560[3] = 0;
                auStack_560[0] = 0;
                auStack_560[1] = 0;
                lVar40 = ((longlong)(int)uVar13 * (longlong)(int)uStack_748 + uVar60 & 0x7fffffff) *
                         2;
                lVar37 = 0;
                if ((iVar14 != 0) && ((puVar71[-6] & 0x20000) != 0)) {
                  iVar14 = (int)((lVar40 - 2U & 0xffffffff) << 1);
                  lVar37 = 1;
                  auStack_560[0] = *(undefined2 *)(iVar14 + iVar30);
                  auStack_560[1] = *(undefined2 *)(iVar14 + iVar41);
                }
                if (uStack_778 == 0) {
                  uVar16 = lVar40 + ((ulonglong)CONCAT24(uVar25,uVar13) & 0x7fffffff) * -2;
                  if ((puVar71[iVar19 * -6] & 0x20000) != 0) {
                    iVar14 = (int)((uVar16 & 0xffffffff) << 1);
                    iVar22 = (int)(lVar37 << 2);
                    lVar37 = lVar37 + 1;
                    uVar20 = *(undefined2 *)(iVar14 + iVar30);
                    *(undefined2 *)((int)auStack_560 + iVar22 + 2) =
                         *(undefined2 *)(iVar14 + iVar41);
                    *(undefined2 *)((int)auStack_560 + iVar22) = uVar20;
                  }
                  if ((iVar19 != 1) &&
                     (uVar60 = ((~((longlong)iVar19 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                               (ulonglong)((longlong)iVar19 - 1U <= uVar60) & 1,
                     ((puVar71 + iVar19 * -6)[(int)uVar60 * 0xc + -6] & 0x20000) != 0)) {
                    iVar14 = (int)(((uVar60 * 4 + uVar16) - 2 & 0xffffffff) << 1);
                    iVar19 = (int)(lVar37 << 2);
                    lVar37 = lVar37 + 1;
                    uVar20 = *(undefined2 *)(iVar14 + iVar30);
                    *(undefined2 *)((int)auStack_560 + iVar19 + 2) =
                         *(undefined2 *)(iVar14 + iVar41);
                    *(undefined2 *)((int)auStack_560 + iVar19) = uVar20;
                  }
                }
                iVar19 = 0;
                iVar14 = 0;
                iVar30 = (int)lVar37;
                if (iVar30 == 0) {
LAB_830fa988:
                  uStack_60c = 0;
                }
                else {
                  puVar27 = &uStack_194;
                  puVar58 = &uStack_1b4;
                  puVar34 = auStack_560;
                  do {
                    if ((*puVar34 & 4) == 0) {
                      iVar19 = iVar19 + 1;
                      puVar58 = puVar58 + 1;
                      *puVar58 = *(undefined4 *)puVar34;
                    }
                    else {
                      iVar14 = iVar14 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *(undefined4 *)puVar34;
                    }
                    puVar34 = puVar34 + 2;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  if (iVar30 == 0) goto LAB_830fa988;
                  if ((iVar19 == 3) || (iVar14 == 3)) {
                    uStack_60c = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_560[0] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_560[0] >> 0x10)
                                                 ) >> 0xf & auStack_560[0],
                                          (short)((ushort)((uint)-(int)(short)auStack_560[1] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_560[1] >> 0x10)
                                                 ) >> 0xf & auStack_560[1]);
                  }
                  else if (iVar19 < iVar14) {
                    uStack_60c = uStack_190;
                  }
                  else {
                    uStack_60c = uStack_1b0;
                  }
                }
                puVar27 = (undefined4 *)(uVar31 * 4 + iVar15);
                uVar60 = (ulonglong)uStack_770;
                uVar80 = *puVar27;
                iVar30 = uVar31 * 2;
                auStack_590[4] = 0;
                auStack_590[5] = 0;
                auStack_590[2] = 0;
                auStack_590[3] = 0;
                auStack_590[0] = 0;
                auStack_590[1] = 0;
                uVar28 = (*(short *)(param_2 + 0x3e) + (((U64)(uStack_60c) >> 16) & 0xFFFF) + (short)uVar80 &
                         *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                uVar16 = (ulonglong)(short)uVar28;
                *(ushort *)(iVar41 + iVar30 + 2) = uVar28;
                lVar40 = 0;
                *(ushort *)(iVar30 + *(int *)(param_2 + 0x6ac)) = uVar28;
                sVar36 = ((short)((uint)uVar80 >> 0x10) + *(short *)(param_2 + 0x40) +
                          (((U64)(uStack_60c) >> 0) & 0xFFFF) & *(ushort *)(param_2 + 0x44)) -
                         *(short *)(param_2 + 0x40);
                uVar24 = (uint)sVar36;
                *(short *)(*(int *)(param_2 + 0x6b0) + iVar30 + 2) = sVar36;
                *(short *)(*(int *)(param_2 + 0x6b0) + iVar30) = sVar36;
                uVar25 = *(ushort *)(param_2 + 0x32);
                iVar14 = *(int *)(param_2 + 0x6b8);
                iVar19 = *(int *)(param_2 + 0x6b4);
                iVar41 = (int)(uint)uVar25 >> 1;
                lVar37 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                         0x7fffffff) * 2;
                if ((uStack_770 != 0) && ((puStack_774[-6] & 0x20000) != 0)) {
                  iVar22 = (int)((lVar37 - 2U & 0xffffffff) << 1);
                  lVar40 = 1;
                  auStack_590[0] = *(undefined2 *)(iVar14 + iVar22);
                  auStack_590[1] = *(undefined2 *)(iVar19 + iVar22);
                }
                if (uStack_778 == 0) {
                  uVar18 = lVar37 + (ulonglong)uVar25 * -2;
                  if ((puStack_774[iVar41 * -6] & 0x20000) != 0) {
                    iVar22 = (int)((uVar18 & 0xffffffff) << 1);
                    iVar21 = (int)(lVar40 << 2);
                    lVar40 = lVar40 + 1;
                    uVar20 = *(undefined2 *)(iVar14 + iVar22);
                    *(undefined2 *)((int)auStack_590 + iVar21 + 2) =
                         *(undefined2 *)(iVar19 + iVar22);
                    *(undefined2 *)((int)auStack_590 + iVar21) = uVar20;
                  }
                  if ((iVar41 != 1) &&
                     (uVar69 = ((~((longlong)iVar41 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                               (ulonglong)((longlong)iVar41 - 1U <= uVar60) & 1,
                     ((puStack_774 + iVar41 * -6)[(int)uVar69 * 0xc + -6] & 0x20000) != 0)) {
                    iVar41 = (int)(((uVar69 * 4 + uVar18) - 2 & 0xffffffff) << 1);
                    iVar22 = (int)(lVar40 << 2);
                    lVar40 = lVar40 + 1;
                    uVar20 = *(undefined2 *)(iVar14 + iVar41);
                    *(undefined2 *)((int)auStack_590 + iVar22 + 2) =
                         *(undefined2 *)(iVar19 + iVar41);
                    *(undefined2 *)((int)auStack_590 + iVar22) = uVar20;
                  }
                }
                iVar41 = 0;
                iVar14 = 0;
                iVar22 = (int)lVar40;
                if (iVar22 == 0) {
LAB_830fac94:
                  uStack_61c = 0;
                }
                else {
                  puVar58 = &uStack_324;
                  puVar23 = &uStack_174;
                  puVar34 = auStack_590;
                  do {
                    if ((*puVar34 & 4) == 0) {
                      iVar41 = iVar41 + 1;
                      puVar23 = puVar23 + 1;
                      *puVar23 = *(undefined4 *)puVar34;
                    }
                    else {
                      iVar14 = iVar14 + 1;
                      puVar58 = puVar58 + 1;
                      *puVar58 = *(undefined4 *)puVar34;
                    }
                    puVar34 = puVar34 + 2;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                  if (iVar22 == 0) goto LAB_830fac94;
                  if ((iVar41 == 3) || (iVar14 == 3)) {
                    uStack_61c = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_590[0] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_590[0] >> 0x10)
                                                 ) >> 0xf & auStack_590[0],
                                          (short)((ushort)((uint)-(int)(short)auStack_590[1] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_590[1] >> 0x10)
                                                 ) >> 0xf & auStack_590[1]);
                  }
                  else if (iVar41 < iVar14) {
                    uStack_61c = uStack_320;
                  }
                  else {
                    uStack_61c = uStack_170;
                  }
                }
                uVar80 = puVar27[1];
                auStack_690[4] = 0;
                auStack_690[5] = 0;
                auStack_690[2] = 0;
                auStack_690[3] = 0;
                auStack_690[0] = 0;
                auStack_690[1] = 0;
                sVar17 = ((((U64)(uStack_61c) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                         *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                *(short *)(iVar19 + iVar30 + 2) = sVar17;
                uStack_540 = CONCAT44((int)sVar17,(((U64)(uStack_540) >> 32) & 0xFFFFFFFF));
                lVar37 = 0;
                *(short *)(iVar30 + *(int *)(param_2 + 0x6b4)) = sVar17;
                sVar17 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_61c) >> 0) & 0xFFFF) +
                          *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                         *(short *)(param_2 + 0x40);
                *(short *)(iVar30 + *(int *)(param_2 + 0x6b8) + 2) = sVar17;
                lStack_548 = CONCAT44((int)sVar17,(((U64)(lStack_548) >> 32) & 0xFFFFFFFF));
                *(short *)(iVar30 + *(int *)(param_2 + 0x6b8)) = sVar17;
                uVar25 = *(ushort *)(param_2 + 0x32);
                uVar18 = (ulonglong)uVar25;
                iVar14 = *(int *)(param_2 + 0x6ac);
                iVar19 = *(int *)(param_2 + 0x6b0);
                iVar41 = (int)(uint)uVar25 >> 1;
                lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                         0x7fffffff) * 2;
                if (uStack_770 != 0) {
                  uVar69 = lVar40 - 2;
                  if ((puStack_774[-6] & 0x20000) != 0) {
                    lVar37 = 1;
                    if ((puStack_774[-6] & 0x700) == 0) {
                      iVar30 = (int)((uVar69 & 0xffffffff) << 1);
                      auStack_690[0] = *(undefined2 *)(iVar30 + iVar19);
                      auStack_690[1] = *(undefined2 *)(iVar30 + iVar14);
                    }
                    else {
                      iVar30 = (int)((uVar69 + uVar18 & 0xffffffff) << 1);
                      auStack_690[0] = *(undefined2 *)(iVar30 + iVar19);
                      auStack_690[1] = *(undefined2 *)(iVar30 + iVar14);
                    }
                  }
                }
                if (uStack_778 == 0) {
                  uVar69 = lVar40 + uVar18 * -2;
                  uVar32 = puStack_774[iVar41 * -6];
                  if ((uVar32 & 0x20000) != 0) {
                    iVar30 = (int)(lVar37 << 2);
                    lVar37 = lVar37 + 1;
                    if ((uVar32 & 0x700) == 0) {
                      iVar22 = (int)((uVar69 & 0xffffffff) << 1);
                    }
                    else {
                      iVar22 = (int)((uVar69 + uVar18 & 0xffffffff) << 1);
                    }
                    uVar20 = *(undefined2 *)(iVar22 + iVar19);
                    *(undefined2 *)((int)auStack_690 + iVar30 + 2) =
                         *(undefined2 *)(iVar22 + iVar14);
                    *(undefined2 *)((int)auStack_690 + iVar30) = uVar20;
                  }
                  if (iVar41 != 1) {
                    uVar45 = ((~((longlong)iVar41 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                             (ulonglong)((longlong)iVar41 - 1U <= uVar60) & 1;
                    uVar69 = (uVar45 * 4 + uVar69) - 2;
                    uVar32 = (puStack_774 + iVar41 * -6)[(int)uVar45 * 0xc + -6];
                    if ((uVar32 & 0x20000) != 0) {
                      lVar40 = lVar37 << 2;
                      lVar37 = lVar37 + 1;
                      iVar41 = (int)lVar40;
                      if ((uVar32 & 0x700) == 0) {
                        iVar30 = (int)((uVar69 & 0xffffffff) << 1);
                        uVar20 = *(undefined2 *)(iVar30 + iVar19);
                        *(undefined2 *)((int)auStack_690 + iVar41 + 2) =
                             *(undefined2 *)(iVar30 + iVar14);
                        *(undefined2 *)((int)auStack_690 + iVar41) = uVar20;
                      }
                      else {
                        iVar30 = (int)((uVar69 + uVar18 & 0xffffffff) << 1);
                        uVar20 = *(undefined2 *)(iVar30 + iVar19);
                        *(undefined2 *)((int)auStack_690 + iVar41 + 2) =
                             *(undefined2 *)(iVar30 + iVar14);
                        *(undefined2 *)((int)auStack_690 + iVar41) = uVar20;
                      }
                    }
                  }
                }
                iVar41 = 0;
                iVar19 = 0;
                iVar30 = (int)lVar37;
                if (iVar30 == 0) {
LAB_830faffc:
                  uStack_644 = 0;
                }
                else {
                  puVar27 = &uStack_114;
                  puVar58 = &uStack_134;
                  puVar34 = auStack_690;
                  do {
                    if ((*puVar34 & 4) == 0) {
                      iVar41 = iVar41 + 1;
                      puVar58 = puVar58 + 1;
                      *puVar58 = *(undefined4 *)puVar34;
                    }
                    else {
                      iVar19 = iVar19 + 1;
                      puVar27 = puVar27 + 1;
                      *puVar27 = *(undefined4 *)puVar34;
                    }
                    puVar34 = puVar34 + 2;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  if (iVar30 == 0) goto LAB_830faffc;
                  if ((iVar41 == 3) || (iVar19 == 3)) {
                    uStack_644 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_690[0] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_690[0] >> 0x10)
                                                 ) >> 0xf & auStack_690[0],
                                          (short)((ushort)((uint)-(int)(short)auStack_690[1] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_690[1] >> 0x10)
                                                 ) >> 0xf & auStack_690[1]);
                  }
                  else if (iVar41 < iVar19) {
                    uStack_644 = uStack_110;
                  }
                  else {
                    uStack_644 = uStack_130;
                  }
                }
                puVar27 = (undefined4 *)((uVar13 + uVar31) * 4 + iVar15);
                auStack_670[4] = 0;
                auStack_670[5] = 0;
                auStack_670[2] = 0;
                auStack_670[3] = 0;
                auStack_670[0] = 0;
                auStack_670[1] = 0;
                uVar80 = *puVar27;
                iVar19 = (uVar13 + uVar31) * 2;
                uVar26 = ((((U64)(uStack_644) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                         *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                uVar18 = (ulonglong)(short)uVar26;
                *(ushort *)(iVar14 + iVar19 + 2) = uVar26;
                lVar37 = 0;
                *(ushort *)(iVar19 + *(int *)(param_2 + 0x6ac)) = uVar26;
                sVar17 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_644) >> 0) & 0xFFFF) +
                          *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                         *(short *)(param_2 + 0x40);
                uVar31 = (uint)sVar17;
                *(short *)(*(int *)(param_2 + 0x6b0) + iVar19 + 2) = sVar17;
                *(short *)(*(int *)(param_2 + 0x6b0) + iVar19) = sVar17;
                uVar25 = *(ushort *)(param_2 + 0x32);
                uVar69 = (ulonglong)uVar25;
                iVar14 = *(int *)(param_2 + 0x6b4);
                iVar15 = *(int *)(param_2 + 0x6b8);
                iVar41 = (int)(uint)uVar25 >> 1;
                lVar40 = ((longlong)(int)(uint)uVar25 * (longlong)(int)uStack_748 + uVar60 &
                         0x7fffffff) * 2;
                if (uStack_770 != 0) {
                  uVar45 = lVar40 - 2;
                  if ((puStack_774[-6] & 0x20000) != 0) {
                    lVar37 = 1;
                    if ((puStack_774[-6] & 0x700) == 0) {
                      iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                      auStack_670[0] = *(undefined2 *)(iVar30 + iVar15);
                      auStack_670[1] = *(undefined2 *)(iVar30 + iVar14);
                    }
                    else {
                      iVar30 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                      auStack_670[0] = *(undefined2 *)(iVar30 + iVar15);
                      auStack_670[1] = *(undefined2 *)(iVar30 + iVar14);
                    }
                  }
                }
                if (uStack_778 == 0) {
                  uVar45 = lVar40 + uVar69 * -2;
                  uVar13 = puStack_774[iVar41 * -6];
                  if ((uVar13 & 0x20000) != 0) {
                    iVar30 = (int)(lVar37 << 2);
                    lVar37 = lVar37 + 1;
                    if ((uVar13 & 0x700) == 0) {
                      iVar22 = (int)((uVar45 & 0xffffffff) << 1);
                    }
                    else {
                      iVar22 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                    }
                    uVar20 = *(undefined2 *)(iVar22 + iVar15);
                    *(undefined2 *)((int)auStack_670 + iVar30 + 2) =
                         *(undefined2 *)(iVar22 + iVar14);
                    *(undefined2 *)((int)auStack_670 + iVar30) = uVar20;
                  }
                  if (iVar41 != 1) {
                    uVar60 = ((~((longlong)iVar41 - 1U ^ uVar60) & 0xffffffff) >> 0x1f) +
                             (ulonglong)((longlong)iVar41 - 1U <= uVar60) & 1;
                    uVar45 = (uVar60 * 4 + uVar45) - 2;
                    uVar13 = (puStack_774 + iVar41 * -6)[(int)uVar60 * 0xc + -6];
                    if ((uVar13 & 0x20000) != 0) {
                      lVar40 = lVar37 << 2;
                      lVar37 = lVar37 + 1;
                      iVar41 = (int)lVar40;
                      if ((uVar13 & 0x700) == 0) {
                        iVar30 = (int)((uVar45 & 0xffffffff) << 1);
                        uVar20 = *(undefined2 *)(iVar30 + iVar15);
                        *(undefined2 *)((int)auStack_670 + iVar41 + 2) =
                             *(undefined2 *)(iVar30 + iVar14);
                        *(undefined2 *)((int)auStack_670 + iVar41) = uVar20;
                      }
                      else {
                        iVar30 = (int)((uVar45 + uVar69 & 0xffffffff) << 1);
                        uVar20 = *(undefined2 *)(iVar30 + iVar15);
                        *(undefined2 *)((int)auStack_670 + iVar41 + 2) =
                             *(undefined2 *)(iVar30 + iVar14);
                        *(undefined2 *)((int)auStack_670 + iVar41) = uVar20;
                      }
                    }
                  }
                }
                iVar41 = 0;
                iVar15 = 0;
                iVar30 = (int)lVar37;
                if (iVar30 == 0) {
LAB_830fb364:
                  uStack_638 = 0;
                }
                else {
                  puVar58 = &uStack_d4;
                  puVar23 = &uStack_f4;
                  puVar34 = auStack_670;
                  do {
                    if ((*puVar34 & 4) == 0) {
                      iVar41 = iVar41 + 1;
                      puVar23 = puVar23 + 1;
                      *puVar23 = *(undefined4 *)puVar34;
                    }
                    else {
                      iVar15 = iVar15 + 1;
                      puVar58 = puVar58 + 1;
                      *puVar58 = *(undefined4 *)puVar34;
                    }
                    puVar34 = puVar34 + 2;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  if (iVar30 == 0) goto LAB_830fb364;
                  if ((iVar41 == 3) || (iVar15 == 3)) {
                    uStack_638 = CONCAT22((short)((ushort)((uint)-(int)(short)auStack_670[0] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_670[0] >> 0x10)
                                                 ) >> 0xf & auStack_670[0],
                                          (short)((ushort)((uint)-(int)(short)auStack_670[1] >> 0x10
                                                          ) ^
                                                 (ushort)((uint)-(int)(short)auStack_670[1] >> 0x10)
                                                 ) >> 0xf & auStack_670[1]);
                  }
                  else if (iVar41 < iVar15) {
                    uStack_638 = uStack_d0;
                  }
                  else {
                    uStack_638 = uStack_f0;
                  }
                }
                uVar80 = puVar27[1];
                uVar43 = ((ulonglong)uVar24 & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
                uVar32 = (uint)sVar17;
                uStack_780 = (uint)(short)uVar26;
                uStack_760 = (uint)sVar36;
                uVar25 = ((((U64)(uStack_638) >> 16) & 0xFFFF) + *(short *)(param_2 + 0x3e) + (short)uVar80 &
                         *(ushort *)(param_2 + 0x42)) - *(short *)(param_2 + 0x3e);
                uStack_754 = (uint)(short)uVar28;
                uVar47 = (ulonglong)(short)uVar25;
                *(ushort *)(iVar14 + iVar19 + 2) = uVar25;
                uVar45 = ((ulonglong)uStack_748 & 0xffff) << 0x10 | (ulonglong)uStack_770;
                uVar69 = uVar45 & 0x3ffffff;
                lVar40 = uVar69 * 0x40;
                lVar37 = (longlong)(int)uVar42;
                uStack_77c = ((int)(((int)(short)uVar28 & 3U) + 1) >> 2) + (int)(short)uVar28 >> 1;
                uVar59 = (ulonglong)(int)uStack_77c;
                *(ushort *)(iVar19 + *(int *)(param_2 + 0x6b4)) = uVar25;
                sVar36 = ((short)((uint)uVar80 >> 0x10) + (((U64)(uStack_638) >> 0) & 0xFFFF) +
                          *(short *)(param_2 + 0x40) & *(ushort *)(param_2 + 0x44)) -
                         *(short *)(param_2 + 0x40);
                *(short *)(iVar19 + *(int *)(param_2 + 0x6b8) + 2) = sVar36;
                uStack_764 = (uint)sVar36;
                *(short *)(iVar19 + *(int *)(param_2 + 0x6b8)) = sVar36;
                uVar38 = (ulonglong)*(uint *)(param_2 + 0x11c);
                uVar13 = *(uint *)(param_2 + 0x268);
                uVar50 = (ulonglong)uVar13;
                uVar60 = (ulonglong)*(uint *)(puStack_728 + (uVar24 & 0xf) * 4) +
                         ((ulonglong)(uint)((int)uStack_760 >> 1) & 0xfffffff8);
                uVar53 = (ulonglong)*(uint *)(param_2 + 0x124);
                uStack_75c = (uint)uVar60;
                uStack_744 = uVar32;
                if (((uVar43 + ((ulonglong)uVar28 & 0x8000) * -2 + lVar40 + 0x730073 |
                     (uVar38 - uVar43) + uVar69 * -0x40) & 0x80008000) != 0) {
                  fn_830EF918(&uStack_754,&uStack_760,lVar40,uVar38);
                  uVar16 = (ulonglong)uStack_754;
                  uVar24 = uStack_760;
                }
                uVar39 = ((ulonglong)uVar31 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                lVar70 = lVar40 + 0x40000;
                uStack_760 = ((int)(((int)(short)uVar26 & 3U) + 1) >> 2) + (int)(short)uVar26 >> 1;
                uVar52 = (ulonglong)(int)uStack_760;
                uVar43 = (ulonglong)*(uint *)(puStack_728 + (uVar31 & 0xf) * 4) +
                         ((ulonglong)(uint)((int)uVar32 >> 1) & 0xfffffff8);
                uStack_754 = (uint)uVar43;
                if (((uVar39 + ((ulonglong)uVar26 & 0x8000) * -2 + lVar70 + 0x730073 |
                     (uVar38 - uVar39) - lVar70) & 0x80008000) != 0) {
                  fn_830EF918(&uStack_780,&uStack_744,lVar70,uVar38);
                  uVar18 = (ulonglong)uStack_780;
                  uVar31 = uStack_744;
                }
                uVar45 = uVar45 & 0x7ffffff;
                uVar38 = uVar45 * 0x20;
                uVar39 = (uVar60 & 0xffff) << 0x10 | uVar59 & 0xffffffff0000ffff;
                uStack_778 = (uint)uVar38;
                if (((uVar39 + (uVar59 & 0x8000) * -2 + uVar38 + 0x3b003b |
                     (uVar53 - uVar39) + uVar45 * -0x20) & 0x80008000) != 0) {
                  fn_830EF9E8(&uStack_77c,&uStack_75c,uVar38,uVar53);
                  uVar38 = (ulonglong)uStack_778;
                  uVar59 = (ulonglong)uStack_77c;
                  uVar60 = (ulonglong)uStack_75c;
                }
                lVar70 = uVar38 + 0x40000;
                uVar45 = (uVar43 & 0xffff) << 0x10 | uVar52 & 0xffffffff0000ffff;
                if (((uVar45 + (uVar52 & 0x8000) * -2 + lVar70 + 0x3b003b |
                     (uVar53 - uVar45) - lVar70) & 0x80008000) != 0) {
                  fn_830EF9E8(&uStack_760,&uStack_754,lVar70,uVar53);
                  uVar52 = (ulonglong)uStack_760;
                  uVar43 = (ulonglong)uStack_754;
                }
                lVar70 = (longlong)((int)uVar24 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                         (longlong)((int)(uint)uVar16 >> 2) + (ulonglong)uStack_73c;
                if (lbl_83232468 ==
                    (((int)lbl_83232468 >> 3) +
                    (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  uVar45 = (ulonglong)uStack_738;
                  dataCacheBlockTouch(uVar45 + 0x80 + lVar70);
                  dataCacheBlockTouch((uVar45 + 0x40 & 0x7fffffff) * 2 + lVar70);
                  dataCacheBlockTouch(uVar45 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 + 0x80 +
                                      lVar70);
                  dataCacheBlockTouch((uVar45 + 0x20 & 0x3fffffff) * 4 + lVar70);
                  dataCacheBlockTouch(uVar45 + ((ulonglong)uStack_738 & 0x3fffffff) * 4 + 0x80 +
                                      lVar70);
                  dataCacheBlockTouch((uVar45 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 &
                                      0x7fffffff) * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch((((ulonglong)uStack_738 & 0x1fffffff) * 8 - uVar45) + 0x80 +
                                      lVar70);
                  lbl_83232468 = 0;
                }
                lbl_83232468 = lbl_83232468 + 1;
                uVar24 = uVar24 & 3;
                iVar14 = (**(code **)((((uint)uVar16 & 3) * 4 + uVar24 + 0xf1) * 4 + param_2))
                                   (lVar70,uStack_738,uVar50,0x20,param_2,uVar16 & 3,uVar24,1);
                uVar32 = uStack_738;
                uVar45 = (ulonglong)uStack_738;
                if (iVar14 != 0) {
                  fn_82CC4918(lVar70,uVar45,uVar50,0x20,uVar16 & 3,uVar24,
                                    *(undefined1 *)(param_2 + 0x23),1);
                }
                lVar70 = (longlong)(((int)uVar31 >> 2) + 1) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                         (longlong)((int)(uint)uVar18 >> 2) + (ulonglong)uStack_73c;
                if (lbl_83232468 ==
                    (((int)lbl_83232468 >> 3) +
                    (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(uVar45 + 0x80 + lVar70);
                  dataCacheBlockTouch((uVar45 + 0x40 & 0x7fffffff) * 2 + lVar70);
                  dataCacheBlockTouch(uVar45 + ((ulonglong)uVar32 & 0x7fffffff) * 2 + 0x80 + lVar70)
                  ;
                  dataCacheBlockTouch((uVar45 + 0x20 & 0x3fffffff) * 4 + lVar70);
                  dataCacheBlockTouch(uVar45 + ((ulonglong)uVar32 & 0x3fffffff) * 4 + 0x80 + lVar70)
                  ;
                  dataCacheBlockTouch((uVar45 + ((ulonglong)uVar32 & 0x7fffffff) * 2 & 0x7fffffff) *
                                      2 + 0x80 + lVar70);
                  dataCacheBlockTouch((((ulonglong)uVar32 & 0x1fffffff) * 8 - uVar45) + 0x80 +
                                      lVar70);
                  lbl_83232468 = 0;
                }
                lbl_83232468 = lbl_83232468 + 1;
                uVar31 = uVar31 & 3;
                iVar14 = (**(code **)((((uint)uVar18 & 3) * 4 + uVar31 + 0xf1) * 4 + param_2))
                                   (lVar70,uVar45,uVar50 + 0x10,0x20,param_2,uVar18 & 3,uVar31);
                if (iVar14 != 0) {
                  fn_82CC4918(lVar70,uVar45,uVar50 + 0x10,0x20,uVar18 & 3,uVar31,
                                    *(undefined1 *)(param_2 + 0x23),1);
                }
                puVar10 = puStack_758;
                uVar31 = (uint)uVar59;
                uVar16 = (ulonglong)uStack_74c;
                uVar24 = *(uint *)(puStack_758 + 0x246c);
                lVar44 = (longlong)((int)uVar60 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                         (longlong)((int)uVar31 >> 2);
                lVar70 = lVar44 + uVar16;
                lVar44 = lVar44 + ZEXT48(puStack_750);
                if (uVar24 == (((int)uVar24 >> 4) + (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                  uVar24 = 0;
                }
                uVar60 = uVar60 & 3;
                *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                          (lVar70,lVar37,uVar50 + 0x100,0x10,uVar59 & 3,uVar60,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar24 = *(uint *)(puVar10 + 0x246c);
                if (uVar24 == (((int)uVar24 >> 4) + (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar44 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                  uVar24 = 0;
                }
                *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                (**(code **)(((uVar31 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                          (lVar44,lVar37,uVar50 + 0x140,0x10,uVar59 & 3,uVar60,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar24 = *(uint *)(puVar10 + 0x246c);
                uVar31 = (uint)uVar52;
                lVar44 = (longlong)((int)uVar43 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                         (longlong)((int)uVar31 >> 2) + (ulonglong)*(ushort *)(param_2 + 0x4c);
                lVar70 = uVar16 + lVar44;
                lVar44 = ZEXT48(puStack_750) + lVar44;
                if (uVar24 == (((int)uVar24 >> 4) + (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                  uVar24 = 0;
                }
                uVar43 = uVar43 & 3;
                *(uint *)(puVar10 + 0x246c) = uVar24 + 1;
                (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                          (lVar70,lVar37,uVar50 + 0x108,0x10,uVar52 & 3,uVar43,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar24 = *(uint *)(puVar10 + 0x246c);
                if (uVar24 == (((int)uVar24 >> 4) + (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar44 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                  uVar24 = 0;
                }
                *(uint *)(puStack_758 + 0x246c) = uVar24 + 1;
                (**(code **)(((uVar31 & 3) * 4 + (int)uVar43 + 0x101) * 4 + param_2))
                          (lVar44,lVar37,uVar50 + 0x148,0x10,uVar52 & 3,uVar43,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar32 = uStack_764;
                uVar45 = (ulonglong)(((U64)(uStack_540) >> 0) & 0xFFFFFFFF);
                uVar60 = ((ulonglong)(((U64)(lStack_548) >> 0) & 0xFFFFFFFF) & 0xffff) << 0x10 |
                         uVar45 & 0xffffffff0000ffff;
                uStack_744 = (uint)(short)uVar25;
                uStack_760 = (((U64)(uStack_540) >> 0) & 0xFFFFFFFF);
                uStack_75c = (((U64)(lStack_548) >> 0) & 0xFFFFFFFF);
                uStack_754 = uStack_764;
                uStack_780 = (int)(((int)(((((U64)(uStack_540) >> 0) & 0xFFFFFFFF) & 3) + 1) >> 2) + (((U64)(uStack_540) >> 0) & 0xFFFFFFFF)) >> 1
                ;
                uVar18 = (ulonglong)(int)uStack_780;
                uVar59 = (ulonglong)*(uint *)(param_2 + 0x11c);
                uVar24 = *(uint *)(param_2 + 0x1ac);
                uVar50 = (ulonglong)uVar24;
                uVar16 = (ulonglong)*(uint *)(puStack_728 + ((((U64)(lStack_548) >> 0) & 0xFFFFFFFF) & 0xf) * 4) +
                         ((ulonglong)(uint)((int)(((U64)(lStack_548) >> 0) & 0xFFFFFFFF) >> 1) & 0xfffffff8);
                uVar43 = (ulonglong)*(uint *)(param_2 + 0x124);
                uStack_77c = (uint)uVar16;
                uVar31 = (((U64)(lStack_548) >> 0) & 0xFFFFFFFF);
                if (((uVar60 + (uVar45 & 0x8000) * -2 + lVar40 + 0x730073 |
                     (uVar59 - uVar60) + uVar69 * -0x40) & 0x80008000) != 0) {
                  fn_830EF918(&uStack_760,&uStack_75c,lVar40,uVar59);
                  uVar45 = (ulonglong)uStack_760;
                  uVar31 = uStack_75c;
                }
                uVar69 = ((ulonglong)uStack_764 & 0xffff) << 0x10 | uVar47 & 0xffffffff0000ffff;
                lVar40 = lVar40 + 0x40000;
                uVar49 = ((int)(((int)(short)uVar25 & 3U) + 1) >> 2) + (int)(short)uVar25 >> 1;
                uVar53 = (ulonglong)(int)uVar49;
                uVar60 = (ulonglong)*(uint *)(puStack_728 + (uStack_764 & 0xf) * 4) +
                         ((ulonglong)(uint)((int)uStack_764 >> 1) & 0xfffffff8);
                uStack_75c = (uint)uVar60;
                uStack_764 = uVar49;
                if (((uVar69 + ((ulonglong)uVar25 & 0x8000) * -2 + lVar40 + 0x730073 |
                     (uVar59 - uVar69) - lVar40) & 0x80008000) != 0) {
                  fn_830EF918(&uStack_744,&uStack_754,lVar40,uVar59);
                  uVar47 = (ulonglong)uStack_744;
                  uVar32 = uStack_754;
                }
                uVar69 = (ulonglong)uStack_778;
                uVar59 = (uVar16 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
                if (((uVar59 + (uVar18 & 0x8000) * -2 + uVar69 + 0x3b003b |
                     (uVar43 - uVar59) - uVar69) & 0x80008000) != 0) {
                  fn_830EF9E8(&uStack_780,&uStack_77c,uStack_778,uVar43);
                  uVar69 = (ulonglong)uStack_778;
                  uVar18 = (ulonglong)uStack_780;
                  uVar16 = (ulonglong)uStack_77c;
                }
                lVar40 = uVar69 + 0x40000;
                uVar69 = (uVar60 & 0xffff) << 0x10 | uVar53 & 0xffffffff0000ffff;
                if (((uVar69 + (uVar53 & 0x8000) * -2 + lVar40 + 0x3b003b |
                     (uVar43 - uVar69) - lVar40) & 0x80008000) != 0) {
                  fn_830EF9E8(&uStack_764,&uStack_75c,lVar40,uVar43);
                  uVar53 = (ulonglong)uStack_764;
                  uVar60 = (ulonglong)uStack_75c;
                }
                uVar49 = uStack_738;
                lVar40 = (longlong)((int)uVar31 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                         (longlong)((int)(uint)uVar45 >> 2) + (ulonglong)uStack_734;
                if (lbl_83232468 ==
                    (((int)lbl_83232468 >> 3) +
                    (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                  dataCacheBlockTouch(lVar40 + 0x80);
                  uVar69 = (ulonglong)uStack_738;
                  dataCacheBlockTouch(uVar69 + 0x80 + lVar40);
                  dataCacheBlockTouch((uVar69 + 0x40 & 0x7fffffff) * 2 + lVar40);
                  dataCacheBlockTouch(uVar69 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 + 0x80 +
                                      lVar40);
                  dataCacheBlockTouch((uVar69 + 0x20 & 0x3fffffff) * 4 + lVar40);
                  dataCacheBlockTouch(uVar69 + ((ulonglong)uStack_738 & 0x3fffffff) * 4 + 0x80 +
                                      lVar40);
                  dataCacheBlockTouch((uVar69 + ((ulonglong)uStack_738 & 0x7fffffff) * 2 &
                                      0x7fffffff) * 2 + 0x80 + lVar40);
                  dataCacheBlockTouch((((ulonglong)uStack_738 & 0x1fffffff) * 8 - uVar69) + 0x80 +
                                      lVar40);
                  lbl_83232468 = 0;
                }
                lbl_83232468 = lbl_83232468 + 1;
                uVar31 = uVar31 & 3;
                uVar69 = (ulonglong)uStack_738;
                iVar14 = (**(code **)((((uint)uVar45 & 3) * 4 + uVar31 + 0xf1) * 4 + param_2))
                                   (lVar40,uVar69,uVar50,0x20,param_2,uVar45 & 3,uVar31,1);
                if (iVar14 != 0) {
                  fn_82CC4918(lVar40,uVar69,uVar50,0x20,uVar45 & 3,uVar31,
                                    *(undefined1 *)(param_2 + 0x23),1);
                }
                lVar40 = uVar50 + 0x10;
                lVar70 = (longlong)(((int)uVar32 >> 2) + 1) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4a) +
                         (longlong)((int)(uint)uVar47 >> 2) + (ulonglong)uStack_734;
                if (lbl_83232468 ==
                    (((int)lbl_83232468 >> 3) +
                    (uint)((int)lbl_83232468 < 0 && (lbl_83232468 & 7) != 0)) * 8) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(uVar69 + 0x80 + lVar70);
                  dataCacheBlockTouch((uVar69 + 0x40 & 0x7fffffff) * 2 + lVar70);
                  dataCacheBlockTouch(uVar69 + ((ulonglong)uVar49 & 0x7fffffff) * 2 + 0x80 + lVar70)
                  ;
                  dataCacheBlockTouch((uVar69 + 0x20 & 0x3fffffff) * 4 + lVar70);
                  dataCacheBlockTouch(uVar69 + ((ulonglong)uVar49 & 0x3fffffff) * 4 + 0x80 + lVar70)
                  ;
                  dataCacheBlockTouch((uVar69 + ((ulonglong)uVar49 & 0x7fffffff) * 2 & 0x7fffffff) *
                                      2 + 0x80 + lVar70);
                  dataCacheBlockTouch((((ulonglong)uVar49 & 0x1fffffff) * 8 - uVar69) + 0x80 +
                                      lVar70);
                  lbl_83232468 = 0;
                }
                lbl_83232468 = lbl_83232468 + 1;
                uVar32 = uVar32 & 3;
                iVar14 = (**(code **)((((uint)uVar47 & 3) * 4 + uVar32 + 0xf1) * 4 + param_2))
                                   (lVar70,uVar69,lVar40,0x20,param_2,uVar47 & 3,uVar32,1);
                if (iVar14 != 0) {
                  fn_82CC4918(lVar70,uVar69,lVar40,0x20,uVar47 & 3,uVar32,
                                    *(undefined1 *)(param_2 + 0x23),1);
                }
                puVar10 = puStack_758;
                uVar32 = (uint)uVar18;
                uVar69 = ZEXT48(puStack_730);
                uVar31 = *(uint *)(puStack_758 + 0x246c);
                lVar44 = (longlong)((int)uVar16 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                         (longlong)((int)uVar32 >> 2);
                lVar70 = lVar44 + uVar69;
                lVar44 = lVar44 + (ulonglong)uStack_72c;
                if (uVar31 == (((int)uVar31 >> 4) + (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                  uVar31 = 0;
                }
                uVar16 = uVar16 & 3;
                *(uint *)(puStack_758 + 0x246c) = uVar31 + 1;
                (**(code **)(((uVar32 & 3) * 4 + (int)uVar16 + 0x101) * 4 + param_2))
                          (lVar70,lVar37,uVar50 + 0x100,0x10,uVar18 & 3,uVar16,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar31 = *(uint *)(puVar10 + 0x246c);
                if (uVar31 == (((int)uVar31 >> 4) + (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar44 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                  uVar31 = 0;
                }
                *(uint *)(puVar10 + 0x246c) = uVar31 + 1;
                (**(code **)(((uVar32 & 3) * 4 + (int)uVar16 + 0x101) * 4 + param_2))
                          (lVar44,lVar37,uVar50 + 0x140,0x10,uVar18 & 3,uVar16,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar31 = *(uint *)(puVar10 + 0x246c);
                uVar32 = (uint)uVar53;
                lVar44 = (longlong)((int)uVar60 >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) +
                         (longlong)((int)uVar32 >> 2) + (ulonglong)*(ushort *)(param_2 + 0x4c);
                lVar70 = lVar44 + uVar69;
                lVar44 = lVar44 + (ulonglong)uStack_72c;
                if (uVar31 == (((int)uVar31 >> 4) + (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar70 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar70);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar70);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar70);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar70);
                  uVar31 = 0;
                }
                uVar60 = uVar60 & 3;
                *(uint *)(puVar10 + 0x246c) = uVar31 + 1;
                (**(code **)(((uVar32 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                          (lVar70,lVar37,uVar50 + 0x108,0x10,uVar53 & 3,uVar60,
                           *(undefined1 *)(param_2 + 0x23),1);
                uVar31 = *(uint *)(puVar10 + 0x246c);
                if (uVar31 == (((int)uVar31 >> 4) + (uint)((int)uVar31 < 0 && (uVar31 & 0xf) != 0))
                              * 0x10) {
                  dataCacheBlockTouch(lVar44 + 0x80);
                  dataCacheBlockTouch(lVar37 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x40) * 2 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + 0x20) * 4 + lVar44);
                  dataCacheBlockTouch(lVar37 + (ulonglong)uVar42 * 4 + 0x80 + lVar44);
                  dataCacheBlockTouch((lVar37 + (ulonglong)uVar42 * 2) * 2 + 0x80 + lVar44);
                  dataCacheBlockTouch(((ulonglong)uVar42 * 8 - lVar37) + 0x80 + lVar44);
                  uVar31 = 0;
                }
                *(uint *)(puVar10 + 0x246c) = uVar31 + 1;
                (**(code **)(((uVar32 & 3) * 4 + (int)uVar60 + 0x101) * 4 + param_2))
                          (lVar44,lVar37,uVar50 + 0x148,0x10,uVar53 & 3,uVar60,
                           *(undefined1 *)(param_2 + 0x23),1);
                iVar14 = (int)in_r0;
                puVar27 = (undefined4 *)(iVar14 + (int)lVar40 & 0xfffffff0);
                uVar80 = *puVar27;
                uVar81 = puVar27[1];
                uVar82 = puVar27[2];
                uVar83 = puVar27[3];
                puVar27 = (undefined4 *)(iVar14 + uVar24 & 0xfffffff0);
                uVar92 = *puVar27;
                uVar93 = puVar27[1];
                uVar94 = puVar27[2];
                uVar95 = puVar27[3];{ V16 _vt60 = vectorAverageUnsignedByte(in_vs44,in_vs45); memcpy(auVar76, &_vt60, 16); }{ V16 _vt61 = vectorAverageUnsignedByte(in_vs43,in_vs32); memcpy(auVar75, &_vt61, 16); }{ V16 _vt62 = vectorAverageUnsignedByte(in_vs39,in_vs41); memcpy(auVar74, &_vt62, 16); }{ V16 _vt63 = vectorAverageUnsignedByte(in_vs36,in_vs38); memcpy(auVar73, &_vt63, 16); }
                puVar27 = (undefined4 *)(uVar24 + 0x60 & 0xfffffff0);
                uVar104 = *puVar27;
                uVar105 = puVar27[1];
                uVar106 = puVar27[2];
                uVar107 = puVar27[3];
                vectorAverageUnsignedByte(in_vs33,in_vs35);{ V16 _vt64 = vectorAverageUnsignedByte(in_vs61,in_vs63); memcpy(auVar79, &_vt64, 16); }
                puVar27 = (undefined4 *)(uVar13 + 0x70 & 0xfffffff0);
                in_register_00010180 = *puVar27;
                in_register_00010184 = puVar27[1];
                in_register_00010188 = puVar27[2];
                in_vr24 = puVar27[3];
                puVar27 = (undefined4 *)(iVar14 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_000100a0;
                puVar27[1] = in_register_000100a4;
                puVar27[2] = in_register_000100a8;
                puVar27[3] = in_vr10;{ V16 _vt65 = vectorAverageUnsignedByte(in_vs57,in_vs60); memcpy(in_vs55, &_vt65, 16); }
                puVar27 = (undefined4 *)(uVar42 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_00010080;
                puVar27[1] = in_register_00010084;
                puVar27[2] = in_register_00010088;
                puVar27[3] = in_vr8;{ V16 _vt66 = vectorAverageUnsignedByte(in_vs56,in_vs58); memcpy(auVar77, &_vt66, 16); }
                puVar27 = (undefined4 *)(uVar42 * 2 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_00010050;
                puVar27[1] = in_register_00010054;
                puVar27[2] = in_register_00010058;
                puVar27[3] = in_vr5;
                puVar27 = (undefined4 *)(uVar42 * 3 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_00010020;
                puVar27[1] = in_register_00010024;
                puVar27[2] = in_register_00010028;
                puVar27[3] = in_vr2;
                puVar27 = (undefined4 *)(uVar42 * 4 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_000101e0;
                puVar27[1] = in_register_000101e4;
                puVar27[2] = in_register_000101e8;
                puVar27[3] = in_vr30;
                puVar27 = (undefined4 *)(uVar42 * 5 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_000101b0;
                puVar27[1] = in_register_000101b4;
                puVar27[2] = in_register_000101b8;
                puVar27[3] = in_vr27;
                puVar27 = (undefined4 *)(uVar42 * 6 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_00010170;
                puVar27[1] = in_register_00010174;
                puVar27[2] = in_register_00010178;
                puVar27[3] = in_vr23;
                puVar27 = (undefined4 *)(uVar42 * 7 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_00010160;
                puVar27[1] = in_register_00010164;
                puVar27[2] = in_register_00010168;
                puVar27[3] = in_vr22;
                iVar15 = uVar42 * 8 + uStack_740;
                puVar27 = (undefined4 *)(uVar13 + 0x90 & 0xfffffff0);
                uVar100 = *puVar27;
                uVar101 = puVar27[1];
                uVar102 = puVar27[2];
                uVar103 = puVar27[3];{ V16 _vt67 = vectorAverageUnsignedByte(in_vs51,in_vs52); memcpy(in_vs32, &_vt67, 16); }
                vectorAverageUnsignedByte(in_vs49,in_vs50);
                puVar27 = (undefined4 *)(uVar24 + 0xa0 & 0xfffffff0);
                in_register_00010100 = *puVar27;
                in_register_00010104 = puVar27[1];
                in_register_00010108 = puVar27[2];
                in_vr16 = puVar27[3];
                puVar27 = (undefined4 *)(uVar13 + 0xa0 & 0xfffffff0);
                uVar96 = *puVar27;
                uVar97 = puVar27[1];
                uVar98 = puVar27[2];
                uVar99 = puVar27[3];
                puVar27 = (undefined4 *)(uVar24 + 0xb0 & 0xfffffff0);
                uVar88 = *puVar27;
                uVar89 = puVar27[1];
                uVar90 = puVar27[2];
                uVar91 = puVar27[3];
                puVar27 = (undefined4 *)((int)&uStack_410 + iVar14 & 0xfffffff0);
                *puVar27 = uVar80;
                puVar27[1] = uVar81;
                puVar27[2] = uVar82;
                puVar27[3] = uVar83;
                puVar27 = (undefined4 *)(uVar13 + 0xc0 & 0xfffffff0);
                in_register_000100a0 = *puVar27;
                in_register_000100a4 = puVar27[1];
                in_register_000100a8 = puVar27[2];
                in_vr10 = puVar27[3];{ V16 _vt68 = vectorAverageUnsignedByte(in_vs46,in_vs48); memcpy(in_vs45, &_vt68, 16); }
                puVar27 = (undefined4 *)(uVar24 + 0xc0 & 0xfffffff0);
                in_register_000100b0 = *puVar27;
                in_register_000100b4 = puVar27[1];
                in_register_000100b8 = puVar27[2];
                in_vr11 = puVar27[3];
                vectorAverageUnsignedByte(in_vs53,in_vs44);
                puVar27 = (undefined4 *)(uVar24 + 0xd0 & 0xfffffff0);
                uVar84 = *puVar27;
                uVar85 = puVar27[1];
                uVar86 = puVar27[2];
                uVar87 = puVar27[3];{ V16 _vt69 = vectorAverageUnsignedByte(auVar76,in_vs43); memcpy(in_vs43, &_vt69, 16); }
                puVar27 = (undefined4 *)(uVar13 + 0xd0 & 0xfffffff0);
                in_register_00010080 = *puVar27;
                in_register_00010084 = puVar27[1];
                in_register_00010088 = puVar27[2];
                in_vr8 = puVar27[3];{ V16 _vt70 = vectorAverageUnsignedByte(auVar75,in_vs41); memcpy(in_vs42, &_vt70, 16); }
                puVar27 = (undefined4 *)(uVar24 + 0xf0 & 0xfffffff0);
                in_register_00010050 = *puVar27;
                in_register_00010054 = puVar27[1];
                in_register_00010058 = puVar27[2];
                in_vr5 = puVar27[3];{ V16 _vt71 = vectorAverageUnsignedByte(in_vs38,in_vs39); memcpy(in_vs41, &_vt71, 16); }
                puVar27 = (undefined4 *)(uVar42 * 8 + uStack_740 & 0xfffffff0);
                *puVar27 = in_register_000100f0;
                puVar27[1] = in_register_000100f4;
                puVar27[2] = in_register_000100f8;
                puVar27[3] = in_vr15;
                vectorAverageUnsignedByte(in_vs36,auVar74);
                puVar27 = (undefined4 *)(uVar42 + iVar15 & 0xfffffff0);
                *puVar27 = uVar80;
                puVar27[1] = uVar81;
                puVar27[2] = uVar82;
                puVar27[3] = uVar83;
                puVar27 = (undefined4 *)(uVar42 * 2 + iVar15 & 0xfffffff0);
                *puVar27 = uVar92;
                puVar27[1] = uVar93;
                puVar27[2] = uVar94;
                puVar27[3] = uVar95;
                puVar27 = (undefined4 *)(uVar42 * 3 + iVar15 & 0xfffffff0);
                *puVar27 = uVar88;
                puVar27[1] = uVar89;
                puVar27[2] = uVar90;
                puVar27[3] = uVar91;
                puVar27 = (undefined4 *)(uVar42 * 4 + iVar15 & 0xfffffff0);
                *puVar27 = in_register_000100b0;
                puVar27[1] = in_register_000100b4;
                puVar27[2] = in_register_000100b8;
                puVar27[3] = in_vr11;
                puVar27 = (undefined4 *)(uVar42 * 5 + iVar15 & 0xfffffff0);
                *puVar27 = in_register_000100a0;
                puVar27[1] = in_register_000100a4;
                puVar27[2] = in_register_000100a8;
                puVar27[3] = in_vr10;
                puVar27 = (undefined4 *)(uVar42 * 6 + iVar15 & 0xfffffff0);
                *puVar27 = uVar84;
                puVar27[1] = uVar85;
                puVar27[2] = uVar86;
                puVar27[3] = uVar87;
                puVar27 = (undefined4 *)(uVar42 * 7 + iVar15 & 0xfffffff0);
                *puVar27 = in_register_00010080;
                puVar27[1] = in_register_00010084;
                puVar27[2] = in_register_00010088;
                puVar27[3] = in_vr8;
                puVar27 = (undefined4 *)((int)&uStack_3f0 + iVar14 & 0xfffffff0);
                *puVar27 = uVar92;
                puVar27[1] = uVar93;
                puVar27[2] = uVar94;
                puVar27[3] = uVar95;
                puVar27 = (undefined4 *)((int)&uStack_3d0 + iVar14 & 0xfffffff0);
                *puVar27 = uVar88;
                puVar27[1] = uVar89;
                puVar27[2] = uVar90;
                puVar27[3] = uVar91;
                puVar27 = (undefined4 *)((int)&uStack_390 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_000100a0;
                puVar27[1] = in_register_000100a4;
                puVar27[2] = in_register_000100a8;
                puVar27[3] = in_vr10;
                puVar27 = (undefined4 *)((int)&uStack_3b0 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_000100b0;
                puVar27[1] = in_register_000100b4;
                puVar27[2] = in_register_000100b8;
                puVar27[3] = in_vr11;
                puVar27 = (undefined4 *)((int)&uStack_370 + iVar14 & 0xfffffff0);
                *puVar27 = uVar84;
                puVar27[1] = uVar85;
                puVar27[2] = uVar86;
                puVar27[3] = uVar87;
                puVar27 = (undefined4 *)((int)&uStack_400 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_00010080;
                puVar27[1] = in_register_00010084;
                puVar27[2] = in_register_00010088;
                puVar27[3] = in_vr8;
                puVar27 = (undefined4 *)(uVar13 + 0x110 & 0xfffffff0);
                in_register_00010020 = *puVar27;
                in_register_00010024 = puVar27[1];
                in_register_00010028 = puVar27[2];
                in_vr2 = puVar27[3];
                vectorAverageUnsignedByte(auVar73,in_vs33);{ V16 _vt72 = vectorAverageUnsignedByte(in_vs61,in_vs63); memcpy(in_vs60, &_vt72, 16); }
                puVar27 = (undefined4 *)(iVar14 + uVar24 + 0x100 & 0xfffffff0);
                in_register_00010170 = *puVar27;
                in_register_00010174 = puVar27[1];
                in_register_00010178 = puVar27[2];
                in_vr23 = puVar27[3];
                puVar27 = (undefined4 *)((int)&uStack_410 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_000101e0;
                puVar27[1] = in_register_000101e4;
                puVar27[2] = in_register_000101e8;
                puVar27[3] = in_vr30;
                puVar27 = (undefined4 *)((int)&uStack_3f0 + iVar14 & 0xfffffff0);
                *puVar27 = uVar104;
                puVar27[1] = uVar105;
                puVar27[2] = uVar106;
                puVar27[3] = uVar107;
                puVar27 = (undefined4 *)(uVar13 + 0x140 & 0xfffffff0);
                in_register_000101b0 = *puVar27;
                in_register_000101b4 = puVar27[1];
                in_register_000101b8 = puVar27[2];
                in_vr27 = puVar27[3];{ V16 _vt73 = vectorAverageUnsignedByte(auVar79,in_vs35); memcpy(in_vs47, &_vt73, 16); }{ V16 _vt74 = vectorAverageUnsignedByte(in_vs58,in_vs57); memcpy(in_vs56, &_vt74, 16); }{ V16 _vt75 = vectorAverageUnsignedByte(in_vs50,in_vs52); memcpy(in_vs46, &_vt75, 16); }
                puVar27 = (undefined4 *)(uVar24 + 0x150 & 0xfffffff0);
                in_register_00010160 = *puVar27;
                in_register_00010164 = puVar27[1];
                in_register_00010168 = puVar27[2];
                in_vr22 = puVar27[3];{ V16 _vt76 = vectorAverageUnsignedByte(in_vs53,auVar77); memcpy(in_vs51, &_vt76, 16); }{ V16 _vt77 = vectorAverageUnsignedByte(in_vs49,in_vs55); memcpy(in_vs48, &_vt77, 16); }
                puVar27 = (undefined4 *)((int)&uStack_3d0 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_00010180;
                puVar27[1] = in_register_00010184;
                puVar27[2] = in_register_00010188;
                puVar27[3] = in_vr24;
                puVar27 = (undefined4 *)((int)&uStack_3b0 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_000100f0;
                puVar27[1] = in_register_000100f4;
                puVar27[2] = in_register_000100f8;
                puVar27[3] = in_vr15;
                puVar27 = (undefined4 *)((int)&uStack_360 + iVar14 & 0xfffffff0);
                *puVar27 = in_register_00010100;
                puVar27[1] = in_register_00010104;
                puVar27[2] = in_register_00010108;
                puVar27[3] = in_vr16;
                puVar27 = (undefined4 *)((int)&uStack_390 + iVar14 & 0xfffffff0);
                *puVar27 = uVar100;
                puVar27[1] = uVar101;
                puVar27[2] = uVar102;
                puVar27[3] = uVar103;
                puVar27 = (undefined4 *)((int)&uStack_370 + iVar14 & 0xfffffff0);
                *puVar27 = uVar96;
                puVar27[1] = uVar97;
                puVar27[2] = uVar98;
                puVar27[3] = uVar99;{ V16 _vt78 = vectorAverageUnsignedByte(in_vs45,in_vs32); memcpy(in_vs44, &_vt78, 16); }
                *puStack_76c = uStack_360;
                puVar27 = (undefined4 *)((int)&uStack_400 + iVar14 & 0xfffffff0);
                *puVar27 = uVar88;
                puVar27[1] = uVar89;
                puVar27[2] = uVar90;
                puVar27[3] = uVar91;
                puStack_76c[1] = uStack_35c;
                *(undefined4 *)((int)puStack_76c + iVar4) = uStack_358;
                *(undefined4 *)((int)puStack_76c + iVar4 + 4) = uStack_354;
                puStack_76c = (undefined4 *)((int)puStack_76c + iVar4 * 2);
                *puStack_76c = uStack_410;
                puStack_76c[1] = uStack_40c;
                puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                *puStack_76c = uStack_408;
                puStack_76c[1] = uStack_404;
                puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                *puStack_76c = uStack_3f0;
                puStack_76c[1] = uStack_3ec;
                puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                *puStack_76c = uStack_3e8;
                puStack_76c[1] = uStack_3e4;
                puStack_76c = (undefined4 *)((int)puStack_76c + iVar4);
                *puStack_76c = uStack_3d0;
                puStack_76c[1] = uStack_3cc;
                *(undefined4 *)((int)puStack_76c + iVar4) = uStack_3c8;
                ((undefined4 *)((int)puStack_76c + iVar4))[1] = uStack_3c4;
                *puStack_768 = uStack_3b0;
                puStack_768[1] = uStack_3ac;
                *(undefined4 *)((int)puStack_768 + iVar4) = uStack_3a8;
                *(undefined4 *)((int)puStack_768 + iVar4 + 4) = uStack_3a4;
                puStack_768 = (undefined4 *)((int)puStack_768 + iVar4 * 2);
                *puStack_768 = uStack_390;
                puStack_768[1] = uStack_38c;
                puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                *puStack_768 = uStack_388;
                puStack_768[1] = uStack_384;
                puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                *puStack_768 = uStack_370;
                puStack_768[1] = uStack_36c;
                puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                *puStack_768 = uStack_368;
                puStack_768[1] = uStack_364;
                puStack_768 = (undefined4 *)((int)puStack_768 + iVar4);
                *puStack_768 = uStack_400;
                puStack_768[1] = uStack_3fc;
                *(undefined4 *)((int)puStack_768 + iVar4) = uStack_3f8;
                ((undefined4 *)((int)puStack_768 + iVar4))[1] = uStack_3f4;
              }
LAB_830fe488:
              uVar60 = (ulonglong)uStack_770;
              param_3 = puStack00000024;
            }
            uVar60 = uVar60 + 1;
            uVar16 = (ulonglong)uStack_52c;
            puVar71 = puStack_774 + 6;
            *param_3 = *param_3 + 2;
            uStack_770 = (uint)uVar60;
            param_3[1] = param_3[1] + 1;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            uVar24 = uStack_530;
            puStack_774 = puVar71;
          } while ((uVar60 & 0xffffffff) < uVar16);
        }
        uStack_748 = uStack_748 + 1;
        *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
        uStack_554 = uStack_534 * 0x10 + uStack_554;
        uStack_550 = uStack_538 * 8 + uStack_550;
        *param_3 = (uint)*(ushort *)(param_2 + 0x32) + *param_3;
      } while (uStack_748 < uVar24);
    }
    uVar12 = 0;
  }
  return uVar12;
}

