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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_158;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A7398();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_826C6368();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82705498();
extern int fn_82726AB8();
extern int fn_827553F0();
extern int fn_8278B290();
extern int fn_8278BC18();
extern int fn_8278BD68();
extern int fn_8278C028();
extern int fn_8278C528();
extern int fn_8278D3F0();
extern int fn_8278DAD0();
extern int fn_82794C90();
extern int fn_82794D68();
extern int fn_82799B80();
extern int fn_82799BA8();
extern int fn_82799BD0();
extern int fn_82799D18();
extern int fn_8279B2C8();
extern int fn_8279FB38();
extern int fn_827A0AA8();
extern int fn_827A0B18();
extern int fn_827A22A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200571C;
extern float lbl_82005720;
extern unsigned int lbl_82010C6C;
extern float lbl_82011890;
extern unsigned int lbl_82011898;
extern unsigned int lbl_820118A0;
extern unsigned int lbl_820118C8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_154;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_16a;
extern unsigned int uStack_16c;
extern unsigned int uStack_16e;
extern unsigned int uStack_170;
extern unsigned int uStack_172;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_ca;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827368E0(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char cVar12;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 *apuStack_188 [2];
  undefined **ppuStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [8];
  double dStack_148;
  undefined1 auStack_140 [8];
  double dStack_138;
  undefined1 auStack_130 [8];
  double dStack_128;
  undefined1 auStack_120 [8];
  double dStack_118;
  undefined1 auStack_110 [8];
  double dStack_108;
  undefined1 auStack_100 [8];
  double dStack_f8;
  undefined1 auStack_f0 [38];
  ushort uStack_ca;
  byte bStack_c8;
  undefined **appuStack_c0 [8];
  undefined1 auStack_a0 [160];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  cVar12 = fn_82695468(param_1,0x1e);
  if (cVar12 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee44,0,0);
    return;
  }
  lVar13 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    lVar13 = 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x74);
  if (piVar2 == (int *)0x0) {
    return;
  }
  piVar2[1] = piVar2[1] + 1;
  uVar6 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_826C0B08(uVar6,*(undefined4 *)(param_1 + 0x18));
  }
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = fn_826957D0(param_1,0);
  fn_82696D38(apuStack_188,uVar7,uVar3,0xffffffffffffffff,0);
  lVar8 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x140
                            ,0);
  if (lVar8 == 0) {
    iVar10 = 0;
  }
  else {
    uVar7 = (**(code **)(*piVar2 + 0x4c))(piVar2);
    fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    uVar9 = fn_82705498();
    iVar10 = fn_827A22A8(lVar8,uVar9,uVar7,0);
  }
  *(byte *)(*(int *)(iVar10 + 8) + 0x20) = *(byte *)(*(int *)(iVar10 + 8) + 0x20) | 2;
  fn_82799B80(iVar10);
  fn_82799BA8(iVar10);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((6 < *(byte *)(iVar4 + 0x7c)) && (1 < *(int *)(param_1 + 0x1c))) {
    uVar7 = fn_826957D0(param_1,1);
    dVar14 = (double)fn_826972E0(uVar7,iVar4);
    *(byte *)(iVar10 + 0x13d) = *(byte *)(iVar10 + 0x13d) & 0xfe;
    fn_82799BD0(iVar10);
    uStack_160 = lbl_821AAD20;
    uStack_15c = lbl_821AAD20;
    fStack_158 = (float)dVar14 * lbl_8200571C;
    uStack_154 = lbl_821AAD20;
    fn_8279B2C8(iVar10,&uStack_160,1);
  }
  *(byte *)(iVar10 + 0x13d) = *(byte *)(iVar10 + 0x13d) | 4;
  fn_826FDED0(auStack_f0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = 0;
  ppuStack_180 = &lbl_82010C6C;
  uStack_17c = 1;
  uStack_16e = 0;
  uStack_16c = 0;
  uStack_16a = 0;
  fn_8278DAD0(auStack_f0);
  fn_8278BC18(&ppuStack_180);
  uVar7 = fn_8278D3F0(auStack_a0,auStack_f0,lVar13 + 0x30);
  fn_82726AB8(auStack_f0,uVar7);
  fn_826FDF58(auStack_a0);
  uVar7 = fn_8278C528(appuStack_c0,&ppuStack_180,lVar13 + 0x5c);
  fn_8278BD68(&ppuStack_180,uVar7);
  appuStack_c0[0] = &lbl_82010C6C;
  fn_8278B290(appuStack_c0);
  fn_8267C488(appuStack_c0);
  fn_82794C90(*(undefined4 *)(iVar10 + 8),auStack_f0);
  fn_82794D68(*(undefined4 *)(iVar10 + 8),&ppuStack_180);
  fn_82799D18(iVar10,*apuStack_188[0],0xffffffffffffffff);
  fn_8279FB38(iVar10);
  dVar14 = (double)fn_827A0AA8(iVar10);
  auStack_120[0] = 3;
  lVar13 = uVar6 + 0x10;
  dStack_118 = (dVar14 + lbl_820118C8) * lbl_82005720;
  dVar14 = lbl_820118C8;
  dVar17 = lbl_82005720;
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820118b8,
                    auStack_120);
  fn_82696330(auStack_120);
  dVar15 = (double)fn_827A0B18(iVar10);
  auStack_130[0] = 3;
  dStack_128 = (dVar15 + dVar14) * dVar17;
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820118a8,
                    auStack_130);
  fn_82696330(auStack_130);
  dStack_f8 = (double)fn_827A0AA8(iVar10);
  dStack_f8 = dStack_f8 * dVar17;
  auStack_100[0] = 3;
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200eaf0,
                    auStack_100);
  fn_82696330(auStack_100);
  dStack_148 = (double)fn_827A0B18(iVar10);
  dStack_148 = dStack_148 * dVar17;
  auStack_150[0] = 3;
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200eae8,
                    auStack_150);
  fn_82696330(auStack_150);
  puVar11 = (uint *)fn_8278C028(auStack_f0);
  puVar11 = (uint *)fn_827553F0(*(undefined4 *)(iVar10 + 0xc),
                                      ((ulonglong)*puVar11 & 0xfffffffc) + 8,
                                      (bStack_c8 >> 1 & 1) != 0 | -((bStack_c8 & 1) != 0) & 2U |
                                      0x10,1,0);
  dVar14 = lbl_82005710;
  if (puVar11 != (uint *)0x0) {
    dVar15 = (double)*(float *)(*(int *)(puVar11[5] + 0xc) + 8);
    dVar14 = (double)*(float *)(*(int *)(puVar11[5] + 0xc) + 0xc);
    if (dVar15 != lbl_82005710) goto LAB_82736d48;
  }
  dVar15 = lbl_820118A0;
