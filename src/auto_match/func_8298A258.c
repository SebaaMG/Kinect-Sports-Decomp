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
extern int fn_828F8968();
extern int fn_82980C18();
extern int fn_829873C0();
extern int fn_82F65AC0();
extern int fn_82F6DF30();
extern unsigned int lbl_8200BC0C;
extern unsigned int lbl_8200ED64;
extern unsigned int lbl_82024A3C;
extern unsigned int lbl_82027B18;
extern unsigned int lbl_8202937C;
extern unsigned int lbl_820293A4;
extern unsigned int lbl_820293A8;
extern unsigned int lbl_8202F488;
extern unsigned int lbl_8202F48C;
extern unsigned int lbl_8202F4E0;
extern unsigned int lbl_8204E1F8;
extern unsigned int lbl_8204E200;
extern unsigned int lbl_8204E4EC;
extern unsigned int lbl_8204ED4C;
extern unsigned int lbl_8204EEC8;
extern unsigned int lbl_8204EEDC;
extern unsigned int lbl_8204EEE8;
extern unsigned int lbl_8204EF00;
extern unsigned int lbl_8204EF14;
extern unsigned int lbl_8204EF40;
extern unsigned int lbl_8204EFC0;
extern unsigned int lbl_8204F01C;
extern unsigned int lbl_8204F024;
extern unsigned int lbl_8204F048;
extern unsigned int lbl_82196F18;
extern unsigned int lbl_821AF754;


