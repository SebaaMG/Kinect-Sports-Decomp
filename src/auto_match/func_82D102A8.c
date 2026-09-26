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
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2b0;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern int fn_82D0B2B0();
extern int fn_82D0B378();
extern int fn_82D0B6F8();
extern int fn_82D0F4F0();
extern int fn_82D127A0();
extern int fn_82D1A660();
extern unsigned int iStack_2a0;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821347A8;
extern unsigned int *lbl_8323B464;


double fn_82D102A8(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_2b0 [4];
  undefined4 *puStack_2ac;
  undefined4 *apuStack_2a8 [2];
  int iStack_2a0;
  undefined4 *puStack_29c;
  undefined4 *puStack_298;
  undefined4 *puStack_294;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [624];
  
  *param_4 = 0;
  *param_5 = 0;
  iVar6 = *(int *)(param_1 + 8);
  dVar12 = (double)lbl_8200133C;
  if (*(char *)(iVar6 + 0x1b5) == '\0') {
    fn_82CEE578(auStack_290,auStack_270,0x200);
    uVar1 = *(undefined4 *)(iVar6 + 0x1b0);
    uVar5 = fn_82CEDB38(auStack_290,0xffffffff82134540);
    uVar5 = fn_82CEDCF0(uVar5,uVar1);
    fn_82CEDB38(uVar5,0xffffffff821c24f0);
    iVar6 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d886,auStack_270,0xffffffff8213450c,0x146);
    if (iVar6 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(auStack_290);
  }
  lVar9 = 0;
  iVar6 = fn_82D0B2B0(param_1);
  if (0 < iVar6) {
    dVar11 = (double)lbl_821347A8;
    do {
      iVar6 = fn_82D0B378(param_1,lVar9);
      uVar1 = *(undefined4 *)(param_2 + 8);
      puVar3 = (undefined4 *)((int)in_r0 + iVar6 & 0xfffffff0);
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_280 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      iVar6 = fn_82D1A660(dVar11,uVar1,auStack_280,&puStack_2ac,apuStack_2a8);
      puVar4 = apuStack_2a8[0];
      puVar3 = puStack_2ac;
      if (iVar6 == 3) {
        if (puStack_2ac != (undefined4 *)0x0) {
          if (((apuStack_2a8[0] != (undefined4 *)0x0) && (*(int *)(puStack_2ac[2] + 0x1a8) == 3)) &&
             (*(int *)(apuStack_2a8[0][2] + 0x1a8) == 3)) {
            fn_82D127A0();
            dVar10 = (double)fn_82D0B6F8(puVar4);
            if (dVar12 < dVar10) {
              puStack_29c = puVar4;
              iStack_2a0 = param_1;
              puVar7 = (undefined4 *)fn_82D0F4F0(0,&iStack_2a0,2);
              if (puVar7 != (undefined4 *)0x0) {
                if (*(int *)(puVar7[2] + 0x1a8) == 3) {
                  fn_82D127A0();
                  puStack_294 = puVar3;
                  puStack_298 = puVar7;
                  pcVar8 = (char *)(**(code **)(*param_3 + 4))(auStack_2b0,param_3,&puStack_298,2);
                  if (*pcVar8 != '\0') {
                    puVar2 = (undefined4 *)*param_4;
                    if (puVar2 != (undefined4 *)0x0) {
                      (**(code **)*puVar2)(puVar2,1);
                    }
                    puVar2 = (undefined4 *)*param_5;
                    if (puVar2 != (undefined4 *)0x0) {
                      (**(code **)*puVar2)(puVar2,1);
                    }
                    dVar12 = (double)fn_82D0B6F8(puVar4);
                    *param_4 = (int)puVar7;
                    *param_5 = (int)puVar3;
                    puStack_2ac = (undefined4 *)0x0;
                    goto LAB_82d10518;
                  }
                }
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          goto LAB_82d104f8;
        }
      }
      else {
LAB_82d104f8:
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
LAB_82d10518:
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar9 = lVar9 + 1;
      iVar6 = fn_82D0B2B0(param_1);
    } while ((int)lVar9 < iVar6);
  }
  return dVar12;
}

