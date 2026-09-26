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
extern int fn_82CE5410();
extern int fn_82CE63B0();


undefined1 * fn_82CFC6A8(undefined1 *param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar2 = strstr(param_2,param_3);
  *param_1 = 0;
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      return param_1;
    }
    *param_1 = 1;
    iVar3 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) break;
    *(int *)(param_4[1] * 4 + *param_4) = (int)pcVar2 - (int)param_2;
    param_4[1] = param_4[1] + 1;
    if (param_5 == 0) {
      return param_1;
    }
    pcVar2 = strstr(pcVar2 + (int)(pcVar4 + (-1 - (int)param_3)),param_3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_4,4);
}

