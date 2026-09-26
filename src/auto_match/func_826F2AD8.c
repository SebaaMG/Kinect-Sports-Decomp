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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT41(h,l) ((U64)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define CONCAT51(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_826F2668();
extern int fn_826F2A90();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern int fn_82F66AC0();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_6a;


void fn_826F2AD8(int param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  char *pcVar6;
  undefined2 uStack_6a;
  char *pcStack_68;
  int iStack_64;
  char *pcStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  
  bVar1 = false;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  bVar2 = false;
  if (param_2 != (char *)0x0) {
    *(undefined2 *)(param_1 + 6) = 0;
    pcVar6 = param_2;
    if (*param_2 != '\0') {
      do {
        if (bVar1) {
          if (bVar1) {
            if (*param_2 != '}') goto LAB_826f2c24;
            if (pcVar6 != param_2) {
              cVar5 = *pcVar6;
              uVar4 = 0xff;
              while( true ) {
                iVar3 = fn_82F66AC0(cVar5);
                if (iVar3 == 0) break;
                pcVar6 = pcVar6 + 1;
                cVar5 = *pcVar6;
              }
              iVar3 = fn_82F66A80(*pcVar6);
              if (iVar3 == 0) {
                *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
              }
              else {
                uVar4 = fn_82F65B18(pcVar6);
                cVar5 = *pcVar6;
                while (((cVar5 != '\0' && (cVar5 != ':')) && (cVar5 != '}'))) {
                  pcVar6 = pcVar6 + 1;
                  cVar5 = *pcVar6;
                }
                if ((cVar5 != '\0') && (cVar5 == ':')) {
                  pcVar6 = pcVar6 + 1;
                }
              }
              uStack_58 = 1;
              uStack_54 = CONCAT62(CONCAT51(CONCAT41(pcVar6,(char)param_2 - (char)pcVar6),uVar4),
                                   uStack_6a);
              fn_826F2668((undefined4 *)(param_1 + 0x24),&uStack_58);
              if (*(short *)(param_1 + 8) == -1) {
                *(short *)(param_1 + 8) = (short)*(undefined4 *)(param_1 + 0x24) + -1;
              }
            }
            bVar1 = false;
LAB_826f2ca4:
            pcVar6 = param_2 + 1;
            param_2 = param_2 + 1;
          }
        }
        else {
          if (bVar2) {
            bVar2 = false;
          }
          else {
            if ((int)*param_2 == 0x7b) {
              if (pcVar6 != param_2) {
                iStack_64 = (int)param_2 - (int)pcVar6;
                pcStack_68 = pcVar6;
                fn_826F2A90(param_1,&pcStack_68);
              }
              bVar1 = true;
              goto LAB_826f2ca4;
            }
            if (((int)*param_2 == (uint)*(byte *)(param_1 + 4)) && (param_2[1] != '\0')) {
              if (pcVar6 != param_2) {
                iStack_5c = (int)param_2 - (int)pcVar6;
                pcStack_60 = pcVar6;
                fn_826F2A90(param_1,&pcStack_60);
              }
              bVar2 = true;
              pcVar6 = param_2 + 1;
              param_2 = param_2 + 1;
              goto LAB_826f2c28;
            }
          }
LAB_826f2c24:
          param_2 = param_2 + 1;
        }
LAB_826f2c28:;} while (*param_2 != '\0');
      if ((!bVar1) && (pcVar6 != param_2)) {
        uStack_58 = 0;
        iStack_5c = CONCAT13((char)param_2 - (char)pcVar6,(((U64)(iStack_5c) >> 8) & 0xFFFFFF));
        uStack_54 = CONCAT44(pcVar6,iStack_5c);
        pcStack_60 = pcVar6;
        fn_826F2668(param_1 + 0x24,&uStack_58);
      }
    }
  }
  return;
}