longlong fn_8298A258(uint *param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  uint *puVar14;
  
  puVar14 = param_1 + 10;
  do {
    uVar5 = fn_828F8968(param_1[1],puVar14);
    if ((int)uVar5 < 0) {
      param_1[0x14] = uVar5;
      param_1[0x12] = 1;
      return -1;
    }
    switch(*puVar14) {
    case 0:
      goto LAB_8298a290;
    case 1:
      cVar1 = *(char *)((int)param_1 + 0x31);
      if (cVar1 == '\0') {
        return (longlong)*(char *)(param_1 + 0xc);
      }
      if (*(char *)((int)param_1 + 0x32) != '\0') {
        if (*(char *)((int)param_1 + 0x33) != '\0') {
          return 0x182;
        }
        if (*(char *)((int)param_1 + 0x32) != '=') {
          return 0x182;
        }
        cVar3 = *(char *)(param_1 + 0xc);
        if (cVar3 != cVar1) {
          return 0x182;
        }
        if (cVar3 != '<') {
          if (cVar3 != '>') {
            return 0x182;
          }
          return 0x174;
        }
        return 0x173;
      }
      if (cVar1 != '=') {
        cVar3 = *(char *)(param_1 + 0xc);
        if (cVar3 != cVar1) {
          return 0x182;
        }
        if (cVar3 == '&') {
          return 0x16a;
        }
        if (cVar3 == '+') {
          return 0x164;
        }
        if (cVar3 != '-') {
          if (cVar3 == '<') {
            return 0x171;
          }
          if (cVar3 != '>') {
            if (cVar3 != '|') {
              return 0x182;
            }
            return 0x16b;
          }
          return 0x172;
        }
        return 0x165;
      }
      bVar2 = *(byte *)(param_1 + 0xc);
      if (0x2f < bVar2) {
        if (bVar2 == 0x3c) {
          return 0x166;
        }
        if (bVar2 == 0x3d) {
          return 0x168;
        }
        if (bVar2 == 0x3e) {
          return 0x167;
        }
        if (bVar2 != 0x5e) {
          if (bVar2 != 0x7c) {
            return 0x182;
          }
          return 0x176;
        }
        return 0x177;
      }
      if (bVar2 == 0x2f) {
        return 0x16d;
      }
      if (bVar2 == 0x21) {
        return 0x169;
      }
      if (bVar2 == 0x25) {
        return 0x16e;
      }
      if (bVar2 != 0x26) {
        if (bVar2 == 0x2a) {
          return 0x16c;
        }
        if (bVar2 != 0x2b) {
          if (bVar2 != 0x2d) {
            return 0x182;
          }
          return 0x170;
        }
        return 0x16f;
      }
      return 0x175;
    case 2:
      return 0x178;
    case 3:
      return 0x179;
    case 4:
      return 0x17a;
    case 5:
      return 0x17b;
    case 6:
      return 0x17c;
    case 7:
      return 0x17d;
    case 8:
      return 0x17e;
    case 9:
      pbVar13 = (byte *)param_1[0xc];
      pbVar8 = &lbl_8204E4EC;
      pbVar10 = &lbl_821AF754;
      switch(*pbVar13) {
      case 0x42:
        pcVar9 = "BlendState";
        pbVar10 = pbVar13;
        goto LAB_8298a62c;
      case 0x43:
        pcVar9 = "CompileShader";
        goto LAB_8298a98c;
      case 0x44:
        pcVar9 = "DepthStencilState";
        pbVar10 = pbVar13;
        goto LAB_8298ab98;
      default:
        goto switchD_8298a50c_caseD_45;
      case 0x47:
        if (param_1[0x15] == 0) goto switchD_8298a50c_caseD_45;
        pcVar9 = "GeometryShader";
        goto LAB_8298ae7c;
      case 0x4c:
        pcVar9 = "LineStream";
        goto LAB_8298b140;
      case 0x4e:
        pbVar10 = &lbl_82024A3C;
        goto LAB_8298b2ec;
      case 0x50:
        pcVar9 = "PointStream";
        pbVar10 = pbVar13;
        goto LAB_8298b5c4;
      case 0x52:
        pcVar9 = "RasterizerState";
        pbVar10 = pbVar13;
        goto LAB_8298b750;
      case 0x53:
        pcVar9 = "String";
        pbVar10 = pbVar13;
        goto LAB_8298bc7c;
      case 0x54:
        if (param_1[0x15] == 0) goto switchD_8298a50c_caseD_45;
        pcVar9 = "Texture1D";
        pbVar10 = pbVar13;
        goto LAB_8298c28c;
      case 0x56:
        if (param_1[0x15] == 0) goto switchD_8298a50c_caseD_45;
        pcVar9 = "VertexShader";
        break;
      case 0x61:
        pbVar8 = &lbl_8204F048;
        pbVar10 = pbVar13;
        goto LAB_8298a51c;
      case 0x62:
        pbVar8 = &lbl_8202F4E0;
        pbVar10 = pbVar13;
        goto LAB_8298a5ac;
      case 99:
        pbVar8 = &lbl_8204F024;
        pbVar10 = pbVar13;
        goto LAB_8298a6ac;
      case 100:
        pcVar9 = "default";
        pbVar10 = pbVar13;
        goto LAB_8298a9cc;
      case 0x65:
        pbVar8 = &lbl_8202937C;
        pbVar10 = pbVar13;
        goto LAB_8298ac18;
      case 0x66:
        pcVar9 = "false";
        pbVar10 = pbVar13;
        goto LAB_8298ad08;
      case 0x67:
        pbVar10 = &lbl_8204EF14;
        goto LAB_8298ae3c;
      case 0x68:
        pbVar10 = &lbl_8204E1F8;
        goto LAB_8298aebc;
      case 0x69:
        pbVar8 = &lbl_820293A4;
        pbVar10 = pbVar13;
        goto LAB_8298aefc;
      case 0x6c:
        pbVar8 = &lbl_820293A8;
        pbVar10 = pbVar13;
        goto LAB_8298b03c;
      case 0x6d:
        pcVar9 = "matrix";
        pbVar10 = pbVar13;
        goto LAB_8298b180;
      case 0x6e:
        pcVar9 = "nointerpolation";
        pbVar10 = pbVar13;
        goto LAB_8298b1f4;
      case 0x6f:
        pbVar8 = &lbl_8204EEC8;
        pbVar10 = pbVar13;
        goto LAB_8298b32c;
      case 0x70:
        pcVar9 = "packoffset";
        pbVar8 = pbVar13;
        goto LAB_8298b3a0;
      case 0x72:
        pcVar9 = "register";
        pbVar10 = pbVar13;
        goto LAB_8298b658;
      case 0x73:
        pcVar9 = "sampler1D";
        pbVar10 = pbVar13;
        goto LAB_8298b7d0;
      case 0x74:
        pcVar9 = "tbuffer";
        pbVar10 = pbVar13;
        goto LAB_8298bd2c;
      case 0x75:
        pbVar8 = &lbl_8204E200;
        pbVar10 = pbVar13;
        goto LAB_8298c4ac;
      case 0x76:
        pcVar9 = "vector";
        pbVar10 = pbVar13;
        goto LAB_8298c618;
      case 0x77:
        pcVar9 = "while";
        goto LAB_8298c808;
      }
      goto LAB_8298c7c0;
    case 10:
      return 0x17f;
    case 0xd:
      return -1;
    }
  } while( true );
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298c808:
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x163;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298c618:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x15e;
  }
  pcVar9 = "vertexfragment";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x15f;
  }
  pcVar9 = "virtual";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pbVar8 = &lbl_8202F48C;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x161;
  }
  pcVar9 = "volatile";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x162;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "vertexshader";
    do {
      bVar2 = *pbVar13;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar13 = pbVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      if ((*param_1 & 0x800) == 0) {
        return 0x160;
      }
      uVar7 = 0xffffffff8204eb70;
      goto LAB_8298b5a4;
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298c4ac:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x15c;
  }
  pcVar9 = "uniform";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x15a;
  }
  pcVar9 = "union";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "unorm";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x15d;
  }
  pcVar9 = "unsigned";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x15b;
  }
  pcVar9 = "using";
  do {
    iVar6 = (uint)*pbVar13 - (uint)(byte)*pcVar9;
    if (*pbVar13 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 == 0);
  goto LAB_8298ab28;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298bd2c:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x149;
  }
  pcVar9 = "template";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pbVar11 = &lbl_8200ED64;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar11;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "triangle";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x155;
  }
  pcVar9 = "triangleadj";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x156;
  }
  pcVar9 = "throw";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pbVar11 = &lbl_82196F18;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar11;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x158;
  }
  pbVar11 = &lbl_8204ED4C;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar11;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "typedef";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x159;
  }
  pcVar9 = "typename";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  pbVar10 = pbVar13;
  if (bVar2 == bVar4) {
    return 0x182;
  }
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x14a;
  }
  pcVar9 = "technique10";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x14b;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "texture";
    pbVar10 = pbVar13;
    do {
      bVar2 = *pbVar10;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar10 = pbVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      return 0x14c;
    }
    pcVar9 = "texture1D";
    pbVar10 = pbVar13;
    if ((*param_1 & 0x800) == 0) {
      do {
        bVar2 = *pbVar10;
        bVar4 = *pcVar9;
        if (bVar2 == 0) break;
        pbVar10 = pbVar10 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar2 == bVar4);
      if (bVar2 == bVar4) {
        return 0x14d;
      }
      pcVar9 = "texture2D";
      pbVar10 = pbVar13;
      do {
        bVar2 = *pbVar10;
        bVar4 = *pcVar9;
        if (bVar2 == 0) break;
        pbVar10 = pbVar10 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar2 == bVar4);
      if (bVar2 == bVar4) {
        return 0x14f;
      }
      pcVar9 = "texture3D";
      pbVar10 = pbVar13;
      do {
        bVar2 = *pbVar10;
        bVar4 = *pcVar9;
        if (bVar2 == 0) break;
        pbVar10 = pbVar10 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar2 == bVar4);
      if (bVar2 == bVar4) {
        return 0x151;
      }
      pcVar9 = "textureCUBE";
      do {
        bVar2 = *pbVar13;
        bVar4 = *pcVar9;
        if (bVar2 == 0) break;
        pbVar13 = pbVar13 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar2 == bVar4);
      if (bVar2 == bVar4) {
        return 0x152;
      }
    }
    else {
      do {
        bVar2 = *pbVar13;
        bVar4 = *pcVar9;
        if (bVar2 == 0) break;
        pbVar13 = pbVar13 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar2 == bVar4);
      if (bVar2 == bVar4) {
        fn_82980C18(param_1,puVar14,0xc0e,0xffffffff8204ecc8);
      }
      pcVar9 = (char *)param_1[0xc];
      pcVar12 = "texture2D";
      do {
        cVar1 = *pcVar9;
        cVar3 = *pcVar12;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 == cVar3);
      if (cVar1 == cVar3) {
        fn_82980C18(param_1,puVar14,0xc0e,0xffffffff8204ec88);
      }
      pcVar9 = (char *)param_1[0xc];
      pcVar12 = "texture3D";
      do {
        cVar1 = *pcVar9;
        cVar3 = *pcVar12;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 == cVar3);
      if (cVar1 == cVar3) {
        fn_82980C18(param_1,puVar14,0xc0e,0xffffffff8204ec48);
      }
      pcVar9 = (char *)param_1[0xc];
      pcVar12 = "textureCUBE";
      do {
        cVar1 = *pcVar9;
        cVar3 = *pcVar12;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 == cVar3);
      if (cVar1 == cVar3) {
        uVar7 = 0xffffffff8204ec08;
        goto LAB_8298b5a4;
      }
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b7d0:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x13b;
  }
  pcVar9 = "sampler2D";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x13c;
  }
  pcVar9 = "sampler3D";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x13d;
  }
  pcVar9 = "samplerCUBE";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x13e;
  }
  pcVar9 = "sampler_state";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x13f;
  }
  pcVar9 = "shared";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x140;
  }
  pcVar9 = "short";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "signed";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "sizeof";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "snorm";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x141;
  }
  pcVar9 = "stateblock_state";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x143;
  }
  pcVar9 = "static";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x144;
  }
  pcVar9 = "static_cast";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pbVar8 = &lbl_8200BC0C;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x145;
  }
  pcVar9 = "string";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x146;
  }
  pcVar9 = "struct";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x147;
  }
  pcVar9 = "switch";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x148;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "sampler";
    pbVar10 = pbVar13;
    do {
      bVar2 = *pbVar10;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar10 = pbVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      return 0x139;
    }
    pcVar9 = "stateblock";
    do {
      bVar2 = *pbVar13;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar13 = pbVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      return 0x142;
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b658:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x135;
  }
  pcVar9 = "reinterpret_cast";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "row_major";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x138;
  }
  pcVar9 = "return";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x137;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar8 = pbVar8 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b3a0:
    bVar2 = *pbVar8;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  pbVar8 = pbVar13;
  if (bVar2 == bVar4) {
    return 0x12e;
  }
  do {
    bVar2 = *pbVar8;
    bVar4 = *pbVar10;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x12f;
  }
  pcVar9 = "pixelfragment";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x130;
  }
  pcVar9 = "private";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "protected";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "public";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "point";
    pbVar10 = pbVar13;
    do {
      bVar2 = *pbVar10;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar10 = pbVar10 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if ((bVar2 == bVar4) && ((*param_1 & 0x1000) == 0)) {
      return 0x132;
    }
    pcVar9 = "pixelshader";
    do {
      bVar2 = *pbVar13;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar13 = pbVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      if ((*param_1 & 0x800) == 0) {
        return 0x131;
      }
      uVar7 = 0xffffffff8204ee50;
LAB_8298b5a4:
      fn_82980C18(param_1,puVar14,0xc0e,uVar7);
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b32c:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x12d;
  }
  pcVar9 = "operator";
  do {
    iVar6 = (uint)*pbVar13 - (uint)(byte)*pcVar9;
    if (*pbVar13 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 == 0);
  goto LAB_8298ab28;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b1f4:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x10f;
  }
  pcVar9 = "namespace";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x12a;
  }
  pbVar8 = &lbl_8204EEDC;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "noperspective";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 299;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b180:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x129;
  }
  pcVar9 = "mutable";
  do {
    iVar6 = (uint)*pbVar13 - (uint)(byte)*pcVar9;
    if (*pbVar13 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 == 0);
  goto LAB_8298ab28;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b03c:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x125;
  }
  pcVar9 = "lineadj";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x126;
  }
  pbVar8 = &lbl_8204EEE8;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "linear";
    do {
      bVar2 = *pbVar13;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar13 = pbVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if (bVar2 == bVar4) {
      return 0x127;
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298aefc:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x120;
  }
  pbVar8 = &lbl_8204EF00;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x121;
  }
  pcVar9 = "inline";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x122;
  }
  pcVar9 = "inout";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x123;
  }
  pbVar10 = &lbl_8202F488;
  do {
    bVar2 = *pbVar13;
    bVar4 = *pbVar10;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x124;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar10 + 1;
    if (bVar2 != bVar4) break;
LAB_8298aebc:
    bVar2 = *pbVar13;
    bVar4 = *pbVar10;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x11f;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar10 + 1;
    if (iVar6 != 0) break;
LAB_8298ae3c:
    iVar6 = (uint)*pbVar13 - (uint)*pbVar10;
    if (*pbVar13 == 0) break;
  }
  goto LAB_8298ab28;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298ad08:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x11a;
  }
  pcVar9 = "float";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x11b;
  }
  pbVar8 = &lbl_82027B18;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x11c;
  }
  pcVar9 = "format";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x11d;
  }
  pcVar9 = "friend";
  do {
    iVar6 = (uint)*pbVar13 - (uint)(byte)*pcVar9;
    if (*pbVar13 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 == 0);
  goto LAB_8298ab28;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298ac18:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x118;
  }
  pbVar8 = &lbl_8204EF40;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "explicit";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "extern";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x119;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a9cc:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x112;
  }
  pcVar9 = "delete";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "discard";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x115;
  }
  pbVar8 = &lbl_8204EFC0;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x117;
  }
  pcVar9 = "double";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x116;
  }
  pcVar9 = "dynamic_cast";
  do {
    iVar6 = (uint)*pbVar13 - (uint)(byte)*pcVar9;
    if (*pbVar13 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 == 0);
LAB_8298ab28:
  if (iVar6 == 0) {
LAB_8298a290:
    return 0x182;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a6ac:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x107;
  }
  pcVar9 = "catch";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "cbuffer";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x108;
  }
  pbVar8 = &lbl_8204F01C;
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "class";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "centroid";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x109;
  }
  pcVar9 = "column_major";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x10a;
  }
  pcVar9 = "compile";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x10b;
  }
  pcVar9 = "compile_fragment";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x10d;
  }
  pcVar9 = "const";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x10e;
  }
  pcVar9 = "const_cast";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "continue";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x110;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a5ac:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x104;
  }
  pcVar9 = "break";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x105;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar8 = pbVar8 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a51c:
    bVar2 = *pbVar10;
    bVar4 = *pbVar8;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x182;
  }
  pcVar9 = "asm_fragment";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x102;
  }
  iVar6 = fn_82F65AC0(pbVar13,0xffffffff8204f050);
  if (iVar6 == 0) {
    return 0x101;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298c7c0:
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if ((bVar2 == bVar4) && ((*param_1 & 0x1000) == 0)) {
    return 0x160;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298c28c:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x14d;
  }
  pcVar9 = "Texture1DArray";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x14e;
  }
  pcVar9 = "Texture2D";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x14f;
  }
  pcVar9 = "Texture2DArray";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x150;
  }
  pcVar9 = "Texture3D";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x151;
  }
  pcVar9 = "TextureCube";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x152;
  }
  pcVar9 = "TriangleStream";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x157;
  }
  pcVar9 = "Texture2DMS";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x153;
  }
  pcVar9 = "Texture2DMSArray";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x154;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298bc7c:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x146;
  }
  pcVar9 = "SamplerState";
  pbVar10 = pbVar13;
  do {
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x139;
  }
  pcVar9 = "SamplerComparisonState";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x13a;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b750:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x134;
  }
  pcVar9 = "RenderTargetView";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x136;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b5c4:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x133;
  }
  if (param_1[0x15] != 0) {
    pcVar9 = "PixelShader";
    do {
      bVar2 = *pbVar13;
      bVar4 = *pcVar9;
      if (bVar2 == 0) break;
      pbVar13 = pbVar13 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar2 == bVar4);
    if ((bVar2 == bVar4) && ((*param_1 & 0x1000) == 0)) {
      return 0x131;
    }
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar10 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b2ec:
    bVar2 = *pbVar13;
    bVar4 = *pbVar10;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 300;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298b140:
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x128;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298ae7c:
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x11e;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298ab98:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x113;
  }
  pcVar9 = "DepthStencilView";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x114;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a98c:
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x10c;
  }
  goto switchD_8298a50c_caseD_45;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pcVar9 = pcVar9 + 1;
    if (bVar2 != bVar4) break;
