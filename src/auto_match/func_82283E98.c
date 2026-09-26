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
extern unsigned int *auStack_80;
extern int fn_82250A18();
extern int fn_82279CA0();
extern int fn_8228ED20();
extern int fn_8229E090();
extern int fn_82350888();
extern int fn_8249ABC0();
extern int fn_824E6890();
extern int fn_82512C30();
extern int fn_8251CF80();
extern int fn_8252DDF0();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_832975B0;
extern unsigned int uRam832765b8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82283E98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [96];
  
  if (param_1 == 2) {
    if (*(int *)(param_2 + 0x144) != 0) {
      *(undefined4 *)(param_2 + 0x144) = 0;
    }
  }
  else {
    if (param_1 == 0) {
      if (lbl_832765BC == 0) {
        if (lbl_8329618C == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(lbl_8329618C + 4);
        }
        if (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 0xd54);
          if ((*(int *)(iVar3 + 0x18) == 0) && (iVar1 = *(int *)(iVar3 + 0x14), iVar1 != 0)) {
            iVar2 = lbl_832975B0;
            if (lbl_832975B0 == 0) {
              iVar2 = fn_82250A18();
            }
            if (((*(char *)(iVar2 + 4) == '\0') && (iVar1 = *(int *)(iVar1 + 8), 4 < iVar1)) &&
               (iVar1 < 0x10)) {
              iVar3 = *(int *)(iVar3 + 0x14);
              iVar1 = *(int *)(iVar3 + 0x2c);
              *(undefined4 *)(iVar3 + 0x10) = 1;
              *(undefined4 *)(iVar3 + 0x344) = 0;
              *(undefined4 *)(iVar3 + 0x34c) = 0;
              if (iVar1 != 0) {
                *(undefined4 *)(iVar1 + 0x6c) = 1;
                if ((*(int *)(iVar1 + 0x2c) != 0) && (*(int *)(iVar1 + 0x34) == 0)) {
                  fn_8228ED20();
                  *(undefined4 *)(iVar1 + 0x34) = 1;
                  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
                }
              }
              fn_82350888(iVar3,0x10);
              iVar3 = fn_8249ABC0();
              *(undefined4 *)(iVar3 + 0x80) = 1;
            }
          }
          iVar4 = fn_824E6890(iVar4,(ulonglong)*(uint *)(iVar4 + 0xd54) + 0x20);
          if (iVar4 != 0) {
            lVar7 = 0;
            puVar8 = (undefined4 *)(iVar4 + 0x178);
            do {
              if (0 < (int)puVar8[-6]) {
                fn_8252DDF0(puVar8 + -0x5a,lVar7);
              }
              puVar8[-0xc] = 0;
              puVar8[-6] = 0;
              piVar5 = (int *)*puVar8;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 0xc))(piVar5,puVar8 + -4 != piVar5);
                *puVar8 = 0;
              }
              lVar7 = lVar7 + 1;
              *puVar8 = 0;
              puVar8 = puVar8 + 0x5c;
            } while ((int)lVar7 != 2);
          }
        }
      }
      else {
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uRam832765b8 = 1;
        fn_8251CF80(*(undefined4 *)(lbl_832765BC + 4),0,&uStack_70);
      }
      piVar5 = (int *)fn_82512C30();
      if (*piVar5 == 0) {
        uVar6 = 0xffffffff821a8ad0;
      }
      else {
        uVar6 = 0xffffffff821a8ac4;
      }
      fn_82864988(auStack_60,uVar6);
      auStack_80[0] = fn_828647D8();
      fn_82864898(auStack_60);
      fn_82536590(auStack_80,0);
      lbl_831D44F8 = lbl_821CC160;
      lbl_831D450C = 0xff;
      lbl_831D4508 = 0;
    }
    else if (param_1 == 1) {
      fn_82279CA0(param_2,0);
    }
    if (*(int *)(param_2 + 0x144) != 0) {
      fn_8229E090(*(int *)(param_2 + 0x144),0,1);
      *(undefined4 *)(param_2 + 0x144) = 0;
    }
  }
  return;
}

