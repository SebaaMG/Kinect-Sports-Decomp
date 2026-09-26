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
extern int fn_828F6FA8();
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930940();


int fn_82983408(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar6;
  longlong lVar5;
  char *pcVar7;
  char *pcVar8;
  char acStack_50 [80];
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) &&
      ((*(int *)(param_2 + 0x10) == 2 || (*(int *)(param_2 + 0x10) == 3)))) &&
     (((param_3 != 0 && (*(int *)(param_3 + 4) == 3)) && (*(int *)(param_3 + 0x10) == 9)))) {
    uVar4 = fn_82930318(0x30);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_82930940(uVar4,param_3 + 0x10);
    }
    if (iVar6 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      pcVar3 = *(char **)(param_3 + 0x18);
      fn_828F6FA8(acStack_50,0x10,0xffffffff821c7f34,uVar2);
      pcVar7 = acStack_50;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      lVar5 = fn_829301D0(*(undefined4 *)(param_1 + 4),
                                pcVar7 + (int)(pcVar8 + ((-1 - (int)acStack_50) - (int)pcVar3)),1);
      if (lVar5 != 0) {
        fn_828F6FA8(lVar5,pcVar7 + (int)(pcVar8 + ((-1 - (int)acStack_50) - (int)pcVar3)),
                          0xffffffff8204e24c,uVar2,pcVar3);
        *(int *)(iVar6 + 0x18) = (int)lVar5;
        return iVar6;
      }
    }
  }
  return 0;
}

