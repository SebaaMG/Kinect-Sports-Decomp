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
extern int fn_828F6FA8();
extern int fn_82981598();
extern int fn_82981738();
extern int fn_82F68CC0();
extern unsigned int stack0x00000000;


char * fn_82981820(undefined8 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char acStack_140 [320];
  
  pcVar11 = &stack0x00000000 + -0x140;
  if (param_3 == 0) {
    return (char *)0x0;
  }
  if (param_4 == 0) {
    pcVar11 = "void";
    pcVar10 = pcVar11;
    goto LAB_82981bf0;
  }
  iVar4 = *(int *)(param_4 + 4);
  pcVar10 = pcVar11;
  if (iVar4 == 1) {
    iVar4 = fn_82981598(param_1,param_4);
    if (iVar4 == 0) {
      uVar6 = 0xffffffff82196582;
    }
    else {
      uVar6 = 0xffffffff8204e208;
    }
    uVar8 = fn_82981738(param_1,param_4);
    uVar5 = 0xffffffff8204e088;
  }
  else {
    if (iVar4 == 8) {
      iVar4 = *(int *)(param_4 + 4);
      iVar7 = param_4;
      while (iVar4 == 8) {
        iVar7 = *(int *)(iVar7 + 0x10);
        iVar4 = *(int *)(iVar7 + 4);
      }
      pcVar3 = (char *)((int (*)())fn_82981820)(param_1,&stack0x00000000 + -0x140,0xff);
      iVar4 = *(int *)(param_4 + 4);
      while (iVar4 == 8) {
        pcVar12 = &stack0x00000000 + (int)(pcVar3 + -0x140);
        fn_828F6FA8(pcVar12,0xff - (int)pcVar3,0xffffffff8204e098,
                          *(undefined4 *)(param_4 + 0x14));
        pcVar9 = pcVar12;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        param_4 = *(int *)(param_4 + 0x10);
        pcVar3 = pcVar9 + (int)(pcVar3 + (-1 - (int)pcVar12));
        iVar4 = *(int *)(param_4 + 4);
      }
      goto LAB_82981bf0;
    }
    if (iVar4 != 9) {
      pcVar11 = "unknown";
      pcVar10 = pcVar11;
      goto LAB_82981bf0;
    }
    if ((*(uint *)(param_4 + 0x24) & 0x200) == 0) {
      uVar6 = 0xffffffff82196582;
    }
    else {
      uVar6 = 0xffffffff8204e208;
    }
    switch(*(undefined4 *)(param_4 + 0x14)) {
    case 0:
      uVar8 = 0xffffffff8202f4e0;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar8 = 0xffffffff8202f488;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar8 = 0xffffffff8204e200;
      break;
    case 10:
    case 0xc:
      uVar8 = 0xffffffff821c8054;
      break;
    case 0xb:
      uVar8 = 0xffffffff8204e1f8;
      break;
    case 0xd:
      uVar8 = 0xffffffff8204e1f0;
      break;
    case 0xe:
    case 0x10:
      uVar8 = 0xffffffff8204e1e4;
      break;
    case 0xf:
      uVar8 = 0xffffffff8204e1d8;
      break;
    case 0x11:
      uVar8 = 0xffffffff8204e1c8;
      break;
    case 0x12:
    case 0x14:
      uVar8 = 0xffffffff8204e1bc;
      break;
    case 0x13:
      uVar8 = 0xffffffff8204e1b0;
      break;
    case 0x15:
      uVar8 = 0xffffffff8204e1a0;
      break;
    case 0x16:
      uVar8 = 0xffffffff82024a3c;
      break;
    case 0x17:
      uVar8 = 0xffffffff8200ed9c;
      break;
    case 0x18:
      uVar8 = 0xffffffff821c4554;
      break;
    case 0x19:
      uVar8 = 0xffffffff8204e194;
      break;
    case 0x1a:
      uVar8 = 0xffffffff8204e160;
      break;
    case 0x1b:
      uVar8 = 0xffffffff8204e188;
      break;
    case 0x1c:
      uVar8 = 0xffffffff8204e150;
      break;
    case 0x1d:
      uVar8 = 0xffffffff8204e17c;
      break;
    case 0x1e:
      uVar8 = 0xffffffff8204e170;
      break;
    case 0x1f:
      uVar8 = 0xffffffff8204e144;
      break;
    case 0x20:
      uVar8 = 0xffffffff8204e130;
      break;
    case 0x21:
      uVar8 = 0xffffffff8202f4c8;
      break;
    case 0x22:
      uVar8 = 0xffffffff8204e124;
      break;
    case 0x23:
      uVar8 = 0xffffffff8204e118;
      break;
    case 0x24:
      uVar8 = 0xffffffff8204e10c;
      break;
    case 0x25:
      uVar8 = 0xffffffff8204e100;
      break;
    default:
      uVar8 = 0xffffffff82196ea4;
      break;
    case 0x27:
      uVar8 = 0xffffffff82005d48;
      break;
    case 0x2a:
      uVar8 = 0xffffffff82001424;
      break;
    case 0x2b:
      uVar8 = 0xffffffff82001414;
      break;
    case 0x2c:
      uVar8 = 0xffffffff8204e0f0;
      break;
    case 0x2d:
      uVar8 = 0xffffffff8204e0e0;
      break;
    case 0x2e:
      uVar8 = 0xffffffff8202f414;
      break;
    case 0x2f:
      uVar8 = 0xffffffff8204e0d4;
      break;
    case 0x33:
      uVar8 = 0xffffffff8204e0c8;
      break;
    case 0x34:
      uVar8 = 0xffffffff8204e0bc;
      break;
    case 0x35:
      uVar8 = 0xffffffff8204e0ac;
    }
    puVar2 = &stack0x00000000 + -0x140;
    if (*(int *)(param_4 + 0x10) == 1) {
      fn_828F6FA8(puVar2,0xff,0xffffffff82038784,uVar6,uVar8,*(undefined4 *)(param_4 + 0x20));
      goto LAB_82981bf0;
    }
    if (*(int *)(param_4 + 0x10) == 2) {
      fn_828F6FA8(puVar2,0xff,0xffffffff8204e0a0,uVar6,uVar8,*(undefined4 *)(param_4 + 0x1c),
                        *(undefined4 *)(param_4 + 0x20));
      goto LAB_82981bf0;
    }
    uVar5 = 0xffffffff821b0c70;
  }
  fn_828F6FA8(&stack0x00000000 + -0x140,0xff,uVar5,uVar6,uVar8);
LAB_82981bf0:
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + (-1 - (int)pcVar11);
  if ((char *)(param_3 + -1) < pcVar10 + (-1 - (int)pcVar11)) {
    pcVar3 = (char *)(param_3 + -1);
  }
  fn_82F68CC0(param_2,pcVar11,pcVar3);
  pcVar3[param_2] = '\0';
  return pcVar3;
}

