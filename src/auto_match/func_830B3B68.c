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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1928();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1F2F8();
extern int fn_82CE08D0();
extern int fn_82CE0A20();
extern int fn_82CE0AD8();
extern int fn_82CE0BB0();
extern int fn_830B3780();
extern int fn_830B3840();
extern int fn_830B3990();
extern int fn_830B3AE0();
extern int fn_830B4CB0();
extern int fn_830B4CB8();
extern int fn_830B4CC0();
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


ulonglong fn_830B3B68(int param_1,int *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar4;
  char cVar7;
  int iVar5;
  longlong lVar3;
  int iVar6;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  int aiStack_c0 [4];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    uVar1 = fn_830B3780(param_1,&uStack_d0);
    if (-1 < (longlong)uVar1) {
      piStack_c4 = (int *)0x0;
      uVar1 = (**(code **)(*param_2 + 8))(param_2,&piStack_c4);
      if (((longlong)uVar1 < 0) ||
         (uVar1 = (**(code **)(*piStack_c4 + 4))(piStack_c4,auStack_b0), (longlong)uVar1 < 0)) {
        fn_82CE08D0(uStack_d0);
        if ((param_3 & 0xffffffff) == 0) {
          return uVar1;
        }
        fn_830B4CB0(param_3,uVar1);
        return uVar1;
      }
      uVar1 = fn_830B3840(param_1,&uStack_d0,auStack_b0);
      if (-1 < (longlong)uVar1) {
        iVar4 = fn_8265CA60(*(undefined4 *)(param_1 + 4));
        cVar7 = (**(code **)(*param_2 + 0xc))(param_2);
        bVar12 = false;
        if ((cVar7 == '\x01') || ((param_3 & 0xffffffff) != 0)) {
          bVar12 = true;
        }
        uVar10 = 0;
        uVar11 = 0xffffffff;
        do {
          uStack_c8 = 0;
          uStack_cc = 0;
          uVar1 = (**(code **)(*param_2 + 4))(param_2,&uStack_c8,&uStack_cc);
          if ((longlong)uVar1 < 0) break;
          iVar5 = fn_82A1F2F8();
          if (*(char *)(param_1 + 0xc) == '\0') {
            lVar3 = fn_82CE0AD8(uStack_d0,uStack_c8,uStack_cc,0);
          }
          else {
            lVar3 = fn_830B3AE0(param_1,&uStack_d0,uStack_c8,uStack_cc);
          }
          iVar6 = fn_82A1F2F8();
          uVar9 = iVar6 - iVar5;
          if (uVar9 <= uVar11) {
            uVar11 = uVar9;
          }
          if (uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          uVar1 = -(ulonglong)(lVar3 == -1) & 0xffffffff8004000e;
          if (bVar12) {
            if (cVar7 == '\x01') {
              bVar12 = false;
              if (*(char *)(param_1 + 0xc) == '\0') {
                iVar5 = fn_82CE0A20(uStack_d0,iVar4,(ulonglong)*(uint *)(param_1 + 4) - 1,0);
              }
              else {
                aiStack_c0[0] = 0;
                cVar8 = fn_830B3990(param_1,&uStack_d0,iVar4,0x15,aiStack_c0);
                iVar5 = aiStack_c0[0];
                if (cVar8 == '\0') {
                  iVar5 = -1;
                }
              }
              if (iVar5 == -1) {
LAB_830b3eb8:
                uVar1 = 0xffffffff8004000f;
                break;
              }
              *(undefined1 *)(iVar5 + iVar4) = 0;
              fn_82230110(auStack_a0,iVar4);
              iVar5 = fn_822C1928(auStack_a0,0xffffffff821880dc,0,0x15);
              if (iVar5 == -1) {
                uVar1 = 0xffffffff80040010;
              }
              if ((param_3 & 0xffffffff) != 0) {
                fn_830B4CC0(param_3,iVar4);
              }
              fn_82230300(auStack_a0,1,0);
            }
            else if ((param_3 & 0xffffffff) != 0) {
              bVar12 = false;
              lVar3 = (ulonglong)*(uint *)(param_1 + 4) - 1;
              if (*(char *)(param_1 + 0xc) == '\0') {
                iVar5 = fn_82CE0A20(uStack_d0,iVar4,lVar3,0);
              }
              else {
                aiStack_c0[0] = 0;
                cVar8 = fn_830B3990(param_1,&uStack_d0,iVar4,lVar3,aiStack_c0);
                iVar5 = aiStack_c0[0];
                if (cVar8 == '\0') {
                  iVar5 = -1;
                }
              }
              if (iVar5 == -1) goto LAB_830b3eb8;
              *(undefined1 *)(iVar5 + iVar4) = 0;
              fn_830B4CC0(param_3,iVar4);
            }
          }
        } while (-1 < (int)uVar1);
        fn_8265CAA0(iVar4);
        if (((int)uVar1 == -0x7ffbffff) || (-1 < (int)uVar1)) {
          iVar4 = fn_82CE08D0(uStack_d0);
          if (iVar4 == -1) {
            if ((param_3 & 0xffffffff) != 0) {
              fn_830B4CB0(param_3,0xffffffff8004000d);
              uVar2 = fn_82CE0BB0();
              fn_830B4CB8(param_3,uVar2);
            }
            return 0xffffffff8004000d;
          }
          if ((param_3 & 0xffffffff) != 0) {
            fn_830B4CB0(param_3,0);
          }
          return 0;
        }
      }
      fn_82CE08D0(uStack_d0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830B4CB0(param_3,uVar1);
      uVar2 = fn_82CE0BB0();
      fn_830B4CB8(param_3,uVar2);
    }
  }
  return uVar1;
}

