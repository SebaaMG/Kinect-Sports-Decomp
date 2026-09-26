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
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826951A0();
extern int fn_826951F0();
extern int fn_826959C8();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826ADE60();
extern int fn_826BC950();
extern int fn_82F6B020();
extern unsigned int iStack_94;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


double fn_826972E0(char *param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  byte bVar6;
  double dVar7;
  double dStack_a0;
  int *piStack_98;
  int iStack_94;
  byte bStack_90;
  byte abStack_80 [16];
  byte abStack_70 [16];
  undefined **ppuStack_60;
  byte *pbStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  cVar5 = *param_1;
  if (cVar5 == '\x03') {
    return *(double *)(param_1 + 8);
  }
  if (cVar5 == '\x04') {
    return (double)(longlong)*(int *)(param_1 + 8);
  }
  if (cVar5 == '\x05') {
    cVar5 = fn_826951F0(&dStack_a0,**(undefined4 **)(param_1 + 4));
    if (cVar5 != '\0') {
      return dStack_a0;
    }
    goto LAB_82697364;
  }
  if (cVar5 == '\x01') {
    bVar6 = *(byte *)(param_2 + 0x1f);
  }
  else {
    if (cVar5 == '\x02') {
      if (param_1[4] == '\0') {
        return lbl_82005710;
      }
      return lbl_82005758;
    }
    if (cVar5 == '\a') goto LAB_82697364;
    if (((cVar5 == '\x06') && (*(int *)(param_1 + 4) != 0)) || (cVar5 == '\b')) {
      abStack_80[0] = 0;
      piVar3 = (int *)fn_82696AD0(param_1,param_2);
      if ((param_2 == (int *)0x0) ||
         (cVar5 = (**(code **)(*piVar3 + 0x2c))
                            (piVar3,param_2 + 0x1e,(ulonglong)(uint)param_2[0x1e] + 0x158,abStack_80
                            ), cVar5 == '\0')) {
        if (*param_1 == '\a') {
          dVar7 = (double)fn_826BC950();
        }
        else {
          iVar4 = (**(code **)(*piVar3 + 4))(piVar3,param_2);
          if (iVar4 == 0) {
            if (abStack_80[0] < 5) {
              return lbl_82005710;
            }
            fn_826959C8(abStack_80);
            return lbl_82005710;
          }
          dVar7 = (double)fn_82F6B020();
        }
      }
      else {
        uVar1 = *(ushort *)(param_2 + 0x31);
        *(ushort *)(param_2 + 0x31) = uVar1 + 1;
        if (uVar1 < 0xff) {
          abStack_70[0] = 0;
          fn_82696B20(&piStack_98,abStack_80,param_2);
          if (piStack_98 != (int *)0x0) {
            pbStack_5c = abStack_70;
            uStack_4c = 0;
            ppuStack_60 = &lbl_8200579C;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_44 = 0;
            uStack_40 = 0;
            piStack_58 = piVar3;
            piStack_48 = param_2;
            (**(code **)(*piStack_98 + 0x28))(piStack_98,&ppuStack_60,iStack_94,0);
            fn_826828D8(&ppuStack_60);
          }
          cVar5 = fn_826951A0(abStack_70);
          if (cVar5 == '\0') {
            dVar7 = (double)fn_826BC950();
          }
          else {
            dVar7 = (double)fn_826972E0(abStack_70,param_2);
          }
          if (((bStack_90 & 2) == 0) && (piStack_98 != (int *)0x0)) {
            fn_826824B0();
          }
          piStack_98 = (int *)0x0;
          if (((bStack_90 & 1) == 0) && (iStack_94 != 0)) {
            fn_826824B0();
          }
          iStack_94 = 0;
          if (4 < abStack_70[0]) {
            fn_826959C8(abStack_70);
          }
        }
        else {
          dVar7 = (double)fn_826BC950();
          cVar5 = (**(code **)(*param_2 + 4))(param_2);
          if (cVar5 != '\0') {
            fn_826ADE60(param_2,0xffffffff82006218);
          }
        }
        *(short *)(param_2 + 0x31) = *(short *)(param_2 + 0x31) + -1;
      }
      if (abStack_80[0] < 5) {
        return dVar7;
      }
      fn_826959C8(abStack_80);
      return dVar7;
    }
    if ((cVar5 == '\0') || (bVar2 = false, cVar5 == '\n')) {
      bVar2 = true;
    }
    if (!bVar2) {
      return lbl_82005710;
    }
    bVar6 = *(byte *)(param_2 + 0x1f);
    if (bVar6 == 0) goto LAB_82697364;
  }
  if (bVar6 < 7) {
    return lbl_82005710;
  }
LAB_82697364:
  dVar7 = (double)fn_826BC950();
  return dVar7;
}

