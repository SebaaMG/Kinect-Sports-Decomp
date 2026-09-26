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
extern int fn_82AB14E0();
extern int fn_82AB18E8();
extern int fn_82AB1948();
extern int fn_82AB21D8();
extern int fn_82AB2E60();
extern int fn_82AB2EC0();
extern int fn_82AB3890();
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int lbl_820D660C;
extern unsigned int lbl_820D6740;
extern unsigned int lbl_82196824;
extern unsigned int lbl_821AA89C;
extern unsigned int lbl_821CE3A8;
extern unsigned int lbl_821CE700;
extern unsigned int lbl_821CE704;
extern unsigned int lbl_83160C68;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;


undefined4 fn_82AB3A98(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  bool bVar2;
  int iVar8;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar9;
  undefined8 uVar7;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uStack0000001c;
  uint uStack00000024;
  bool bStack_13f;
  uint uStack_13c;
  uint uStack_134;
  int iStack_128;
  int iStack_124;
  undefined *puStack_118;
  char *pcStack_100;
  char *pcStack_b4;
  char *pcStack_ac;
  
  *(uint *)(param_1 + 8) = param_4;
  uStack0000001c = (uint)param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  uStack00000024 = (uint)param_3;
  bStack_13f = true;
  uStack_13c = 0;
  uStack_134 = ~param_4 & 1;
  fn_82AB1948();
  iStack_128 = -1;
  iStack_124 = -1;
  fn_82AB2EC0(param_1,param_2,param_3);
  pcStack_ac = ", cond =%d";
  puStack_118 = &lbl_821CE700;
  pcStack_100 = "true";
  pcStack_b4 = "cexecp_end";
LAB_82ab3d00:
  uVar13 = (ulonglong)uStack0000001c;
  uVar12 = 0xffffffff;
LAB_82ab3d10:
  uVar12 = uVar12 + 1;
  if (((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0) == iStack_128)
  goto LAB_82ab3f48;
  iVar8 = fn_82AB14E0(uVar13,0x2d,4);
  bVar2 = true;
  if (bStack_13f) {
    fn_82AB2E60(param_1);
    if ((1 << (uStack_13c & 0x1f) & *(uint *)(((uStack_13c >> 5) + 4) * 4 + param_1)) != 0) {
      fn_82AB18E8(param_1,&lbl_820D660C,
                    (longlong)((int)uStack_13c >> 1) +
                    (ulonglong)((int)uStack_13c < 0 && (uStack_13c & 1) != 0),
                    (ulonglong)uStack_13c +
                    ((longlong)((int)uStack_13c >> 1) +
                     (ulonglong)((int)uStack_13c < 0 && (uStack_13c & 1) != 0) & 0x7fffffff) * -2);
      fn_82AB2E60(param_1);
    }
  }
  switch(iVar8) {
  case 0:
    if ((bStack_13f) && ((*(uint *)(param_1 + 8) & 4) != 0)) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      puVar1 = &lbl_821CE3A8;
code_r0x82ab3e08:
      fn_82AB21D8(param_1,puVar1);
    }
    break;
  case 1:
    goto code_r0x82ab3e40;
  case 2:
    if ((bStack_13f) && ((*(uint *)(param_1 + 8) & 4) != 0)) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB18E8(param_1,"exec_end ");
    }
    goto code_r0x82ab3e40;
  case 3:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexec";
code_r0x82ab3f98:
      fn_82AB21D8(param_1,pcVar10);
    }
    goto code_r0x82ab3fa0;
  case 4:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexec_end";
      goto code_r0x82ab3f98;
    }
    goto code_r0x82ab3fa0;
  case 5:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = "cexecp";
      goto code_r0x82ab3f98;
    }
    goto code_r0x82ab3fa0;
  case 6:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      pcVar10 = pcStack_b4;
      goto code_r0x82ab3f98;
    }
code_r0x82ab3fa0:
    bVar2 = false;
    break;
  case 7:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB21D8(param_1,0xffffffff821ce69c);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xe,3);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved = 0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x11,5);
      fn_82AB18E8(param_1,0xffffffff820d65fc,uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x16,0x16);
      if ((int)uVar7 != 0) {
        pcVar10 = ", *** reserved2=0x%x";
        goto code_r0x82ab40b8;
      }
code_r0x82ab40c4:
      iVar8 = fn_82AB14E0(uVar13,0x2c,1);
      pcVar10 = ", addressing=0x%x";
      if (iVar8 != 0) goto LAB_82ab40e4;
    }
    break;
  case 8:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB21D8(param_1,0xffffffff820d66a8);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xe,3);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved =0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x11,5);
      fn_82AB18E8(param_1,0xffffffff820d65fc,uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x16,1);
      fn_82AB18E8(param_1,", pred_break=0x%x ",uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x17,0xc);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,",*** reserved2=0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x23,2);
      fn_82AB18E8(param_1,", pred_vector=0x%x",uVar7);
      uVar7 = fn_82AB14E0(uVar13,0x25,6);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved3=0x%x",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x2b,1);
      pcVar10 = pcStack_ac;
