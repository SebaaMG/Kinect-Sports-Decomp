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
extern int fn_82F66368();
extern int fn_82F668D8();


undefined8 fn_82876C70(int param_1,char *param_2,int *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    return 0x1f;
  }
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_2);
  if ((char *)0x103 < pcVar3) {
    return 0x1f;
  }
  fn_82F66368(param_4,0x104,param_1 + 4,0x103);
  pcVar5 = param_4;
  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (param_3[1] == 0)) {
      pcVar2 = (char *)(param_1 + 0x108);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + (int)(pcVar3 + (-1 - (int)pcVar2));
      pcVar4 = param_4;
      if ((char *)0x103 < pcVar3) {
        return 2;
      }
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      fn_82F668D8(param_4,0x104,pcVar2,0x103 - (int)(pcVar4 + (-1 - (int)param_4)));
    }
    if (*(char *)(param_3 + 4) != '\0') {
      pcVar2 = (char *)(param_1 + 0x310);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + (int)(pcVar3 + (-1 - (int)pcVar2));
      pcVar4 = param_4;
      if ((char *)0x103 < pcVar3) {
        return 2;
      }
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      fn_82F668D8(param_4,0x104,pcVar2,0x103 - (int)(pcVar4 + (-1 - (int)param_4)));
    }
  }
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_4;
  if ((char *)0x103 < pcVar5 + (int)(pcVar3 + (-1 - (int)param_4))) {
    return 2;
  }
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_82F668D8(param_4,0x104,param_2,0x103 - (int)(pcVar4 + (-1 - (int)param_4)));
  return 1;
}

