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
extern int fn_826972E0();
extern int fn_826A7380();
extern int fn_826C1BA0();
extern int fn_826D6630();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82011638;
extern unsigned int uStack_1c;


undefined8 fn_82751800(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  double dVar8;
  uint uStack_1c;
  
  pcVar5 = "blurX";
  pcVar7 = *(char **)*param_3;
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    dVar8 = (double)fn_826972E0(param_4);
    uStack_1c = (uint)(longlong)((float)dVar8 * lbl_82011638 + lbl_82002C5C);
    if (0xfe < uStack_1c) {
      uStack_1c = 0xff;
    }
    uVar3 = 1;
    *(char *)(param_1 + 0x21) = (char)uStack_1c;
  }
  else {
    pcVar5 = "blurY";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      dVar8 = (double)fn_826972E0(param_4);
      uStack_1c = (uint)(longlong)((float)dVar8 * lbl_82011638 + lbl_82002C5C);
      if (0xfe < uStack_1c) {
        uStack_1c = 0xff;
      }
      uVar3 = 1;
      *(char *)(param_1 + 0x22) = (char)uStack_1c;
    }
    else {
      pcVar6 = "quality";
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar4 = fn_826A7380(param_2);
        if ((uVar4 & 0xffffffff) != 0) {
          fn_826D6630(uVar4 + 0xc,0xffffffff82013bf8);
        }
        uVar3 = 1;
      }
      else {
        uVar3 = fn_826C1BA0(param_1);
      }
    }
  }
  return uVar3;
}

