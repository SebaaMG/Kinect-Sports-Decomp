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
extern int fn_82983680();
extern int fn_8298A258();
extern int fn_8298EF20();
extern unsigned int lbl_820442B0;
extern unsigned int lbl_82044608;
extern unsigned int lbl_82044960;
extern unsigned int lbl_82044F90;
extern unsigned int lbl_820450B0;
extern unsigned int lbl_820456E0;
extern unsigned int lbl_82045D10;
extern unsigned int lbl_82045E30;
extern unsigned int lbl_82049900;


undefined8 fn_82991420(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  
  *(int *)(param_1 + 0x14) = param_1 + 0x408;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(short **)(param_1 + 0x10) = (short *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x20) = 0;
  iVar11 = 0;
LAB_82991474:
  do {
    while( true ) {
      iVar10 = iVar11 * 2;
      sVar1 = *(short *)(&lbl_82044960 + iVar10);
      if (sVar1 == 0) break;
LAB_82991570:
      iVar11 = sVar1 * 2;
      iVar10 = (int)*(short *)(&lbl_82044608 + iVar11);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar10 * -4 + 4);
      switch((int)sVar1) {
      case 1:
        uVar3 = 0;
        goto code_r0x829927cc;
      case 2:
        uVar4 = 1;
        uVar3 = 1;
        break;
      case 3:
        uVar4 = 1;
        uVar3 = 2;
        break;
      case 4:
        uVar4 = 2;
        uVar3 = 3;
        break;
      case 5:
        uVar3 = 4;
        goto code_r0x829927cc;
      case 6:
        uVar4 = 1;
        uVar3 = 5;
        break;
      case 7:
        uVar4 = 1;
        uVar3 = 6;
        break;
      case 8:
        uVar4 = 1;
        uVar3 = 7;
        break;
      case 9:
        uVar4 = 1;
        uVar3 = 8;
        break;
      case 10:
        uVar4 = 1;
        uVar3 = 0xc;
        break;
      case 0xb:
        uVar4 = 1;
        uVar3 = 9;
        break;
      case 0xc:
        uVar4 = 1;
        uVar3 = 10;
        break;
      case 0xd:
        uVar4 = 1;
        uVar3 = 0xb;
        break;
      case 0xe:
        uVar4 = 1;
        uVar3 = 0xd;
        break;
      case 0xf:
        uVar4 = 3;
        uVar3 = 0xe;
        break;
      case 0x10:
        uVar4 = 4;
        uVar3 = 0xf;
        break;
      case 0x11:
        uVar4 = 1;
        uVar3 = 0x12;
        break;
      case 0x12:
        uVar3 = 0x10;
        goto code_r0x829927cc;
      case 0x13:
        uVar3 = 0x11;
        goto code_r0x829927cc;
      case 0x14:
        uVar4 = 4;
        uVar3 = 0x13;
        break;
      case 0x15:
        uVar4 = 5;
        uVar3 = 0x14;
        break;
      case 0x16:
        uVar4 = 1;
        uVar3 = 0x15;
        break;
      case 0x17:
        uVar4 = 2;
        uVar3 = 0x16;
        break;
      case 0x18:
        uVar4 = 1;
        uVar3 = 0x19;
        break;
      case 0x19:
        uVar4 = 2;
        uVar3 = 0x1a;
        break;
      case 0x1a:
        uVar3 = 0x18;
        goto code_r0x829927cc;
      case 0x1b:
        uVar4 = 4;
        uVar3 = 0x1b;
        break;
      case 0x1c:
        uVar4 = 5;
        uVar3 = 0x1c;
        break;
      case 0x1d:
        uVar4 = 1;
        uVar3 = 0x1f;
        break;
      case 0x1e:
        uVar4 = 2;
        uVar3 = 0x20;
        break;
      case 0x1f:
        uVar3 = 0x1e;
        goto code_r0x829927cc;
      case 0x20:
        uVar3 = 0x23;
        goto code_r0x829927cc;
      case 0x21:
        uVar4 = 1;
        uVar3 = 0x24;
        break;
      case 0x22:
        uVar4 = 1;
        uVar3 = 0x21;
        break;
      case 0x23:
        uVar4 = 2;
        uVar3 = 0x22;
        break;
      case 0x24:
        uVar3 = 0x25;
        goto code_r0x829927cc;
      case 0x25:
        uVar3 = 0x26;
        goto code_r0x829927cc;
      case 0x26:
        uVar3 = 0x27;
        goto code_r0x829927cc;
      case 0x27:
        uVar3 = 0x28;
        goto code_r0x829927cc;
      case 0x28:
        uVar3 = 0x29;
        goto code_r0x829927cc;
      case 0x29:
        uVar3 = 0x2a;
        goto code_r0x829927cc;
      case 0x2a:
        uVar3 = 0x2b;
        goto code_r0x829927cc;
      case 0x2b:
        uVar3 = 0x2c;
        goto code_r0x829927cc;
      case 0x2c:
        uVar3 = 0x2d;
        goto code_r0x829927cc;
      case 0x2d:
        uVar3 = 0x2e;
        goto code_r0x829927cc;
      case 0x2e:
        uVar4 = 1;
        uVar3 = 0x2f;
        break;
      case 0x2f:
        uVar4 = 1;
        uVar3 = 0x30;
        break;
      case 0x30:
        uVar4 = 1;
        uVar3 = 0x34;
        break;
      case 0x31:
        uVar4 = 2;
        uVar3 = 0x35;
        break;
      case 0x32:
        uVar3 = 0x36;
        goto code_r0x829927cc;
      case 0x33:
        uVar3 = 0x37;
        goto code_r0x829927cc;
      case 0x34:
        uVar3 = 0x38;
        goto code_r0x829927cc;
      case 0x35:
        uVar4 = 1;
        uVar3 = 0x39;
        break;
      case 0x36:
        uVar4 = 2;
        uVar3 = 0x3a;
        break;
      case 0x37:
        uVar4 = 1;
        uVar3 = 0x3d;
        break;
      case 0x38:
        uVar4 = 2;
        uVar3 = 0x3e;
        break;
      case 0x39:
        uVar4 = 2;
        uVar3 = 0x3f;
        break;
      case 0x3a:
        uVar4 = 2;
        uVar3 = 0x40;
        break;
      case 0x3b:
        uVar4 = 1;
        uVar3 = 0x41;
        break;
      case 0x3c:
        uVar4 = 1;
        uVar3 = 0x42;
        break;
      case 0x3d:
        uVar4 = 2;
        uVar3 = 0x43;
        break;
      case 0x3e:
        uVar4 = 1;
        uVar3 = 0x44;
        break;
      case 0x3f:
        uVar4 = 1;
        uVar3 = 0x45;
        break;
      case 0x40:
        uVar4 = 1;
        uVar3 = 0x46;
        break;
      case 0x41:
        uVar4 = 1;
        uVar3 = 0x47;
        break;
      case 0x42:
        uVar4 = 1;
        uVar3 = 0x48;
        break;
      case 0x43:
        uVar4 = 1;
        uVar3 = 0x49;
        break;
      case 0x44:
        uVar4 = 1;
        uVar3 = 0x4a;
        break;
      case 0x45:
        uVar4 = 1;
        uVar3 = 0x4b;
        break;
      case 0x46:
        uVar4 = 2;
        uVar3 = 0x4c;
        break;
      case 0x47:
        uVar4 = 1;
        uVar3 = 0x4d;
        break;
      case 0x48:
        uVar4 = 2;
        uVar3 = 0x4e;
        break;
      case 0x49:
        uVar3 = 0x4f;
        goto code_r0x829927cc;
      case 0x4a:
        uVar4 = 1;
        uVar3 = 0x50;
        break;
      case 0x4b:
        uVar4 = 1;
        uVar3 = 0x51;
        break;
      case 0x4c:
        uVar4 = 1;
        uVar3 = 0x52;
        break;
      case 0x4d:
        uVar4 = 1;
        uVar3 = 0x53;
        break;
      case 0x4e:
        uVar3 = 0x54;
        goto code_r0x829927cc;
      case 0x4f:
        uVar3 = 0x55;
        goto code_r0x829927cc;
      case 0x50:
        uVar3 = 0x56;
        goto code_r0x829927cc;
      case 0x51:
        uVar3 = 0x57;
        goto code_r0x829927cc;
      case 0x52:
        uVar3 = 0x58;
        goto code_r0x829927cc;
      case 0x53:
        uVar3 = 0x59;
        goto code_r0x829927cc;
      case 0x54:
        uVar3 = 0x5a;
        goto code_r0x829927cc;
      case 0x55:
        uVar3 = 0x5b;
        goto code_r0x829927cc;
      case 0x56:
        uVar3 = 0x5c;
        goto code_r0x829927cc;
      case 0x57:
        uVar3 = 0x5d;
        goto code_r0x829927cc;
      case 0x58:
        uVar4 = 2;
        uVar3 = 0x5e;
        break;
      case 0x59:
        uVar3 = 0x5f;
        goto code_r0x829927cc;
      case 0x5a:
        uVar4 = 3;
        uVar3 = 0x60;
        break;
      case 0x5b:
        uVar3 = 0x61;
        goto code_r0x829927cc;
      case 0x5c:
        uVar3 = 0x62;
        goto code_r0x829927cc;
      case 0x5d:
        uVar3 = 99;
        goto code_r0x829927cc;
      case 0x5e:
        uVar3 = 100;
        goto code_r0x829927cc;
      case 0x5f:
        uVar3 = 0x65;
        goto code_r0x829927cc;
      case 0x60:
        uVar3 = 0x66;
        goto code_r0x829927cc;
      case 0x61:
        uVar3 = 0x67;
        goto code_r0x829927cc;
      case 0x62:
        uVar3 = 0x68;
        goto code_r0x829927cc;
      case 99:
        uVar4 = 1;
        uVar3 = 0x69;
        break;
      case 100:
        uVar4 = 1;
        uVar3 = 0x6a;
        break;
      case 0x65:
        uVar4 = 1;
        uVar3 = 0x6b;
        break;
      case 0x66:
        uVar4 = 1;
        uVar3 = 0x6c;
        break;
      case 0x67:
        uVar4 = 1;
        uVar3 = 0x6d;
        break;
      case 0x68:
        uVar4 = 1;
        uVar3 = 0x6e;
        break;
      case 0x69:
        uVar3 = 0x7b;
        goto code_r0x829927cc;
      case 0x6a:
        uVar3 = 0x7c;
        goto code_r0x829927cc;
      case 0x6b:
        uVar3 = 0x6f;
        goto code_r0x829927cc;
      case 0x6c:
        uVar3 = 0x70;
        goto code_r0x829927cc;
      case 0x6d:
        uVar3 = 0x71;
        goto code_r0x829927cc;
      case 0x6e:
        uVar3 = 0x72;
        goto code_r0x829927cc;
      case 0x6f:
        uVar3 = 0x73;
        goto code_r0x829927cc;
      case 0x70:
        uVar3 = 0x74;
        goto code_r0x829927cc;
      case 0x71:
        uVar3 = 0x81;
        goto code_r0x829927cc;
      case 0x72:
        uVar3 = 0x75;
        goto code_r0x829927cc;
      case 0x73:
        uVar3 = 0x76;
        goto code_r0x829927cc;
      case 0x74:
        uVar3 = 0x7d;
        goto code_r0x829927cc;
      case 0x75:
        uVar3 = 0x77;
        goto code_r0x829927cc;
      case 0x76:
        uVar4 = 1;
        uVar3 = 0x78;
        break;
      case 0x77:
        uVar3 = 0x7e;
        goto code_r0x829927cc;
      case 0x78:
        uVar3 = 0x7f;
        goto code_r0x829927cc;
      case 0x79:
        uVar3 = 0x80;
        goto code_r0x829927cc;
      case 0x7a:
        uVar4 = 1;
        uVar3 = 0x82;
        break;
      case 0x7b:
        uVar4 = 1;
        uVar3 = 0x83;
        break;
      case 0x7c:
        uVar4 = 1;
        uVar3 = 0x84;
        break;
      case 0x7d:
        uVar4 = 2;
        uVar3 = 0x79;
        break;
      case 0x7e:
        uVar4 = 2;
        uVar3 = 0x7a;
        break;
      case 0x7f:
        uVar3 = 0x86;
        goto code_r0x829927cc;
      case 0x80:
        uVar3 = 0x85;
        goto code_r0x829927cc;
      case 0x81:
        uVar4 = 2;
        uVar3 = 0x8a;
        break;
      case 0x82:
        uVar4 = 3;
        uVar3 = 0x8b;
        break;
      case 0x83:
        uVar4 = 3;
        uVar3 = 0x8c;
        break;
      case 0x84:
        uVar4 = 4;
        uVar3 = 0x8d;
        break;
      case 0x85:
        uVar4 = 1;
        uVar3 = 0x8e;
        break;
      case 0x86:
        uVar4 = 2;
        uVar3 = 0x8f;
        break;
      case 0x87:
        uVar3 = 0x90;
        goto code_r0x829927cc;
      case 0x88:
        uVar4 = 1;
        uVar3 = 0x91;
        break;
      case 0x89:
        uVar4 = 2;
        uVar3 = 0x92;
        break;
      case 0x8a:
        uVar4 = 2;
        uVar3 = 0x93;
        break;
      case 0x8b:
        uVar4 = 3;
        uVar3 = 0x94;
        break;
      case 0x8c:
        uVar3 = 0x95;
        goto code_r0x829927cc;
      case 0x8d:
        uVar4 = 1;
        uVar3 = 0x96;
        break;
      case 0x8e:
        uVar4 = 1;
        uVar3 = 0x97;
        break;
      case 0x8f:
        uVar4 = 1;
        uVar3 = 0x98;
        break;
      case 0x90:
        uVar4 = 1;
        uVar3 = 0x99;
        break;
      case 0x91:
        uVar4 = 1;
        uVar3 = 0x9a;
        break;
      case 0x92:
        uVar4 = 2;
        uVar3 = 0x9b;
        break;
      case 0x93:
        uVar3 = 0x9c;
        goto code_r0x829927cc;
      case 0x94:
        uVar4 = 1;
        uVar3 = 0x9d;
        break;
      case 0x95:
        uVar4 = 1;
        uVar3 = 0x9e;
        break;
      case 0x96:
        uVar4 = 2;
        uVar3 = 0x9f;
        break;
      case 0x97:
        uVar4 = 1;
        uVar3 = 0xa0;
        break;
      case 0x98:
        uVar4 = 2;
        uVar3 = 0xa1;
        break;
      case 0x99:
        uVar4 = 2;
        uVar3 = 0xa2;
        break;
      case 0x9a:
        uVar4 = 3;
        uVar3 = 0xa3;
        break;
      case 0x9b:
        uVar4 = 1;
        uVar3 = 0xa4;
        break;
      case 0x9c:
        uVar4 = 3;
        uVar3 = 0xa5;
        break;
      case 0x9d:
        uVar4 = 2;
        uVar3 = 0xa6;
        break;
      case 0x9e:
        uVar4 = 3;
        uVar3 = 0xa7;
        break;
      case 0x9f:
        uVar3 = 0xa8;
        goto code_r0x829927cc;
      case 0xa0:
        uVar4 = 1;
        uVar3 = 0xa9;
        break;
      case 0xa1:
        uVar3 = 0xaa;
        goto code_r0x829927cc;
      case 0xa2:
        uVar4 = 1;
        uVar3 = 0xab;
        break;
      case 0xa3:
        uVar4 = 2;
        uVar3 = 0xac;
        break;
      case 0xa4:
        uVar3 = 0xad;
        goto code_r0x829927cc;
      case 0xa5:
        uVar4 = 1;
        uVar3 = 0xae;
        break;
      case 0xa6:
        uVar4 = 1;
        uVar3 = 0xaf;
        break;
      case 0xa7:
        uVar4 = 2;
        uVar3 = 0xb0;
        break;
      case 0xa8:
        uVar4 = 1;
        uVar3 = 0xb1;
        break;
      case 0xa9:
        uVar4 = 1;
        uVar3 = 0xb2;
        break;
      case 0xaa:
        uVar4 = 1;
        uVar3 = 0xb3;
        break;
      case 0xab:
        uVar4 = 1;
        uVar3 = 0xb4;
        break;
      case 0xac:
        uVar4 = 1;
        uVar3 = 0xb5;
        break;
      case 0xad:
        uVar3 = 0xb6;
        goto code_r0x829927cc;
      case 0xae:
        uVar4 = 1;
        uVar3 = 0xb7;
        break;
      case 0xaf:
        uVar4 = 2;
        uVar3 = 0xb8;
        break;
      case 0xb0:
        uVar4 = 2;
        uVar3 = 0xb9;
        break;
      case 0xb1:
        uVar4 = 1;
        uVar3 = 0xba;
        break;
      case 0xb2:
        uVar4 = 2;
        uVar3 = 0xbb;
        break;
      case 0xb3:
        uVar4 = 4;
        uVar3 = 0xbc;
        break;
      case 0xb4:
        uVar4 = 1;
        uVar3 = 0xbd;
        break;
      case 0xb5:
        uVar4 = 1;
        uVar3 = 0xbe;
        break;
      case 0xb6:
        uVar4 = 2;
        uVar3 = 0xbf;
        break;
      case 0xb7:
        uVar4 = 1;
        uVar3 = 0xc0;
        break;
      case 0xb8:
        uVar4 = 2;
        uVar3 = 0xc1;
        break;
      case 0xb9:
        uVar3 = 0xc2;
        goto code_r0x829927cc;
      case 0xba:
        uVar4 = 1;
        uVar3 = 0xc3;
        break;
      case 0xbb:
        uVar4 = 2;
        uVar3 = 0xc4;
        break;
      case 0xbc:
        uVar4 = 1;
        uVar3 = 0xc5;
        break;
      case 0xbd:
        uVar4 = 3;
        uVar3 = 0xc6;
        break;
      case 0xbe:
        uVar4 = 4;
        uVar3 = 199;
        break;
      case 0xbf:
        uVar4 = 5;
        uVar3 = 200;
        break;
      case 0xc0:
        uVar4 = 2;
        uVar3 = 0xc9;
        break;
      case 0xc1:
        uVar4 = 2;
        uVar3 = 0xca;
        break;
      case 0xc2:
        uVar4 = 3;
        uVar3 = 0xcb;
        break;
      case 0xc3:
        uVar3 = 0xcc;
        goto code_r0x829927cc;
      case 0xc4:
        uVar3 = 0xcd;
        goto code_r0x829927cc;
      case 0xc5:
        uVar4 = 1;
        uVar3 = 0xce;
        break;
      case 0xc6:
        uVar4 = 2;
        uVar3 = 0xcf;
        break;
      case 199:
        uVar4 = 2;
        uVar3 = 0xd0;
        break;
      case 200:
        uVar4 = 1;
        uVar3 = 0xd1;
        break;
      case 0xc9:
        uVar4 = 2;
        uVar3 = 0xd2;
        break;
      case 0xca:
        uVar4 = 1;
        uVar3 = 0xd5;
        break;
      case 0xcb:
        uVar4 = 2;
        uVar3 = 0xd6;
        break;
      case 0xcc:
        uVar4 = 1;
        uVar3 = 0xd7;
        break;
      case 0xcd:
        uVar4 = 2;
        uVar3 = 0xd8;
        break;
      case 0xce:
        uVar3 = 0xd9;
        goto code_r0x829927cc;
      case 0xcf:
        uVar3 = 0xda;
        goto code_r0x829927cc;
      case 0xd0:
        uVar3 = 0xdb;
        goto code_r0x829927cc;
      case 0xd1:
        uVar3 = 0xdc;
        goto code_r0x829927cc;
      case 0xd2:
        uVar3 = 0xdd;
        goto code_r0x829927cc;
      case 0xd3:
        uVar3 = 0xde;
        goto code_r0x829927cc;
      case 0xd4:
        uVar3 = 0xdf;
        goto code_r0x829927cc;
      case 0xd5:
        uVar3 = 0xe0;
        goto code_r0x829927cc;
      case 0xd6:
        uVar3 = 0xe1;
        goto code_r0x829927cc;
      case 0xd7:
        uVar3 = 0xe2;
        goto code_r0x829927cc;
      case 0xd8:
        uVar3 = 0xe3;
        goto code_r0x829927cc;
      case 0xd9:
        uVar3 = 0xe4;
        goto code_r0x829927cc;
      case 0xda:
        uVar3 = 0xe5;
        goto code_r0x829927cc;
      case 0xdb:
        uVar4 = 1;
        uVar3 = 0xe6;
        break;
      case 0xdc:
        uVar4 = 3;
        uVar3 = 0xe7;
        break;
      case 0xdd:
        uVar4 = 3;
        uVar3 = 0xe8;
        break;
      case 0xde:
        uVar4 = 2;
        uVar3 = 0xe9;
        break;
      case 0xdf:
        uVar4 = 3;
        uVar3 = 0xea;
        break;
      case 0xe0:
        uVar3 = 0xeb;
        goto code_r0x829927cc;
      case 0xe1:
        uVar3 = 0xec;
        goto code_r0x829927cc;
      case 0xe2:
        uVar4 = 1;
        uVar3 = 0xed;
        break;
      case 0xe3:
        uVar4 = 2;
        uVar3 = 0xee;
        break;
      case 0xe4:
        uVar4 = 3;
        uVar3 = 0xef;
        break;
      case 0xe5:
        uVar4 = 2;
        uVar3 = 0xf0;
        break;
      case 0xe6:
        uVar4 = 3;
        uVar3 = 0xf1;
        break;
      case 0xe7:
        uVar3 = 0xf2;
        goto code_r0x829927cc;
      case 0xe8:
        uVar3 = 0xf3;
        goto code_r0x829927cc;
      case 0xe9:
        uVar4 = 1;
        uVar3 = 0xf4;
        break;
      case 0xea:
        uVar4 = 2;
        uVar3 = 0xf5;
        break;
      case 0xeb:
        uVar4 = 5;
        uVar3 = 0xf6;
        break;
      case 0xec:
        uVar4 = 3;
        uVar3 = 0xf8;
        break;
      case 0xed:
        uVar3 = 0xfa;
        goto code_r0x829927cc;
      case 0xee:
        uVar4 = 1;
        uVar3 = 0xfb;
        break;
      case 0xef:
        uVar3 = 0xfc;
        goto code_r0x829927cc;
      case 0xf0:
        uVar3 = 0xfd;
        goto code_r0x829927cc;
      case 0xf1:
        uVar4 = 1;
        uVar3 = 0x199;
        break;
      case 0xf2:
        uVar4 = 1;
        uVar3 = 0x19a;
        break;
      case 0xf3:
        uVar4 = 1;
        uVar3 = 0x19b;
        break;
      case 0xf4:
        uVar4 = 1;
        uVar3 = 0x19c;
        break;
      case 0xf5:
        uVar4 = 1;
        uVar3 = 0x19d;
        break;
      case 0xf6:
        uVar4 = 2;
        uVar3 = 0x19e;
        break;
      case 0xf7:
        uVar4 = 1;
        uVar3 = 0x19f;
        break;
      case 0xf8:
        uVar3 = 0x1a0;
        goto code_r0x829927cc;
      case 0xf9:
        uVar3 = 0x1a1;
        goto code_r0x829927cc;
      case 0xfa:
        uVar3 = 0x1a2;
        goto code_r0x829927cc;
      case 0xfb:
        uVar3 = 0x1a3;
        goto code_r0x829927cc;
      case 0xfc:
        uVar4 = 1;
        uVar3 = 0x132;
        break;
      case 0xfd:
        uVar4 = 2;
        uVar3 = 0x133;
        break;
      case 0xfe:
        uVar4 = 1;
        uVar3 = 0x134;
        break;
      case 0xff:
        uVar4 = 1;
        uVar3 = 0x135;
        break;
      case 0x100:
        uVar4 = 1;
        uVar3 = 0x136;
        break;
      case 0x101:
        uVar4 = 1;
        uVar3 = 0x137;
        break;
      case 0x102:
        uVar4 = 1;
        uVar3 = 0x138;
        break;
      case 0x103:
        uVar4 = 2;
        uVar3 = 0xfe;
        break;
      case 0x104:
        uVar4 = 3;
        uVar3 = 0xff;
        break;
      case 0x105:
        uVar3 = 0x100;
        goto code_r0x829927cc;
      case 0x106:
        uVar3 = 0x101;
        goto code_r0x829927cc;
      case 0x107:
        uVar4 = 1;
        uVar3 = 0x102;
        break;
      case 0x108:
        uVar4 = 2;
        uVar3 = 0x103;
        break;
      case 0x109:
        uVar3 = 0x104;
        goto code_r0x829927cc;
      case 0x10a:
        uVar4 = 1;
        uVar3 = 0x105;
        break;
      case 0x10b:
        uVar3 = 0x106;
        goto code_r0x829927cc;
      case 0x10c:
        uVar4 = 1;
        uVar3 = 0x107;
        break;
      case 0x10d:
        uVar4 = 2;
        uVar3 = 0x108;
        break;
      case 0x10e:
        uVar4 = 1;
        uVar3 = 0x109;
        break;
      case 0x10f:
        uVar3 = 0x10a;
        goto code_r0x829927cc;
      case 0x110:
        uVar4 = 1;
        uVar3 = 0x10b;
        break;
      case 0x111:
        uVar4 = 1;
        uVar3 = 0x10c;
        break;
      case 0x112:
        uVar4 = 1;
        uVar3 = 0x10d;
        break;
      case 0x113:
        uVar3 = 0x10e;
        goto code_r0x829927cc;
      case 0x114:
        uVar3 = 0x10f;
        goto code_r0x829927cc;
      case 0x115:
        uVar3 = 0x110;
        goto code_r0x829927cc;
      case 0x116:
        uVar4 = 1;
        uVar3 = 0x111;
        break;
      case 0x117:
        uVar4 = 2;
        uVar3 = 0x112;
        break;
      case 0x118:
        uVar4 = 5;
        uVar3 = 0x113;
        break;
      case 0x119:
        uVar4 = 2;
        uVar3 = 0x114;
        break;
      case 0x11a:
        uVar4 = 4;
        uVar3 = 0x115;
        break;
      case 0x11b:
        uVar4 = 6;
        uVar3 = 0x116;
        break;
      case 0x11c:
        uVar4 = 1;
        uVar3 = 0x117;
        break;
      case 0x11d:
        uVar4 = 2;
        uVar3 = 0x118;
        break;
      case 0x11e:
        uVar4 = 5;
        uVar3 = 0x119;
        break;
      case 0x11f:
        uVar4 = 2;
        uVar3 = 0x11a;
        break;
      case 0x120:
        uVar4 = 3;
        uVar3 = 0x11b;
        break;
      case 0x121:
        uVar4 = 2;
        uVar3 = 0x11c;
        break;
      case 0x122:
        uVar4 = 2;
        uVar3 = 0x11d;
        break;
      case 0x123:
        uVar4 = 3;
        uVar3 = 0x11e;
        break;
      case 0x124:
        uVar4 = 6;
        uVar3 = 0x11f;
        break;
      case 0x125:
        uVar4 = 3;
        uVar3 = 0x120;
        break;
      case 0x126:
        uVar4 = 4;
        uVar3 = 0x121;
        break;
      case 0x127:
        uVar4 = 3;
        uVar3 = 0x122;
        break;
      case 0x128:
        uVar4 = 1;
        uVar3 = 0x123;
        break;
      case 0x129:
        uVar3 = 0x124;
        goto code_r0x829927cc;
      case 0x12a:
        uVar4 = 1;
        uVar3 = 0x125;
        break;
      case 299:
        uVar4 = 2;
        uVar3 = 0x126;
        break;
      case 300:
        uVar4 = 2;
        uVar3 = 0x127;
        break;
      case 0x12d:
        uVar4 = 1;
        uVar3 = 0x128;
        break;
      case 0x12e:
        uVar4 = 2;
        uVar3 = 0x129;
        break;
      case 0x12f:
        uVar3 = 0x12a;
        goto code_r0x829927cc;
      case 0x130:
        uVar3 = 299;
        goto code_r0x829927cc;
      case 0x131:
        uVar4 = 1;
        uVar3 = 300;
        break;
      case 0x132:
        uVar4 = 1;
        uVar3 = 0x12d;
        break;
      case 0x133:
        uVar3 = 0x12e;
        goto code_r0x829927cc;
      case 0x134:
        uVar4 = 1;
        uVar3 = 0x12f;
        break;
      case 0x135:
        uVar3 = 0x130;
        goto code_r0x829927cc;
      case 0x136:
        uVar4 = 1;
        uVar3 = 0x131;
        break;
      case 0x137:
        uVar3 = 0x139;
        goto code_r0x829927cc;
      case 0x138:
        uVar3 = 0x13a;
        goto code_r0x829927cc;
      case 0x139:
        uVar4 = 1;
        uVar3 = 0x13b;
        break;
      case 0x13a:
        uVar4 = 1;
        uVar3 = 0x13c;
        break;
      case 0x13b:
        uVar4 = 1;
        uVar3 = 0x13d;
        break;
      case 0x13c:
        uVar4 = 1;
        uVar3 = 0x13e;
        break;
      case 0x13d:
        uVar3 = 0x13f;
        goto code_r0x829927cc;
      case 0x13e:
        uVar4 = 1;
        uVar3 = 0x140;
        break;
      case 0x13f:
        uVar4 = 2;
        uVar3 = 0x141;
        break;
      case 0x140:
        uVar4 = 2;
        uVar3 = 0x142;
        break;
      case 0x141:
        uVar4 = 2;
        uVar3 = 0x143;
        break;
      case 0x142:
        uVar4 = 1;
        uVar3 = 0x144;
        break;
      case 0x143:
        uVar4 = 1;
        uVar3 = 0x145;
        break;
      case 0x144:
        uVar4 = 2;
        uVar3 = 0x146;
        break;
      case 0x145:
        uVar4 = 1;
        uVar3 = 0x147;
        break;
      case 0x146:
        uVar4 = 1;
        uVar3 = 0x148;
        break;
      case 0x147:
        uVar4 = 2;
        uVar3 = 0x149;
        break;
      case 0x148:
        uVar4 = 1;
        uVar3 = 0x14a;
        break;
      case 0x149:
        uVar4 = 1;
        uVar3 = 0x14b;
        break;
      case 0x14a:
        uVar4 = 3;
        uVar3 = 0x14c;
        break;
      case 0x14b:
        uVar4 = 3;
        uVar3 = 0x14d;
        break;
      case 0x14c:
        uVar4 = 4;
        uVar3 = 0x14e;
        break;
      case 0x14d:
        uVar4 = 1;
        uVar3 = 0x14f;
        break;
      case 0x14e:
        uVar4 = 3;
        uVar3 = 0x150;
        break;
      case 0x14f:
        uVar4 = 1;
        uVar3 = 0x151;
        break;
      case 0x150:
        uVar4 = 1;
        uVar3 = 0x152;
        break;
      case 0x151:
        uVar4 = 1;
        uVar3 = 0x153;
        break;
      case 0x152:
        uVar4 = 1;
        uVar3 = 0x154;
        break;
      case 0x153:
        uVar4 = 2;
        uVar3 = 0x155;
        break;
      case 0x154:
        uVar4 = 2;
        uVar3 = 0x156;
        break;
      case 0x155:
        uVar4 = 1;
        uVar3 = 0x157;
        break;
      case 0x156:
        uVar4 = 1;
        uVar3 = 0x158;
        break;
      case 0x157:
        uVar4 = 3;
        uVar3 = 0x159;
        break;
      case 0x158:
        uVar4 = 1;
        uVar3 = 0x15a;
        break;
      case 0x159:
        uVar4 = 1;
        uVar3 = 0x15b;
        break;
      case 0x15a:
        uVar4 = 1;
        uVar3 = 0x15c;
        break;
      case 0x15b:
        uVar4 = 1;
        uVar3 = 0x15d;
        break;
      case 0x15c:
        uVar4 = 1;
        uVar3 = 0x15e;
        break;
      case 0x15d:
        uVar4 = 1;
        uVar3 = 0x15f;
        break;
      case 0x15e:
        uVar4 = 1;
        uVar3 = 0x160;
        break;
      case 0x15f:
        uVar4 = 1;
        uVar3 = 0x161;
        break;
      case 0x160:
        uVar4 = 2;
        uVar3 = 0x162;
        break;
      case 0x161:
        uVar4 = 1;
        uVar3 = 0x163;
        break;
      case 0x162:
        uVar4 = 2;
        uVar3 = 0x164;
        break;
      case 0x163:
        uVar4 = 2;
        uVar3 = 0x165;
        break;
      case 0x164:
        uVar4 = 2;
        uVar3 = 0x166;
        break;
      case 0x165:
        uVar4 = 1;
        uVar3 = 0x167;
        break;
      case 0x166:
        uVar4 = 2;
        uVar3 = 0x168;
        break;
      case 0x167:
        uVar4 = 2;
        uVar3 = 0x169;
        break;
      case 0x168:
        uVar4 = 1;
        uVar3 = 0x16a;
        break;
      case 0x169:
        uVar4 = 2;
        uVar3 = 0x16b;
        break;
      case 0x16a:
        uVar4 = 2;
        uVar3 = 0x16c;
        break;
      case 0x16b:
        uVar4 = 1;
        uVar3 = 0x16d;
        break;
      case 0x16c:
        uVar4 = 2;
        uVar3 = 0x16e;
        break;
      case 0x16d:
        uVar4 = 2;
        uVar3 = 0x16f;
        break;
      case 0x16e:
        uVar4 = 2;
        uVar3 = 0x170;
        break;
      case 0x16f:
        uVar4 = 2;
        uVar3 = 0x171;
        break;
      case 0x170:
        uVar4 = 1;
        uVar3 = 0x172;
        break;
      case 0x171:
        uVar4 = 2;
        uVar3 = 0x173;
        break;
      case 0x172:
        uVar4 = 2;
        uVar3 = 0x174;
        break;
      case 0x173:
        uVar4 = 1;
        uVar3 = 0x175;
        break;
      case 0x174:
        uVar4 = 2;
        uVar3 = 0x176;
        break;
      case 0x175:
        uVar4 = 1;
        uVar3 = 0x177;
        break;
      case 0x176:
        uVar4 = 2;
        uVar3 = 0x178;
        break;
      case 0x177:
        uVar4 = 1;
        uVar3 = 0x179;
        break;
      case 0x178:
        uVar4 = 2;
        uVar3 = 0x17a;
        break;
      case 0x179:
        uVar4 = 1;
        uVar3 = 0x17b;
        break;
      case 0x17a:
        uVar4 = 2;
        uVar3 = 0x17c;
        break;
      case 0x17b:
        uVar4 = 1;
        uVar3 = 0x17d;
        break;
      case 0x17c:
        uVar4 = 2;
        uVar3 = 0x17e;
        break;
      case 0x17d:
        uVar4 = 1;
        uVar3 = 0x18b;
        break;
      case 0x17e:
        uVar4 = 3;
        uVar3 = 0x18c;
        break;
      case 0x17f:
        uVar4 = 1;
        uVar3 = 0x17f;
        break;
      case 0x180:
        uVar4 = 2;
        uVar3 = 0x180;
        break;
      case 0x181:
        uVar4 = 2;
        uVar3 = 0x181;
        break;
      case 0x182:
        uVar4 = 2;
        uVar3 = 0x182;
        break;
      case 0x183:
        uVar4 = 2;
        uVar3 = 0x183;
        break;
      case 0x184:
        uVar4 = 2;
        uVar3 = 0x184;
        break;
      case 0x185:
        uVar4 = 2;
        uVar3 = 0x185;
        break;
      case 0x186:
        uVar4 = 2;
        uVar3 = 0x186;
        break;
      case 0x187:
        uVar4 = 2;
        uVar3 = 0x187;
        break;
      case 0x188:
        uVar4 = 2;
        uVar3 = 0x188;
        break;
      case 0x189:
        uVar4 = 2;
        uVar3 = 0x189;
        break;
      case 0x18a:
        uVar4 = 2;
        uVar3 = 0x18a;
        break;
      case 0x18b:
        uVar4 = 1;
        uVar3 = 0x18d;
        break;
      case 0x18c:
        uVar4 = 2;
        uVar3 = 0x18e;
        break;
      case 0x18d:
        uVar3 = 399;
        goto code_r0x829927cc;
      case 0x18e:
        uVar4 = 1;
        uVar3 = 400;
        break;
      case 399:
        uVar4 = 1;
        uVar3 = 0x191;
        break;
      case 400:
        uVar4 = 1;
        uVar3 = 0x192;
        break;
      case 0x191:
        uVar4 = 1;
        uVar3 = 0x193;
        break;
      case 0x192:
        uVar4 = 1;
        uVar3 = 0x194;
        break;
      case 0x193:
        uVar4 = 2;
        uVar3 = 0x195;
        break;
      case 0x194:
        uVar4 = 1;
        uVar3 = 0x196;
        break;
      case 0x195:
        uVar4 = 1;
        uVar3 = 0x197;
        break;
      case 0x196:
        uVar4 = 2;
        uVar3 = 0x198;
        break;
      case 0x197:
        uVar4 = 1;
        uVar3 = 0x1a4;
        break;
      case 0x198:
        uVar4 = 1;
        uVar3 = 0x1a5;
        break;
      case 0x199:
        uVar3 = 0x1a6;
        goto code_r0x829927cc;
      case 0x19a:
        uVar4 = 1;
        uVar3 = 0x1a7;
        break;
      case 0x19b:
        uVar4 = 1;
        uVar3 = 0x1a8;
        break;
      case 0x19c:
        uVar3 = 0x1a9;
        goto code_r0x829927cc;
      case 0x19d:
        uVar3 = 0x1aa;
        goto code_r0x829927cc;
      case 0x19e:
        uVar3 = 0x1ab;
        goto code_r0x829927cc;
      case 0x19f:
        uVar3 = 0x1ac;
        goto code_r0x829927cc;
      case 0x1a0:
        uVar3 = 0x1ad;
        goto code_r0x829927cc;
      case 0x1a1:
        uVar3 = 0x1ae;
        goto code_r0x829927cc;
      case 0x1a2:
        uVar3 = 0x1af;
        goto code_r0x829927cc;
      case 0x1a3:
        uVar4 = 1;
        uVar3 = 0x1b0;
        break;
      case 0x1a4:
        uVar4 = 2;
        uVar3 = 0x1b1;
        break;
      case 0x1a5:
        uVar3 = 0x1b2;
        goto code_r0x829927cc;
      case 0x1a6:
        uVar3 = 0x1b3;
        goto code_r0x829927cc;
      case 0x1a7:
        uVar3 = 0x1b4;
        goto code_r0x829927cc;
      case 0x1a8:
        uVar3 = 0x1b5;
        goto code_r0x829927cc;
      case 0x1a9:
        uVar3 = 0x1b6;
        goto code_r0x829927cc;
      case 0x1aa:
        uVar3 = 0x1b7;
code_r0x829927cc:
        uVar4 = 0;
        break;
      default:
        goto LAB_829927d8;
      }
      fn_8298EF20(*(undefined4 *)(param_1 + 0xbd8),uVar3,uVar4);
LAB_829927d8:
      psVar7 = (short *)(*(int *)(param_1 + 0x10) + iVar10 * -2);
      *(short **)(param_1 + 0x10) = psVar7;
      sVar1 = *psVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10 * -4;
      if ((sVar1 == 0) && (*(short *)(&lbl_820442B0 + iVar11) == 0)) {
        iVar11 = 0x42;
        puVar9 = (undefined2 *)(*(int *)(param_1 + 0x10) + 2);
        *(undefined2 **)(param_1 + 0x10) = puVar9;
        *puVar9 = 0x42;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(undefined4 *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0xc) < 0) {
          iVar10 = fn_8298A258(*(undefined4 *)(param_1 + 0xbd8));
          *(int *)(param_1 + 0xc) = iVar10;
          if (iVar10 < 0) {
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
        }
        if (*(int *)(param_1 + 0xc) == 0) {
          return 0;
        }
      }
      else {
        iVar11 = *(short *)(&lbl_820442B0 + iVar11) * 2;
        if ((*(short *)(&lbl_82045D10 + iVar11) == 0) ||
           (((uVar6 = (longlong)*(short *)(&lbl_82045D10 + iVar11) + (longlong)sVar1,
             (longlong)uVar6 < 0 || (0x1d65 < (int)uVar6)) ||
            (iVar10 = (int)((uVar6 & 0xffffffff) << 1), *(short *)(&lbl_82049900 + iVar10) != sVar1)
            ))) {
          sVar1 = *(short *)(&lbl_82044F90 + iVar11);
        }
        else {
          sVar1 = *(short *)(&lbl_82045E30 + iVar10);
        }
        if (param_1 + 0x406U <= *(uint *)(param_1 + 0x10)) {
LAB_829929bc:
          fn_82983680(param_1,0xffffffff82029624);
          return 1;
        }
        psVar7 = (short *)(*(uint *)(param_1 + 0x10) + 2);
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        uVar5 = *(undefined4 *)(param_1 + 0x18);
LAB_829928d8:
        iVar11 = (int)sVar1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = uVar5;
      }
    }
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar2 = fn_8298A258(*(undefined4 *)(param_1 + 0xbd8));
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    if (*(short *)(&lbl_820450B0 + iVar10) != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + (longlong)*(short *)(&lbl_820450B0 + iVar10);
      if (((-1 < (longlong)uVar6) && ((int)uVar6 < 0x1d66)) &&
         (iVar2 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_82049900 + iVar2) == *(uint *)(param_1 + 0xc))) {
        if (param_1 + 0x406U <= *(uint *)(param_1 + 0x10)) goto LAB_829929bc;
        psVar7 = (short *)(*(uint *)(param_1 + 0x10) + 2);
        sVar1 = *(short *)(&lbl_82045E30 + iVar2);
        iVar11 = (int)sVar1;
        *(short **)(param_1 + 0x10) = psVar7;
        *psVar7 = sVar1;
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
        *(undefined4 **)(param_1 + 0x14) = puVar8;
        *puVar8 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        if (0 < *(int *)(param_1 + 8)) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
        goto LAB_82991474;
      }
    }
    if (*(short *)(&lbl_820456E0 + iVar10) != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xc) + (longlong)*(short *)(&lbl_820456E0 + iVar10);
      if (((-1 < (longlong)uVar6) && ((int)uVar6 < 0x1d66)) &&
         (iVar10 = (int)((uVar6 & 0xffffffff) << 1),
         (int)*(short *)(&lbl_82049900 + iVar10) == *(uint *)(param_1 + 0xc))) {
        sVar1 = *(short *)(&lbl_82045E30 + iVar10);
        goto LAB_82991570;
      }
    }
    if (*(int *)(param_1 + 8) == 0) {
      fn_82983680(param_1,0xffffffff82029464);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    if (*(int *)(param_1 + 8) < 3) {
      *(undefined4 *)(param_1 + 8) = 3;
      while( true ) {
        psVar7 = *(short **)(param_1 + 0x10);
        if (((*(short *)(&lbl_820450B0 + *psVar7 * 2) != 0) &&
            (uVar6 = (longlong)*(short *)(&lbl_820450B0 + *psVar7 * 2) + 0x100, -1 < (longlong)uVar6
            )) && (((int)uVar6 < 0x1d66 &&
                   (iVar11 = (int)((uVar6 & 0xffffffff) << 1),
                   *(short *)(&lbl_82049900 + iVar11) == 0x100)))) break;
        if (psVar7 <= (short *)(param_1 + 0x20)) {
          return 1;
        }
        *(short **)(param_1 + 0x10) = psVar7 + -1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
      }
      if ((short *)(param_1 + 0x406) <= psVar7) goto LAB_829929bc;
      sVar1 = *(short *)(&lbl_82045E30 + iVar11);
      *(short **)(param_1 + 0x10) = psVar7 + 1;
      psVar7[1] = sVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      goto LAB_829928d8;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  } while( true );
}

