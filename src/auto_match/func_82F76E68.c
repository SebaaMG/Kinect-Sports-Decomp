extern int *piRam832635b8;
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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern char cRam832635d8;
extern char cRam832635d9;
extern int fn_82F728D0();
extern int fn_82F72A98();
extern int fn_82F72B00();
extern int fn_82F72FB0();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F73928();
extern int fn_82F739E8();
extern int fn_82F73228();
extern int fn_82F74E38();
extern int fn_82F75708();
extern int fn_82F76B80();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


int * fn_82F76E68(int *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar5;
  undefined1 *puVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [1];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];

  *(undefined1 *)(param_1 + 1) = 0;
  uVar3 = param_1[1];
  *param_1 = 0;
  param_1[1] = uVar3 & 0xff00ffff;
  bVar4 = false;
  do {
    if ((((uVar3 & 0xff000000) != 0) || (*lbl_832635C0 == '\0')) || (*lbl_832635C0 == '@')) {
      if (*lbl_832635C0 == '\0') {
        if (*param_1 == 0) {
          fn_82F72A98(param_1);
        }
        else {
          puVar7 = (undefined8 *)fn_82F728D0(auStack_60,1);
          uStack_b8 = *puVar7;
          fn_82F73680(&uStack_b8,0xffffffff8214b5d8);
          uStack_c0 = uStack_b8;
          fn_82F73228(&uStack_c0,param_1);
          *(undefined8 *)param_1 = uStack_c0;
        }
      }
      else if (*lbl_832635C0 != '@') {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 2;
      }
      return param_1;
    }
    if ((cRam832635d8 != '\0') && (cRam832635d9 == '\0')) {
      return param_1;
    }
    if (*param_1 != 0) {
      piVar6 = (int *)fn_82F739E8(auStack_a8,0xffffffff8214b5d8,param_1);
      *param_1 = *piVar6;
      param_1[1] = piVar6[1];
      if (bVar4) {
        piVar6 = (int *)fn_82F73928(auStack_a0,0x5b,param_1);
        bVar4 = false;
        *param_1 = *piVar6;
        param_1[1] = piVar6[1];
      }
    }
    if (*lbl_832635C0 == '?') {
      pcVar1 = lbl_832635C0 + 1;
      cVar2 = *pcVar1;
      if (cVar2 == '$') {
        puVar8 = auStack_68;
        goto LAB_82f77100;
      }
      if (cVar2 != '%') {
        if (cVar2 != '?') {
          if (cVar2 != 'A') {
            if (cVar2 != 'I') {
              lbl_832635C0 = pcVar1;
              puVar7 = (undefined8 *)fn_82F73228(auStack_98);
              uStack_c0 = *puVar7;
              goto LAB_82f76f98;
            }
            lbl_832635C0 = lbl_832635C0 + 2;
            puVar7 = (undefined8 *)fn_82F75708(auStack_90,1,0);
            uStack_c0 = *puVar7;
            fn_82F735D8(&uStack_c0,0x5d);
            uStack_b8 = uStack_c0;
            fn_82F73228(&uStack_b8,param_1);
            bVar4 = true;
            uVar5 = uStack_b8;
            goto LAB_82f77128;
          }
          goto LAB_82f770a0;
        }
        if ((lbl_832635C0[2] == '_') && (lbl_832635C0[3] == '?')) {
          lbl_832635C0 = lbl_832635C0 + 2;
          puVar7 = (undefined8 *)fn_82F74E38(auStack_88,0,0);
          uStack_b8 = *puVar7;
          fn_82F73228(&uStack_b8,param_1);
          *(undefined8 *)param_1 = uStack_b8;
          if (*lbl_832635C0 == '@') {
            lbl_832635C0 = lbl_832635C0 + 1;
          }
          goto LAB_82f77130;
        }
        lbl_832635C0 = pcVar1;
        uVar5 = fn_82F76B80(auStack_80);
        puVar7 = (undefined8 *)fn_82F73928(auStack_78,0x60,uVar5);
        uStack_b8 = *puVar7;
        fn_82F735D8(&uStack_b8,0x27);
        uStack_c0 = uStack_b8;
LAB_82f76f98:
        fn_82F73228(&uStack_c0,param_1);
        uVar5 = uStack_c0;
        goto LAB_82f77128;
      }
LAB_82f770a0:
      lbl_832635C0 = pcVar1;
      fn_82F72FB0(auStack_b0,0xffffffff832635c0,0x40);
      piVar6 = (int *)fn_82F739E8(auStack_70,0xffffffff82169e68,param_1);
      *param_1 = *piVar6;
      param_1[1] = piVar6[1];
      if (*piRam832635b8 != 9) {
        fn_82F72B00(piRam832635b8,auStack_b0);
      }
    }
    else {
      puVar8 = auStack_60;
LAB_82f77100:
      puVar7 = (undefined8 *)fn_82F75708(puVar8,1,0);
      uStack_b8 = *puVar7;
      fn_82F73228(&uStack_b8,param_1);
      uVar5 = uStack_b8;
LAB_82f77128:
      *(undefined8 *)param_1 = uVar5;
    }
LAB_82f77130:
    uVar3 = param_1[1];
  } while( true );
}
