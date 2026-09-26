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
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82B80EF8();
extern int fn_82B82D28();
extern unsigned int iStack00000044;
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000044;
extern unsigned int stack0x0000005c;
extern unsigned int stack0x00000064;
extern unsigned int stack0x0000006c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


undefined8
fn_82B17968(int param_1,uint *param_2,char param_3,undefined4 param_4,uint param_5,uint param_6,
             int param_7,int param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar7;
  uint *puVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  uint uStack00000034;
  uint uStack0000003c;
  int iStack00000044;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  undefined4 *in_stack_00000074;
  
  dVar11 = lbl_82005710;
  uVar8 = in_stack_00000054;
  uVar4 = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  iStack00000044 = param_7;
  do {
    uVar1 = uStack0000003c;
    uVar5 = uStack00000034;
    iVar3 = iStack00000044;
    if ((in_stack_0000005c != param_2[0xc]) && (uVar9 = uVar4, in_stack_0000005c != param_2[0xd]))
    goto LAB_82b17a44;
    uStack00000034 = in_stack_0000005c;
    uStack0000003c = in_stack_00000064;
    uVar9 = uVar8;
    uVar8 = uVar4;
    iStack00000044 = in_stack_0000006c;
    in_stack_0000005c = uVar5;
    in_stack_00000064 = uVar1;
    in_stack_0000006c = iVar3;
    while( true ) {
      if (param_8 == 0xf) {
        param_8 = 0x10;
      }
      else if (param_8 == 0x10) {
        param_8 = 0xf;
      }
      else if (param_8 == 0x11) {
        param_8 = 0x12;
      }
      else if (param_8 == 0x12) {
        param_8 = 0x11;
      }
LAB_82b17a44:
      if (((*(uint *)(in_stack_0000005c + 8) & 0x3f80) != 16000) ||
         (dVar10 = (double)fn_82B80EF8(in_stack_0000005c,in_stack_00000064,in_stack_0000006c),
         dVar10 != dVar11)) goto LAB_82b17b8c;
      if (iStack00000044 != 4) break;
      iStack00000044 = 0;
    }
    if (iStack00000044 == 2) {
      if (((*(ushort *)(uStack00000034 + 0xe) >> ((uStack0000003c & 0xf) << 2)) >> 1 & 1) == 0)
      break;
      iStack00000044 = 0;
    }
    if (iStack00000044 != 0) break;
    if (param_8 == 0x10) {
LAB_82b17ad4:
      uVar5 = *(uint *)(uStack00000034 + 8) >> 7 & 0x7f;
      if (uVar5 == 5) {
        param_8 = 0x13;
      }
      else if (uVar5 == 6) {
        param_8 = 0x10;
      }
      else if (uVar5 == 7) {
        param_8 = 0x12;
      }
      else {
        if (uVar5 != 8) break;
        param_8 = 0x14;
      }
      uVar8 = *(undefined4 *)(uStack00000034 + 0x30);
      uVar4 = *(undefined4 *)(uStack00000034 + 0x2c);
      fn_82B82D28(uVar8,uStack0000003c,&stack0x0000005c,&stack0x00000064,&stack0x0000006c,0,0,
                        0);
      fn_82B82D28(uVar4,uStack0000003c,&stack0x00000034,&stack0x0000003c,&stack0x00000044,0,0,
                        0);
    }
    else {
      if (param_8 != 0x13) {
        if (param_8 == 0x14) goto LAB_82b17ad4;
        break;
      }
      param_8 = 0x14;
      param_3 = param_3 == '\0';
      uVar4 = uVar9;
    }
  } while( true );
LAB_82b17b8c:
  uVar5 = in_stack_0000005c;
  if ((uStack00000034 != param_2[0xc]) && (uStack00000034 != param_2[0xd])) {
    return 1;
  }
  if (iStack00000044 != 0) {
    return 2;
  }
  if (param_3 == '\0') {
    if (param_8 == 0xf) {
      param_8 = 0x12;
    }
    else if (param_8 == 0x10) {
      param_8 = 0x11;
    }
    else if (param_8 == 0x11) {
      param_8 = 0x10;
    }
    else if (param_8 == 0x12) {
      param_8 = 0xf;
    }
    else if (param_8 == 0x13) {
      param_8 = 0x14;
    }
    else if (param_8 == 0x14) {
      param_8 = 0x13;
    }
  }
  if (param_8 == 0xf) {
LAB_82b17c74:
    cVar7 = '\x01';
    if (dVar11 < *(double *)(param_2 + 10)) goto LAB_82b17c8c;
  }
  else {
    if (param_8 != 0x10) {
      if (param_8 == 0x11) goto LAB_82b17c74;
      if (param_8 != 0x12) {
        if (param_8 == 0x13) {
          cVar7 = param_3 == '\0';
        }
        else {
          cVar7 = '\x01';
          if (param_8 == 0x14) {
            cVar7 = param_3;
          }
        }
        goto LAB_82b17c8c;
      }
    }
    cVar7 = '\x01';
    if (*(double *)(param_2 + 10) < dVar11) goto LAB_82b17c8c;
  }
  cVar7 = '\0';
LAB_82b17c8c:
  if (cVar7 == '\0') {
    return 2;
  }
  uVar1 = *(uint *)(in_stack_0000005c + 8) >> 7 & 0x7f;
  if (uVar1 == 0x7d) {
    dVar11 = (double)fn_82B80EF8(in_stack_0000005c,in_stack_00000064,in_stack_0000006c);
    if ((0xe < param_8) && ((param_8 < 0x11 || (param_8 == 0x14)))) {
      *param_2 = *param_2 & 0xbfffffff;
    }
    *param_2 = *param_2 | 0x40;
    if (dVar11 < *(double *)(param_2 + 6)) {
      *(double *)(param_2 + 6) = dVar11;
    }
    if (*(double *)(param_2 + 8) < dVar11) {
      *(double *)(param_2 + 8) = dVar11;
    }
    puVar2 = (undefined4 *)fn_82ABE250(param_1,0x20,0x27);
    *(double *)(puVar2 + 4) = dVar11;
    *puVar2 = 1;
    puVar2[1] = param_4;
    puVar2[2] = uVar8;
  }
  else {
    if (uVar1 != 0x7c) {
      return 2;
    }
    uVar1 = *(uint *)(in_stack_0000005c + 8);
    iVar3 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
    puVar6 = (uint *)((*(uint *)(iVar3 + (uVar5 - 8)) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc));
    if ((*puVar6 & 0x80000) == 0) {
      if ((*(ushort *)(uVar5 + 0xe) >> ((in_stack_00000064 & 0xf) << 2) & 4) == 0) {
        return 2;
      }
      if ((*puVar6 & 0x1fff8) != 8) {
        return 2;
      }
      if (puVar6[9] != 0) {
        return 2;
      }
      if ((*param_2 & 0x800) != 0) {
        return 2;
      }
      param_2[0xe] = uVar5;
      *param_2 = *param_2 | 0x800;
      puVar2 = (undefined4 *)fn_82ABE250(param_1,0x20,0x27);
      uVar4 = 3;
    }
    else {
      if ((puVar6[1] & 0x70) != 0x10) {
        return 2;
      }
      if ((*param_2 & 0x400) != 0) {
        return 2;
      }
      param_2[0xe] = uVar5;
      *param_2 = *param_2 | 0x400;
      puVar2 = (undefined4 *)fn_82ABE250(param_1,0x20,0x27);
      uVar4 = 2;
    }
    *puVar2 = uVar4;
    puVar2[2] = uVar8;
    puVar2[1] = param_4;
    puVar2[4] = in_stack_0000005c;
  }
  puVar2[6] = *in_stack_00000074;
  *in_stack_00000074 = puVar2;
  return 3;
}

