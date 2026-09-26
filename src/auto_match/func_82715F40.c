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
extern int fn_8267C498();
extern int fn_82715DE8();
extern int fn_82715E48();
extern int fn_82715EA8();
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_63;
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_73;
extern unsigned int uStack_75;
extern unsigned int uStack_76;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_83;
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_93;
extern unsigned int uStack_95;
extern unsigned int uStack_96;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a3;
extern unsigned int uStack_a4;
extern unsigned int uStack_a5;
extern unsigned int uStack_a6;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b3;
extern unsigned int uStack_b4;
extern unsigned int uStack_b5;
extern unsigned int uStack_b6;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c3;
extern unsigned int uStack_c5;
extern unsigned int uStack_c6;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82715F40(undefined1 param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *apiStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  char cStack_c4;
  undefined1 uStack_c3;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  char cStack_94;
  undefined1 uStack_93;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  char cStack_84;
  undefined1 uStack_83;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  char cStack_74;
  undefined1 uStack_73;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  char cStack_64;
  undefined1 uStack_63;
  int *apiStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  fn_82715DE8(apiStack_e0);
  fn_82715E48(apiStack_60,param_2);
  piVar2 = apiStack_e0[0];
  if ((*(uint *)(param_2 + 0x10) & 1) == 0) goto LAB_827161ac;
  if ((*(byte *)(param_2 + 0x20) & 0x20) == 0) {
    if (apiStack_60[0] == apiStack_e0[0]) {
      if (apiStack_e0[0] != (int *)0x0) {
        cStack_74 = *(char *)((int)apiStack_e0[0] + 0x93);
        *(char *)((int)apiStack_e0[0] + 0x93) = cStack_74 + '\x01';
        uStack_80 = 0x8000;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_73 = 0;
        uStack_75 = param_1;
        (**(code **)(*apiStack_e0[0] + 0xe8))(apiStack_e0[0],&uStack_80);
      }
      bVar1 = *(byte *)(param_2 + 0x20) | 0x20;
LAB_82716060:
      *(byte *)(param_2 + 0x20) = bVar1;
    }
  }
  else if (apiStack_60[0] != apiStack_e0[0]) {
    if (apiStack_e0[0] != (int *)0x0) {
      if (*(char *)((int)apiStack_e0[0] + 0x93) == '\0') {
        cStack_94 = -1;
      }
      else {
        cStack_94 = *(char *)((int)apiStack_e0[0] + 0x93) + -1;
        *(char *)((int)apiStack_e0[0] + 0x93) = cStack_94;
      }
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_a0 = 0x10000;
      uStack_93 = 0;
      uStack_95 = param_1;
      (**(code **)(*apiStack_e0[0] + 0xe8))(apiStack_e0[0],&uStack_a0);
    }
    bVar1 = *(byte *)(param_2 + 0x20) & 0xdf;
    goto LAB_82716060;
  }
  if (apiStack_e0[0] == (int *)0x0) {
LAB_82716078:
    if ((apiStack_60[0] != (int *)0x0) && (apiStack_60[0] != apiStack_e0[0])) {
      if (((uint)apiStack_60[0][0x23] >> 0xd & 1) != 0) {
        apiStack_60[0][1] = apiStack_60[0][1] + 1;
        if (apiStack_e0[0] != (int *)0x0) {
          fn_8267C498(apiStack_e0[0]);
        }
        cStack_c4 = *(char *)((int)apiStack_60[0] + 0x93);
        *(char *)((int)apiStack_60[0] + 0x93) = cStack_c4 + '\x01';
        uStack_d0 = 0x8000;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c6 = 0;
        uStack_c3 = 0;
        uStack_c5 = param_1;
        (**(code **)(*apiStack_60[0] + 0xe8))(apiStack_60[0],&uStack_d0);
        *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x20;
        piVar2 = apiStack_60[0];
      }
    }
  }
  else if (((uint)apiStack_e0[0][0x23] >> 0xd & 1) != 0) goto LAB_82716078;
  if (((*(uint *)(param_2 + 0xc) & 1) == 0) && (piVar2 != (int *)0x0)) {
    if ((*(byte *)(param_2 + 0x20) & 0x20) == 0) {
      if (((uint)piVar2[0x23] >> 0xd & 1) == 0) {
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_b0 = 0x1000;
        uStack_a6 = 0;
        uStack_a3 = 0;
        uStack_a4 = 0;
        uStack_a5 = param_1;
        (**(code **)(*piVar2 + 0xe8))(piVar2,&uStack_b0);
      }
      fn_8267C498(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_b3 = 0;
      uStack_c0 = 0x800;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b5 = param_1;
      (**(code **)(*piVar2 + 0xe8))(piVar2,&uStack_c0);
    }
  }
LAB_827161ac:
  if ((*(uint *)(param_2 + 0x10) & 1) == 0) {
    if (apiStack_60[0] != piVar2) {
      if (piVar2 != (int *)0x0) {
        if (*(char *)((int)piVar2 + 0x93) == '\0') {
          cStack_84 = -1;
        }
        else {
          cStack_84 = *(char *)((int)piVar2 + 0x93) + -1;
          *(char *)((int)piVar2 + 0x93) = cStack_84;
        }
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        uStack_90 = 0x4000;
        uStack_83 = 0;
        uStack_85 = param_1;
        (**(code **)(*piVar2 + 0xe8))(piVar2,&uStack_90);
      }
      if (apiStack_60[0] != (int *)0x0) {
        apiStack_60[0][1] = apiStack_60[0][1] + 1;
      }
      if (piVar2 != (int *)0x0) {
        fn_8267C498(piVar2);
      }
      if (apiStack_60[0] != (int *)0x0) {
        cStack_64 = *(char *)((int)apiStack_60[0] + 0x93);
        *(char *)((int)apiStack_60[0] + 0x93) = cStack_64 + '\x01';
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_63 = 0;
        uStack_70 = 0x2000;
        uStack_66 = 0;
        uStack_65 = param_1;
        (**(code **)(*apiStack_60[0] + 0xe8))(apiStack_60[0],&uStack_70);
      }
      *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x20;
      piVar2 = apiStack_60[0];
    }
    if ((*(uint *)(param_2 + 0xc) & 1) != 0) {
      if (piVar2 != (int *)0x0) {
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_46 = 0;
        uStack_43 = 0;
        uStack_50 = 0x400;
        uStack_44 = 0;
        uStack_45 = param_1;
        (**(code **)(*piVar2 + 0xe8))(piVar2,&uStack_50);
      }
      *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x20;
    }
  }
  fn_82715EA8(param_2,piVar2);
  if (apiStack_60[0] != (int *)0x0) {
    fn_8267C498(apiStack_60[0]);
  }
  if (piVar2 != (int *)0x0) {
    fn_8267C498(piVar2);
  }
  return;
}

