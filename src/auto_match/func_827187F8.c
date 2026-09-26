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
extern unsigned int *auStack_60;
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269D300();
extern int fn_826A76D0();
extern int fn_82700248();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_63;
extern unsigned int uStack_64;
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_73;
extern unsigned int uStack_74;
extern unsigned int uStack_75;
extern unsigned int uStack_76;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_83;
extern unsigned int uStack_84;
extern unsigned int uStack_85;
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_827187F8(int *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  longlong lVar6;
  int aiStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar3 = (**(code **)(*param_1 + 0x5c))();
  fn_826A76D0(aiStack_a0,param_2,iVar3 + 0x78);
  piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
  if (*(int *)(aiStack_a0[0] + 0x10) != 0) {
    auStack_60[0] = 0;
    if ((((*param_2 == 0x40) || (*param_2 == 0x80)) &&
        (cVar5 = (**(code **)(param_1[0x1a] + 0x2c))
                           (param_1 + 0x1a,iVar3 + 0x78,aiStack_a0,auStack_60), cVar5 != '\0')) &&
       (5 < *(byte *)(iVar3 + 0x7c))) {
      cVar5 = fn_8269D300(piVar4,param_1);
      if ((cVar5 == '\0') || (bVar1 = true, (*(ushort *)(piVar4 + 0x2c0) & 1) == 0)) {
        bVar1 = false;
      }
      if ((bVar1) && (iVar3 = fn_82700248(piVar4 + 0x28b,4), iVar3 != 0)) {
        iStack_4c = param_2[1];
        iStack_48 = param_2[2];
        iStack_44 = param_2[3];
        *(undefined4 *)(iVar3 + 4) = 2;
        param_1[1] = param_1[1] + 1;
        if (*(int *)(iVar3 + 8) != 0) {
          fn_8267C498();
        }
        *(int **)(iVar3 + 8) = param_1;
        if (*(int *)(iVar3 + 0xc) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x10) = uStack_50;
        *(int *)(iVar3 + 0x14) = iStack_4c;
        *(int *)(iVar3 + 0x18) = iStack_48;
        *(int *)(iVar3 + 0x1c) = iStack_44;
      }
    }
    fn_82696330(auStack_60);
  }
  if (*param_2 == 0x40) {
    if ((*param_3 & 1) == 0) {
      uStack_88 = *(undefined2 *)(param_2 + 2);
      uStack_86 = *(undefined1 *)((int)param_2 + 10);
      uStack_90 = 0x20000;
      uStack_8c = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      cVar5 = (**(code **)(*param_1 + 0xe8))(param_1,&uStack_90);
      if (cVar5 != '\0') {
        *param_3 = *param_3 | 1;
      }
    }
    cVar5 = fn_8269D300(piVar4,param_1);
    if ((cVar5 == '\0') || (bVar1 = true, (*(ushort *)(piVar4 + 0x2c0) & 1) == 0)) {
      bVar1 = false;
    }
    if (((bVar1) && ((*(short *)(param_2 + 2) == 0xd || (*(short *)(param_2 + 2) == 0x20)))) &&
       ((cVar5 = (**(code **)(*param_1 + 0xb8))(param_1), cVar5 != '\0' ||
        ((uVar2 = (uint)piVar4[0x2c0] >> 0x1a & 3, uVar2 != 3 && (uVar2 == 1)))))) {
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_80 = 0x400;
      uStack_76 = 0;
      uStack_75 = 0xff;
      uStack_74 = 0;
      uStack_73 = 0;
      (**(code **)(*param_1 + 0xe8))(param_1,&uStack_80);
      param_1[1] = param_1[1] + 1;
      (**(code **)(*piVar4 + 0x8c))((double)lbl_821AAD20,piVar4);
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_70 = 0x800;
      uStack_66 = 0;
      uStack_65 = 0xff;
      uStack_64 = 0;
      uStack_63 = 0;
      (**(code **)(*param_1 + 0xe8))(param_1,&uStack_70);
      fn_8267C498(param_1);
    }
  }
  lVar6 = (ulonglong)*(uint *)(aiStack_a0[0] + 8) - 1;
  *(int *)(aiStack_a0[0] + 8) = (int)lVar6;
  if (lVar6 == 0) {
    fn_826944C8(aiStack_a0[0]);
  }
  return 1;
}