LAB_82736d48:
  if (dVar14 == lbl_82005710) {
    dVar14 = lbl_82011898 - dVar15;
  }
  auStack_110[0] = 3;
  dVar16 = (double)((float)uStack_ca * lbl_82005718) * lbl_82011890;
  dStack_108 = (double)((longlong)(dVar16 * dVar15 * dVar17) & 0xffffffff);
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820110f8,
                    auStack_110);
  fn_82696330(auStack_110);
  auStack_140[0] = 3;
  dStack_138 = (double)((longlong)(dVar16 * dVar14 * dVar17) & 0xffffffff);
  fn_826A79D8(lVar13,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820110f0,
                    auStack_140);
  fn_82696330(auStack_140);
  fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar6);
  if ((puVar11 != (uint *)0x0) &&
     (uVar5 = *puVar11, *puVar11 = (uint)((ulonglong)uVar5 - 1), (ulonglong)uVar5 - 1 == 0)) {
    fn_826C6368(puVar11);
    fn_8267BE38(puVar11);
  }
  ppuStack_180 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_180);
  fn_8267C488(&ppuStack_180);
  fn_826FDF58(auStack_f0);
  fn_8267C498(iVar10);
  uVar5 = apuStack_188[0][2];
  apuStack_188[0][2] = (int)((ulonglong)uVar5 - 1);
  if ((ulonglong)uVar5 - 1 == 0) {
    fn_826944C8(apuStack_188[0]);
  }
  if ((uVar6 & 0xffffffff) != 0) {
    fn_826824B0(uVar6);
  }
  fn_8267C498(piVar2);
  return;
}