code_r0x82ab40b8:
      fn_82AB18E8(param_1,pcVar10,uVar7);
      goto code_r0x82ab40c4;
    }
    break;
  case 9:
    if (bStack_13f) {
      uVar6 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB21D8(param_1,"ccall");
      iVar8 = (int)uVar6;
      fn_82AB18E8(param_1," (target = %d.%d)",
                    (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (uVar6 & 1) != 0),
                    uVar6 + ((longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (uVar6 & 1) != 0) &
                            0x7fffffff) * -2);
    }
    break;
  case 10:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      puVar1 = puStack_118;
      goto code_r0x82ab3e08;
    }
    break;
  case 0xb:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      iVar8 = fn_82AB14E0(uVar13,0xe,1);
      if (iVar8 == 0) {
        fn_82AB21D8(param_1,&lbl_820D6740);
        fn_82AB18E8(param_1,0xffffffff821aa89c);
        uVar7 = fn_82AB14E0(uVar13,0x23,8);
        fn_82AB18E8(param_1,0xffffffff821ce690,uVar7);
        iVar8 = fn_82AB14E0(uVar13,0x2b,1);
        pcVar10 = pcStack_100;
        if (iVar8 == 0) {
          pcVar10 = "false";
        }
        fn_82AB18E8(param_1," == %s",pcVar10);
        puVar11 = &lbl_82196824;
      }
      else {
        fn_82AB21D8(param_1,&lbl_821CE704);
        puVar11 = &lbl_821AA89C;
      }
      fn_82AB18E8(param_1,puVar11);
      uVar9 = fn_82AB14E0(uVar13,1,0xd);
      fn_82AB18E8(param_1,0xffffffff820d6288,
                    (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0),
                    uVar9 & 1);
      uVar7 = fn_82AB14E0(uVar13,0xf,0x13);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** reserved=0x%x",uVar7);
      }
      if ((*(uint *)(param_1 + 8) & 4) != 0) {
        uVar7 = fn_82AB14E0(uVar13,0x22,1);
        fn_82AB18E8(param_1,", fw_only=0x%x",uVar7);
      }
      iVar8 = fn_82AB14E0(uVar13,0x2c,1);
      if (iVar8 != 0) {
        pcVar10 = "addressing = 0x%x ";
        goto LAB_82ab40e4;
      }
    }
    break;
  case 0xc:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB21D8(param_1,0xffffffff821ce738);
      fn_82AB18E8(param_1,0xffffffff821aa89c);
      iVar8 = fn_82AB14E0(uVar13,0x2a,2);
      fn_82AB18E8(param_1,0xffffffff821c4da8,
                    (&lbl_83160C68)[(*(uint *)(param_1 + 8) >> 3 & 1) + iVar8 * 2]);
      if (iVar8 == 3) {
        uVar7 = fn_82AB14E0(uVar13,1,3);
        fn_82AB18E8(param_1,", size=%d",uVar7);
      }
      uVar7 = fn_82AB14E0(uVar13,0x2c,1);
      if ((int)uVar7 != 0) {
        fn_82AB18E8(param_1,", *** debug=%d",uVar7);
      }
      iVar8 = fn_82AB14E0(uVar13,4,0x26);
      if (iVar8 != 0) {
        pcVar10 = ", *** reserved=%d";
        goto LAB_82ab40e4;
      }
    }
    break;
  default:
    if (bStack_13f) {
      fn_82AB18E8(param_1,0xffffffff821ce66c);
      fn_82AB21D8(param_1,"unknown cf opcode");
      pcVar10 = " = 0x%x ";
LAB_82ab40e4:
      fn_82AB18E8(param_1,pcVar10,iVar8);
    }
  }
  goto LAB_82ab3f30;
code_r0x82ab3e40:
  lVar3 = fn_82AB14E0(uVar13,1,0xc);
  iVar8 = (int)lVar3;
  if (iStack_128 == -1) {
    iStack_128 = iVar8;
  }
  lVar4 = fn_82AB14E0(uVar13,0xd,4);
  uVar7 = fn_82AB14E0(uVar13,0x11,0xc);
  uVar5 = fn_82AB14E0(uVar13,0x1d,6);
  fn_82AB14E0(uVar13,0x23,9);
  fn_82AB14E0(uVar13,0x2c,1);
  if ((uStack_134 != 0) && (iStack_124 < iVar8)) {
    fn_82AB3890(param_1,lVar3,lVar3 * 0xc + (ulonglong)uStack0000001c,lVar4,uVar7,uVar5);
    iStack_124 = (int)lVar4 + iVar8 + -1;
  }
  if ((bStack_13f) && ((ulonglong)uStack00000024 < ((lVar4 + lVar3) * 3 & 0xffffffffU))) {
    fn_82AB18E8(param_1,"Length and code parse disagree. Length = %d parse = %d\n");
  }
LAB_82ab3f30:
  uStack_13c = uStack_13c + 1;
  uVar13 = uVar13 + 6;
  if (!bVar2) goto LAB_82ab3f48;
  goto LAB_82ab3d10;
LAB_82ab3f48:
  bVar2 = uStack_134 == 0;
  bStack_13f = bStack_13f == false;
  uStack_134 = (uint)bVar2;
  if (!bVar2) {
    fn_82AB2E60(param_1);
    return *(undefined4 *)(param_1 + 0xc);
  }
  goto LAB_82ab3d00;
}

