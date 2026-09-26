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
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822C1928();
extern int fn_8260D428();
extern int fn_82824278();
extern int fn_82824290();
extern unsigned int iStack_70;
extern unsigned int lbl_8201EBD0;
extern unsigned int lbl_8201EBD1;
extern unsigned int lbl_8201EBD2;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_ae;
extern unsigned int uStack_af;


uint fn_82821460(int *param_1,int param_2,uint *param_3,int *param_4,undefined1 *param_5)

{
  char cVar3;
  undefined8 uVar1;
  int iVar2;
  undefined4 *****pppppuVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  char cStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined4 ****appppuStack_a0 [4];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 auStack_80 [16];
  int iStack_70;
  undefined1 auStack_60 [96];
  
  cStack_b0 = lbl_8201EBD0;
  uStack_af = lbl_8201EBD1;
  uStack_ae = lbl_8201EBD2;
  cVar3 = fn_82824278();
  if (cVar3 == '\0') {
    uVar7 = 0;
    *param_5 = 0;
  }
  else {
    puVar6 = (uint *)(*param_1 * 0x20 + *param_3);
    fn_82230110(auStack_60,param_2);
    pcVar5 = &cStack_b0;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    uVar1 = fn_822C1928(auStack_60,&cStack_b0,0,pcVar5 + (-1 - (int)&cStack_b0));
    fn_82230300(auStack_80,0,0);
    fn_82230218(auStack_80,auStack_60,0,uVar1);
LAB_828215c0:
    if (puVar6 == (uint *)0x0) {
      *param_5 = 0;
      uVar7 = 0;
    }
    else {
      fn_82230110(appppuStack_a0,*(undefined4 *)(puVar6[3] * 4 + *param_4));
      pppppuVar4 = (undefined4 *****)appppuStack_a0[0];
      if (uStack_8c < 0x10) {
        pppppuVar4 = appppuStack_a0;
      }
      iVar2 = fn_8260D428(auStack_80,0,iStack_70,pppppuVar4,uStack_90);
      if (iVar2 != 0) goto code_r0x82821588;
      if ((int)uVar1 == -1) {
        uVar7 = puVar6[5];
      }
      else {
        uVar7 = puVar6[5];
        pcVar5 = &cStack_b0;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        iVar2 = fn_82821460(((ulonglong)*puVar6 & 0x7ffffff) * 0x20 + (ulonglong)*param_3,
                              pcVar5 + param_2 + iStack_70 + (-1 - (int)&cStack_b0),param_3,param_4,
                              param_5);
        uVar7 = iVar2 + uVar7;
      }
      fn_82230300(appppuStack_a0,1,0);
    }
    fn_82230300(auStack_80,1,0);
    fn_82230300(auStack_60,1,0);
  }
  return uVar7;
code_r0x82821588:
  cVar3 = fn_82824290(puVar6);
  if (cVar3 == '\0') {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)(puVar6[1] * 0x20 + *param_3);
  }
  fn_82230300(appppuStack_a0,1,0);
  goto LAB_828215c0;
}