LAB_8298a62c:
    bVar2 = *pbVar10;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
  }
  if (bVar2 == bVar4) {
    return 0x103;
  }
  pcVar9 = "Buffer";
  do {
    bVar2 = *pbVar13;
    bVar4 = *pcVar9;
    if (bVar2 == 0) break;
    pbVar13 = pbVar13 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar2 == bVar4);
  if (bVar2 == bVar4) {
    return 0x106;
  }
switchD_8298a50c_caseD_45:
  iVar6 = fn_82F6DF30(*(undefined1 *)param_1[0xc]);
  if (iVar6 == 0x61) {
    iVar6 = fn_82F65AC0(param_1[0xc],0xffffffff8204f050);
    if (iVar6 != 0) goto LAB_8298c8d8;
    if ((*param_1 & 0x800) == 0) {
      return 0x101;
    }
    uVar7 = 0xffffffff8204eaac;
  }
  else if (iVar6 == 100) {
    iVar6 = fn_82F65AC0(param_1[0xc],0xffffffff8204eb20);
    if (iVar6 != 0) goto LAB_8298c8d8;
    if ((*param_1 & 0x800) == 0) {
      return 0x111;
    }
    uVar7 = 0xffffffff8204eae4;
  }
  else if (iVar6 == 0x70) {
    iVar6 = fn_82F65AC0(param_1[0xc],0xffffffff821af754);
    if (iVar6 != 0) goto LAB_8298c8d8;
    if ((*param_1 & 0x800) == 0) {
      return 0x12f;
    }
    uVar7 = 0xffffffff8204eb28;
  }
  else {
    if ((iVar6 != 0x74) || (iVar6 = fn_82F65AC0(param_1[0xc],0xffffffff8204e4ec), iVar6 != 0))
    goto LAB_8298c8d8;
    if ((*param_1 & 0x800) == 0) {
      return 0x14a;
    }
    uVar7 = 0xffffffff8204ef70;
  }
  fn_82980C18(param_1,puVar14,0xc0e,uVar7);
LAB_8298c8d8:
  iVar6 = fn_829873C0(param_1,0,puVar14,0,0,param_1[5],0,0);
  return ((ulonglong)(iVar6 == 0) ^ 1) + 0x180;
}

