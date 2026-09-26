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
extern int fn_82F63F40();
extern int fn_82F66368();
extern int fn_82F668D8();


undefined8 fn_82876E38(int param_1,undefined8 param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((param_3 != (int *)0x0) && (*param_3 == 0)) {
    pcVar8 = (char *)(param_1 + 4);
    pcVar6 = pcVar8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    fn_82F66368(param_4,0x104,pcVar8,0x103);
    pcVar5 = param_4;
    if (param_3[1] == 0) {
      pcVar4 = (char *)(param_1 + 0x108);
      pcVar7 = pcVar4;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (int)(pcVar7 + (-1 - (int)pcVar8) + (-1 - (int)pcVar4));
      if ((char *)0x103 < pcVar6) {
        return 2;
      }
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar4 = (char *)(param_1 + 0x20c);
      pcVar7 = pcVar4;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (int)(pcVar7 + (-1 - (int)pcVar8) + (-1 - (int)pcVar4));
      if ((char *)0x103 < pcVar6) {
        return 2;
      }
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    fn_82F668D8(param_4,0x104,pcVar4,0x103 - (int)(pcVar5 + (-1 - (int)param_4)));
    if (*(char *)(param_3 + 4) != '\0') {
      pcVar5 = (char *)(param_1 + 0x310);
      pcVar8 = pcVar5;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + (int)(pcVar6 + (-1 - (int)pcVar5));
      pcVar8 = param_4;
      if ((char *)0x103 < pcVar6) {
        return 2;
      }
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      fn_82F668D8(param_4,0x104,pcVar5,0x103 - (int)(pcVar8 + (-1 - (int)param_4)));
    }
    if (pcVar6 + 0xf < (char *)0x105) {
      iVar2 = param_3[1];
      if (iVar2 == 0) {
        uVar3 = 0xffffffff82022708;
      }
      else if (iVar2 == 3) {
        uVar3 = 0xffffffff82022710;
      }
      else {
        uVar3 = 0xffffffff82022718;
        if (iVar2 != 4) {
          uVar3 = 0xffffffff82022720;
        }
      }
      fn_82F63F40(param_4 + (int)pcVar6,uVar3,param_2);
      return 1;
    }
  }
  return 2;
}

