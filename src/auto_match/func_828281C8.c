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
extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_82822300();
extern int fn_828252D0();
extern int fn_82827980();
extern int fn_82828B78();
extern int fn_82829A80();
extern int fn_82F672D8();


ulonglong fn_828281C8(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar6;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar7;
  undefined1 auStack_40 [64];
  
  uVar3 = fn_82827980();
  if ((uVar3 & 0xff) == 0) {
    *(char *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) + '\x01';
    iVar6 = fn_828252D0(0x2c);
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = fn_828252D0((int)pcVar7 - (int)param_2);
    *(int *)(iVar6 + 8) = (int)uVar4;
    fn_82F672D8(uVar4,param_2,(int)pcVar7 - (int)param_2);
    uVar2 = *(undefined1 *)(param_1 + 0x51);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    *(undefined1 *)(iVar6 + 0x14) = uVar2;
    fn_82822300(param_1 + 0x2f4,iVar6);
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x51);
    if (*(char *)(param_1 + 0x3f1) != '\0') {
      fn_82829A80(param_1,0xffffffff8201ed10,param_2,iVar6 + 0x24,0x20);
      lVar5 = fn_8265C9E0(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        fn_82828B78(lVar5,auStack_40,auStack_40);
      }
      *(int *)(iVar6 + 0x28) = (int)lVar5;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar6;
    }
  }
  return uVar3;
}

