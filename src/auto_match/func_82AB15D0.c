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
extern int fn_82F6DCE0();
extern int fn_82F6EDE8();
extern int (*lbl_83223C58)();
extern int (*lbl_83223C5C)();
extern int (*lbl_83223C60)();
extern unsigned int lbl_83223C64;
extern int (*lbl_83223C68)();
extern int (*lbl_83223C70)();
extern int (*lbl_83223C74)();
extern unsigned int stack0x00000020;
extern unsigned int uRam83223c56;
extern unsigned int uRam83223c57;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_82AB15D0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  char *apcStack_50 [20];
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (lbl_83223C68 == (code *)0x0) {
LAB_82ab180c:
    (*lbl_83223C70)(lbl_83223C64);
  }
  else {
    if (param_1 < 0xf) {
      if (*(int *)(param_1 * 0xc + -0x7ce9fa80) == 0) {
        return;
      }
      pcVar3 = (char *)&stack0x00000020;
      pcVar4 = (char *)0x83223858;
      apcStack_50[0] = pcVar3;
      fn_82F6EDE8(0xffffffff83223858,0x3fe,param_2,pcVar3);
      uRam83223c56 = 0;
      fn_82F6DCE0(0xffffffff83223858,0x3ff,0xffffffff821cc884,0xffffffff83223858);
      uRam83223c57 = 0;
      if ((param_1 == 0) || (param_1 == 3)) {
        (*lbl_83223C74)(lbl_83223C64,param_1 == 3,0,0xffffffff83223858);
      }
      iVar1 = *(int *)(param_1 * 0xc + -0x7ce9fa80);
      if (iVar1 != 1) {
        if ((((iVar1 == 2) && (lbl_83223C58 != (code *)0x0)) && (lbl_83223C60 != (code *)0x0)) &&
           (lbl_83223C5C != (code *)0x0)) {
          lVar2 = (*lbl_83223C58)(lbl_83223C64,0xffffffff820d5f08,2);
          if (lVar2 == 0) {
            return;
          }
          do {
            apcStack_50[0] = pcVar4;
            pcVar4 = apcStack_50[0] + 1;
          } while (*apcStack_50[0] != '\0');
          apcStack_50[0] = apcStack_50[0] + 0x7cddc7a8;
          (*lbl_83223C60)(lbl_83223C64,lVar2,0xffffffff83223858,apcStack_50[0],apcStack_50);
          (*lbl_83223C5C)(lbl_83223C64,lVar2);
          return;
        }
        goto LAB_82ab180c;
      }
    }
    else {
      pcVar4 = "Invalid debug level";
      pcVar3 = (char *)0x0;
    }
    (*lbl_83223C68)(lbl_83223C64,0xffffffff820d5f14,pcVar4,pcVar3);
  }
  return;
}

