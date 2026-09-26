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
extern unsigned int *auStack_b0;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99C98();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern int fn_82F63F40();
extern unsigned int lbl_820D2870;
extern unsigned int lbl_820D28E8;
extern unsigned int lbl_820D2920;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_8315FAD0;


void fn_82A9BA60(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  double dVar9;
  uint *puStack00000024;
  undefined1 auStack_b0 [176];
  
  if ((param_3[1] != 0) || (*(int *)(param_1 + 0x7c) != 0)) {
    puStack00000024 = param_3;
    fn_82A99BC8(param_2);
    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2aac);
    if (*(int *)(param_1 + 0x7c) != 0) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff821cdfb8,1);
    }
    fn_82A9A860(param_2);
    uVar2 = *param_3;
    if (uVar2 < param_3[1] * 0x18 + uVar2) {
      dVar9 = (double)lbl_82186E6C;
      puVar6 = (uint *)(uVar2 + 8);
      do {
        if (puVar6[-2] != 0) {
          fn_82A99BC8(param_2);
          fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff82038d28);
          fn_82A99B70(param_2," %s=\"%d\"",0xffffffff82011264,puVar6[-2]);
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            fn_82A99B70(param_2,&lbl_820D2870,&lbl_820D28E8,
                          (double)(float)((double)(uVar2 & 1) * dVar9 + (double)(uVar2 >> 1)));
          }
          fn_82A9A860(param_2);
          fn_82A99BC8(param_2);
          fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8204ef24);
          fn_82A99B70(param_2,0xffffffff820157e8);
          param_2[1] = param_2[1] + 1;
          pcVar3 = (char *)puVar6[-1];
          pcVar4 = pcVar3;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          (**(code **)(*param_2 + 0xc))(param_2,pcVar3,pcVar4 + (-1 - (int)pcVar3));
          fn_82A99C98(param_2,0xffffffff8204ef24);
          uVar2 = puVar6[1];
          if (uVar2 < puVar6[2] * 0x1c + uVar2) {
            puVar8 = (uint *)(uVar2 + 4);
            do {
              if (((puVar8[1] != 0) && (puVar8[2] != 0)) && (*puVar8 < 0x38)) {
                fn_82A99BC8(param_2);
                fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a88);
                fn_82A99B70(param_2," %s=\"%d\"",0xffffffff82011264,puVar8[-1]);
                fn_82A99D88(param_2,0xffffffff820065b0,(&lbl_8315FAD0)[*puVar8]);
                fn_82A99B70(param_2," %s=\"%d\"",0xffffffff820d2a94,puVar8[1]);
                fn_82A99B70(param_2," %s=\"%d\"",0xffffffff820d2a9c,puVar8[2]);
                if (puVar8[4] == 0) {
                  fn_82A9A810();
                }
                else {
                  fn_82A9A860(param_2);
                  puVar7 = (uint *)puVar8[3];
                  puVar5 = puVar7 + puVar8[4];
                  for (; puVar7 < puVar5; puVar7 = puVar7 + 1) {
                    fn_82A99BC8(param_2);
                    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8204ee44);
                    fn_82F63F40(auStack_b0,0xffffffff820d2aa4,*puVar7 >> 2,
                                      *(undefined4 *)(&lbl_820D2920 + (*puVar7 & 3) * 4));
                    fn_82A99D88(param_2,0xffffffff820d2938,auStack_b0);
                    fn_82A9A810(param_2);
                    puVar5 = (uint *)(puVar8[4] * 4 + puVar8[3]);
                  }
                  fn_82A99C28(param_2,0xffffffff820d2a88);
                }
              }
              puVar7 = puVar8 + 6;
              puVar8 = puVar8 + 7;
            } while (puVar7 < (uint *)(puVar6[2] * 0x1c + puVar6[1]));
          }
          fn_82A99C28(param_2,0xffffffff82038d28);
        }
        puVar8 = puVar6 + 4;
        puVar6 = puVar6 + 6;
      } while (puVar8 < (uint *)(puStack00000024[1] * 0x18 + *puStack00000024));
    }
    fn_82A99C28(param_2,"dbgprints");
  }
  return;
}

