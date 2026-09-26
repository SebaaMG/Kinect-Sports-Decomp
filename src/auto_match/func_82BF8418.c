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
extern unsigned int *auStack_38;
extern int fn_82BA02A8();
extern int fn_82BF6FC0();
extern int fn_82BF7098();
extern unsigned int iStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


bool fn_82BF8418(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar5;
  longlong lVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  char *pcStack_40;
  int iStack_3c;
  undefined8 auStack_38 [7];
  
  if (param_2 != 0) {
    uStack_60 = *(undefined4 *)(param_1 + 8);
    pcVar8 = (char *)0x0;
    uStack_5c = 0;
    uVar2 = *(uint *)(param_2 + 0xc);
    auStack_38[0] = fn_82BA02A8(*(undefined8 *)(param_1 + 0x10));
    uStack_58 = *(undefined4 *)(param_1 + 0x18);
    uStack_54 = *(undefined4 *)(param_1 + 0x1c);
    uStack_50 = *(undefined4 *)(param_1 + 0x20);
    uStack_4c = *(undefined4 *)(param_1 + 0x24);
    uStack_48 = *(undefined4 *)(param_1 + 0x28);
    pcVar3 = *(char **)(param_1 + 0x2c);
    if ((pcVar3 == (char *)0x0) || (pcVar6 = pcVar3, *pcVar3 == '\0')) {
      pcVar6 = (char *)0x0;
    }
    else {
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (-1 - (int)pcVar3);
    }
    if (pcVar6 < (char *)0x7d1) {
      pcVar3 = *(char **)(param_1 + 0x30);
      if ((pcVar3 != (char *)0x0) && (pcVar7 = pcVar3, *pcVar3 != '\0')) {
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + (-1 - (int)pcVar3);
      }
      if (((((((pcVar8 < (char *)0x7d1) &&
              (pcStack_44 = pcVar6, pcStack_40 = pcVar8,
              iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_5c,4), iVar5 != 0
              )) && (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_60,4),
                    iVar5 != 0)) &&
            ((iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_60,4), iVar5 != 0
             && (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),auStack_38,8),
                iVar5 != 0)))) &&
           ((iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_58,4), iVar5 != 0
            && ((iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_54,4),
                iVar5 != 0 &&
                (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_50,4),
                iVar5 != 0)))))) &&
          (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_4c,4), iVar5 != 0))
         && ((((iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_48,4),
               iVar5 != 0 &&
               (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&pcStack_44,4),
               iVar5 != 0)) &&
              ((pcVar6 == (char *)0x0 ||
               (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),
                                      *(undefined4 *)(param_1 + 0x2c),pcVar6), iVar5 != 0)))) &&
             ((iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&pcStack_40,4),
              iVar5 != 0 &&
              ((pcVar8 == (char *)0x0 ||
               (iVar5 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),
                                      *(undefined4 *)(param_1 + 0x30),pcVar8), iVar5 != 0)))))))) {
        iStack_3c = *(int *)(param_2 + 0xc) - uVar2;
        lVar4 = fn_82BF7098(param_2,(ulonglong)uVar2 + 4,&iStack_3c,4);
        return lVar4 != 0;
      }
    }
  }
  return false;
}

