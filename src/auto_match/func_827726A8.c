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
extern unsigned int *auStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8269AC18();
extern int fn_8270D8E0();
extern int fn_8270E1B8();
extern int fn_8275EC20();
extern int fn_82771150();
extern int fn_82772578();
extern int fn_82783F98();
extern int fn_827842B8();
extern int fn_82784460();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_831E7E64;


undefined8 fn_827726A8(int param_1,float *param_2,char param_3,int param_4)

{
  bool bVar1;
  float *pfVar4;
  undefined8 uVar2;
  int iVar5;
  ulonglong uVar3;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [80];
  
  uVar8 = 0;
  if (((param_4 != 0) && ((*(byte *)(param_4 + 0x66) & 1) != 0)) &&
     (uVar8 = fn_8269AC18((double)lbl_82002AE0,param_4), uVar8 != 0)) {
    fn_8270D8E0(uVar8);
  }
  fStack_60 = *(float *)(param_1 + 0x14);
  fStack_5c = *(float *)(param_1 + 0x18);
  fStack_58 = *(float *)(param_1 + 0x1c);
  fStack_54 = *(float *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x34) & 0x10) == 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))(param_1 + 0x10,&fStack_60);
  }
  if ((uVar8 & 0xffffffff) != 0) {
    pfVar4 = (float *)fn_8270E1B8(auStack_50,uVar8,&fStack_60);
    fStack_54 = pfVar4[3];
    fStack_58 = pfVar4[2];
    fStack_5c = pfVar4[1];
    fStack_60 = *pfVar4;
  }
  if (((fStack_58 < *param_2) || (*param_2 < fStack_60)) ||
     ((fStack_54 < param_2[1] || (bVar1 = true, param_2[1] < fStack_5c)))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_3 == '\0') {
LAB_827727dc:
      if ((uVar8 & 0xffffffff) != 0) {
        fn_8267C498(uVar8);
      }
      uVar2 = 1;
    }
    else {
      iVar5 = fn_8267B890(lbl_831E7E64,0x50,0);
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_82772578();
      }
      lVar10 = uVar3 + 8;
      fn_82783F98((double)lbl_8200D898,lVar10);
      uVar9 = 0;
      if (*(int *)(param_1 + 200) != 0) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + *(int *)(param_1 + 0xc4);
          if (*(char *)(iVar6 + 0x20) == '\0') {
            fn_82771150(iVar6,lVar10);
          }
          else {
            if ((uVar8 & 0xffffffff) != 0) {
              fn_8275EC20(lVar10,uVar8);
            }
            cVar7 = fn_82784460((double)*param_2,(double)param_2[1],lVar10);
            if (cVar7 != '\0') {
              if ((uVar3 & 0xffffffff) != 0) {
                fn_8267C498(uVar3);
              }
              goto LAB_827727dc;
            }
            fn_827842B8(lVar10);
          }
          uVar9 = uVar9 + 1;
          iVar5 = iVar5 + 0x24;
        } while (uVar9 < *(uint *)(param_1 + 200));
      }
      if ((uVar8 & 0xffffffff) != 0) {
        fn_8275EC20(lVar10,uVar8);
      }
      uVar2 = fn_82784460((double)*param_2,(double)param_2[1],lVar10);
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8267C498(uVar3);
      }
      if ((uVar8 & 0xffffffff) != 0) {
        fn_8267C498(uVar8);
      }
    }
  }
  else {
    if ((uVar8 & 0xffffffff) != 0) {
      fn_8267C498(uVar8);
    }
    uVar2 = 0;
  }
  return uVar2;
}

