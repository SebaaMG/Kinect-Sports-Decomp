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
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930CE0();
extern int fn_82980D00();
extern int fn_82F68CC0();


undefined8 fn_82980DE8(int param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char *pcVar3;
  ulonglong uVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = (char *)0x0;
  pcVar3 = param_3;
  if (param_3 != (char *)0x0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar3 + (-1 - (int)param_3);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    pcVar3 = *(char **)(iVar4 + 0x14);
    pcVar5 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (-1 - (int)pcVar3);
      if ((pcVar5 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        pcVar3 = (char *)fn_829301D0(*(undefined4 *)(param_1 + 4),pcVar5 + (int)(pcVar6 + 3),
                                           0x10);
        if (pcVar3 == (char *)0x0) goto LAB_82980e8c;
        fn_82F68CC0(pcVar3,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),pcVar5);
        pcVar7 = pcVar3 + (int)pcVar5;
        pcVar3[(int)pcVar5] = ':';
        pcVar7[1] = ':';
        fn_82F68CC0(pcVar7 + 2,param_3,pcVar6);
        pcVar7[(int)(pcVar6 + 2)] = '\0';
        param_3 = pcVar3;
        goto LAB_82980f0c;
      }
    }
    if ((iVar4 != 0) && (param_3 == (char *)0x0)) {
      param_3 = *(char **)(iVar4 + 0x14);
    }
  }
LAB_82980f0c:
  uVar2 = fn_82930318(0x24);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_82930CE0(uVar2,param_2,param_3,0,0,*(undefined4 *)(param_1 + 0x14));
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x14) = iVar4;
    return 0;
  }
LAB_82980e8c:
  fn_82980D00(param_1,0,0,0xffffffff820295b0);
  return 0xffffffff8007000e;
}

