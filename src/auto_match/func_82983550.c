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


int fn_82983550(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 4) == 3)) && (*(int *)(param_2 + 0x10) == 10)) &&
     (((param_3 != 0 && (*(int *)(param_3 + 4) == 3)) && (*(int *)(param_3 + 0x10) == 10)))) {
    uVar4 = fn_82930318(0x30);
    if ((uVar4 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_82930940(uVar4,param_2 + 0x10);
    }
    if (iVar5 != 0) {
      pcVar2 = *(char **)(param_2 + 0x18);
      pcVar3 = *(char **)(param_3 + 0x18);
      pcVar7 = pcVar2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar3;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + (int)(pcVar8 + (-(int)pcVar3 - (int)pcVar2) + -1);
      iVar6 = fn_829301D0(*(undefined4 *)(param_1 + 4),pcVar7,1);
      if (iVar6 != 0) {
        fn_828F6FA8(iVar6,pcVar7,0xffffffff821b0c70,pcVar2,pcVar3);
        pcVar7[iVar6 + -1] = '\0';
        *(int *)(iVar5 + 0x18) = iVar6;
        return iVar5;
      }
    }
  }
  return 0;
}

